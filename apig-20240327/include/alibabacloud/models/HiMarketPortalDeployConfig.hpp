// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETPORTALDEPLOYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETPORTALDEPLOYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketPortalDeployConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketPortalDeployConfig& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(saeConfig, saeConfig_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketPortalDeployConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(saeConfig, saeConfig_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    HiMarketPortalDeployConfig() = default ;
    HiMarketPortalDeployConfig(const HiMarketPortalDeployConfig &) = default ;
    HiMarketPortalDeployConfig(HiMarketPortalDeployConfig &&) = default ;
    HiMarketPortalDeployConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketPortalDeployConfig() = default ;
    HiMarketPortalDeployConfig& operator=(const HiMarketPortalDeployConfig &) = default ;
    HiMarketPortalDeployConfig& operator=(HiMarketPortalDeployConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SaeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SaeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(oidcRoleName, oidcRoleName_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(replicas, replicas_);
        DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, SaeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(oidcRoleName, oidcRoleName_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(replicas, replicas_);
        DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      SaeConfig() = default ;
      SaeConfig(const SaeConfig &) = default ;
      SaeConfig(SaeConfig &&) = default ;
      SaeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SaeConfig() = default ;
      SaeConfig& operator=(const SaeConfig &) = default ;
      SaeConfig& operator=(SaeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->namespaceId_ == nullptr && this->oidcRoleName_ == nullptr && this->regionId_ == nullptr && this->replicas_ == nullptr && this->securityGroupId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline SaeConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline SaeConfig& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // oidcRoleName Field Functions 
      bool hasOidcRoleName() const { return this->oidcRoleName_ != nullptr;};
      void deleteOidcRoleName() { this->oidcRoleName_ = nullptr;};
      inline string getOidcRoleName() const { DARABONBA_PTR_GET_DEFAULT(oidcRoleName_, "") };
      inline SaeConfig& setOidcRoleName(string oidcRoleName) { DARABONBA_PTR_SET_VALUE(oidcRoleName_, oidcRoleName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SaeConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline string getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
      inline SaeConfig& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline SaeConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline SaeConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline SaeConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of the application in Serverless App Engine.
      shared_ptr<string> appId_ {};
      // The ID of the namespace that logically isolates the application.
      shared_ptr<string> namespaceId_ {};
      // The name of the OIDC role that grants permissions to the application.
      shared_ptr<string> oidcRoleName_ {};
      // The ID of the region in which to deploy the application.
      shared_ptr<string> regionId_ {};
      // The desired number of application replicas.
      shared_ptr<string> replicas_ {};
      // The ID of the security group to apply to the application instances. A security group acts as a virtual firewall.
      shared_ptr<string> securityGroupId_ {};
      // The ID of the vSwitch within the specified VPC. Serverless App Engine launches application instances in the vSwitch\\"s zone.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the VPC to connect the application to.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->platform_ == nullptr && this->saeConfig_ == nullptr && this->status_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HiMarketPortalDeployConfig& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline HiMarketPortalDeployConfig& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // saeConfig Field Functions 
    bool hasSaeConfig() const { return this->saeConfig_ != nullptr;};
    void deleteSaeConfig() { this->saeConfig_ = nullptr;};
    inline const HiMarketPortalDeployConfig::SaeConfig & getSaeConfig() const { DARABONBA_PTR_GET_CONST(saeConfig_, HiMarketPortalDeployConfig::SaeConfig) };
    inline HiMarketPortalDeployConfig::SaeConfig getSaeConfig() { DARABONBA_PTR_GET(saeConfig_, HiMarketPortalDeployConfig::SaeConfig) };
    inline HiMarketPortalDeployConfig& setSaeConfig(const HiMarketPortalDeployConfig::SaeConfig & saeConfig) { DARABONBA_PTR_SET_VALUE(saeConfig_, saeConfig) };
    inline HiMarketPortalDeployConfig& setSaeConfig(HiMarketPortalDeployConfig::SaeConfig && saeConfig) { DARABONBA_PTR_SET_RVALUE(saeConfig_, saeConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline HiMarketPortalDeployConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Additional information about the deployment status, such as error details.
    shared_ptr<string> message_ {};
    // The target deployment platform. For example, set this to `SAE` to deploy on Serverless App Engine.
    shared_ptr<string> platform_ {};
    // Configuration settings for deploying to Serverless App Engine (SAE). This object is required when the `platform` is `SAE`.
    shared_ptr<HiMarketPortalDeployConfig::SaeConfig> saeConfig_ {};
    // The current status of the deployment. Possible values include `succeeded`, `failed`, and `in_progress`.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
