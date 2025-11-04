// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTHOSTALIASES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTHOSTALIASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestHostAliases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestHostAliases& obj) { 
      DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestHostAliases& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    ModifyEciScalingConfigurationRequestHostAliases() = default ;
    ModifyEciScalingConfigurationRequestHostAliases(const ModifyEciScalingConfigurationRequestHostAliases &) = default ;
    ModifyEciScalingConfigurationRequestHostAliases(ModifyEciScalingConfigurationRequestHostAliases &&) = default ;
    ModifyEciScalingConfigurationRequestHostAliases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestHostAliases() = default ;
    ModifyEciScalingConfigurationRequestHostAliases& operator=(const ModifyEciScalingConfigurationRequestHostAliases &) = default ;
    ModifyEciScalingConfigurationRequestHostAliases& operator=(ModifyEciScalingConfigurationRequestHostAliases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostnames_ == nullptr
        && return this->ip_ == nullptr; };
    // hostnames Field Functions 
    bool hasHostnames() const { return this->hostnames_ != nullptr;};
    void deleteHostnames() { this->hostnames_ = nullptr;};
    inline const vector<string> & hostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
    inline vector<string> hostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
    inline ModifyEciScalingConfigurationRequestHostAliases& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
    inline ModifyEciScalingConfigurationRequestHostAliases& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ModifyEciScalingConfigurationRequestHostAliases& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // The names of the hosts that you want to add.
    std::shared_ptr<vector<string>> hostnames_ = nullptr;
    // The IP address that you want to add.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
