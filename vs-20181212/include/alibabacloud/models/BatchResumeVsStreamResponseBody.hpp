// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchResumeVsStreamResponseBodyResumeResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchResumeVsStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchResumeVsStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResumeResult, resumeResult_);
    };
    friend void from_json(const Darabonba::Json& j, BatchResumeVsStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResumeResult, resumeResult_);
    };
    BatchResumeVsStreamResponseBody() = default ;
    BatchResumeVsStreamResponseBody(const BatchResumeVsStreamResponseBody &) = default ;
    BatchResumeVsStreamResponseBody(BatchResumeVsStreamResponseBody &&) = default ;
    BatchResumeVsStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchResumeVsStreamResponseBody() = default ;
    BatchResumeVsStreamResponseBody& operator=(const BatchResumeVsStreamResponseBody &) = default ;
    BatchResumeVsStreamResponseBody& operator=(BatchResumeVsStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resumeResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchResumeVsStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resumeResult Field Functions 
    bool hasResumeResult() const { return this->resumeResult_ != nullptr;};
    void deleteResumeResult() { this->resumeResult_ = nullptr;};
    inline const BatchResumeVsStreamResponseBodyResumeResult & resumeResult() const { DARABONBA_PTR_GET_CONST(resumeResult_, BatchResumeVsStreamResponseBodyResumeResult) };
    inline BatchResumeVsStreamResponseBodyResumeResult resumeResult() { DARABONBA_PTR_GET(resumeResult_, BatchResumeVsStreamResponseBodyResumeResult) };
    inline BatchResumeVsStreamResponseBody& setResumeResult(const BatchResumeVsStreamResponseBodyResumeResult & resumeResult) { DARABONBA_PTR_SET_VALUE(resumeResult_, resumeResult) };
    inline BatchResumeVsStreamResponseBody& setResumeResult(BatchResumeVsStreamResponseBodyResumeResult && resumeResult) { DARABONBA_PTR_SET_RVALUE(resumeResult_, resumeResult) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<BatchResumeVsStreamResponseBodyResumeResult> resumeResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
