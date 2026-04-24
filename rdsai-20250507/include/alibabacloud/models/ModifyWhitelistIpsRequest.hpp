// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWHITELISTIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWHITELISTIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyWhitelistIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWhitelistIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWhitelistIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
    };
    ModifyWhitelistIpsRequest() = default ;
    ModifyWhitelistIpsRequest(const ModifyWhitelistIpsRequest &) = default ;
    ModifyWhitelistIpsRequest(ModifyWhitelistIpsRequest &&) = default ;
    ModifyWhitelistIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWhitelistIpsRequest() = default ;
    ModifyWhitelistIpsRequest& operator=(const ModifyWhitelistIpsRequest &) = default ;
    ModifyWhitelistIpsRequest& operator=(ModifyWhitelistIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ipWhitelist_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyWhitelistIpsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline ModifyWhitelistIpsRequest& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ipWhitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
