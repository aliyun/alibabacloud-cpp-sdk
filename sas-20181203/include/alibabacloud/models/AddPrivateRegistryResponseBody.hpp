// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPRIVATEREGISTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPRIVATEREGISTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddPrivateRegistryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrivateRegistryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrivateRegistryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPrivateRegistryResponseBody() = default ;
    AddPrivateRegistryResponseBody(const AddPrivateRegistryResponseBody &) = default ;
    AddPrivateRegistryResponseBody(AddPrivateRegistryResponseBody &&) = default ;
    AddPrivateRegistryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrivateRegistryResponseBody() = default ;
    AddPrivateRegistryResponseBody& operator=(const AddPrivateRegistryResponseBody &) = default ;
    AddPrivateRegistryResponseBody& operator=(AddPrivateRegistryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegistryHostIp, registryHostIp_);
        DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
        DARABONBA_PTR_TO_JSON(RegistryVersion, registryVersion_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(TransPerHour, transPerHour_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegistryHostIp, registryHostIp_);
        DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
        DARABONBA_PTR_FROM_JSON(RegistryVersion, registryVersion_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(TransPerHour, transPerHour_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->domainName_ == nullptr && this->id_ == nullptr && this->netType_ == nullptr && this->password_ == nullptr && this->protocolType_ == nullptr
        && this->regionId_ == nullptr && this->registryHostIp_ == nullptr && this->registryType_ == nullptr && this->registryVersion_ == nullptr && this->token_ == nullptr
        && this->transPerHour_ == nullptr && this->userName_ == nullptr && this->vpcId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline int64_t getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0L) };
      inline Data& setNetType(int64_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Data& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline int64_t getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0L) };
      inline Data& setProtocolType(int64_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


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


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline Data& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // registryVersion Field Functions 
      bool hasRegistryVersion() const { return this->registryVersion_ != nullptr;};
      void deleteRegistryVersion() { this->registryVersion_ = nullptr;};
      inline string getRegistryVersion() const { DARABONBA_PTR_GET_DEFAULT(registryVersion_, "") };
      inline Data& setRegistryVersion(string registryVersion) { DARABONBA_PTR_SET_VALUE(registryVersion_, registryVersion) };


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


    protected:
      // The ID of the user.
      shared_ptr<int64_t> aliUid_ {};
      // The domain name of the image repository.
      shared_ptr<string> domainName_ {};
      // The ID of the image repository.
      shared_ptr<int64_t> id_ {};
      // The network type. Valid values:
      // 
      // *   **1**: Internet
      // *   **2**: VPC
      shared_ptr<int64_t> netType_ {};
      // The password.
      shared_ptr<string> password_ {};
      // The type of the protocol. Valid values:
      // 
      // *   **1**: HTTP
      // *   **2**: HTTPS
      shared_ptr<int64_t> protocolType_ {};
      // The region ID of the image repository.
      shared_ptr<string> regionId_ {};
      // The IP address of the image repository.
      shared_ptr<string> registryHostIp_ {};
      // The type of the image repository. Valid values:
      // 
      // *   **harbor**
      // *   **quay**
      shared_ptr<string> registryType_ {};
      // The version of the image repository. Default value: -. Valid values:
      // 
      // *   **-**: the default version
      // *   **V1**
      // *   **V2**
      shared_ptr<string> registryVersion_ {};
      // The value of the token.
      shared_ptr<string> token_ {};
      // The number of scan tasks that are performed per hour.
      shared_ptr<int32_t> transPerHour_ {};
      // The username.
      shared_ptr<string> userName_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddPrivateRegistryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddPrivateRegistryResponseBody::Data) };
    inline AddPrivateRegistryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddPrivateRegistryResponseBody::Data) };
    inline AddPrivateRegistryResponseBody& setData(const AddPrivateRegistryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddPrivateRegistryResponseBody& setData(AddPrivateRegistryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPrivateRegistryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The handling result.
    shared_ptr<AddPrivateRegistryResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
