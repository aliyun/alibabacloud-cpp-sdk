// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeParentJob, transcodeParentJob_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeParentJob, transcodeParentJob_);
    };
    SubmitTranscodeJobResponseBody() = default ;
    SubmitTranscodeJobResponseBody(const SubmitTranscodeJobResponseBody &) = default ;
    SubmitTranscodeJobResponseBody(SubmitTranscodeJobResponseBody &&) = default ;
    SubmitTranscodeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBody() = default ;
    SubmitTranscodeJobResponseBody& operator=(const SubmitTranscodeJobResponseBody &) = default ;
    SubmitTranscodeJobResponseBody& operator=(SubmitTranscodeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->transcodeParentJob_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitTranscodeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeParentJob Field Functions 
    bool hasTranscodeParentJob() const { return this->transcodeParentJob_ != nullptr;};
    void deleteTranscodeParentJob() { this->transcodeParentJob_ = nullptr;};
    inline const SubmitTranscodeJobResponseBodyTranscodeParentJob & transcodeParentJob() const { DARABONBA_PTR_GET_CONST(transcodeParentJob_, SubmitTranscodeJobResponseBodyTranscodeParentJob) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJob transcodeParentJob() { DARABONBA_PTR_GET(transcodeParentJob_, SubmitTranscodeJobResponseBodyTranscodeParentJob) };
    inline SubmitTranscodeJobResponseBody& setTranscodeParentJob(const SubmitTranscodeJobResponseBodyTranscodeParentJob & transcodeParentJob) { DARABONBA_PTR_SET_VALUE(transcodeParentJob_, transcodeParentJob) };
    inline SubmitTranscodeJobResponseBody& setTranscodeParentJob(SubmitTranscodeJobResponseBodyTranscodeParentJob && transcodeParentJob) { DARABONBA_PTR_SET_RVALUE(transcodeParentJob_, transcodeParentJob) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // TranscodeParentJobWithSubJobDTO
    std::shared_ptr<SubmitTranscodeJobResponseBodyTranscodeParentJob> transcodeParentJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
