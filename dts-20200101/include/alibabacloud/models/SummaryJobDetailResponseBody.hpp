// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMMARYJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUMMARYJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SummaryJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SummaryJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ProgressSummaryDetails, progressSummaryDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SummaryJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ProgressSummaryDetails, progressSummaryDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SummaryJobDetailResponseBody() = default ;
    SummaryJobDetailResponseBody(const SummaryJobDetailResponseBody &) = default ;
    SummaryJobDetailResponseBody(SummaryJobDetailResponseBody &&) = default ;
    SummaryJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SummaryJobDetailResponseBody() = default ;
    SummaryJobDetailResponseBody& operator=(const SummaryJobDetailResponseBody &) = default ;
    SummaryJobDetailResponseBody& operator=(SummaryJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProgressSummaryDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProgressSummaryDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ProgressSummaryDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ProgressSummaryDetails() = default ;
      ProgressSummaryDetails(const ProgressSummaryDetails &) = default ;
      ProgressSummaryDetails(ProgressSummaryDetails &&) = default ;
      ProgressSummaryDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProgressSummaryDetails() = default ;
      ProgressSummaryDetails& operator=(const ProgressSummaryDetails &) = default ;
      ProgressSummaryDetails& operator=(ProgressSummaryDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->state_ == nullptr && this->totalCount_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ProgressSummaryDetails& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
      inline ProgressSummaryDetails& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ProgressSummaryDetails& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The type of migrated or synchronized object. Valid values: **Table**, **Constraint**, **Index**, **View**, **Materialize View**, **Type**, **Synonym**, **Trigger**, **Function**, **Procedure**, **Package**, **Default**, **Rule**, **PlanGuide**, and **Sequence**.
      shared_ptr<string> key_ {};
      // The state of the data migration or data synchronization task. Valid values:
      // 
      // *   **0**: The task was complete.
      // *   **1**: The task was waiting to start.
      // *   **2**: The task was being initialized.
      // *   **3**: The task was in progress.
      // *   **4**: An error occurred.
      // *   **5**: The task failed.
      shared_ptr<int32_t> state_ {};
      // The total number of migrated or synchronized objects.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->jobId_ == nullptr && this->progressSummaryDetails_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SummaryJobDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SummaryJobDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SummaryJobDetailResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // progressSummaryDetails Field Functions 
    bool hasProgressSummaryDetails() const { return this->progressSummaryDetails_ != nullptr;};
    void deleteProgressSummaryDetails() { this->progressSummaryDetails_ = nullptr;};
    inline const vector<SummaryJobDetailResponseBody::ProgressSummaryDetails> & getProgressSummaryDetails() const { DARABONBA_PTR_GET_CONST(progressSummaryDetails_, vector<SummaryJobDetailResponseBody::ProgressSummaryDetails>) };
    inline vector<SummaryJobDetailResponseBody::ProgressSummaryDetails> getProgressSummaryDetails() { DARABONBA_PTR_GET(progressSummaryDetails_, vector<SummaryJobDetailResponseBody::ProgressSummaryDetails>) };
    inline SummaryJobDetailResponseBody& setProgressSummaryDetails(const vector<SummaryJobDetailResponseBody::ProgressSummaryDetails> & progressSummaryDetails) { DARABONBA_PTR_SET_VALUE(progressSummaryDetails_, progressSummaryDetails) };
    inline SummaryJobDetailResponseBody& setProgressSummaryDetails(vector<SummaryJobDetailResponseBody::ProgressSummaryDetails> && progressSummaryDetails) { DARABONBA_PTR_SET_RVALUE(progressSummaryDetails_, progressSummaryDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SummaryJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SummaryJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the data migration or data synchronization task.
    shared_ptr<string> jobId_ {};
    // The returned information about the migrated or synchronized objects in arrays.
    // 
    // >  The arrays are in the following format: [{"key":"Function","state":5,"totalCount":22},{"key":"Procedure","state":5,"totalCount":26},{"key":"Table","state":0,"totalCount":68},{"key":"View","state":5,"totalCount":100}].
    shared_ptr<vector<SummaryJobDetailResponseBody::ProgressSummaryDetails>> progressSummaryDetails_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
