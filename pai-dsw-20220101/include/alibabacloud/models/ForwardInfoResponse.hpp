// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORWARDINFORESPONSE_HPP_
#define ALIBABACLOUD_MODELS_FORWARDINFORESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ForwardInfoResponseConnectInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ForwardInfoResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForwardInfoResponse& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(ConnectInfo, connectInfo_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(EipAllocationId, eipAllocationId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(SSHPublicKey, SSHPublicKey_);
    };
    friend void from_json(const Darabonba::Json& j, ForwardInfoResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(ConnectInfo, connectInfo_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(EipAllocationId, eipAllocationId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(SSHPublicKey, SSHPublicKey_);
    };
    ForwardInfoResponse() = default ;
    ForwardInfoResponse(const ForwardInfoResponse &) = default ;
    ForwardInfoResponse(ForwardInfoResponse &&) = default ;
    ForwardInfoResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForwardInfoResponse() = default ;
    ForwardInfoResponse& operator=(const ForwardInfoResponse &) = default ;
    ForwardInfoResponse& operator=(ForwardInfoResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->connectInfo_ != nullptr && this->containerName_ != nullptr && this->eipAllocationId_ != nullptr && this->enable_ != nullptr && this->externalPort_ != nullptr
        && this->forwardPort_ != nullptr && this->name_ != nullptr && this->natGatewayId_ != nullptr && this->SSHPublicKey_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline const vector<string> & accessType() const { DARABONBA_PTR_GET_CONST(accessType_, vector<string>) };
    inline vector<string> accessType() { DARABONBA_PTR_GET(accessType_, vector<string>) };
    inline ForwardInfoResponse& setAccessType(const vector<string> & accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };
    inline ForwardInfoResponse& setAccessType(vector<string> && accessType) { DARABONBA_PTR_SET_RVALUE(accessType_, accessType) };


    // connectInfo Field Functions 
    bool hasConnectInfo() const { return this->connectInfo_ != nullptr;};
    void deleteConnectInfo() { this->connectInfo_ = nullptr;};
    inline const ForwardInfoResponseConnectInfo & connectInfo() const { DARABONBA_PTR_GET_CONST(connectInfo_, ForwardInfoResponseConnectInfo) };
    inline ForwardInfoResponseConnectInfo connectInfo() { DARABONBA_PTR_GET(connectInfo_, ForwardInfoResponseConnectInfo) };
    inline ForwardInfoResponse& setConnectInfo(const ForwardInfoResponseConnectInfo & connectInfo) { DARABONBA_PTR_SET_VALUE(connectInfo_, connectInfo) };
    inline ForwardInfoResponse& setConnectInfo(ForwardInfoResponseConnectInfo && connectInfo) { DARABONBA_PTR_SET_RVALUE(connectInfo_, connectInfo) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline ForwardInfoResponse& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // eipAllocationId Field Functions 
    bool hasEipAllocationId() const { return this->eipAllocationId_ != nullptr;};
    void deleteEipAllocationId() { this->eipAllocationId_ = nullptr;};
    inline string eipAllocationId() const { DARABONBA_PTR_GET_DEFAULT(eipAllocationId_, "") };
    inline ForwardInfoResponse& setEipAllocationId(string eipAllocationId) { DARABONBA_PTR_SET_VALUE(eipAllocationId_, eipAllocationId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ForwardInfoResponse& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string externalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline ForwardInfoResponse& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // forwardPort Field Functions 
    bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
    void deleteForwardPort() { this->forwardPort_ = nullptr;};
    inline string forwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, "") };
    inline ForwardInfoResponse& setForwardPort(string forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ForwardInfoResponse& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ForwardInfoResponse& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // SSHPublicKey Field Functions 
    bool hasSSHPublicKey() const { return this->SSHPublicKey_ != nullptr;};
    void deleteSSHPublicKey() { this->SSHPublicKey_ = nullptr;};
    inline string SSHPublicKey() const { DARABONBA_PTR_GET_DEFAULT(SSHPublicKey_, "") };
    inline ForwardInfoResponse& setSSHPublicKey(string SSHPublicKey) { DARABONBA_PTR_SET_VALUE(SSHPublicKey_, SSHPublicKey) };


  protected:
    std::shared_ptr<vector<string>> accessType_ = nullptr;
    std::shared_ptr<ForwardInfoResponseConnectInfo> connectInfo_ = nullptr;
    std::shared_ptr<string> containerName_ = nullptr;
    std::shared_ptr<string> eipAllocationId_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> externalPort_ = nullptr;
    std::shared_ptr<string> forwardPort_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> SSHPublicKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
