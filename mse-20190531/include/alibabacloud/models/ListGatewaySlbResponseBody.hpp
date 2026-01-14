// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSLBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSLBRESPONSEBODY_HPP_
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
  class ListGatewaySlbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaySlbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaySlbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGatewaySlbResponseBody() = default ;
    ListGatewaySlbResponseBody(const ListGatewaySlbResponseBody &) = default ;
    ListGatewaySlbResponseBody(ListGatewaySlbResponseBody &&) = default ;
    ListGatewaySlbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaySlbResponseBody() = default ;
    ListGatewaySlbResponseBody& operator=(const ListGatewaySlbResponseBody &) = default ;
    ListGatewaySlbResponseBody& operator=(ListGatewaySlbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline VServiceList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


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
        shared_ptr<string> port_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> VServerGroupId_ {};
        shared_ptr<string> VServerGroupName_ {};
      };

      virtual bool empty() const override { return this->editEnable_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewaySlbMode_ == nullptr && this->gatewaySlbStatus_ == nullptr && this->gmtCreate_ == nullptr && this->httpPort_ == nullptr
        && this->httpsPort_ == nullptr && this->httpsVServerGroupId_ == nullptr && this->id_ == nullptr && this->serviceWeight_ == nullptr && this->slbId_ == nullptr
        && this->slbIp_ == nullptr && this->slbPort_ == nullptr && this->slbType_ == nullptr && this->statusDesc_ == nullptr && this->type_ == nullptr
        && this->VServerGroupId_ == nullptr && this->VServiceList_ == nullptr && this->vsMetaInfo_ == nullptr; };
      // editEnable Field Functions 
      bool hasEditEnable() const { return this->editEnable_ != nullptr;};
      void deleteEditEnable() { this->editEnable_ = nullptr;};
      inline bool getEditEnable() const { DARABONBA_PTR_GET_DEFAULT(editEnable_, false) };
      inline Data& setEditEnable(bool editEnable) { DARABONBA_PTR_SET_VALUE(editEnable_, editEnable) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewaySlbMode Field Functions 
      bool hasGatewaySlbMode() const { return this->gatewaySlbMode_ != nullptr;};
      void deleteGatewaySlbMode() { this->gatewaySlbMode_ = nullptr;};
      inline string getGatewaySlbMode() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbMode_, "") };
      inline Data& setGatewaySlbMode(string gatewaySlbMode) { DARABONBA_PTR_SET_VALUE(gatewaySlbMode_, gatewaySlbMode) };


      // gatewaySlbStatus Field Functions 
      bool hasGatewaySlbStatus() const { return this->gatewaySlbStatus_ != nullptr;};
      void deleteGatewaySlbStatus() { this->gatewaySlbStatus_ = nullptr;};
      inline string getGatewaySlbStatus() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbStatus_, "") };
      inline Data& setGatewaySlbStatus(string gatewaySlbStatus) { DARABONBA_PTR_SET_VALUE(gatewaySlbStatus_, gatewaySlbStatus) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // httpPort Field Functions 
      bool hasHttpPort() const { return this->httpPort_ != nullptr;};
      void deleteHttpPort() { this->httpPort_ = nullptr;};
      inline int32_t getHttpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
      inline Data& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


      // httpsPort Field Functions 
      bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
      void deleteHttpsPort() { this->httpsPort_ = nullptr;};
      inline int32_t getHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, 0) };
      inline Data& setHttpsPort(int32_t httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


      // httpsVServerGroupId Field Functions 
      bool hasHttpsVServerGroupId() const { return this->httpsVServerGroupId_ != nullptr;};
      void deleteHttpsVServerGroupId() { this->httpsVServerGroupId_ = nullptr;};
      inline string getHttpsVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(httpsVServerGroupId_, "") };
      inline Data& setHttpsVServerGroupId(string httpsVServerGroupId) { DARABONBA_PTR_SET_VALUE(httpsVServerGroupId_, httpsVServerGroupId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // serviceWeight Field Functions 
      bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
      void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
      inline int32_t getServiceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0) };
      inline Data& setServiceWeight(int32_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


      // slbId Field Functions 
      bool hasSlbId() const { return this->slbId_ != nullptr;};
      void deleteSlbId() { this->slbId_ = nullptr;};
      inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
      inline Data& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


      // slbIp Field Functions 
      bool hasSlbIp() const { return this->slbIp_ != nullptr;};
      void deleteSlbIp() { this->slbIp_ = nullptr;};
      inline string getSlbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
      inline Data& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


      // slbPort Field Functions 
      bool hasSlbPort() const { return this->slbPort_ != nullptr;};
      void deleteSlbPort() { this->slbPort_ = nullptr;};
      inline string getSlbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, "") };
      inline Data& setSlbPort(string slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


      // slbType Field Functions 
      bool hasSlbType() const { return this->slbType_ != nullptr;};
      void deleteSlbType() { this->slbType_ = nullptr;};
      inline string getSlbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
      inline Data& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline Data& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // VServerGroupId Field Functions 
      bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
      void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
      inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
      inline Data& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


      // VServiceList Field Functions 
      bool hasVServiceList() const { return this->VServiceList_ != nullptr;};
      void deleteVServiceList() { this->VServiceList_ = nullptr;};
      inline const vector<Data::VServiceList> & getVServiceList() const { DARABONBA_PTR_GET_CONST(VServiceList_, vector<Data::VServiceList>) };
      inline vector<Data::VServiceList> getVServiceList() { DARABONBA_PTR_GET(VServiceList_, vector<Data::VServiceList>) };
      inline Data& setVServiceList(const vector<Data::VServiceList> & vServiceList) { DARABONBA_PTR_SET_VALUE(VServiceList_, vServiceList) };
      inline Data& setVServiceList(vector<Data::VServiceList> && vServiceList) { DARABONBA_PTR_SET_RVALUE(VServiceList_, vServiceList) };


      // vsMetaInfo Field Functions 
      bool hasVsMetaInfo() const { return this->vsMetaInfo_ != nullptr;};
      void deleteVsMetaInfo() { this->vsMetaInfo_ = nullptr;};
      inline string getVsMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(vsMetaInfo_, "") };
      inline Data& setVsMetaInfo(string vsMetaInfo) { DARABONBA_PTR_SET_VALUE(vsMetaInfo_, vsMetaInfo) };


    protected:
      // Indicates whether the edit operation is supported.
      shared_ptr<bool> editEnable_ {};
      // The ID of the gateway.
      shared_ptr<string> gatewayId_ {};
      // The mode of the SLB instance.
      shared_ptr<string> gatewaySlbMode_ {};
      // The association status.
      shared_ptr<string> gatewaySlbStatus_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The port number of the HTTP virtual service group.
      shared_ptr<int32_t> httpPort_ {};
      // The port number of the HTTPS virtual service group.
      shared_ptr<int32_t> httpsPort_ {};
      // The ID of the HTTPS virtual service group.
      shared_ptr<string> httpsVServerGroupId_ {};
      // The ID.
      shared_ptr<string> id_ {};
      // The service weight.
      shared_ptr<int32_t> serviceWeight_ {};
      // The ID of the SLB instance.
      shared_ptr<string> slbId_ {};
      // The IP address of the SLB instance.
      shared_ptr<string> slbIp_ {};
      // The port number of the SLB instance.
      shared_ptr<string> slbPort_ {};
      shared_ptr<string> slbType_ {};
      // The description of the status.
      shared_ptr<string> statusDesc_ {};
      // The type.
      shared_ptr<string> type_ {};
      // The ID of the HTTP virtual service group.
      shared_ptr<string> VServerGroupId_ {};
      shared_ptr<vector<Data::VServiceList>> VServiceList_ {};
      shared_ptr<string> vsMetaInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGatewaySlbResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListGatewaySlbResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListGatewaySlbResponseBody::Data>) };
    inline vector<ListGatewaySlbResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListGatewaySlbResponseBody::Data>) };
    inline ListGatewaySlbResponseBody& setData(const vector<ListGatewaySlbResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewaySlbResponseBody& setData(vector<ListGatewaySlbResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewaySlbResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewaySlbResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewaySlbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewaySlbResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The data entries returned.
    shared_ptr<vector<ListGatewaySlbResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
