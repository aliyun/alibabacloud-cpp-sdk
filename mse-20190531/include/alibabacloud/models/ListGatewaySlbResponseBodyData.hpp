// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSLBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSLBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewaySlbResponseBodyDataVServiceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewaySlbResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaySlbResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EditEnable, editEnable_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewaySlbMode, gatewaySlbMode_);
      DARABONBA_PTR_TO_JSON(GatewaySlbStatus, gatewaySlbStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_TO_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_TO_JSON(HttpsVServerGroupId, httpsVServerGroupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ServiceWeight, serviceWeight_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_TO_JSON(SlbType, slbType_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServiceList, VServiceList_);
      DARABONBA_PTR_TO_JSON(VsMetaInfo, vsMetaInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaySlbResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EditEnable, editEnable_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewaySlbMode, gatewaySlbMode_);
      DARABONBA_PTR_FROM_JSON(GatewaySlbStatus, gatewaySlbStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_FROM_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_FROM_JSON(HttpsVServerGroupId, httpsVServerGroupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ServiceWeight, serviceWeight_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
      DARABONBA_PTR_FROM_JSON(SlbType, slbType_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServiceList, VServiceList_);
      DARABONBA_PTR_FROM_JSON(VsMetaInfo, vsMetaInfo_);
    };
    ListGatewaySlbResponseBodyData() = default ;
    ListGatewaySlbResponseBodyData(const ListGatewaySlbResponseBodyData &) = default ;
    ListGatewaySlbResponseBodyData(ListGatewaySlbResponseBodyData &&) = default ;
    ListGatewaySlbResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaySlbResponseBodyData() = default ;
    ListGatewaySlbResponseBodyData& operator=(const ListGatewaySlbResponseBodyData &) = default ;
    ListGatewaySlbResponseBodyData& operator=(ListGatewaySlbResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->editEnable_ != nullptr
        && this->gatewayId_ != nullptr && this->gatewaySlbMode_ != nullptr && this->gatewaySlbStatus_ != nullptr && this->gmtCreate_ != nullptr && this->httpPort_ != nullptr
        && this->httpsPort_ != nullptr && this->httpsVServerGroupId_ != nullptr && this->id_ != nullptr && this->serviceWeight_ != nullptr && this->slbId_ != nullptr
        && this->slbIp_ != nullptr && this->slbPort_ != nullptr && this->slbType_ != nullptr && this->statusDesc_ != nullptr && this->type_ != nullptr
        && this->VServerGroupId_ != nullptr && this->VServiceList_ != nullptr && this->vsMetaInfo_ != nullptr; };
    // editEnable Field Functions 
    bool hasEditEnable() const { return this->editEnable_ != nullptr;};
    void deleteEditEnable() { this->editEnable_ = nullptr;};
    inline bool editEnable() const { DARABONBA_PTR_GET_DEFAULT(editEnable_, false) };
    inline ListGatewaySlbResponseBodyData& setEditEnable(bool editEnable) { DARABONBA_PTR_SET_VALUE(editEnable_, editEnable) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewaySlbResponseBodyData& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewaySlbMode Field Functions 
    bool hasGatewaySlbMode() const { return this->gatewaySlbMode_ != nullptr;};
    void deleteGatewaySlbMode() { this->gatewaySlbMode_ = nullptr;};
    inline string gatewaySlbMode() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbMode_, "") };
    inline ListGatewaySlbResponseBodyData& setGatewaySlbMode(string gatewaySlbMode) { DARABONBA_PTR_SET_VALUE(gatewaySlbMode_, gatewaySlbMode) };


    // gatewaySlbStatus Field Functions 
    bool hasGatewaySlbStatus() const { return this->gatewaySlbStatus_ != nullptr;};
    void deleteGatewaySlbStatus() { this->gatewaySlbStatus_ = nullptr;};
    inline string gatewaySlbStatus() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbStatus_, "") };
    inline ListGatewaySlbResponseBodyData& setGatewaySlbStatus(string gatewaySlbStatus) { DARABONBA_PTR_SET_VALUE(gatewaySlbStatus_, gatewaySlbStatus) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListGatewaySlbResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int32_t httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
    inline ListGatewaySlbResponseBodyData& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // httpsPort Field Functions 
    bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
    void deleteHttpsPort() { this->httpsPort_ = nullptr;};
    inline int32_t httpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, 0) };
    inline ListGatewaySlbResponseBodyData& setHttpsPort(int32_t httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


    // httpsVServerGroupId Field Functions 
    bool hasHttpsVServerGroupId() const { return this->httpsVServerGroupId_ != nullptr;};
    void deleteHttpsVServerGroupId() { this->httpsVServerGroupId_ = nullptr;};
    inline string httpsVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(httpsVServerGroupId_, "") };
    inline ListGatewaySlbResponseBodyData& setHttpsVServerGroupId(string httpsVServerGroupId) { DARABONBA_PTR_SET_VALUE(httpsVServerGroupId_, httpsVServerGroupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListGatewaySlbResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // serviceWeight Field Functions 
    bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
    void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
    inline int32_t serviceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0) };
    inline ListGatewaySlbResponseBodyData& setServiceWeight(int32_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline ListGatewaySlbResponseBodyData& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbIp Field Functions 
    bool hasSlbIp() const { return this->slbIp_ != nullptr;};
    void deleteSlbIp() { this->slbIp_ = nullptr;};
    inline string slbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
    inline ListGatewaySlbResponseBodyData& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


    // slbPort Field Functions 
    bool hasSlbPort() const { return this->slbPort_ != nullptr;};
    void deleteSlbPort() { this->slbPort_ = nullptr;};
    inline string slbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, "") };
    inline ListGatewaySlbResponseBodyData& setSlbPort(string slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


    // slbType Field Functions 
    bool hasSlbType() const { return this->slbType_ != nullptr;};
    void deleteSlbType() { this->slbType_ = nullptr;};
    inline string slbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
    inline ListGatewaySlbResponseBodyData& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListGatewaySlbResponseBodyData& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewaySlbResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline ListGatewaySlbResponseBodyData& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServiceList Field Functions 
    bool hasVServiceList() const { return this->VServiceList_ != nullptr;};
    void deleteVServiceList() { this->VServiceList_ = nullptr;};
    inline const vector<Models::ListGatewaySlbResponseBodyDataVServiceList> & VServiceList() const { DARABONBA_PTR_GET_CONST(VServiceList_, vector<Models::ListGatewaySlbResponseBodyDataVServiceList>) };
    inline vector<Models::ListGatewaySlbResponseBodyDataVServiceList> VServiceList() { DARABONBA_PTR_GET(VServiceList_, vector<Models::ListGatewaySlbResponseBodyDataVServiceList>) };
    inline ListGatewaySlbResponseBodyData& setVServiceList(const vector<Models::ListGatewaySlbResponseBodyDataVServiceList> & VServiceList) { DARABONBA_PTR_SET_VALUE(VServiceList_, VServiceList) };
    inline ListGatewaySlbResponseBodyData& setVServiceList(vector<Models::ListGatewaySlbResponseBodyDataVServiceList> && VServiceList) { DARABONBA_PTR_SET_RVALUE(VServiceList_, VServiceList) };


    // vsMetaInfo Field Functions 
    bool hasVsMetaInfo() const { return this->vsMetaInfo_ != nullptr;};
    void deleteVsMetaInfo() { this->vsMetaInfo_ = nullptr;};
    inline string vsMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(vsMetaInfo_, "") };
    inline ListGatewaySlbResponseBodyData& setVsMetaInfo(string vsMetaInfo) { DARABONBA_PTR_SET_VALUE(vsMetaInfo_, vsMetaInfo) };


  protected:
    // Indicates whether the edit operation is supported.
    std::shared_ptr<bool> editEnable_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The mode of the SLB instance.
    std::shared_ptr<string> gatewaySlbMode_ = nullptr;
    // The association status.
    std::shared_ptr<string> gatewaySlbStatus_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The port number of the HTTP virtual service group.
    std::shared_ptr<int32_t> httpPort_ = nullptr;
    // The port number of the HTTPS virtual service group.
    std::shared_ptr<int32_t> httpsPort_ = nullptr;
    // The ID of the HTTPS virtual service group.
    std::shared_ptr<string> httpsVServerGroupId_ = nullptr;
    // The ID.
    std::shared_ptr<string> id_ = nullptr;
    // The service weight.
    std::shared_ptr<int32_t> serviceWeight_ = nullptr;
    // The ID of the SLB instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The IP address of the SLB instance.
    std::shared_ptr<string> slbIp_ = nullptr;
    // The port number of the SLB instance.
    std::shared_ptr<string> slbPort_ = nullptr;
    std::shared_ptr<string> slbType_ = nullptr;
    // The description of the status.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The type.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the HTTP virtual service group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    std::shared_ptr<vector<Models::ListGatewaySlbResponseBodyDataVServiceList>> VServiceList_ = nullptr;
    std::shared_ptr<string> vsMetaInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
