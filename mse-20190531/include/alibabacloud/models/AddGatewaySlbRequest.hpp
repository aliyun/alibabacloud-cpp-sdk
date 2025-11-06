// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddGatewaySlbRequestVServiceList.hpp>
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
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->httpPort_ == nullptr && return this->httpsPort_ == nullptr && return this->httpsVServerGroupId_ == nullptr && return this->serviceWeight_ == nullptr
        && return this->slbId_ == nullptr && return this->type_ == nullptr && return this->VServerGroupId_ == nullptr && return this->VServiceList_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewaySlbRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewaySlbRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int32_t httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
    inline AddGatewaySlbRequest& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // httpsPort Field Functions 
    bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
    void deleteHttpsPort() { this->httpsPort_ = nullptr;};
    inline int32_t httpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, 0) };
    inline AddGatewaySlbRequest& setHttpsPort(int32_t httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


    // httpsVServerGroupId Field Functions 
    bool hasHttpsVServerGroupId() const { return this->httpsVServerGroupId_ != nullptr;};
    void deleteHttpsVServerGroupId() { this->httpsVServerGroupId_ = nullptr;};
    inline string httpsVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(httpsVServerGroupId_, "") };
    inline AddGatewaySlbRequest& setHttpsVServerGroupId(string httpsVServerGroupId) { DARABONBA_PTR_SET_VALUE(httpsVServerGroupId_, httpsVServerGroupId) };


    // serviceWeight Field Functions 
    bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
    void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
    inline int32_t serviceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0) };
    inline AddGatewaySlbRequest& setServiceWeight(int32_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline AddGatewaySlbRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGatewaySlbRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline AddGatewaySlbRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServiceList Field Functions 
    bool hasVServiceList() const { return this->VServiceList_ != nullptr;};
    void deleteVServiceList() { this->VServiceList_ = nullptr;};
    inline const vector<AddGatewaySlbRequestVServiceList> & VServiceList() const { DARABONBA_PTR_GET_CONST(VServiceList_, vector<AddGatewaySlbRequestVServiceList>) };
    inline vector<AddGatewaySlbRequestVServiceList> VServiceList() { DARABONBA_PTR_GET(VServiceList_, vector<AddGatewaySlbRequestVServiceList>) };
    inline AddGatewaySlbRequest& setVServiceList(const vector<AddGatewaySlbRequestVServiceList> & VServiceList) { DARABONBA_PTR_SET_VALUE(VServiceList_, VServiceList) };
    inline AddGatewaySlbRequest& setVServiceList(vector<AddGatewaySlbRequestVServiceList> && VServiceList) { DARABONBA_PTR_SET_RVALUE(VServiceList_, VServiceList) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The HTTP port number (virtual service group).
    std::shared_ptr<int32_t> httpPort_ = nullptr;
    // The HTTPS port number (virtual service group).
    std::shared_ptr<int32_t> httpsPort_ = nullptr;
    // The ID of the HTTPS virtual service group.
    std::shared_ptr<string> httpsVServerGroupId_ = nullptr;
    // The service weight.
    std::shared_ptr<int32_t> serviceWeight_ = nullptr;
    // The ID of the SLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> slbId_ = nullptr;
    // The type of the service source. Valid values:
    // 
    // *   PUB_NET: Internet
    // *   PRIVATE_NET: VPC
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the HTTP virtual service group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The SLB monitoring information.
    std::shared_ptr<vector<AddGatewaySlbRequestVServiceList>> VServiceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
