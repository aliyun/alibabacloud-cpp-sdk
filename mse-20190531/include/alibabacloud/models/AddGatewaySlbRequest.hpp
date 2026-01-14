// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewaySlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewaySlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_TO_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_TO_JSON(HttpsVServerGroupId, httpsVServerGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceWeight, serviceWeight_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServiceList, VServiceList_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewaySlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_FROM_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_FROM_JSON(HttpsVServerGroupId, httpsVServerGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceWeight, serviceWeight_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServiceList, VServiceList_);
    };
    AddGatewaySlbRequest() = default ;
    AddGatewaySlbRequest(const AddGatewaySlbRequest &) = default ;
    AddGatewaySlbRequest(AddGatewaySlbRequest &&) = default ;
    AddGatewaySlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewaySlbRequest() = default ;
    AddGatewaySlbRequest& operator=(const AddGatewaySlbRequest &) = default ;
    AddGatewaySlbRequest& operator=(AddGatewaySlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VServiceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VServiceList& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
        DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, VServiceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
        DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
      };
      VServiceList() = default ;
      VServiceList(const VServiceList &) = default ;
      VServiceList(VServiceList &&) = default ;
      VServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VServiceList() = default ;
      VServiceList& operator=(const VServiceList &) = default ;
      VServiceList& operator=(VServiceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr && this->VServerGroupId_ == nullptr && this->VServerGroupName_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline VServiceList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline VServiceList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // VServerGroupId Field Functions 
      bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
      void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
      inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
      inline VServiceList& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


      // VServerGroupName Field Functions 
      bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
      void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
      inline string getVServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
      inline VServiceList& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


    protected:
      // The port number.
      shared_ptr<int32_t> port_ {};
      // The protocol type. Valid values:
      // 
      // *   HTTP
      // *   HTTPS
      shared_ptr<string> protocol_ {};
      // The ID of the virtual server group.
      shared_ptr<string> VServerGroupId_ {};
      // The name of the virtual server group.
      shared_ptr<string> VServerGroupName_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->httpPort_ == nullptr && this->httpsPort_ == nullptr && this->httpsVServerGroupId_ == nullptr && this->serviceWeight_ == nullptr
        && this->slbId_ == nullptr && this->type_ == nullptr && this->VServerGroupId_ == nullptr && this->VServiceList_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewaySlbRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewaySlbRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int32_t getHttpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
    inline AddGatewaySlbRequest& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // httpsPort Field Functions 
    bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
    void deleteHttpsPort() { this->httpsPort_ = nullptr;};
    inline int32_t getHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, 0) };
    inline AddGatewaySlbRequest& setHttpsPort(int32_t httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


    // httpsVServerGroupId Field Functions 
    bool hasHttpsVServerGroupId() const { return this->httpsVServerGroupId_ != nullptr;};
    void deleteHttpsVServerGroupId() { this->httpsVServerGroupId_ = nullptr;};
    inline string getHttpsVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(httpsVServerGroupId_, "") };
    inline AddGatewaySlbRequest& setHttpsVServerGroupId(string httpsVServerGroupId) { DARABONBA_PTR_SET_VALUE(httpsVServerGroupId_, httpsVServerGroupId) };


    // serviceWeight Field Functions 
    bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
    void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
    inline int32_t getServiceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0) };
    inline AddGatewaySlbRequest& setServiceWeight(int32_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline AddGatewaySlbRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGatewaySlbRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline AddGatewaySlbRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServiceList Field Functions 
    bool hasVServiceList() const { return this->VServiceList_ != nullptr;};
    void deleteVServiceList() { this->VServiceList_ = nullptr;};
    inline const vector<AddGatewaySlbRequest::VServiceList> & getVServiceList() const { DARABONBA_PTR_GET_CONST(VServiceList_, vector<AddGatewaySlbRequest::VServiceList>) };
    inline vector<AddGatewaySlbRequest::VServiceList> getVServiceList() { DARABONBA_PTR_GET(VServiceList_, vector<AddGatewaySlbRequest::VServiceList>) };
    inline AddGatewaySlbRequest& setVServiceList(const vector<AddGatewaySlbRequest::VServiceList> & vServiceList) { DARABONBA_PTR_SET_VALUE(VServiceList_, vServiceList) };
    inline AddGatewaySlbRequest& setVServiceList(vector<AddGatewaySlbRequest::VServiceList> && vServiceList) { DARABONBA_PTR_SET_RVALUE(VServiceList_, vServiceList) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
    // The HTTP port number (virtual service group).
    shared_ptr<int32_t> httpPort_ {};
    // The HTTPS port number (virtual service group).
    shared_ptr<int32_t> httpsPort_ {};
    // The ID of the HTTPS virtual service group.
    shared_ptr<string> httpsVServerGroupId_ {};
    // The service weight.
    shared_ptr<int32_t> serviceWeight_ {};
    // The ID of the SLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> slbId_ {};
    // The type of the service source. Valid values:
    // 
    // *   PUB_NET: Internet
    // *   PRIVATE_NET: VPC
    shared_ptr<string> type_ {};
    // The ID of the HTTP virtual service group.
    shared_ptr<string> VServerGroupId_ {};
    // The SLB monitoring information.
    shared_ptr<vector<AddGatewaySlbRequest::VServiceList>> VServiceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
