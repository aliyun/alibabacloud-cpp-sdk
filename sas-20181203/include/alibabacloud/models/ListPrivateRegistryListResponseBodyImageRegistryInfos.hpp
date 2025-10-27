// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYLISTRESPONSEBODYIMAGEREGISTRYINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYLISTRESPONSEBODYIMAGEREGISTRYINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateRegistryListResponseBodyImageRegistryInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateRegistryListResponseBodyImageRegistryInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JenkinsEnv, jenkinsEnv_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PersistenceDay, persistenceDay_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_TO_JSON(RegistryName, registryName_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(RegistryVersion, registryVersion_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateRegistryListResponseBodyImageRegistryInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JenkinsEnv, jenkinsEnv_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PersistenceDay, persistenceDay_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_FROM_JSON(RegistryName, registryName_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(RegistryVersion, registryVersion_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    ListPrivateRegistryListResponseBodyImageRegistryInfos() = default ;
    ListPrivateRegistryListResponseBodyImageRegistryInfos(const ListPrivateRegistryListResponseBodyImageRegistryInfos &) = default ;
    ListPrivateRegistryListResponseBodyImageRegistryInfos(ListPrivateRegistryListResponseBodyImageRegistryInfos &&) = default ;
    ListPrivateRegistryListResponseBodyImageRegistryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateRegistryListResponseBodyImageRegistryInfos() = default ;
    ListPrivateRegistryListResponseBodyImageRegistryInfos& operator=(const ListPrivateRegistryListResponseBodyImageRegistryInfos &) = default ;
    ListPrivateRegistryListResponseBodyImageRegistryInfos& operator=(ListPrivateRegistryListResponseBodyImageRegistryInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->domainName_ == nullptr && return this->id_ == nullptr && return this->jenkinsEnv_ == nullptr && return this->netType_ == nullptr && return this->password_ == nullptr
        && return this->persistenceDay_ == nullptr && return this->protocolType_ == nullptr && return this->regionId_ == nullptr && return this->registryHostIp_ == nullptr && return this->registryName_ == nullptr
        && return this->registryType_ == nullptr && return this->registryVersion_ == nullptr && return this->token_ == nullptr && return this->transPerHour_ == nullptr && return this->userName_ == nullptr
        && return this->vpcId_ == nullptr && return this->whiteList_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jenkinsEnv Field Functions 
    bool hasJenkinsEnv() const { return this->jenkinsEnv_ != nullptr;};
    void deleteJenkinsEnv() { this->jenkinsEnv_ = nullptr;};
    inline string jenkinsEnv() const { DARABONBA_PTR_GET_DEFAULT(jenkinsEnv_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setJenkinsEnv(string jenkinsEnv) { DARABONBA_PTR_SET_VALUE(jenkinsEnv_, jenkinsEnv) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline int64_t netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0L) };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setNetType(int64_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // persistenceDay Field Functions 
    bool hasPersistenceDay() const { return this->persistenceDay_ != nullptr;};
    void deletePersistenceDay() { this->persistenceDay_ = nullptr;};
    inline int64_t persistenceDay() const { DARABONBA_PTR_GET_DEFAULT(persistenceDay_, 0L) };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setPersistenceDay(int64_t persistenceDay) { DARABONBA_PTR_SET_VALUE(persistenceDay_, persistenceDay) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline int64_t protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0L) };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setProtocolType(int64_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryHostIp Field Functions 
    bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
    void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
    inline string registryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


    // registryName Field Functions 
    bool hasRegistryName() const { return this->registryName_ != nullptr;};
    void deleteRegistryName() { this->registryName_ = nullptr;};
    inline string registryName() const { DARABONBA_PTR_GET_DEFAULT(registryName_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setRegistryName(string registryName) { DARABONBA_PTR_SET_VALUE(registryName_, registryName) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // registryVersion Field Functions 
    bool hasRegistryVersion() const { return this->registryVersion_ != nullptr;};
    void deleteRegistryVersion() { this->registryVersion_ = nullptr;};
    inline string registryVersion() const { DARABONBA_PTR_GET_DEFAULT(registryVersion_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setRegistryVersion(string registryVersion) { DARABONBA_PTR_SET_VALUE(registryVersion_, registryVersion) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // transPerHour Field Functions 
    bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
    void deleteTransPerHour() { this->transPerHour_ = nullptr;};
    inline int32_t transPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline ListPrivateRegistryListResponseBodyImageRegistryInfos& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The ID of the user.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The domain name of the image repository.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The information about the Jenkins environment.
    std::shared_ptr<string> jenkinsEnv_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **1**: Internet
    // *   **2**: VPC
    std::shared_ptr<int64_t> netType_ = nullptr;
    // The password used to log on to the image repository.
    std::shared_ptr<string> password_ = nullptr;
    // The number of days during which assets can be retained.
    std::shared_ptr<int64_t> persistenceDay_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **1**: HTTP
    // *   **2**: HTTPS
    std::shared_ptr<int64_t> protocolType_ = nullptr;
    // The region ID of the server.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP address of the image repository.
    std::shared_ptr<string> registryHostIp_ = nullptr;
    // The alias of the image repository.
    std::shared_ptr<string> registryName_ = nullptr;
    // The type of the image repository. Valid values:
    // 
    // *   **acr**: Container Registry
    // *   **harbor**: Harbor
    // *   **quay**: Quay
    // *   **CI/CD**: Jenkins
    std::shared_ptr<string> registryType_ = nullptr;
    // The version of the image repository. Valid values:
    // 
    // *   **V1**: V1.0
    // *   **V2**: V2.0
    std::shared_ptr<string> registryVersion_ = nullptr;
    // The authentication token of the user.
    std::shared_ptr<string> token_ = nullptr;
    // The number of images that can be scanned per hour.
    std::shared_ptr<int32_t> transPerHour_ = nullptr;
    // The username used to log on to the image repository.
    std::shared_ptr<string> userName_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The whitelist of IP addresses.
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
