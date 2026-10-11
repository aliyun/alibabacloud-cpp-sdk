// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYGATEWAYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYGATEWAYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class UpdateEgressProxyGatewayAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEgressProxyGatewayAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddListenerProperties, addListenerProperties_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DefaultEgressProxyIpPoolId, defaultEgressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayName, egressProxyGatewayName_);
      DARABONBA_PTR_TO_JSON(RemoveListenerProperties, removeListenerProperties_);
      DARABONBA_PTR_TO_JSON(TlsInterceptProperties, tlsInterceptProperties_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEgressProxyGatewayAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddListenerProperties, addListenerProperties_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DefaultEgressProxyIpPoolId, defaultEgressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayName, egressProxyGatewayName_);
      DARABONBA_PTR_FROM_JSON(RemoveListenerProperties, removeListenerProperties_);
      DARABONBA_PTR_FROM_JSON(TlsInterceptProperties, tlsInterceptProperties_);
    };
    UpdateEgressProxyGatewayAttributeRequest() = default ;
    UpdateEgressProxyGatewayAttributeRequest(const UpdateEgressProxyGatewayAttributeRequest &) = default ;
    UpdateEgressProxyGatewayAttributeRequest(UpdateEgressProxyGatewayAttributeRequest &&) = default ;
    UpdateEgressProxyGatewayAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEgressProxyGatewayAttributeRequest() = default ;
    UpdateEgressProxyGatewayAttributeRequest& operator=(const UpdateEgressProxyGatewayAttributeRequest &) = default ;
    UpdateEgressProxyGatewayAttributeRequest& operator=(UpdateEgressProxyGatewayAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TlsInterceptProperties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TlsInterceptProperties& obj) { 
        DARABONBA_PTR_TO_JSON(PrivateCaCertificateId, privateCaCertificateId_);
        DARABONBA_PTR_TO_JSON(TlsInterceptMode, tlsInterceptMode_);
      };
      friend void from_json(const Darabonba::Json& j, TlsInterceptProperties& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivateCaCertificateId, privateCaCertificateId_);
        DARABONBA_PTR_FROM_JSON(TlsInterceptMode, tlsInterceptMode_);
      };
      TlsInterceptProperties() = default ;
      TlsInterceptProperties(const TlsInterceptProperties &) = default ;
      TlsInterceptProperties(TlsInterceptProperties &&) = default ;
      TlsInterceptProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TlsInterceptProperties() = default ;
      TlsInterceptProperties& operator=(const TlsInterceptProperties &) = default ;
      TlsInterceptProperties& operator=(TlsInterceptProperties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->privateCaCertificateId_ == nullptr
        && this->tlsInterceptMode_ == nullptr; };
      // privateCaCertificateId Field Functions 
      bool hasPrivateCaCertificateId() const { return this->privateCaCertificateId_ != nullptr;};
      void deletePrivateCaCertificateId() { this->privateCaCertificateId_ = nullptr;};
      inline string getPrivateCaCertificateId() const { DARABONBA_PTR_GET_DEFAULT(privateCaCertificateId_, "") };
      inline TlsInterceptProperties& setPrivateCaCertificateId(string privateCaCertificateId) { DARABONBA_PTR_SET_VALUE(privateCaCertificateId_, privateCaCertificateId) };


      // tlsInterceptMode Field Functions 
      bool hasTlsInterceptMode() const { return this->tlsInterceptMode_ != nullptr;};
      void deleteTlsInterceptMode() { this->tlsInterceptMode_ = nullptr;};
      inline string getTlsInterceptMode() const { DARABONBA_PTR_GET_DEFAULT(tlsInterceptMode_, "") };
      inline TlsInterceptProperties& setTlsInterceptMode(string tlsInterceptMode) { DARABONBA_PTR_SET_VALUE(tlsInterceptMode_, tlsInterceptMode) };


    protected:
      shared_ptr<string> privateCaCertificateId_ {};
      // This parameter is required.
      shared_ptr<string> tlsInterceptMode_ {};
    };

    class RemoveListenerProperties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveListenerProperties& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveListenerProperties& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      RemoveListenerProperties() = default ;
      RemoveListenerProperties(const RemoveListenerProperties &) = default ;
      RemoveListenerProperties(RemoveListenerProperties &&) = default ;
      RemoveListenerProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveListenerProperties() = default ;
      RemoveListenerProperties& operator=(const RemoveListenerProperties &) = default ;
      RemoveListenerProperties& operator=(RemoveListenerProperties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline RemoveListenerProperties& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline RemoveListenerProperties& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> port_ {};
      // This parameter is required.
      shared_ptr<string> protocol_ {};
    };

    class AddListenerProperties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddListenerProperties& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, AddListenerProperties& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      AddListenerProperties() = default ;
      AddListenerProperties(const AddListenerProperties &) = default ;
      AddListenerProperties(AddListenerProperties &&) = default ;
      AddListenerProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddListenerProperties() = default ;
      AddListenerProperties& operator=(const AddListenerProperties &) = default ;
      AddListenerProperties& operator=(AddListenerProperties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline AddListenerProperties& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline AddListenerProperties& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> port_ {};
      // This parameter is required.
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->addListenerProperties_ == nullptr
        && this->clientToken_ == nullptr && this->defaultEgressProxyIpPoolId_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->egressProxyGatewayId_ == nullptr
        && this->egressProxyGatewayName_ == nullptr && this->removeListenerProperties_ == nullptr && this->tlsInterceptProperties_ == nullptr; };
    // addListenerProperties Field Functions 
    bool hasAddListenerProperties() const { return this->addListenerProperties_ != nullptr;};
    void deleteAddListenerProperties() { this->addListenerProperties_ = nullptr;};
    inline const vector<UpdateEgressProxyGatewayAttributeRequest::AddListenerProperties> & getAddListenerProperties() const { DARABONBA_PTR_GET_CONST(addListenerProperties_, vector<UpdateEgressProxyGatewayAttributeRequest::AddListenerProperties>) };
    inline vector<UpdateEgressProxyGatewayAttributeRequest::AddListenerProperties> getAddListenerProperties() { DARABONBA_PTR_GET(addListenerProperties_, vector<UpdateEgressProxyGatewayAttributeRequest::AddListenerProperties>) };
    inline UpdateEgressProxyGatewayAttributeRequest& setAddListenerProperties(const vector<UpdateEgressProxyGatewayAttributeRequest::AddListenerProperties> & addListenerProperties) { DARABONBA_PTR_SET_VALUE(addListenerProperties_, addListenerProperties) };
    inline UpdateEgressProxyGatewayAttributeRequest& setAddListenerProperties(vector<UpdateEgressProxyGatewayAttributeRequest::AddListenerProperties> && addListenerProperties) { DARABONBA_PTR_SET_RVALUE(addListenerProperties_, addListenerProperties) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEgressProxyGatewayAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // defaultEgressProxyIpPoolId Field Functions 
    bool hasDefaultEgressProxyIpPoolId() const { return this->defaultEgressProxyIpPoolId_ != nullptr;};
    void deleteDefaultEgressProxyIpPoolId() { this->defaultEgressProxyIpPoolId_ = nullptr;};
    inline string getDefaultEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(defaultEgressProxyIpPoolId_, "") };
    inline UpdateEgressProxyGatewayAttributeRequest& setDefaultEgressProxyIpPoolId(string defaultEgressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(defaultEgressProxyIpPoolId_, defaultEgressProxyIpPoolId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEgressProxyGatewayAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateEgressProxyGatewayAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyGatewayId Field Functions 
    bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
    void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
    inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
    inline UpdateEgressProxyGatewayAttributeRequest& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


    // egressProxyGatewayName Field Functions 
    bool hasEgressProxyGatewayName() const { return this->egressProxyGatewayName_ != nullptr;};
    void deleteEgressProxyGatewayName() { this->egressProxyGatewayName_ = nullptr;};
    inline string getEgressProxyGatewayName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayName_, "") };
    inline UpdateEgressProxyGatewayAttributeRequest& setEgressProxyGatewayName(string egressProxyGatewayName) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayName_, egressProxyGatewayName) };


    // removeListenerProperties Field Functions 
    bool hasRemoveListenerProperties() const { return this->removeListenerProperties_ != nullptr;};
    void deleteRemoveListenerProperties() { this->removeListenerProperties_ = nullptr;};
    inline const vector<UpdateEgressProxyGatewayAttributeRequest::RemoveListenerProperties> & getRemoveListenerProperties() const { DARABONBA_PTR_GET_CONST(removeListenerProperties_, vector<UpdateEgressProxyGatewayAttributeRequest::RemoveListenerProperties>) };
    inline vector<UpdateEgressProxyGatewayAttributeRequest::RemoveListenerProperties> getRemoveListenerProperties() { DARABONBA_PTR_GET(removeListenerProperties_, vector<UpdateEgressProxyGatewayAttributeRequest::RemoveListenerProperties>) };
    inline UpdateEgressProxyGatewayAttributeRequest& setRemoveListenerProperties(const vector<UpdateEgressProxyGatewayAttributeRequest::RemoveListenerProperties> & removeListenerProperties) { DARABONBA_PTR_SET_VALUE(removeListenerProperties_, removeListenerProperties) };
    inline UpdateEgressProxyGatewayAttributeRequest& setRemoveListenerProperties(vector<UpdateEgressProxyGatewayAttributeRequest::RemoveListenerProperties> && removeListenerProperties) { DARABONBA_PTR_SET_RVALUE(removeListenerProperties_, removeListenerProperties) };


    // tlsInterceptProperties Field Functions 
    bool hasTlsInterceptProperties() const { return this->tlsInterceptProperties_ != nullptr;};
    void deleteTlsInterceptProperties() { this->tlsInterceptProperties_ = nullptr;};
    inline const UpdateEgressProxyGatewayAttributeRequest::TlsInterceptProperties & getTlsInterceptProperties() const { DARABONBA_PTR_GET_CONST(tlsInterceptProperties_, UpdateEgressProxyGatewayAttributeRequest::TlsInterceptProperties) };
    inline UpdateEgressProxyGatewayAttributeRequest::TlsInterceptProperties getTlsInterceptProperties() { DARABONBA_PTR_GET(tlsInterceptProperties_, UpdateEgressProxyGatewayAttributeRequest::TlsInterceptProperties) };
    inline UpdateEgressProxyGatewayAttributeRequest& setTlsInterceptProperties(const UpdateEgressProxyGatewayAttributeRequest::TlsInterceptProperties & tlsInterceptProperties) { DARABONBA_PTR_SET_VALUE(tlsInterceptProperties_, tlsInterceptProperties) };
    inline UpdateEgressProxyGatewayAttributeRequest& setTlsInterceptProperties(UpdateEgressProxyGatewayAttributeRequest::TlsInterceptProperties && tlsInterceptProperties) { DARABONBA_PTR_SET_RVALUE(tlsInterceptProperties_, tlsInterceptProperties) };


  protected:
    shared_ptr<vector<UpdateEgressProxyGatewayAttributeRequest::AddListenerProperties>> addListenerProperties_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> defaultEgressProxyIpPoolId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> egressProxyGatewayId_ {};
    shared_ptr<string> egressProxyGatewayName_ {};
    shared_ptr<vector<UpdateEgressProxyGatewayAttributeRequest::RemoveListenerProperties>> removeListenerProperties_ {};
    shared_ptr<UpdateEgressProxyGatewayAttributeRequest::TlsInterceptProperties> tlsInterceptProperties_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
