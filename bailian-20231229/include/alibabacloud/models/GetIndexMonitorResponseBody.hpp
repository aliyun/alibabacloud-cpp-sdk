// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetIndexMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetIndexMonitorResponseBody() = default ;
    GetIndexMonitorResponseBody(const GetIndexMonitorResponseBody &) = default ;
    GetIndexMonitorResponseBody(GetIndexMonitorResponseBody &&) = default ;
    GetIndexMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexMonitorResponseBody() = default ;
    GetIndexMonitorResponseBody& operator=(const GetIndexMonitorResponseBody &) = default ;
    GetIndexMonitorResponseBody& operator=(GetIndexMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIndexMonitorResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline GetIndexMonitorResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline GetIndexMonitorResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIndexMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIndexMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetIndexMonitorResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIndexMonitorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The core data object of the response.
    // 
    // **pipelineCommercialType** (String): The edition of the knowledge base.
    // 
    // - standard: Standard Edition
    // 
    // - enterprise: Ultimate Edition
    // 
    // **storageMonitorData** (Object): The storage monitoring data of the knowledge base.
    // 
    // - indexStorageLimit (Number): The index storage limit of the knowledge base, in GB.
    // 
    // - indexStorageUsage (Number): The current index storage usage of the knowledge base, in GB.
    // 
    // **pipelineCommercialCu** (Integer): The number of RCU for the Ultimate Edition knowledge base. For example: 2.
    // 
    // **qpsMonitorData** (Object): The aggregated retrieval monitoring data for the knowledge base over the entire query period.
    // 
    // - peakQps (Integer): The peak QPS over the entire time period.
    // 
    // - totalRequests (Integer): The total number of requests over the entire time period.
    // 
    // - avgQpsOfActiveSeconds (Number): The average QPS during active seconds over the entire time period. Active seconds are seconds in which calls were made.
    // 
    // - monitorData (Array): An array of detailed monitoring data broken down by time window. Each object in the array represents the performance statistics for a single time window.
    // 
    //   <details>
    // 
    //   <summary>
    // 
    //   Sub-properties
    // 
    //   </summary>
    // 
    //   - successData (Object): The statistics for successful requests within this window.
    // 
    //   - limitData (Object): The statistics for rate-limited requests within this window.
    // 
    //   - failData (Object): The statistics for failed calls within this window.
    // 
    //   - peakQpsInWindowRange (Integer): The total peak QPS within this window (successful + rate-limited + failed).
    // 
    //   - totalRequests (Integer): The total number of requests within this window (successful + rate-limited + failed).
    // 
    //   - windowRange (Integer): The start time of the time window (UNIX timestamp in seconds).
    // 
    //   - windowRangeEnd (Integer): The end time of the time window (UNIX timestamp in seconds).
    // 
    //   - avgQpsOfActiveSeconds (Number): The average QPS during active seconds within this window.
    // 
    //   **The successData, limitData, and failData objects have the same internal structure, as described below:**
    // 
    //   - peakQpsInWindowRange (Integer): The peak QPS for the corresponding status.
    // 
    //   - totalRequests (Integer): The total number of requests for the corresponding status.
    // 
    //   - avgQpsOfActiveSeconds (Number): The average QPS during active seconds for the corresponding status.
    // 
    //   </details>
    Darabonba::Json data_ {};
    // The status message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status code returned by the operation.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
