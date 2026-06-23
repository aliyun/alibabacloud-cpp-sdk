// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINSTANCEWHITELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINSTANCEWHITELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class AddInstanceWhiteListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInstanceWhiteListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(WhiteListItem, whiteListItemShrink_);
      DARABONBA_PTR_TO_JSON(WhiteListType, whiteListType_);
    };
    friend void from_json(const Darabonba::Json& j, AddInstanceWhiteListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(WhiteListItem, whiteListItemShrink_);
      DARABONBA_PTR_FROM_JSON(WhiteListType, whiteListType_);
    };
    AddInstanceWhiteListShrinkRequest() = default ;
    AddInstanceWhiteListShrinkRequest(const AddInstanceWhiteListShrinkRequest &) = default ;
    AddInstanceWhiteListShrinkRequest(AddInstanceWhiteListShrinkRequest &&) = default ;
    AddInstanceWhiteListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInstanceWhiteListShrinkRequest() = default ;
    AddInstanceWhiteListShrinkRequest& operator=(const AddInstanceWhiteListShrinkRequest &) = default ;
    AddInstanceWhiteListShrinkRequest& operator=(AddInstanceWhiteListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->whiteListItemShrink_ == nullptr && this->whiteListType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddInstanceWhiteListShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // whiteListItemShrink Field Functions 
    bool hasWhiteListItemShrink() const { return this->whiteListItemShrink_ != nullptr;};
    void deleteWhiteListItemShrink() { this->whiteListItemShrink_ = nullptr;};
    inline string getWhiteListItemShrink() const { DARABONBA_PTR_GET_DEFAULT(whiteListItemShrink_, "") };
    inline AddInstanceWhiteListShrinkRequest& setWhiteListItemShrink(string whiteListItemShrink) { DARABONBA_PTR_SET_VALUE(whiteListItemShrink_, whiteListItemShrink) };


    // whiteListType Field Functions 
    bool hasWhiteListType() const { return this->whiteListType_ != nullptr;};
    void deleteWhiteListType() { this->whiteListType_ = nullptr;};
    inline int32_t getWhiteListType() const { DARABONBA_PTR_GET_DEFAULT(whiteListType_, 0) };
    inline AddInstanceWhiteListShrinkRequest& setWhiteListType(int32_t whiteListType) { DARABONBA_PTR_SET_VALUE(whiteListType_, whiteListType) };


  protected:
    // The ID of the instance receiving the whitelist entry.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IP addresses or VPC IDs to add to the whitelist. Specify IP addresses as CIDR blocks.
    // 
    // This parameter is required.
    shared_ptr<string> whiteListItemShrink_ {};
    // The type of the whitelist. Set this parameter to `2` if `WhiteListItem` contains IP addresses, or to `1` if it contains VPC IDs.
    // 
    // You can add a VPC whitelist only to instances that have an `anytunnel` VPC endpoint. Newer instances use the `privateLink` endpoint type, which does not support this feature.
    // 
    // This parameter is required.
    shared_ptr<int32_t> whiteListType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
