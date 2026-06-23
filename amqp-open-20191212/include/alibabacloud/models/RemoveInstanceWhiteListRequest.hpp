// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCEWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class RemoveInstanceWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstanceWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(whiteListItemId, whiteListItemId_);
      DARABONBA_PTR_TO_JSON(whiteListType, whiteListType_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstanceWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(whiteListItemId, whiteListItemId_);
      DARABONBA_PTR_FROM_JSON(whiteListType, whiteListType_);
    };
    RemoveInstanceWhiteListRequest() = default ;
    RemoveInstanceWhiteListRequest(const RemoveInstanceWhiteListRequest &) = default ;
    RemoveInstanceWhiteListRequest(RemoveInstanceWhiteListRequest &&) = default ;
    RemoveInstanceWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstanceWhiteListRequest() = default ;
    RemoveInstanceWhiteListRequest& operator=(const RemoveInstanceWhiteListRequest &) = default ;
    RemoveInstanceWhiteListRequest& operator=(RemoveInstanceWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->whiteListItemId_ == nullptr && this->whiteListType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveInstanceWhiteListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // whiteListItemId Field Functions 
    bool hasWhiteListItemId() const { return this->whiteListItemId_ != nullptr;};
    void deleteWhiteListItemId() { this->whiteListItemId_ = nullptr;};
    inline int64_t getWhiteListItemId() const { DARABONBA_PTR_GET_DEFAULT(whiteListItemId_, 0L) };
    inline RemoveInstanceWhiteListRequest& setWhiteListItemId(int64_t whiteListItemId) { DARABONBA_PTR_SET_VALUE(whiteListItemId_, whiteListItemId) };


    // whiteListType Field Functions 
    bool hasWhiteListType() const { return this->whiteListType_ != nullptr;};
    void deleteWhiteListType() { this->whiteListType_ = nullptr;};
    inline int32_t getWhiteListType() const { DARABONBA_PTR_GET_DEFAULT(whiteListType_, 0) };
    inline RemoveInstanceWhiteListRequest& setWhiteListType(int32_t whiteListType) { DARABONBA_PTR_SET_VALUE(whiteListType_, whiteListType) };


  protected:
    // The ID of the instance from which to remove a whitelist entry.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Call the ListInstanceWhiteList operation to obtain this ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> whiteListItemId_ {};
    // The type of the whitelist item. Specify 2 for an IP address or 1 for a VPC ID.
    // 
    // A VPC whitelist only applies to instances with the anytunnel VPC endpoint type. Newer instances use PrivateLink for their VPC endpoints and do not support VPC whitelists.
    // 
    // This parameter is required.
    shared_ptr<int32_t> whiteListType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
