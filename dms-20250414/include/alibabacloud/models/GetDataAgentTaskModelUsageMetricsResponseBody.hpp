// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAAGENTTASKMODELUSAGEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAAGENTTASKMODELUSAGEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetDataAgentTaskModelUsageMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataAgentTaskModelUsageMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataAgentTaskModelUsageMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataAgentTaskModelUsageMetricsResponseBody() = default ;
    GetDataAgentTaskModelUsageMetricsResponseBody(const GetDataAgentTaskModelUsageMetricsResponseBody &) = default ;
    GetDataAgentTaskModelUsageMetricsResponseBody(GetDataAgentTaskModelUsageMetricsResponseBody &&) = default ;
    GetDataAgentTaskModelUsageMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataAgentTaskModelUsageMetricsResponseBody() = default ;
    GetDataAgentTaskModelUsageMetricsResponseBody& operator=(const GetDataAgentTaskModelUsageMetricsResponseBody &) = default ;
    GetDataAgentTaskModelUsageMetricsResponseBody& operator=(GetDataAgentTaskModelUsageMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Tpm, tpm_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Tpm, tpm_);
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
      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->tpm_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Data& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // tpm Field Functions 
      bool hasTpm() const { return this->tpm_ != nullptr;};
      void deleteTpm() { this->tpm_ = nullptr;};
      inline int64_t getTpm() const { DARABONBA_PTR_GET_DEFAULT(tpm_, 0L) };
      inline Data& setTpm(int64_t tpm) { DARABONBA_PTR_SET_VALUE(tpm_, tpm) };


    protected:
      // The start time of the statistical interval for this time series point. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> beginTime_ {};
      // The end time of the statistical interval for this time series point. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> endTime_ {};
      // The TPM for this time series point, which is the number of tokens consumed within the statistical interval.
      shared_ptr<int64_t> tpm_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDataAgentTaskModelUsageMetricsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDataAgentTaskModelUsageMetricsResponseBody::Data>) };
    inline vector<GetDataAgentTaskModelUsageMetricsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetDataAgentTaskModelUsageMetricsResponseBody::Data>) };
    inline GetDataAgentTaskModelUsageMetricsResponseBody& setData(const vector<GetDataAgentTaskModelUsageMetricsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataAgentTaskModelUsageMetricsResponseBody& setData(vector<GetDataAgentTaskModelUsageMetricsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataAgentTaskModelUsageMetricsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataAgentTaskModelUsageMetricsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataAgentTaskModelUsageMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataAgentTaskModelUsageMetricsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of TPM time series metrics for model usage, returned in chronological order with usage at each time point.
    shared_ptr<vector<GetDataAgentTaskModelUsageMetricsResponseBody::Data>> data_ {};
    // The error code returned when the request is abnormal.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the call fails.
    shared_ptr<string> errorMessage_ {};
    // The request ID, which is used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
