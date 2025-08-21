// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUTOCCBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUTOCCBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DeleteAutoCcBlacklistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAutoCcBlacklistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Blacklist, blacklist_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAutoCcBlacklistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Blacklist, blacklist_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
    };
    DeleteAutoCcBlacklistRequest() = default ;
    DeleteAutoCcBlacklistRequest(const DeleteAutoCcBlacklistRequest &) = default ;
    DeleteAutoCcBlacklistRequest(DeleteAutoCcBlacklistRequest &&) = default ;
    DeleteAutoCcBlacklistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAutoCcBlacklistRequest() = default ;
    DeleteAutoCcBlacklistRequest& operator=(const DeleteAutoCcBlacklistRequest &) = default ;
    DeleteAutoCcBlacklistRequest& operator=(DeleteAutoCcBlacklistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blacklist_ != nullptr
        && this->instanceId_ != nullptr && this->queryType_ != nullptr; };
    // blacklist Field Functions 
    bool hasBlacklist() const { return this->blacklist_ != nullptr;};
    void deleteBlacklist() { this->blacklist_ = nullptr;};
    inline string blacklist() const { DARABONBA_PTR_GET_DEFAULT(blacklist_, "") };
    inline DeleteAutoCcBlacklistRequest& setBlacklist(string blacklist) { DARABONBA_PTR_SET_VALUE(blacklist_, blacklist) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteAutoCcBlacklistRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DeleteAutoCcBlacklistRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


  protected:
    // The IP addresses that you want to manage. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **src**: the IP address. This field is required and must be of the STRING type.
    // 
    // This parameter is required.
    std::shared_ptr<string> blacklist_ = nullptr;
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> queryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
