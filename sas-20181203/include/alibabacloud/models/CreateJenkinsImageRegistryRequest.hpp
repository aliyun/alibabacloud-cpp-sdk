// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJENKINSIMAGEREGISTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJENKINSIMAGEREGISTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateJenkinsImageRegistryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJenkinsImageRegistryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ExtraParam, extraParam_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PersistenceDay, persistenceDay_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_TO_JSON(RegistryName, registryName_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(RegistryVersion, registryVersion_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJenkinsImageRegistryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ExtraParam, extraParam_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PersistenceDay, persistenceDay_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_FROM_JSON(RegistryName, registryName_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(RegistryVersion, registryVersion_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    CreateJenkinsImageRegistryRequest() = default ;
    CreateJenkinsImageRegistryRequest(const CreateJenkinsImageRegistryRequest &) = default ;
    CreateJenkinsImageRegistryRequest(CreateJenkinsImageRegistryRequest &&) = default ;
    CreateJenkinsImageRegistryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJenkinsImageRegistryRequest() = default ;
    CreateJenkinsImageRegistryRequest& operator=(const CreateJenkinsImageRegistryRequest &) = default ;
    CreateJenkinsImageRegistryRequest& operator=(CreateJenkinsImageRegistryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->extraParam_ == nullptr && this->netType_ == nullptr && this->password_ == nullptr && this->persistenceDay_ == nullptr && this->protocolType_ == nullptr
        && this->regionId_ == nullptr && this->registryHostIp_ == nullptr && this->registryName_ == nullptr && this->registryType_ == nullptr && this->registryVersion_ == nullptr
        && this->sourceIp_ == nullptr && this->transPerHour_ == nullptr && this->userName_ == nullptr && this->vpcId_ == nullptr && this->whiteList_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateJenkinsImageRegistryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // extraParam Field Functions 
    bool hasExtraParam() const { return this->extraParam_ != nullptr;};
    void deleteExtraParam() { this->extraParam_ = nullptr;};
    inline string getExtraParam() const { DARABONBA_PTR_GET_DEFAULT(extraParam_, "") };
    inline CreateJenkinsImageRegistryRequest& setExtraParam(string extraParam) { DARABONBA_PTR_SET_VALUE(extraParam_, extraParam) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline int32_t getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0) };
    inline CreateJenkinsImageRegistryRequest& setNetType(int32_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateJenkinsImageRegistryRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // persistenceDay Field Functions 
    bool hasPersistenceDay() const { return this->persistenceDay_ != nullptr;};
    void deletePersistenceDay() { this->persistenceDay_ = nullptr;};
    inline int32_t getPersistenceDay() const { DARABONBA_PTR_GET_DEFAULT(persistenceDay_, 0) };
    inline CreateJenkinsImageRegistryRequest& setPersistenceDay(int32_t persistenceDay) { DARABONBA_PTR_SET_VALUE(persistenceDay_, persistenceDay) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline int32_t getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0) };
    inline CreateJenkinsImageRegistryRequest& setProtocolType(int32_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateJenkinsImageRegistryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryHostIp Field Functions 
    bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
    void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
    inline string getRegistryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
    inline CreateJenkinsImageRegistryRequest& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


    // registryName Field Functions 
    bool hasRegistryName() const { return this->registryName_ != nullptr;};
    void deleteRegistryName() { this->registryName_ = nullptr;};
    inline string getRegistryName() const { DARABONBA_PTR_GET_DEFAULT(registryName_, "") };
    inline CreateJenkinsImageRegistryRequest& setRegistryName(string registryName) { DARABONBA_PTR_SET_VALUE(registryName_, registryName) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline CreateJenkinsImageRegistryRequest& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // registryVersion Field Functions 
    bool hasRegistryVersion() const { return this->registryVersion_ != nullptr;};
    void deleteRegistryVersion() { this->registryVersion_ = nullptr;};
    inline string getRegistryVersion() const { DARABONBA_PTR_GET_DEFAULT(registryVersion_, "") };
    inline CreateJenkinsImageRegistryRequest& setRegistryVersion(string registryVersion) { DARABONBA_PTR_SET_VALUE(registryVersion_, registryVersion) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateJenkinsImageRegistryRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // transPerHour Field Functions 
    bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
    void deleteTransPerHour() { this->transPerHour_ = nullptr;};
    inline int32_t getTransPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
    inline CreateJenkinsImageRegistryRequest& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateJenkinsImageRegistryRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateJenkinsImageRegistryRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline CreateJenkinsImageRegistryRequest& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The domain name of the image repository.
    shared_ptr<string> domainName_ {};
    // The additional parameters of the image repository. The value of this parameter contains the following fields:
    // 
    // *   **namespace**: the namespace
    // *   **authToken**: the authorization token
    shared_ptr<string> extraParam_ {};
    // The network type. Valid values:
    // 
    // *   **1**: Internet
    // *   **2**: Virtual Private Cloud (VPC)
    shared_ptr<int32_t> netType_ {};
    // The password.
    shared_ptr<string> password_ {};
    // The number of days during which assets can be retained.
    shared_ptr<int32_t> persistenceDay_ {};
    // The type of the protocol. Valid values:
    // 
    // *   **1**: HTTP
    // *   **2**: HTTPS
    shared_ptr<int32_t> protocolType_ {};
    // The region ID of the image repository.
    shared_ptr<string> regionId_ {};
    // The IP address of the image repository.
    shared_ptr<string> registryHostIp_ {};
    // The alias of the image repository.
    shared_ptr<string> registryName_ {};
    // The type of the image repository. Valid values:
    // 
    // *   **CI/CD**: Jenkins
    shared_ptr<string> registryType_ {};
    // The version of the image repository. Default value: -. Valid values:
    // 
    // *   **-**: the default version
    // *   **V1**: V1.0
    // *   **V2**: V2.0
    shared_ptr<string> registryVersion_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The number of images that can be scanned per hour.
    shared_ptr<int32_t> transPerHour_ {};
    // The username.
    shared_ptr<string> userName_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
    // The whitelist of IP addresses.
    shared_ptr<string> whiteList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
