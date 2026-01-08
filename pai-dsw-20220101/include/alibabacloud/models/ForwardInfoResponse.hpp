// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORWARDINFORESPONSE_HPP_
#define ALIBABACLOUD_MODELS_FORWARDINFORESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ConnectInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnectInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Internet, internet_);
        DARABONBA_PTR_TO_JSON(Intranet, intranet_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Phase, phase_);
      };
      friend void from_json(const Darabonba::Json& j, ConnectInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Internet, internet_);
        DARABONBA_PTR_FROM_JSON(Intranet, intranet_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
      };
      ConnectInfo() = default ;
      ConnectInfo(const ConnectInfo &) = default ;
      ConnectInfo(ConnectInfo &&) = default ;
      ConnectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnectInfo() = default ;
      ConnectInfo& operator=(const ConnectInfo &) = default ;
      ConnectInfo& operator=(ConnectInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Intranet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Intranet& obj) { 
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, Intranet& obj) { 
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        Intranet() = default ;
        Intranet(const Intranet &) = default ;
        Intranet(Intranet &&) = default ;
        Intranet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Intranet() = default ;
        Intranet& operator=(const Intranet &) = default ;
        Intranet& operator=(Intranet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->port_ == nullptr; };
        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline Intranet& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline Intranet& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> port_ {};
      };

      class Internet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Internet& obj) { 
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, Internet& obj) { 
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        Internet() = default ;
        Internet(const Internet &) = default ;
        Internet(Internet &&) = default ;
        Internet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Internet() = default ;
        Internet& operator=(const Internet &) = default ;
        Internet& operator=(Internet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->port_ == nullptr; };
        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline Internet& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline Internet& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> port_ {};
      };

      virtual bool empty() const override { return this->internet_ == nullptr
        && this->intranet_ == nullptr && this->message_ == nullptr && this->phase_ == nullptr; };
      // internet Field Functions 
      bool hasInternet() const { return this->internet_ != nullptr;};
      void deleteInternet() { this->internet_ = nullptr;};
      inline const ConnectInfo::Internet & getInternet() const { DARABONBA_PTR_GET_CONST(internet_, ConnectInfo::Internet) };
      inline ConnectInfo::Internet getInternet() { DARABONBA_PTR_GET(internet_, ConnectInfo::Internet) };
      inline ConnectInfo& setInternet(const ConnectInfo::Internet & internet) { DARABONBA_PTR_SET_VALUE(internet_, internet) };
      inline ConnectInfo& setInternet(ConnectInfo::Internet && internet) { DARABONBA_PTR_SET_RVALUE(internet_, internet) };


      // intranet Field Functions 
      bool hasIntranet() const { return this->intranet_ != nullptr;};
      void deleteIntranet() { this->intranet_ = nullptr;};
      inline const ConnectInfo::Intranet & getIntranet() const { DARABONBA_PTR_GET_CONST(intranet_, ConnectInfo::Intranet) };
      inline ConnectInfo::Intranet getIntranet() { DARABONBA_PTR_GET(intranet_, ConnectInfo::Intranet) };
      inline ConnectInfo& setIntranet(const ConnectInfo::Intranet & intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };
      inline ConnectInfo& setIntranet(ConnectInfo::Intranet && intranet) { DARABONBA_PTR_SET_RVALUE(intranet_, intranet) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ConnectInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline ConnectInfo& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    protected:
      shared_ptr<ConnectInfo::Internet> internet_ {};
      shared_ptr<ConnectInfo::Intranet> intranet_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> phase_ {};
    };

    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->connectInfo_ == nullptr && this->containerName_ == nullptr && this->eipAllocationId_ == nullptr && this->enable_ == nullptr && this->externalPort_ == nullptr
        && this->forwardPort_ == nullptr && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->SSHPublicKey_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline const vector<string> & getAccessType() const { DARABONBA_PTR_GET_CONST(accessType_, vector<string>) };
    inline vector<string> getAccessType() { DARABONBA_PTR_GET(accessType_, vector<string>) };
    inline ForwardInfoResponse& setAccessType(const vector<string> & accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };
    inline ForwardInfoResponse& setAccessType(vector<string> && accessType) { DARABONBA_PTR_SET_RVALUE(accessType_, accessType) };


    // connectInfo Field Functions 
    bool hasConnectInfo() const { return this->connectInfo_ != nullptr;};
    void deleteConnectInfo() { this->connectInfo_ = nullptr;};
    inline const ForwardInfoResponse::ConnectInfo & getConnectInfo() const { DARABONBA_PTR_GET_CONST(connectInfo_, ForwardInfoResponse::ConnectInfo) };
    inline ForwardInfoResponse::ConnectInfo getConnectInfo() { DARABONBA_PTR_GET(connectInfo_, ForwardInfoResponse::ConnectInfo) };
    inline ForwardInfoResponse& setConnectInfo(const ForwardInfoResponse::ConnectInfo & connectInfo) { DARABONBA_PTR_SET_VALUE(connectInfo_, connectInfo) };
    inline ForwardInfoResponse& setConnectInfo(ForwardInfoResponse::ConnectInfo && connectInfo) { DARABONBA_PTR_SET_RVALUE(connectInfo_, connectInfo) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline ForwardInfoResponse& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // eipAllocationId Field Functions 
    bool hasEipAllocationId() const { return this->eipAllocationId_ != nullptr;};
    void deleteEipAllocationId() { this->eipAllocationId_ = nullptr;};
    inline string getEipAllocationId() const { DARABONBA_PTR_GET_DEFAULT(eipAllocationId_, "") };
    inline ForwardInfoResponse& setEipAllocationId(string eipAllocationId) { DARABONBA_PTR_SET_VALUE(eipAllocationId_, eipAllocationId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ForwardInfoResponse& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline ForwardInfoResponse& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // forwardPort Field Functions 
    bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
    void deleteForwardPort() { this->forwardPort_ = nullptr;};
    inline string getForwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, "") };
    inline ForwardInfoResponse& setForwardPort(string forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ForwardInfoResponse& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ForwardInfoResponse& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // SSHPublicKey Field Functions 
    bool hasSSHPublicKey() const { return this->SSHPublicKey_ != nullptr;};
    void deleteSSHPublicKey() { this->SSHPublicKey_ = nullptr;};
    inline string getSSHPublicKey() const { DARABONBA_PTR_GET_DEFAULT(SSHPublicKey_, "") };
    inline ForwardInfoResponse& setSSHPublicKey(string SSHPublicKey) { DARABONBA_PTR_SET_VALUE(SSHPublicKey_, SSHPublicKey) };


  protected:
    shared_ptr<vector<string>> accessType_ {};
    shared_ptr<ForwardInfoResponse::ConnectInfo> connectInfo_ {};
    shared_ptr<string> containerName_ {};
    shared_ptr<string> eipAllocationId_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<string> externalPort_ {};
    shared_ptr<string> forwardPort_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> natGatewayId_ {};
    shared_ptr<string> SSHPublicKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
