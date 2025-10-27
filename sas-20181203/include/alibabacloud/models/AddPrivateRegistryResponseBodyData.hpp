// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPRIVATEREGISTRYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDPRIVATEREGISTRYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddPrivateRegistryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrivateRegistryResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, AddPrivateRegistryResponseBodyData& obj) { 
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
    AddPrivateRegistryResponseBodyData() = default ;
    AddPrivateRegistryResponseBodyData(const AddPrivateRegistryResponseBodyData &) = default ;
    AddPrivateRegistryResponseBodyData(AddPrivateRegistryResponseBodyData &&) = default ;
    AddPrivateRegistryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrivateRegistryResponseBodyData() = default ;
    AddPrivateRegistryResponseBodyData& operator=(const AddPrivateRegistryResponseBodyData &) = default ;
    AddPrivateRegistryResponseBodyData& operator=(AddPrivateRegistryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->domainName_ == nullptr && return this->id_ == nullptr && return this->netType_ == nullptr && return this->password_ == nullptr && return this->protocolType_ == nullptr
        && return this->regionId_ == nullptr && return this->registryHostIp_ == nullptr && return this->registryType_ == nullptr && return this->registryVersion_ == nullptr && return this->token_ == nullptr
        && return this->transPerHour_ == nullptr && return this->userName_ == nullptr && return this->vpcId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline AddPrivateRegistryResponseBodyData& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddPrivateRegistryResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddPrivateRegistryResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline int64_t netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0L) };
    inline AddPrivateRegistryResponseBodyData& setNetType(int64_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AddPrivateRegistryResponseBodyData& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline int64_t protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0L) };
    inline AddPrivateRegistryResponseBodyData& setProtocolType(int64_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddPrivateRegistryResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryHostIp Field Functions 
    bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
    void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
    inline string registryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
    inline AddPrivateRegistryResponseBodyData& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline AddPrivateRegistryResponseBodyData& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // registryVersion Field Functions 
    bool hasRegistryVersion() const { return this->registryVersion_ != nullptr;};
    void deleteRegistryVersion() { this->registryVersion_ = nullptr;};
    inline string registryVersion() const { DARABONBA_PTR_GET_DEFAULT(registryVersion_, "") };
    inline AddPrivateRegistryResponseBodyData& setRegistryVersion(string registryVersion) { DARABONBA_PTR_SET_VALUE(registryVersion_, registryVersion) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline AddPrivateRegistryResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // transPerHour Field Functions 
    bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
    void deleteTransPerHour() { this->transPerHour_ = nullptr;};
    inline int32_t transPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
    inline AddPrivateRegistryResponseBodyData& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline AddPrivateRegistryResponseBodyData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AddPrivateRegistryResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the user.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The domain name of the image repository.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **1**: Internet
    // *   **2**: VPC
    std::shared_ptr<int64_t> netType_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **1**: HTTP
    // *   **2**: HTTPS
    std::shared_ptr<int64_t> protocolType_ = nullptr;
    // The region ID of the image repository.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP address of the image repository.
    std::shared_ptr<string> registryHostIp_ = nullptr;
    // The type of the image repository. Valid values:
    // 
    // *   **harbor**
    // *   **quay**
    std::shared_ptr<string> registryType_ = nullptr;
    // The version of the image repository. Default value: -. Valid values:
    // 
    // *   **-**: the default version
    // *   **V1**
    // *   **V2**
    std::shared_ptr<string> registryVersion_ = nullptr;
    // The value of the token.
    std::shared_ptr<string> token_ = nullptr;
    // The number of scan tasks that are performed per hour.
    std::shared_ptr<int32_t> transPerHour_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
