// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUTOCCWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUTOCCWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DeleteAutoCcWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAutoCcWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAutoCcWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    DeleteAutoCcWhitelistRequest() = default ;
    DeleteAutoCcWhitelistRequest(const DeleteAutoCcWhitelistRequest &) = default ;
    DeleteAutoCcWhitelistRequest(DeleteAutoCcWhitelistRequest &&) = default ;
    DeleteAutoCcWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAutoCcWhitelistRequest() = default ;
    DeleteAutoCcWhitelistRequest& operator=(const DeleteAutoCcWhitelistRequest &) = default ;
    DeleteAutoCcWhitelistRequest& operator=(DeleteAutoCcWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->whitelist_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteAutoCcWhitelistRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline DeleteAutoCcWhitelistRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP addresses that you want to manage. This parameter is a JSON string. This parameter is a JSON string. The string contains the following field:
    // 
    // *   **src**: the IP address. This field is required and must be of the string type.
    // 
    // This parameter is required.
    std::shared_ptr<string> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
