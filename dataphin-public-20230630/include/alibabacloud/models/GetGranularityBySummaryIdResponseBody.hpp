// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRANULARITYBYSUMMARYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRANULARITYBYSUMMARYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetGranularityBySummaryIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGranularityBySummaryIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetGranularityBySummaryIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetGranularityBySummaryIdResponseBody() = default ;
    GetGranularityBySummaryIdResponseBody(const GetGranularityBySummaryIdResponseBody &) = default ;
    GetGranularityBySummaryIdResponseBody(GetGranularityBySummaryIdResponseBody &&) = default ;
    GetGranularityBySummaryIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGranularityBySummaryIdResponseBody() = default ;
    GetGranularityBySummaryIdResponseBody& operator=(const GetGranularityBySummaryIdResponseBody &) = default ;
    GetGranularityBySummaryIdResponseBody& operator=(GetGranularityBySummaryIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DimIds, dimIds_);
        DARABONBA_PTR_TO_JSON(GranularityId, granularityId_);
        DARABONBA_PTR_TO_JSON(SummaryId, summaryId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DimIds, dimIds_);
        DARABONBA_PTR_FROM_JSON(GranularityId, granularityId_);
        DARABONBA_PTR_FROM_JSON(SummaryId, summaryId_);
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
      virtual bool empty() const override { return this->dimIds_ == nullptr
        && this->granularityId_ == nullptr && this->summaryId_ == nullptr; };
      // dimIds Field Functions 
      bool hasDimIds() const { return this->dimIds_ != nullptr;};
      void deleteDimIds() { this->dimIds_ = nullptr;};
      inline const vector<int64_t> & getDimIds() const { DARABONBA_PTR_GET_CONST(dimIds_, vector<int64_t>) };
      inline vector<int64_t> getDimIds() { DARABONBA_PTR_GET(dimIds_, vector<int64_t>) };
      inline Data& setDimIds(const vector<int64_t> & dimIds) { DARABONBA_PTR_SET_VALUE(dimIds_, dimIds) };
      inline Data& setDimIds(vector<int64_t> && dimIds) { DARABONBA_PTR_SET_RVALUE(dimIds_, dimIds) };


      // granularityId Field Functions 
      bool hasGranularityId() const { return this->granularityId_ != nullptr;};
      void deleteGranularityId() { this->granularityId_ = nullptr;};
      inline int64_t getGranularityId() const { DARABONBA_PTR_GET_DEFAULT(granularityId_, 0L) };
      inline Data& setGranularityId(int64_t granularityId) { DARABONBA_PTR_SET_VALUE(granularityId_, granularityId) };


      // summaryId Field Functions 
      bool hasSummaryId() const { return this->summaryId_ != nullptr;};
      void deleteSummaryId() { this->summaryId_ = nullptr;};
      inline int64_t getSummaryId() const { DARABONBA_PTR_GET_DEFAULT(summaryId_, 0L) };
      inline Data& setSummaryId(int64_t summaryId) { DARABONBA_PTR_SET_VALUE(summaryId_, summaryId) };


    protected:
      // DimIds
      shared_ptr<vector<int64_t>> dimIds_ {};
      // GranularityId
      shared_ptr<int64_t> granularityId_ {};
      // SummaryId
      shared_ptr<int64_t> summaryId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGranularityBySummaryIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGranularityBySummaryIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGranularityBySummaryIdResponseBody::Data) };
    inline GetGranularityBySummaryIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGranularityBySummaryIdResponseBody::Data) };
    inline GetGranularityBySummaryIdResponseBody& setData(const GetGranularityBySummaryIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGranularityBySummaryIdResponseBody& setData(GetGranularityBySummaryIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetGranularityBySummaryIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGranularityBySummaryIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGranularityBySummaryIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetGranularityBySummaryIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. OK indicates that the request is successful.
    shared_ptr<string> code_ {};
    // Data
    shared_ptr<GetGranularityBySummaryIdResponseBody::Data> data_ {};
    // The HTTP status code returned by the backend.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
