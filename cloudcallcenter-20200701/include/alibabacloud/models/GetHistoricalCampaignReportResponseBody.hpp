// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORICALCAMPAIGNREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORICALCAMPAIGNREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class GetHistoricalCampaignReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoricalCampaignReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoricalCampaignReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHistoricalCampaignReportResponseBody() = default ;
    GetHistoricalCampaignReportResponseBody(const GetHistoricalCampaignReportResponseBody &) = default ;
    GetHistoricalCampaignReportResponseBody(GetHistoricalCampaignReportResponseBody &&) = default ;
    GetHistoricalCampaignReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoricalCampaignReportResponseBody() = default ;
    GetHistoricalCampaignReportResponseBody& operator=(const GetHistoricalCampaignReportResponseBody &) = default ;
    GetHistoricalCampaignReportResponseBody& operator=(GetHistoricalCampaignReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AbandonedRate, abandonedRate_);
        DARABONBA_PTR_TO_JSON(CallsAbandoned, callsAbandoned_);
        DARABONBA_PTR_TO_JSON(CallsConnected, callsConnected_);
        DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
        DARABONBA_PTR_TO_JSON(ConnectedRate, connectedRate_);
        DARABONBA_PTR_TO_JSON(OccupancyRate, occupancyRate_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AbandonedRate, abandonedRate_);
        DARABONBA_PTR_FROM_JSON(CallsAbandoned, callsAbandoned_);
        DARABONBA_PTR_FROM_JSON(CallsConnected, callsConnected_);
        DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
        DARABONBA_PTR_FROM_JSON(ConnectedRate, connectedRate_);
        DARABONBA_PTR_FROM_JSON(OccupancyRate, occupancyRate_);
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
      virtual bool empty() const override { return this->abandonedRate_ == nullptr
        && this->callsAbandoned_ == nullptr && this->callsConnected_ == nullptr && this->callsDialed_ == nullptr && this->connectedRate_ == nullptr && this->occupancyRate_ == nullptr; };
      // abandonedRate Field Functions 
      bool hasAbandonedRate() const { return this->abandonedRate_ != nullptr;};
      void deleteAbandonedRate() { this->abandonedRate_ = nullptr;};
      inline float getAbandonedRate() const { DARABONBA_PTR_GET_DEFAULT(abandonedRate_, 0.0) };
      inline Data& setAbandonedRate(float abandonedRate) { DARABONBA_PTR_SET_VALUE(abandonedRate_, abandonedRate) };


      // callsAbandoned Field Functions 
      bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
      void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
      inline int64_t getCallsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
      inline Data& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


      // callsConnected Field Functions 
      bool hasCallsConnected() const { return this->callsConnected_ != nullptr;};
      void deleteCallsConnected() { this->callsConnected_ = nullptr;};
      inline int64_t getCallsConnected() const { DARABONBA_PTR_GET_DEFAULT(callsConnected_, 0L) };
      inline Data& setCallsConnected(int64_t callsConnected) { DARABONBA_PTR_SET_VALUE(callsConnected_, callsConnected) };


      // callsDialed Field Functions 
      bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
      void deleteCallsDialed() { this->callsDialed_ = nullptr;};
      inline int64_t getCallsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
      inline Data& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


      // connectedRate Field Functions 
      bool hasConnectedRate() const { return this->connectedRate_ != nullptr;};
      void deleteConnectedRate() { this->connectedRate_ = nullptr;};
      inline float getConnectedRate() const { DARABONBA_PTR_GET_DEFAULT(connectedRate_, 0.0) };
      inline Data& setConnectedRate(float connectedRate) { DARABONBA_PTR_SET_VALUE(connectedRate_, connectedRate) };


      // occupancyRate Field Functions 
      bool hasOccupancyRate() const { return this->occupancyRate_ != nullptr;};
      void deleteOccupancyRate() { this->occupancyRate_ = nullptr;};
      inline float getOccupancyRate() const { DARABONBA_PTR_GET_DEFAULT(occupancyRate_, 0.0) };
      inline Data& setOccupancyRate(float occupancyRate) { DARABONBA_PTR_SET_VALUE(occupancyRate_, occupancyRate) };


    protected:
      shared_ptr<float> abandonedRate_ {};
      shared_ptr<int64_t> callsAbandoned_ {};
      shared_ptr<int64_t> callsConnected_ {};
      shared_ptr<int64_t> callsDialed_ {};
      shared_ptr<float> connectedRate_ {};
      shared_ptr<float> occupancyRate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHistoricalCampaignReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHistoricalCampaignReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHistoricalCampaignReportResponseBody::Data) };
    inline GetHistoricalCampaignReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHistoricalCampaignReportResponseBody::Data) };
    inline GetHistoricalCampaignReportResponseBody& setData(const GetHistoricalCampaignReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHistoricalCampaignReportResponseBody& setData(GetHistoricalCampaignReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHistoricalCampaignReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHistoricalCampaignReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHistoricalCampaignReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHistoricalCampaignReportResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
