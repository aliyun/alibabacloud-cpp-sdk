// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAAGENTTASKMODELUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAAGENTTASKMODELUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetDataAgentTaskModelUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataAgentTaskModelUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataAgentTaskModelUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataAgentTaskModelUsageResponseBody() = default ;
    GetDataAgentTaskModelUsageResponseBody(const GetDataAgentTaskModelUsageResponseBody &) = default ;
    GetDataAgentTaskModelUsageResponseBody(GetDataAgentTaskModelUsageResponseBody &&) = default ;
    GetDataAgentTaskModelUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataAgentTaskModelUsageResponseBody() = default ;
    GetDataAgentTaskModelUsageResponseBody& operator=(const GetDataAgentTaskModelUsageResponseBody &) = default ;
    GetDataAgentTaskModelUsageResponseBody& operator=(GetDataAgentTaskModelUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccelerationRatio, accelerationRatio_);
        DARABONBA_PTR_TO_JSON(RateLimitedSessionCount, rateLimitedSessionCount_);
        DARABONBA_PTR_TO_JSON(TotalLlmWaitDuration, totalLlmWaitDuration_);
        DARABONBA_PTR_TO_JSON(TotalSessionCount, totalSessionCount_);
        DARABONBA_PTR_TO_JSON(peakTpm, peakTpm_);
        DARABONBA_PTR_TO_JSON(totalCallCount, totalCallCount_);
        DARABONBA_PTR_TO_JSON(totalTokenConsumed, totalTokenConsumed_);
        DARABONBA_PTR_TO_JSON(usedModels, usedModels_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccelerationRatio, accelerationRatio_);
        DARABONBA_PTR_FROM_JSON(RateLimitedSessionCount, rateLimitedSessionCount_);
        DARABONBA_PTR_FROM_JSON(TotalLlmWaitDuration, totalLlmWaitDuration_);
        DARABONBA_PTR_FROM_JSON(TotalSessionCount, totalSessionCount_);
        DARABONBA_PTR_FROM_JSON(peakTpm, peakTpm_);
        DARABONBA_PTR_FROM_JSON(totalCallCount, totalCallCount_);
        DARABONBA_PTR_FROM_JSON(totalTokenConsumed, totalTokenConsumed_);
        DARABONBA_PTR_FROM_JSON(usedModels, usedModels_);
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
      virtual bool empty() const override { return this->accelerationRatio_ == nullptr
        && this->rateLimitedSessionCount_ == nullptr && this->totalLlmWaitDuration_ == nullptr && this->totalSessionCount_ == nullptr && this->peakTpm_ == nullptr && this->totalCallCount_ == nullptr
        && this->totalTokenConsumed_ == nullptr && this->usedModels_ == nullptr; };
      // accelerationRatio Field Functions 
      bool hasAccelerationRatio() const { return this->accelerationRatio_ != nullptr;};
      void deleteAccelerationRatio() { this->accelerationRatio_ = nullptr;};
      inline double getAccelerationRatio() const { DARABONBA_PTR_GET_DEFAULT(accelerationRatio_, 0.0) };
      inline Data& setAccelerationRatio(double accelerationRatio) { DARABONBA_PTR_SET_VALUE(accelerationRatio_, accelerationRatio) };


      // rateLimitedSessionCount Field Functions 
      bool hasRateLimitedSessionCount() const { return this->rateLimitedSessionCount_ != nullptr;};
      void deleteRateLimitedSessionCount() { this->rateLimitedSessionCount_ = nullptr;};
      inline int64_t getRateLimitedSessionCount() const { DARABONBA_PTR_GET_DEFAULT(rateLimitedSessionCount_, 0L) };
      inline Data& setRateLimitedSessionCount(int64_t rateLimitedSessionCount) { DARABONBA_PTR_SET_VALUE(rateLimitedSessionCount_, rateLimitedSessionCount) };


      // totalLlmWaitDuration Field Functions 
      bool hasTotalLlmWaitDuration() const { return this->totalLlmWaitDuration_ != nullptr;};
      void deleteTotalLlmWaitDuration() { this->totalLlmWaitDuration_ = nullptr;};
      inline double getTotalLlmWaitDuration() const { DARABONBA_PTR_GET_DEFAULT(totalLlmWaitDuration_, 0.0) };
      inline Data& setTotalLlmWaitDuration(double totalLlmWaitDuration) { DARABONBA_PTR_SET_VALUE(totalLlmWaitDuration_, totalLlmWaitDuration) };


      // totalSessionCount Field Functions 
      bool hasTotalSessionCount() const { return this->totalSessionCount_ != nullptr;};
      void deleteTotalSessionCount() { this->totalSessionCount_ = nullptr;};
      inline int64_t getTotalSessionCount() const { DARABONBA_PTR_GET_DEFAULT(totalSessionCount_, 0L) };
      inline Data& setTotalSessionCount(int64_t totalSessionCount) { DARABONBA_PTR_SET_VALUE(totalSessionCount_, totalSessionCount) };


      // peakTpm Field Functions 
      bool hasPeakTpm() const { return this->peakTpm_ != nullptr;};
      void deletePeakTpm() { this->peakTpm_ = nullptr;};
      inline int64_t getPeakTpm() const { DARABONBA_PTR_GET_DEFAULT(peakTpm_, 0L) };
      inline Data& setPeakTpm(int64_t peakTpm) { DARABONBA_PTR_SET_VALUE(peakTpm_, peakTpm) };


      // totalCallCount Field Functions 
      bool hasTotalCallCount() const { return this->totalCallCount_ != nullptr;};
      void deleteTotalCallCount() { this->totalCallCount_ = nullptr;};
      inline int64_t getTotalCallCount() const { DARABONBA_PTR_GET_DEFAULT(totalCallCount_, 0L) };
      inline Data& setTotalCallCount(int64_t totalCallCount) { DARABONBA_PTR_SET_VALUE(totalCallCount_, totalCallCount) };


      // totalTokenConsumed Field Functions 
      bool hasTotalTokenConsumed() const { return this->totalTokenConsumed_ != nullptr;};
      void deleteTotalTokenConsumed() { this->totalTokenConsumed_ = nullptr;};
      inline int64_t getTotalTokenConsumed() const { DARABONBA_PTR_GET_DEFAULT(totalTokenConsumed_, 0L) };
      inline Data& setTotalTokenConsumed(int64_t totalTokenConsumed) { DARABONBA_PTR_SET_VALUE(totalTokenConsumed_, totalTokenConsumed) };


      // usedModels Field Functions 
      bool hasUsedModels() const { return this->usedModels_ != nullptr;};
      void deleteUsedModels() { this->usedModels_ = nullptr;};
      inline int64_t getUsedModels() const { DARABONBA_PTR_GET_DEFAULT(usedModels_, 0L) };
      inline Data& setUsedModels(int64_t usedModels) { DARABONBA_PTR_SET_VALUE(usedModels_, usedModels) };


    protected:
      shared_ptr<double> accelerationRatio_ {};
      shared_ptr<int64_t> rateLimitedSessionCount_ {};
      shared_ptr<double> totalLlmWaitDuration_ {};
      shared_ptr<int64_t> totalSessionCount_ {};
      // The peak TPM (tokens per minute) within the query time range, which is the maximum number of tokens consumed per minute.
      shared_ptr<int64_t> peakTpm_ {};
      // The total number of model calls within the query time range.
      shared_ptr<int64_t> totalCallCount_ {};
      // The total number of tokens consumed within the query time range.
      shared_ptr<int64_t> totalTokenConsumed_ {};
      // The number of models used within the query time range.
      shared_ptr<int64_t> usedModels_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataAgentTaskModelUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataAgentTaskModelUsageResponseBody::Data) };
    inline GetDataAgentTaskModelUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataAgentTaskModelUsageResponseBody::Data) };
    inline GetDataAgentTaskModelUsageResponseBody& setData(const GetDataAgentTaskModelUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataAgentTaskModelUsageResponseBody& setData(GetDataAgentTaskModelUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataAgentTaskModelUsageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataAgentTaskModelUsageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataAgentTaskModelUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDataAgentTaskModelUsageResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The summary data of model usage for DataAgent analysis tasks.
    shared_ptr<GetDataAgentTaskModelUsageResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID, which is used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
