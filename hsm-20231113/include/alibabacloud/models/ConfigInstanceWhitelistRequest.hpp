// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigInstanceWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigInstanceWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigInstanceWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    ConfigInstanceWhitelistRequest() = default ;
    ConfigInstanceWhitelistRequest(const ConfigInstanceWhitelistRequest &) = default ;
    ConfigInstanceWhitelistRequest(ConfigInstanceWhitelistRequest &&) = default ;
    ConfigInstanceWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigInstanceWhitelistRequest() = default ;
    ConfigInstanceWhitelistRequest& operator=(const ConfigInstanceWhitelistRequest &) = default ;
    ConfigInstanceWhitelistRequest& operator=(ConfigInstanceWhitelistRequest &&) = default ;
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
    inline ConfigInstanceWhitelistRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline ConfigInstanceWhitelistRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The ID of the HSM.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // A list of IP addresses that you want to configure in the whitelist. Separate multiple IP addresses with spaces or commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
