// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADDOCUMENTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADDOCUMENTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUploadDocumentJobResponseBodyChunkResult.hpp>
#include <alibabacloud/models/GetUploadDocumentJobResponseBodyJob.hpp>
#include <alibabacloud/models/GetUploadDocumentJobResponseBodyUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetUploadDocumentJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadDocumentJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkResult, chunkResult_);
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadDocumentJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkResult, chunkResult_);
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    GetUploadDocumentJobResponseBody() = default ;
    GetUploadDocumentJobResponseBody(const GetUploadDocumentJobResponseBody &) = default ;
    GetUploadDocumentJobResponseBody(GetUploadDocumentJobResponseBody &&) = default ;
    GetUploadDocumentJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadDocumentJobResponseBody() = default ;
    GetUploadDocumentJobResponseBody& operator=(const GetUploadDocumentJobResponseBody &) = default ;
    GetUploadDocumentJobResponseBody& operator=(GetUploadDocumentJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkResult_ == nullptr
        && return this->job_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->usage_ == nullptr; };
    // chunkResult Field Functions 
    bool hasChunkResult() const { return this->chunkResult_ != nullptr;};
    void deleteChunkResult() { this->chunkResult_ = nullptr;};
    inline const GetUploadDocumentJobResponseBodyChunkResult & chunkResult() const { DARABONBA_PTR_GET_CONST(chunkResult_, GetUploadDocumentJobResponseBodyChunkResult) };
    inline GetUploadDocumentJobResponseBodyChunkResult chunkResult() { DARABONBA_PTR_GET(chunkResult_, GetUploadDocumentJobResponseBodyChunkResult) };
    inline GetUploadDocumentJobResponseBody& setChunkResult(const GetUploadDocumentJobResponseBodyChunkResult & chunkResult) { DARABONBA_PTR_SET_VALUE(chunkResult_, chunkResult) };
    inline GetUploadDocumentJobResponseBody& setChunkResult(GetUploadDocumentJobResponseBodyChunkResult && chunkResult) { DARABONBA_PTR_SET_RVALUE(chunkResult_, chunkResult) };


    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetUploadDocumentJobResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, GetUploadDocumentJobResponseBodyJob) };
    inline GetUploadDocumentJobResponseBodyJob job() { DARABONBA_PTR_GET(job_, GetUploadDocumentJobResponseBodyJob) };
    inline GetUploadDocumentJobResponseBody& setJob(const GetUploadDocumentJobResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetUploadDocumentJobResponseBody& setJob(GetUploadDocumentJobResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUploadDocumentJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadDocumentJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUploadDocumentJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const GetUploadDocumentJobResponseBodyUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, GetUploadDocumentJobResponseBodyUsage) };
    inline GetUploadDocumentJobResponseBodyUsage usage() { DARABONBA_PTR_GET(usage_, GetUploadDocumentJobResponseBodyUsage) };
    inline GetUploadDocumentJobResponseBody& setUsage(const GetUploadDocumentJobResponseBodyUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetUploadDocumentJobResponseBody& setUsage(GetUploadDocumentJobResponseBodyUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    // The chunking result.
    std::shared_ptr<GetUploadDocumentJobResponseBodyChunkResult> chunkResult_ = nullptr;
    // The information about the document upload job.
    std::shared_ptr<GetUploadDocumentJobResponseBodyJob> job_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
    // The number of tokens that are used for document understanding or embedding.
    std::shared_ptr<GetUploadDocumentJobResponseBodyUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
