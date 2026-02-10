// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateRegistryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateRegistryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageRegistryInfos, imageRegistryInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateRegistryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageRegistryInfos, imageRegistryInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateRegistryListResponseBody() = default ;
    ListPrivateRegistryListResponseBody(const ListPrivateRegistryListResponseBody &) = default ;
    ListPrivateRegistryListResponseBody(ListPrivateRegistryListResponseBody &&) = default ;
    ListPrivateRegistryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateRegistryListResponseBody() = default ;
    ListPrivateRegistryListResponseBody& operator=(const ListPrivateRegistryListResponseBody &) = default ;
    ListPrivateRegistryListResponseBody& operator=(ListPrivateRegistryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageRegistryInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRegistryInfos& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ImageRegistryInfos& obj) { 
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
      ImageRegistryInfos() = default ;
      ImageRegistryInfos(const ImageRegistryInfos &) = default ;
      ImageRegistryInfos(ImageRegistryInfos &&) = default ;
      ImageRegistryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRegistryInfos() = default ;
      ImageRegistryInfos& operator=(const ImageRegistryInfos &) = default ;
      ImageRegistryInfos& operator=(ImageRegistryInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->domainName_ == nullptr && this->id_ == nullptr && this->jenkinsEnv_ == nullptr && this->netType_ == nullptr && this->password_ == nullptr
        && this->persistenceDay_ == nullptr && this->protocolType_ == nullptr && this->regionId_ == nullptr && this->registryHostIp_ == nullptr && this->registryName_ == nullptr
        && this->registryType_ == nullptr && this->registryVersion_ == nullptr && this->token_ == nullptr && this->transPerHour_ == nullptr && this->userName_ == nullptr
        && this->vpcId_ == nullptr && this->whiteList_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline ImageRegistryInfos& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline ImageRegistryInfos& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ImageRegistryInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jenkinsEnv Field Functions 
      bool hasJenkinsEnv() const { return this->jenkinsEnv_ != nullptr;};
      void deleteJenkinsEnv() { this->jenkinsEnv_ = nullptr;};
      inline string getJenkinsEnv() const { DARABONBA_PTR_GET_DEFAULT(jenkinsEnv_, "") };
      inline ImageRegistryInfos& setJenkinsEnv(string jenkinsEnv) { DARABONBA_PTR_SET_VALUE(jenkinsEnv_, jenkinsEnv) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline int64_t getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0L) };
      inline ImageRegistryInfos& setNetType(int64_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline ImageRegistryInfos& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // persistenceDay Field Functions 
      bool hasPersistenceDay() const { return this->persistenceDay_ != nullptr;};
      void deletePersistenceDay() { this->persistenceDay_ = nullptr;};
      inline int64_t getPersistenceDay() const { DARABONBA_PTR_GET_DEFAULT(persistenceDay_, 0L) };
      inline ImageRegistryInfos& setPersistenceDay(int64_t persistenceDay) { DARABONBA_PTR_SET_VALUE(persistenceDay_, persistenceDay) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline int64_t getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0L) };
      inline ImageRegistryInfos& setProtocolType(int64_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageRegistryInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // registryHostIp Field Functions 
      bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
      void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
      inline string getRegistryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
      inline ImageRegistryInfos& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


      // registryName Field Functions 
      bool hasRegistryName() const { return this->registryName_ != nullptr;};
      void deleteRegistryName() { this->registryName_ = nullptr;};
      inline string getRegistryName() const { DARABONBA_PTR_GET_DEFAULT(registryName_, "") };
      inline ImageRegistryInfos& setRegistryName(string registryName) { DARABONBA_PTR_SET_VALUE(registryName_, registryName) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline ImageRegistryInfos& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // registryVersion Field Functions 
      bool hasRegistryVersion() const { return this->registryVersion_ != nullptr;};
      void deleteRegistryVersion() { this->registryVersion_ = nullptr;};
      inline string getRegistryVersion() const { DARABONBA_PTR_GET_DEFAULT(registryVersion_, "") };
      inline ImageRegistryInfos& setRegistryVersion(string registryVersion) { DARABONBA_PTR_SET_VALUE(registryVersion_, registryVersion) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline ImageRegistryInfos& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // transPerHour Field Functions 
      bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
      void deleteTransPerHour() { this->transPerHour_ = nullptr;};
      inline int32_t getTransPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
      inline ImageRegistryInfos& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ImageRegistryInfos& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ImageRegistryInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
      inline ImageRegistryInfos& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


    protected:
      // The ID of the user.
      shared_ptr<int64_t> aliUid_ {};
      // The domain name of the image repository.
      shared_ptr<string> domainName_ {};
      // The ID of the image repository.
      shared_ptr<int64_t> id_ {};
      // The information about the Jenkins environment.
      shared_ptr<string> jenkinsEnv_ {};
      // The network type. Valid values:
      // 
      // *   **1**: Internet
      // *   **2**: VPC
      shared_ptr<int64_t> netType_ {};
      // The password used to log on to the image repository.
      shared_ptr<string> password_ {};
      // The number of days during which assets can be retained.
      shared_ptr<int64_t> persistenceDay_ {};
      // The type of the protocol. Valid values:
      // 
      // *   **1**: HTTP
      // *   **2**: HTTPS
      shared_ptr<int64_t> protocolType_ {};
      // The region ID of the server.
      shared_ptr<string> regionId_ {};
      // The IP address of the image repository.
      shared_ptr<string> registryHostIp_ {};
      // The alias of the image repository.
      shared_ptr<string> registryName_ {};
      // The type of the image repository. Valid values:
      // 
      // *   **acr**: Container Registry
      // *   **harbor**: Harbor
      // *   **quay**: Quay
      // *   **CI/CD**: Jenkins
      shared_ptr<string> registryType_ {};
      // The version of the image repository. Valid values:
      // 
      // *   **V1**: V1.0
      // *   **V2**: V2.0
      shared_ptr<string> registryVersion_ {};
      // The authentication token of the user.
      shared_ptr<string> token_ {};
      // The number of images that can be scanned per hour.
      shared_ptr<int32_t> transPerHour_ {};
      // The username used to log on to the image repository.
      shared_ptr<string> userName_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
      // The whitelist of IP addresses.
      shared_ptr<string> whiteList_ {};
    };

    virtual bool empty() const override { return this->imageRegistryInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // imageRegistryInfos Field Functions 
    bool hasImageRegistryInfos() const { return this->imageRegistryInfos_ != nullptr;};
    void deleteImageRegistryInfos() { this->imageRegistryInfos_ = nullptr;};
    inline const vector<ListPrivateRegistryListResponseBody::ImageRegistryInfos> & getImageRegistryInfos() const { DARABONBA_PTR_GET_CONST(imageRegistryInfos_, vector<ListPrivateRegistryListResponseBody::ImageRegistryInfos>) };
    inline vector<ListPrivateRegistryListResponseBody::ImageRegistryInfos> getImageRegistryInfos() { DARABONBA_PTR_GET(imageRegistryInfos_, vector<ListPrivateRegistryListResponseBody::ImageRegistryInfos>) };
    inline ListPrivateRegistryListResponseBody& setImageRegistryInfos(const vector<ListPrivateRegistryListResponseBody::ImageRegistryInfos> & imageRegistryInfos) { DARABONBA_PTR_SET_VALUE(imageRegistryInfos_, imageRegistryInfos) };
    inline ListPrivateRegistryListResponseBody& setImageRegistryInfos(vector<ListPrivateRegistryListResponseBody::ImageRegistryInfos> && imageRegistryInfos) { DARABONBA_PTR_SET_RVALUE(imageRegistryInfos_, imageRegistryInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateRegistryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the image repositories.
    shared_ptr<vector<ListPrivateRegistryListResponseBody::ImageRegistryInfos>> imageRegistryInfos_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
