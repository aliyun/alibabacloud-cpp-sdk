// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPRIVATEREGISTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPRIVATEREGISTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddPrivateRegistryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrivateRegistryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ExtraParam, extraParam_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_TO_JSON(RegistryRegionId, registryRegionId_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(RegistryVersion, registryVersion_);
      DARABONBA_PTR_TO_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrivateRegistryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ExtraParam, extraParam_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_FROM_JSON(RegistryRegionId, registryRegionId_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(RegistryVersion, registryVersion_);
      DARABONBA_PTR_FROM_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    AddPrivateRegistryRequest() = default ;
    AddPrivateRegistryRequest(const AddPrivateRegistryRequest &) = default ;
    AddPrivateRegistryRequest(AddPrivateRegistryRequest &&) = default ;
    AddPrivateRegistryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrivateRegistryRequest() = default ;
    AddPrivateRegistryRequest& operator=(const AddPrivateRegistryRequest &) = default ;
    AddPrivateRegistryRequest& operator=(AddPrivateRegistryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->extraParam_ == nullptr && return this->netType_ == nullptr && return this->password_ == nullptr && return this->port_ == nullptr && return this->protocolType_ == nullptr
        && return this->registryHostIp_ == nullptr && return this->registryRegionId_ == nullptr && return this->registryType_ == nullptr && return this->registryVersion_ == nullptr && return this->transPerHour_ == nullptr
        && return this->userName_ == nullptr && return this->vpcId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddPrivateRegistryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // extraParam Field Functions 
    bool hasExtraParam() const { return this->extraParam_ != nullptr;};
    void deleteExtraParam() { this->extraParam_ = nullptr;};
    inline string extraParam() const { DARABONBA_PTR_GET_DEFAULT(extraParam_, "") };
    inline AddPrivateRegistryRequest& setExtraParam(string extraParam) { DARABONBA_PTR_SET_VALUE(extraParam_, extraParam) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline int64_t netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, 0L) };
    inline AddPrivateRegistryRequest& setNetType(int64_t netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AddPrivateRegistryRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline AddPrivateRegistryRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline int64_t protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, 0L) };
    inline AddPrivateRegistryRequest& setProtocolType(int64_t protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // registryHostIp Field Functions 
    bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
    void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
    inline string registryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
    inline AddPrivateRegistryRequest& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


    // registryRegionId Field Functions 
    bool hasRegistryRegionId() const { return this->registryRegionId_ != nullptr;};
    void deleteRegistryRegionId() { this->registryRegionId_ = nullptr;};
    inline string registryRegionId() const { DARABONBA_PTR_GET_DEFAULT(registryRegionId_, "") };
    inline AddPrivateRegistryRequest& setRegistryRegionId(string registryRegionId) { DARABONBA_PTR_SET_VALUE(registryRegionId_, registryRegionId) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline AddPrivateRegistryRequest& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // registryVersion Field Functions 
    bool hasRegistryVersion() const { return this->registryVersion_ != nullptr;};
    void deleteRegistryVersion() { this->registryVersion_ = nullptr;};
    inline string registryVersion() const { DARABONBA_PTR_GET_DEFAULT(registryVersion_, "") };
    inline AddPrivateRegistryRequest& setRegistryVersion(string registryVersion) { DARABONBA_PTR_SET_VALUE(registryVersion_, registryVersion) };


    // transPerHour Field Functions 
    bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
    void deleteTransPerHour() { this->transPerHour_ = nullptr;};
    inline int32_t transPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
    inline AddPrivateRegistryRequest& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline AddPrivateRegistryRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AddPrivateRegistryRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The domain name of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The additional parameter of the image repository. This parameter is required when you set the RegistryType parameter to **quay**. Valid values:
    // 
    // *   **namespace**
    // *   **authToken**
    std::shared_ptr<string> extraParam_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **1**: Internet
    // *   **2**: virtual private cloud (VPC)
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> netType_ = nullptr;
    // The password that is used to log on to the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // The port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **1**: HTTP
    // *   **2**: HTTPS
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> protocolType_ = nullptr;
    // The IP address of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> registryHostIp_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [ListImageRegistryRegion](~~ListImageRegistryRegion~~) operation to query the IDs of supported regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> registryRegionId_ = nullptr;
    // The type of the private image repository. Valid values:
    // 
    // *   **harbor**
    // *   **quay**
    // 
    // This parameter is required.
    std::shared_ptr<string> registryType_ = nullptr;
    // The version of the image repository. Valid values:
    // 
    // *   **V1**
    // *   **V2**
    // 
    // This parameter is required.
    std::shared_ptr<string> registryVersion_ = nullptr;
    // The number of images that are scanned per hour.
    std::shared_ptr<int32_t> transPerHour_ = nullptr;
    // The username that is used to log on to the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
