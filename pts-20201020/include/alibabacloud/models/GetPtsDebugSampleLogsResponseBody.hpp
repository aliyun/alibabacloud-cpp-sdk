// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSDEBUGSAMPLELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPTSDEBUGSAMPLELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsDebugSampleLogsResponseBodySamplingLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsDebugSampleLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsDebugSampleLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SamplingLogs, samplingLogs_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsDebugSampleLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SamplingLogs, samplingLogs_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetPtsDebugSampleLogsResponseBody() = default ;
    GetPtsDebugSampleLogsResponseBody(const GetPtsDebugSampleLogsResponseBody &) = default ;
    GetPtsDebugSampleLogsResponseBody(GetPtsDebugSampleLogsResponseBody &&) = default ;
    GetPtsDebugSampleLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsDebugSampleLogsResponseBody() = default ;
    GetPtsDebugSampleLogsResponseBody& operator=(const GetPtsDebugSampleLogsResponseBody &) = default ;
    GetPtsDebugSampleLogsResponseBody& operator=(GetPtsDebugSampleLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->samplingLogs_ == nullptr
        && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPtsDebugSampleLogsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPtsDebugSampleLogsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetPtsDebugSampleLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetPtsDebugSampleLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPtsDebugSampleLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samplingLogs Field Functions 
    bool hasSamplingLogs() const { return this->samplingLogs_ != nullptr;};
    void deleteSamplingLogs() { this->samplingLogs_ = nullptr;};
    inline const vector<GetPtsDebugSampleLogsResponseBodySamplingLogs> & samplingLogs() const { DARABONBA_PTR_GET_CONST(samplingLogs_, vector<GetPtsDebugSampleLogsResponseBodySamplingLogs>) };
    inline vector<GetPtsDebugSampleLogsResponseBodySamplingLogs> samplingLogs() { DARABONBA_PTR_GET(samplingLogs_, vector<GetPtsDebugSampleLogsResponseBodySamplingLogs>) };
    inline GetPtsDebugSampleLogsResponseBody& setSamplingLogs(const vector<GetPtsDebugSampleLogsResponseBodySamplingLogs> & samplingLogs) { DARABONBA_PTR_SET_VALUE(samplingLogs_, samplingLogs) };
    inline GetPtsDebugSampleLogsResponseBody& setSamplingLogs(vector<GetPtsDebugSampleLogsResponseBodySamplingLogs> && samplingLogs) { DARABONBA_PTR_SET_RVALUE(samplingLogs_, samplingLogs) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPtsDebugSampleLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetPtsDebugSampleLogsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The system status code. If the operation is successful, this parameter is not returned.
    std::shared_ptr<string> code_ = nullptr;
    // The error message. If the operation is successful, this parameter is not returned.
    std::shared_ptr<string> message_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sampling logs.
    std::shared_ptr<vector<GetPtsDebugSampleLogsResponseBodySamplingLogs>> samplingLogs_ = nullptr;
    // Indicates whether the operation is successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
