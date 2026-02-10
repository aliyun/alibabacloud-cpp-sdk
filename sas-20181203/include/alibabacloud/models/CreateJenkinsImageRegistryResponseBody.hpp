// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJENKINSIMAGEREGISTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJENKINSIMAGEREGISTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateJenkinsImageRegistryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJenkinsImageRegistryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJenkinsImageRegistryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
    };
    CreateJenkinsImageRegistryResponseBody() = default ;
    CreateJenkinsImageRegistryResponseBody(const CreateJenkinsImageRegistryResponseBody &) = default ;
    CreateJenkinsImageRegistryResponseBody(CreateJenkinsImageRegistryResponseBody &&) = default ;
    CreateJenkinsImageRegistryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJenkinsImageRegistryResponseBody() = default ;
    CreateJenkinsImageRegistryResponseBody& operator=(const CreateJenkinsImageRegistryResponseBody &) = default ;
    CreateJenkinsImageRegistryResponseBody& operator=(CreateJenkinsImageRegistryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BlackList, blackList_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blackList_ == nullptr
        && this->domainName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->netType_ == nullptr
        && this->password_ == nullptr && this->persistenceDay_ == nullptr && this->protocolType_ == nullptr && this->regionId_ == nullptr && this->registryHostIp_ == nullptr
        && this->registryName_ == nullptr && this->registryType_ == nullptr && this->token_ == nullptr && this->transPerHour_ == nullptr && this->userName_ == nullptr
        && this->vpcId_ == nullptr && this->whiteList_ == nullptr; };
      // blackList Field Functions 
      bool hasBlackList() const { return this->blackList_ != nullptr;};
      void deleteBlackList() { this->blackList_ = nullptr;};
      inline string getBlackList() const { DARABONBA_PTR_GET_DEFAULT(blackList_, "") };
      inline Data& setBlackList(string blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline int32_t getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0) };
      inline Data& setNetType(int32_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Data& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // persistenceDay Field Functions 
      bool hasPersistenceDay() const { return this->persistenceDay_ != nullptr;};
      void deletePersistenceDay() { this->persistenceDay_ = nullptr;};
      inline int32_t getPersistenceDay() const { DARABONBA_PTR_GET_DEFAULT(persistenceDay_, 0) };
      inline Data& setPersistenceDay(int32_t persistenceDay) { DARABONBA_PTR_SET_VALUE(persistenceDay_, persistenceDay) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline int32_t getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0) };
      inline Data& setProtocolType(int32_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // registryHostIp Field Functions 
      bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
      void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
      inline string getRegistryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
      inline Data& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


      // registryName Field Functions 
      bool hasRegistryName() const { return this->registryName_ != nullptr;};
      void deleteRegistryName() { this->registryName_ = nullptr;};
      inline string getRegistryName() const { DARABONBA_PTR_GET_DEFAULT(registryName_, "") };
      inline Data& setRegistryName(string registryName) { DARABONBA_PTR_SET_VALUE(registryName_, registryName) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline Data& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Data& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // transPerHour Field Functions 
      bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
      void deleteTransPerHour() { this->transPerHour_ = nullptr;};
      inline int32_t getTransPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
      inline Data& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline string getWhiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
      inline Data& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


    protected:
      // The blacklist.
      shared_ptr<string> blackList_ {};
      // The domain name of the image repository.
      shared_ptr<string> domainName_ {};
      // The creation time. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> gmtCreate_ {};
      // The update time. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> gmtModified_ {};
      // The ID of the image repository.
      shared_ptr<int64_t> id_ {};
      // The network type. Valid values:
      // 
      // *   **1**: Internet
      // *   **2**: VPC
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
      // The authentication token of the user.
      shared_ptr<string> token_ {};
      // The number of images that can be scanned per hour.
      shared_ptr<int32_t> transPerHour_ {};
      // The username.
      shared_ptr<string> userName_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
      // The whitelist.
      shared_ptr<string> whiteList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->timeCost_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateJenkinsImageRegistryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateJenkinsImageRegistryResponseBody::Data) };
    inline CreateJenkinsImageRegistryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateJenkinsImageRegistryResponseBody::Data) };
    inline CreateJenkinsImageRegistryResponseBody& setData(const CreateJenkinsImageRegistryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateJenkinsImageRegistryResponseBody& setData(CreateJenkinsImageRegistryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateJenkinsImageRegistryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateJenkinsImageRegistryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline int64_t getTimeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
    inline CreateJenkinsImageRegistryResponseBody& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    // The result of creating the image repository.
    shared_ptr<CreateJenkinsImageRegistryResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The time consumed. Unit: seconds.
    shared_ptr<int64_t> timeCost_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
