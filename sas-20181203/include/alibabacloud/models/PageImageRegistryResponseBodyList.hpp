// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEIMAGEREGISTRYRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_PAGEIMAGEREGISTRYRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PageImageRegistryResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageImageRegistryResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(BlackList, blackList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(JenkinsEnv, jenkinsEnv_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PersistenceDay, persistenceDay_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_TO_JSON(RegistryName, registryName_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, PageImageRegistryResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(JenkinsEnv, jenkinsEnv_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PersistenceDay, persistenceDay_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_FROM_JSON(RegistryName, registryName_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    PageImageRegistryResponseBodyList() = default ;
    PageImageRegistryResponseBodyList(const PageImageRegistryResponseBodyList &) = default ;
    PageImageRegistryResponseBodyList(PageImageRegistryResponseBodyList &&) = default ;
    PageImageRegistryResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageImageRegistryResponseBodyList() = default ;
    PageImageRegistryResponseBodyList& operator=(const PageImageRegistryResponseBodyList &) = default ;
    PageImageRegistryResponseBodyList& operator=(PageImageRegistryResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackList_ == nullptr
        && return this->domainName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->imageCount_ == nullptr
        && return this->jenkinsEnv_ == nullptr && return this->netType_ == nullptr && return this->password_ == nullptr && return this->persistenceDay_ == nullptr && return this->protocolType_ == nullptr
        && return this->regionId_ == nullptr && return this->registryHostIp_ == nullptr && return this->registryName_ == nullptr && return this->registryType_ == nullptr && return this->token_ == nullptr
        && return this->transPerHour_ == nullptr && return this->userName_ == nullptr && return this->vpcId_ == nullptr && return this->whiteList_ == nullptr; };
    // blackList Field Functions 
    bool hasBlackList() const { return this->blackList_ != nullptr;};
    void deleteBlackList() { this->blackList_ = nullptr;};
    inline string blackList() const { DARABONBA_PTR_GET_DEFAULT(blackList_, "") };
    inline PageImageRegistryResponseBodyList& setBlackList(string blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline PageImageRegistryResponseBodyList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PageImageRegistryResponseBodyList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline PageImageRegistryResponseBodyList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PageImageRegistryResponseBodyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline PageImageRegistryResponseBodyList& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // jenkinsEnv Field Functions 
    bool hasJenkinsEnv() const { return this->jenkinsEnv_ != nullptr;};
    void deleteJenkinsEnv() { this->jenkinsEnv_ = nullptr;};
    inline string jenkinsEnv() const { DARABONBA_PTR_GET_DEFAULT(jenkinsEnv_, "") };
    inline PageImageRegistryResponseBodyList& setJenkinsEnv(string jenkinsEnv) { DARABONBA_PTR_SET_VALUE(jenkinsEnv_, jenkinsEnv) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline int32_t netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0) };
    inline PageImageRegistryResponseBodyList& setNetType(int32_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline PageImageRegistryResponseBodyList& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // persistenceDay Field Functions 
    bool hasPersistenceDay() const { return this->persistenceDay_ != nullptr;};
    void deletePersistenceDay() { this->persistenceDay_ = nullptr;};
    inline int32_t persistenceDay() const { DARABONBA_PTR_GET_DEFAULT(persistenceDay_, 0) };
    inline PageImageRegistryResponseBodyList& setPersistenceDay(int32_t persistenceDay) { DARABONBA_PTR_SET_VALUE(persistenceDay_, persistenceDay) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline int32_t protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0) };
    inline PageImageRegistryResponseBodyList& setProtocolType(int32_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PageImageRegistryResponseBodyList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryHostIp Field Functions 
    bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
    void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
    inline string registryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
    inline PageImageRegistryResponseBodyList& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


    // registryName Field Functions 
    bool hasRegistryName() const { return this->registryName_ != nullptr;};
    void deleteRegistryName() { this->registryName_ = nullptr;};
    inline string registryName() const { DARABONBA_PTR_GET_DEFAULT(registryName_, "") };
    inline PageImageRegistryResponseBodyList& setRegistryName(string registryName) { DARABONBA_PTR_SET_VALUE(registryName_, registryName) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline PageImageRegistryResponseBodyList& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline PageImageRegistryResponseBodyList& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // transPerHour Field Functions 
    bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
    void deleteTransPerHour() { this->transPerHour_ = nullptr;};
    inline int32_t transPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
    inline PageImageRegistryResponseBodyList& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline PageImageRegistryResponseBodyList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline PageImageRegistryResponseBodyList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline PageImageRegistryResponseBodyList& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The IP address blacklist.
    std::shared_ptr<string> blackList_ = nullptr;
    // The domain name of the image repository.
    std::shared_ptr<string> domainName_ = nullptr;
    // The time when the image repository was created. The time is in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the image repository was updated. The time is in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of images that are stored in the image repository.
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    // The information about the Jenkins environment.
    std::shared_ptr<string> jenkinsEnv_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **1**: Internet.
    // *   **2**: virtual private cloud (VPC).
    std::shared_ptr<int32_t> netType_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The number of days for which assets are retained.
    std::shared_ptr<int32_t> persistenceDay_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **1**: HTTP.
    // *   **2**: HTTPS.
    std::shared_ptr<int32_t> protocolType_ = nullptr;
    // The region ID of the image repository.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP address of the image repository.
    std::shared_ptr<string> registryHostIp_ = nullptr;
    // The alias of the image repository.
    std::shared_ptr<string> registryName_ = nullptr;
    // The type of the image repository. Valid values:
    // 
    // *   **acr**: Container Registry.
    // *   **harbor**: Harbor.
    // *   **quay**: Quay.
    // *   **CI/CD**: Jenkins.
    std::shared_ptr<string> registryType_ = nullptr;
    // The authentication token of the user.
    std::shared_ptr<string> token_ = nullptr;
    // The number of scan tasks that are performed per hour.
    std::shared_ptr<int32_t> transPerHour_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The IP address whitelist.
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
