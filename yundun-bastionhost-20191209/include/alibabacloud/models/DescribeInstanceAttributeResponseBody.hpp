// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceAttribute, instanceAttribute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceAttribute, instanceAttribute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody(DescribeInstanceAttributeResponseBody &&) = default ;
    DescribeInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody& operator=(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody& operator=(DescribeInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceAttribute : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceAttribute& obj) { 
        DARABONBA_PTR_TO_JSON(AppOperationModule, appOperationModule_);
        DARABONBA_PTR_TO_JSON(AuthorizedSecurityGroups, authorizedSecurityGroups_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BandwidthPackage, bandwidthPackage_);
        DARABONBA_PTR_TO_JSON(DbOperationModule, dbOperationModule_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(HSMModule, HSMModule_);
        DARABONBA_PTR_TO_JSON(IDaaSModule, IDaaSModule_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InternetEndpoint, internetEndpoint_);
        DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
        DARABONBA_PTR_TO_JSON(KmsSecretModule, kmsSecretModule_);
        DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
        DARABONBA_PTR_TO_JSON(ModifyPasswordModule, modifyPasswordModule_);
        DARABONBA_PTR_TO_JSON(NetworkProxyModule, networkProxyModule_);
        DARABONBA_PTR_TO_JSON(Ports, ports_);
        DARABONBA_PTR_TO_JSON(PrivateExportIps, privateExportIps_);
        DARABONBA_PTR_TO_JSON(PrivateWhiteList, privateWhiteList_);
        DARABONBA_PTR_TO_JSON(PublicExportIps, publicExportIps_);
        DARABONBA_PTR_TO_JSON(PublicIps, publicIps_);
        DARABONBA_PTR_TO_JSON(PublicNetworkAccess, publicNetworkAccess_);
        DARABONBA_PTR_TO_JSON(PublicWhiteList, publicWhiteList_);
        DARABONBA_PTR_TO_JSON(RDModule, RDModule_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RouterRules, routerRules_);
        DARABONBA_PTR_TO_JSON(ScriptDeliverModule, scriptDeliverModule_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(SlaveVswitchId, slaveVswitchId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(WebTerminalModule, webTerminalModule_);
        DARABONBA_PTR_TO_JSON(WhiteListPolicies, whiteListPolicies_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceAttribute& obj) { 
        DARABONBA_PTR_FROM_JSON(AppOperationModule, appOperationModule_);
        DARABONBA_PTR_FROM_JSON(AuthorizedSecurityGroups, authorizedSecurityGroups_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackage, bandwidthPackage_);
        DARABONBA_PTR_FROM_JSON(DbOperationModule, dbOperationModule_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(HSMModule, HSMModule_);
        DARABONBA_PTR_FROM_JSON(IDaaSModule, IDaaSModule_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InternetEndpoint, internetEndpoint_);
        DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
        DARABONBA_PTR_FROM_JSON(KmsSecretModule, kmsSecretModule_);
        DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
        DARABONBA_PTR_FROM_JSON(ModifyPasswordModule, modifyPasswordModule_);
        DARABONBA_PTR_FROM_JSON(NetworkProxyModule, networkProxyModule_);
        DARABONBA_PTR_FROM_JSON(Ports, ports_);
        DARABONBA_PTR_FROM_JSON(PrivateExportIps, privateExportIps_);
        DARABONBA_PTR_FROM_JSON(PrivateWhiteList, privateWhiteList_);
        DARABONBA_PTR_FROM_JSON(PublicExportIps, publicExportIps_);
        DARABONBA_PTR_FROM_JSON(PublicIps, publicIps_);
        DARABONBA_PTR_FROM_JSON(PublicNetworkAccess, publicNetworkAccess_);
        DARABONBA_PTR_FROM_JSON(PublicWhiteList, publicWhiteList_);
        DARABONBA_PTR_FROM_JSON(RDModule, RDModule_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RouterRules, routerRules_);
        DARABONBA_PTR_FROM_JSON(ScriptDeliverModule, scriptDeliverModule_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(SlaveVswitchId, slaveVswitchId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_FROM_JSON(WebTerminalModule, webTerminalModule_);
        DARABONBA_PTR_FROM_JSON(WhiteListPolicies, whiteListPolicies_);
      };
      InstanceAttribute() = default ;
      InstanceAttribute(const InstanceAttribute &) = default ;
      InstanceAttribute(InstanceAttribute &&) = default ;
      InstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceAttribute() = default ;
      InstanceAttribute& operator=(const InstanceAttribute &) = default ;
      InstanceAttribute& operator=(InstanceAttribute &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WhiteListPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WhiteListPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Entry, entry_);
        };
        friend void from_json(const Darabonba::Json& j, WhiteListPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Entry, entry_);
        };
        WhiteListPolicies() = default ;
        WhiteListPolicies(const WhiteListPolicies &) = default ;
        WhiteListPolicies(WhiteListPolicies &&) = default ;
        WhiteListPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WhiteListPolicies() = default ;
        WhiteListPolicies& operator=(const WhiteListPolicies &) = default ;
        WhiteListPolicies& operator=(WhiteListPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->entry_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline WhiteListPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // entry Field Functions 
        bool hasEntry() const { return this->entry_ != nullptr;};
        void deleteEntry() { this->entry_ = nullptr;};
        inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
        inline WhiteListPolicies& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> entry_ {};
      };

      class Ports : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ports& obj) { 
          DARABONBA_PTR_TO_JSON(CustomPort, customPort_);
          DARABONBA_PTR_TO_JSON(StandardPort, standardPort_);
        };
        friend void from_json(const Darabonba::Json& j, Ports& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomPort, customPort_);
          DARABONBA_PTR_FROM_JSON(StandardPort, standardPort_);
        };
        Ports() = default ;
        Ports(const Ports &) = default ;
        Ports(Ports &&) = default ;
        Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ports() = default ;
        Ports& operator=(const Ports &) = default ;
        Ports& operator=(Ports &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customPort_ == nullptr
        && this->standardPort_ == nullptr; };
        // customPort Field Functions 
        bool hasCustomPort() const { return this->customPort_ != nullptr;};
        void deleteCustomPort() { this->customPort_ = nullptr;};
        inline int32_t getCustomPort() const { DARABONBA_PTR_GET_DEFAULT(customPort_, 0) };
        inline Ports& setCustomPort(int32_t customPort) { DARABONBA_PTR_SET_VALUE(customPort_, customPort) };


        // standardPort Field Functions 
        bool hasStandardPort() const { return this->standardPort_ != nullptr;};
        void deleteStandardPort() { this->standardPort_ = nullptr;};
        inline int32_t getStandardPort() const { DARABONBA_PTR_GET_DEFAULT(standardPort_, 0) };
        inline Ports& setStandardPort(int32_t standardPort) { DARABONBA_PTR_SET_VALUE(standardPort_, standardPort) };


      protected:
        // The custom port.
        // 
        // > Only the SSH and RDP ports can be changed. If no custom O\\&M port is specified for the bastion host, the value of StandardPort is returned.
        shared_ptr<int32_t> customPort_ {};
        // The standard port of the bastion host. Valid values:
        // 
        // *   **SSH**: 60022.
        // *   **RDP**: 63389.
        // *   **HTTPS**: 443.
        shared_ptr<int32_t> standardPort_ {};
      };

      virtual bool empty() const override { return this->appOperationModule_ == nullptr
        && this->authorizedSecurityGroups_ == nullptr && this->bandwidth_ == nullptr && this->bandwidthPackage_ == nullptr && this->dbOperationModule_ == nullptr && this->description_ == nullptr
        && this->eniInstanceId_ == nullptr && this->expireTime_ == nullptr && this->HSMModule_ == nullptr && this->IDaaSModule_ == nullptr && this->instanceId_ == nullptr
        && this->instanceStatus_ == nullptr && this->internetEndpoint_ == nullptr && this->intranetEndpoint_ == nullptr && this->kmsSecretModule_ == nullptr && this->licenseCode_ == nullptr
        && this->modifyPasswordModule_ == nullptr && this->networkProxyModule_ == nullptr && this->ports_ == nullptr && this->privateExportIps_ == nullptr && this->privateWhiteList_ == nullptr
        && this->publicExportIps_ == nullptr && this->publicIps_ == nullptr && this->publicNetworkAccess_ == nullptr && this->publicWhiteList_ == nullptr && this->RDModule_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->routerRules_ == nullptr && this->scriptDeliverModule_ == nullptr && this->securityGroupIds_ == nullptr
        && this->slaveVswitchId_ == nullptr && this->startTime_ == nullptr && this->storage_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr
        && this->webTerminalModule_ == nullptr && this->whiteListPolicies_ == nullptr; };
      // appOperationModule Field Functions 
      bool hasAppOperationModule() const { return this->appOperationModule_ != nullptr;};
      void deleteAppOperationModule() { this->appOperationModule_ = nullptr;};
      inline string getAppOperationModule() const { DARABONBA_PTR_GET_DEFAULT(appOperationModule_, "") };
      inline InstanceAttribute& setAppOperationModule(string appOperationModule) { DARABONBA_PTR_SET_VALUE(appOperationModule_, appOperationModule) };


      // authorizedSecurityGroups Field Functions 
      bool hasAuthorizedSecurityGroups() const { return this->authorizedSecurityGroups_ != nullptr;};
      void deleteAuthorizedSecurityGroups() { this->authorizedSecurityGroups_ = nullptr;};
      inline const vector<string> & getAuthorizedSecurityGroups() const { DARABONBA_PTR_GET_CONST(authorizedSecurityGroups_, vector<string>) };
      inline vector<string> getAuthorizedSecurityGroups() { DARABONBA_PTR_GET(authorizedSecurityGroups_, vector<string>) };
      inline InstanceAttribute& setAuthorizedSecurityGroups(const vector<string> & authorizedSecurityGroups) { DARABONBA_PTR_SET_VALUE(authorizedSecurityGroups_, authorizedSecurityGroups) };
      inline InstanceAttribute& setAuthorizedSecurityGroups(vector<string> && authorizedSecurityGroups) { DARABONBA_PTR_SET_RVALUE(authorizedSecurityGroups_, authorizedSecurityGroups) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
      inline InstanceAttribute& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // bandwidthPackage Field Functions 
      bool hasBandwidthPackage() const { return this->bandwidthPackage_ != nullptr;};
      void deleteBandwidthPackage() { this->bandwidthPackage_ = nullptr;};
      inline string getBandwidthPackage() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackage_, "") };
      inline InstanceAttribute& setBandwidthPackage(string bandwidthPackage) { DARABONBA_PTR_SET_VALUE(bandwidthPackage_, bandwidthPackage) };


      // dbOperationModule Field Functions 
      bool hasDbOperationModule() const { return this->dbOperationModule_ != nullptr;};
      void deleteDbOperationModule() { this->dbOperationModule_ = nullptr;};
      inline string getDbOperationModule() const { DARABONBA_PTR_GET_DEFAULT(dbOperationModule_, "") };
      inline InstanceAttribute& setDbOperationModule(string dbOperationModule) { DARABONBA_PTR_SET_VALUE(dbOperationModule_, dbOperationModule) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline InstanceAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eniInstanceId Field Functions 
      bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
      void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
      inline string getEniInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eniInstanceId_, "") };
      inline InstanceAttribute& setEniInstanceId(string eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline InstanceAttribute& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // HSMModule Field Functions 
      bool hasHSMModule() const { return this->HSMModule_ != nullptr;};
      void deleteHSMModule() { this->HSMModule_ = nullptr;};
      inline string getHSMModule() const { DARABONBA_PTR_GET_DEFAULT(HSMModule_, "") };
      inline InstanceAttribute& setHSMModule(string HSMModule) { DARABONBA_PTR_SET_VALUE(HSMModule_, HSMModule) };


      // IDaaSModule Field Functions 
      bool hasIDaaSModule() const { return this->IDaaSModule_ != nullptr;};
      void deleteIDaaSModule() { this->IDaaSModule_ = nullptr;};
      inline string getIDaaSModule() const { DARABONBA_PTR_GET_DEFAULT(IDaaSModule_, "") };
      inline InstanceAttribute& setIDaaSModule(string IDaaSModule) { DARABONBA_PTR_SET_VALUE(IDaaSModule_, IDaaSModule) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline InstanceAttribute& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // internetEndpoint Field Functions 
      bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
      void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
      inline string getInternetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
      inline InstanceAttribute& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


      // intranetEndpoint Field Functions 
      bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
      void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
      inline string getIntranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
      inline InstanceAttribute& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


      // kmsSecretModule Field Functions 
      bool hasKmsSecretModule() const { return this->kmsSecretModule_ != nullptr;};
      void deleteKmsSecretModule() { this->kmsSecretModule_ = nullptr;};
      inline string getKmsSecretModule() const { DARABONBA_PTR_GET_DEFAULT(kmsSecretModule_, "") };
      inline InstanceAttribute& setKmsSecretModule(string kmsSecretModule) { DARABONBA_PTR_SET_VALUE(kmsSecretModule_, kmsSecretModule) };


      // licenseCode Field Functions 
      bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
      void deleteLicenseCode() { this->licenseCode_ = nullptr;};
      inline string getLicenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
      inline InstanceAttribute& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


      // modifyPasswordModule Field Functions 
      bool hasModifyPasswordModule() const { return this->modifyPasswordModule_ != nullptr;};
      void deleteModifyPasswordModule() { this->modifyPasswordModule_ = nullptr;};
      inline string getModifyPasswordModule() const { DARABONBA_PTR_GET_DEFAULT(modifyPasswordModule_, "") };
      inline InstanceAttribute& setModifyPasswordModule(string modifyPasswordModule) { DARABONBA_PTR_SET_VALUE(modifyPasswordModule_, modifyPasswordModule) };


      // networkProxyModule Field Functions 
      bool hasNetworkProxyModule() const { return this->networkProxyModule_ != nullptr;};
      void deleteNetworkProxyModule() { this->networkProxyModule_ = nullptr;};
      inline string getNetworkProxyModule() const { DARABONBA_PTR_GET_DEFAULT(networkProxyModule_, "") };
      inline InstanceAttribute& setNetworkProxyModule(string networkProxyModule) { DARABONBA_PTR_SET_VALUE(networkProxyModule_, networkProxyModule) };


      // ports Field Functions 
      bool hasPorts() const { return this->ports_ != nullptr;};
      void deletePorts() { this->ports_ = nullptr;};
      inline const vector<InstanceAttribute::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<InstanceAttribute::Ports>) };
      inline vector<InstanceAttribute::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<InstanceAttribute::Ports>) };
      inline InstanceAttribute& setPorts(const vector<InstanceAttribute::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
      inline InstanceAttribute& setPorts(vector<InstanceAttribute::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


      // privateExportIps Field Functions 
      bool hasPrivateExportIps() const { return this->privateExportIps_ != nullptr;};
      void deletePrivateExportIps() { this->privateExportIps_ = nullptr;};
      inline const vector<string> & getPrivateExportIps() const { DARABONBA_PTR_GET_CONST(privateExportIps_, vector<string>) };
      inline vector<string> getPrivateExportIps() { DARABONBA_PTR_GET(privateExportIps_, vector<string>) };
      inline InstanceAttribute& setPrivateExportIps(const vector<string> & privateExportIps) { DARABONBA_PTR_SET_VALUE(privateExportIps_, privateExportIps) };
      inline InstanceAttribute& setPrivateExportIps(vector<string> && privateExportIps) { DARABONBA_PTR_SET_RVALUE(privateExportIps_, privateExportIps) };


      // privateWhiteList Field Functions 
      bool hasPrivateWhiteList() const { return this->privateWhiteList_ != nullptr;};
      void deletePrivateWhiteList() { this->privateWhiteList_ = nullptr;};
      inline const vector<string> & getPrivateWhiteList() const { DARABONBA_PTR_GET_CONST(privateWhiteList_, vector<string>) };
      inline vector<string> getPrivateWhiteList() { DARABONBA_PTR_GET(privateWhiteList_, vector<string>) };
      inline InstanceAttribute& setPrivateWhiteList(const vector<string> & privateWhiteList) { DARABONBA_PTR_SET_VALUE(privateWhiteList_, privateWhiteList) };
      inline InstanceAttribute& setPrivateWhiteList(vector<string> && privateWhiteList) { DARABONBA_PTR_SET_RVALUE(privateWhiteList_, privateWhiteList) };


      // publicExportIps Field Functions 
      bool hasPublicExportIps() const { return this->publicExportIps_ != nullptr;};
      void deletePublicExportIps() { this->publicExportIps_ = nullptr;};
      inline const vector<string> & getPublicExportIps() const { DARABONBA_PTR_GET_CONST(publicExportIps_, vector<string>) };
      inline vector<string> getPublicExportIps() { DARABONBA_PTR_GET(publicExportIps_, vector<string>) };
      inline InstanceAttribute& setPublicExportIps(const vector<string> & publicExportIps) { DARABONBA_PTR_SET_VALUE(publicExportIps_, publicExportIps) };
      inline InstanceAttribute& setPublicExportIps(vector<string> && publicExportIps) { DARABONBA_PTR_SET_RVALUE(publicExportIps_, publicExportIps) };


      // publicIps Field Functions 
      bool hasPublicIps() const { return this->publicIps_ != nullptr;};
      void deletePublicIps() { this->publicIps_ = nullptr;};
      inline const vector<string> & getPublicIps() const { DARABONBA_PTR_GET_CONST(publicIps_, vector<string>) };
      inline vector<string> getPublicIps() { DARABONBA_PTR_GET(publicIps_, vector<string>) };
      inline InstanceAttribute& setPublicIps(const vector<string> & publicIps) { DARABONBA_PTR_SET_VALUE(publicIps_, publicIps) };
      inline InstanceAttribute& setPublicIps(vector<string> && publicIps) { DARABONBA_PTR_SET_RVALUE(publicIps_, publicIps) };


      // publicNetworkAccess Field Functions 
      bool hasPublicNetworkAccess() const { return this->publicNetworkAccess_ != nullptr;};
      void deletePublicNetworkAccess() { this->publicNetworkAccess_ = nullptr;};
      inline bool getPublicNetworkAccess() const { DARABONBA_PTR_GET_DEFAULT(publicNetworkAccess_, false) };
      inline InstanceAttribute& setPublicNetworkAccess(bool publicNetworkAccess) { DARABONBA_PTR_SET_VALUE(publicNetworkAccess_, publicNetworkAccess) };


      // publicWhiteList Field Functions 
      bool hasPublicWhiteList() const { return this->publicWhiteList_ != nullptr;};
      void deletePublicWhiteList() { this->publicWhiteList_ = nullptr;};
      inline const vector<string> & getPublicWhiteList() const { DARABONBA_PTR_GET_CONST(publicWhiteList_, vector<string>) };
      inline vector<string> getPublicWhiteList() { DARABONBA_PTR_GET(publicWhiteList_, vector<string>) };
      inline InstanceAttribute& setPublicWhiteList(const vector<string> & publicWhiteList) { DARABONBA_PTR_SET_VALUE(publicWhiteList_, publicWhiteList) };
      inline InstanceAttribute& setPublicWhiteList(vector<string> && publicWhiteList) { DARABONBA_PTR_SET_RVALUE(publicWhiteList_, publicWhiteList) };


      // RDModule Field Functions 
      bool hasRDModule() const { return this->RDModule_ != nullptr;};
      void deleteRDModule() { this->RDModule_ = nullptr;};
      inline string getRDModule() const { DARABONBA_PTR_GET_DEFAULT(RDModule_, "") };
      inline InstanceAttribute& setRDModule(string RDModule) { DARABONBA_PTR_SET_VALUE(RDModule_, RDModule) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline InstanceAttribute& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // routerRules Field Functions 
      bool hasRouterRules() const { return this->routerRules_ != nullptr;};
      void deleteRouterRules() { this->routerRules_ = nullptr;};
      inline const vector<string> & getRouterRules() const { DARABONBA_PTR_GET_CONST(routerRules_, vector<string>) };
      inline vector<string> getRouterRules() { DARABONBA_PTR_GET(routerRules_, vector<string>) };
      inline InstanceAttribute& setRouterRules(const vector<string> & routerRules) { DARABONBA_PTR_SET_VALUE(routerRules_, routerRules) };
      inline InstanceAttribute& setRouterRules(vector<string> && routerRules) { DARABONBA_PTR_SET_RVALUE(routerRules_, routerRules) };


      // scriptDeliverModule Field Functions 
      bool hasScriptDeliverModule() const { return this->scriptDeliverModule_ != nullptr;};
      void deleteScriptDeliverModule() { this->scriptDeliverModule_ = nullptr;};
      inline string getScriptDeliverModule() const { DARABONBA_PTR_GET_DEFAULT(scriptDeliverModule_, "") };
      inline InstanceAttribute& setScriptDeliverModule(string scriptDeliverModule) { DARABONBA_PTR_SET_VALUE(scriptDeliverModule_, scriptDeliverModule) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline InstanceAttribute& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline InstanceAttribute& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // slaveVswitchId Field Functions 
      bool hasSlaveVswitchId() const { return this->slaveVswitchId_ != nullptr;};
      void deleteSlaveVswitchId() { this->slaveVswitchId_ = nullptr;};
      inline string getSlaveVswitchId() const { DARABONBA_PTR_GET_DEFAULT(slaveVswitchId_, "") };
      inline InstanceAttribute& setSlaveVswitchId(string slaveVswitchId) { DARABONBA_PTR_SET_VALUE(slaveVswitchId_, slaveVswitchId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline InstanceAttribute& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int64_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
      inline InstanceAttribute& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline InstanceAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline InstanceAttribute& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // webTerminalModule Field Functions 
      bool hasWebTerminalModule() const { return this->webTerminalModule_ != nullptr;};
      void deleteWebTerminalModule() { this->webTerminalModule_ = nullptr;};
      inline string getWebTerminalModule() const { DARABONBA_PTR_GET_DEFAULT(webTerminalModule_, "") };
      inline InstanceAttribute& setWebTerminalModule(string webTerminalModule) { DARABONBA_PTR_SET_VALUE(webTerminalModule_, webTerminalModule) };


      // whiteListPolicies Field Functions 
      bool hasWhiteListPolicies() const { return this->whiteListPolicies_ != nullptr;};
      void deleteWhiteListPolicies() { this->whiteListPolicies_ = nullptr;};
      inline const vector<InstanceAttribute::WhiteListPolicies> & getWhiteListPolicies() const { DARABONBA_PTR_GET_CONST(whiteListPolicies_, vector<InstanceAttribute::WhiteListPolicies>) };
      inline vector<InstanceAttribute::WhiteListPolicies> getWhiteListPolicies() { DARABONBA_PTR_GET(whiteListPolicies_, vector<InstanceAttribute::WhiteListPolicies>) };
      inline InstanceAttribute& setWhiteListPolicies(const vector<InstanceAttribute::WhiteListPolicies> & whiteListPolicies) { DARABONBA_PTR_SET_VALUE(whiteListPolicies_, whiteListPolicies) };
      inline InstanceAttribute& setWhiteListPolicies(vector<InstanceAttribute::WhiteListPolicies> && whiteListPolicies) { DARABONBA_PTR_SET_RVALUE(whiteListPolicies_, whiteListPolicies) };


    protected:
      shared_ptr<string> appOperationModule_ {};
      // The IDs of authorized security groups.
      shared_ptr<vector<string>> authorizedSecurityGroups_ {};
      // The total bandwidth of the bastion host.
      shared_ptr<string> bandwidth_ {};
      // The bandwidth plan ID.
      shared_ptr<string> bandwidthPackage_ {};
      // The status of the database O&M feature.
      shared_ptr<string> dbOperationModule_ {};
      // The description of the instance.
      shared_ptr<string> description_ {};
      // The ID of the Elastic Network Interface (ENI).
      shared_ptr<string> eniInstanceId_ {};
      // The time when the instance expires.
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> HSMModule_ {};
      shared_ptr<string> IDaaSModule_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The status of the instance. Valid values:
      // 
      // *   PENDING: The instance is not initialized.
      // *   CREATING: The instance is being created.
      // *   RUNNING: The instance is running.
      // *   EXPIRED: The instance expired.
      // *   CREATE_FAILED: The instance fails to be created.
      // *   UPGRADING: The configurations of the instance are being changed.
      // *   UPGRADE_FAILED: The configurations of the instance fail to be changed.
      shared_ptr<string> instanceStatus_ {};
      // The public endpoint.
      shared_ptr<string> internetEndpoint_ {};
      // The private endpoint.
      shared_ptr<string> intranetEndpoint_ {};
      shared_ptr<string> kmsSecretModule_ {};
      // The license code.
      shared_ptr<string> licenseCode_ {};
      // The status of the automatic password change feature.
      // 
      // - **Enable**
      // - **Disable**
      shared_ptr<string> modifyPasswordModule_ {};
      // The status of the network domain feature.
      // 
      // - **Enable**
      // - **Disable**
      shared_ptr<string> networkProxyModule_ {};
      // An array that consists of the O&M ports of the bastion host.
      shared_ptr<vector<InstanceAttribute::Ports>> ports_ {};
      // An array that consists of the egress private IP addresses of the bastion host.
      shared_ptr<vector<string>> privateExportIps_ {};
      // The private IP addresses that are allowed to access the instance.
      shared_ptr<vector<string>> privateWhiteList_ {};
      // An array that consists of the egress public IP addresses of the bastion host.
      shared_ptr<vector<string>> publicExportIps_ {};
      // The public IP address.
      shared_ptr<vector<string>> publicIps_ {};
      // Indicates whether the Bastionhost instance can be accessed over the Internet.
      shared_ptr<bool> publicNetworkAccess_ {};
      // The public IP addresses that are allowed to access the instance.
      shared_ptr<vector<string>> publicWhiteList_ {};
      shared_ptr<string> RDModule_ {};
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<vector<string>> routerRules_ {};
      shared_ptr<string> scriptDeliverModule_ {};
      // The IDs of the security groups to which the instance belongs.
      shared_ptr<vector<string>> securityGroupIds_ {};
      shared_ptr<string> slaveVswitchId_ {};
      // The time when the instance started.
      shared_ptr<int64_t> startTime_ {};
      // The storage capacity of the bastion host. Unit: bytes.
      shared_ptr<int64_t> storage_ {};
      // The ID of the VPC to which the instance belongs.
      shared_ptr<string> vpcId_ {};
      // The ID of the vSwitch to which the instance connects.
      shared_ptr<string> vswitchId_ {};
      // The status of the web terminal.
      // 
      // - **Enable**
      // - **Disable**
      shared_ptr<string> webTerminalModule_ {};
      shared_ptr<vector<InstanceAttribute::WhiteListPolicies>> whiteListPolicies_ {};
    };

    virtual bool empty() const override { return this->instanceAttribute_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceAttribute Field Functions 
    bool hasInstanceAttribute() const { return this->instanceAttribute_ != nullptr;};
    void deleteInstanceAttribute() { this->instanceAttribute_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::InstanceAttribute & getInstanceAttribute() const { DARABONBA_PTR_GET_CONST(instanceAttribute_, DescribeInstanceAttributeResponseBody::InstanceAttribute) };
    inline DescribeInstanceAttributeResponseBody::InstanceAttribute getInstanceAttribute() { DARABONBA_PTR_GET(instanceAttribute_, DescribeInstanceAttributeResponseBody::InstanceAttribute) };
    inline DescribeInstanceAttributeResponseBody& setInstanceAttribute(const DescribeInstanceAttributeResponseBody::InstanceAttribute & instanceAttribute) { DARABONBA_PTR_SET_VALUE(instanceAttribute_, instanceAttribute) };
    inline DescribeInstanceAttributeResponseBody& setInstanceAttribute(DescribeInstanceAttributeResponseBody::InstanceAttribute && instanceAttribute) { DARABONBA_PTR_SET_RVALUE(instanceAttribute_, instanceAttribute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The attribute information about the bastion host.
    shared_ptr<DescribeInstanceAttributeResponseBody::InstanceAttribute> instanceAttribute_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
