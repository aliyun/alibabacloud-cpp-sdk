// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUTOCCWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUTOCCWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class AddAutoCcWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAutoCcWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, AddAutoCcWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    AddAutoCcWhitelistRequest() = default ;
    AddAutoCcWhitelistRequest(const AddAutoCcWhitelistRequest &) = default ;
    AddAutoCcWhitelistRequest(AddAutoCcWhitelistRequest &&) = default ;
    AddAutoCcWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAutoCcWhitelistRequest() = default ;
    AddAutoCcWhitelistRequest& operator=(const AddAutoCcWhitelistRequest &) = default ;
    AddAutoCcWhitelistRequest& operator=(AddAutoCcWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->instanceId_ == nullptr && this->whitelist_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline AddAutoCcWhitelistRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddAutoCcWhitelistRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string getWhitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline AddAutoCcWhitelistRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // This parameter is deprecated.
    // 
    // > This parameter indicates the validity period of the IP address blacklist. By default, the traffic from the IP addresses that you add to the whitelist is always allowed. You do not need to set this parameter.
    shared_ptr<int32_t> expireTime_ {};
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The configuration of the IP addresses that you want to add to the whitelist. The value is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that contains the following fields:
    // 
    // *   **src**: the IP address that you want to add. This parameter is required. Data type: string.
    // 
    // This parameter is required.
    shared_ptr<string> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
