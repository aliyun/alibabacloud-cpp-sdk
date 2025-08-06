// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitPreprocessJobsConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreprocessJobsConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeJobs, transcodeJobs_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreprocessJobsConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobs, transcodeJobs_);
    };
    SubmitPreprocessJobsConsoleResponseBody() = default ;
    SubmitPreprocessJobsConsoleResponseBody(const SubmitPreprocessJobsConsoleResponseBody &) = default ;
    SubmitPreprocessJobsConsoleResponseBody(SubmitPreprocessJobsConsoleResponseBody &&) = default ;
    SubmitPreprocessJobsConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreprocessJobsConsoleResponseBody() = default ;
    SubmitPreprocessJobsConsoleResponseBody& operator=(const SubmitPreprocessJobsConsoleResponseBody &) = default ;
    SubmitPreprocessJobsConsoleResponseBody& operator=(SubmitPreprocessJobsConsoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->transcodeJobs_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitPreprocessJobsConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeJobs Field Functions 
    bool hasTranscodeJobs() const { return this->transcodeJobs_ != nullptr;};
    void deleteTranscodeJobs() { this->transcodeJobs_ = nullptr;};
    inline const SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs & transcodeJobs() const { DARABONBA_PTR_GET_CONST(transcodeJobs_, SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs) };
    inline SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs transcodeJobs() { DARABONBA_PTR_GET(transcodeJobs_, SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs) };
    inline SubmitPreprocessJobsConsoleResponseBody& setTranscodeJobs(const SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs & transcodeJobs) { DARABONBA_PTR_SET_VALUE(transcodeJobs_, transcodeJobs) };
    inline SubmitPreprocessJobsConsoleResponseBody& setTranscodeJobs(SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs && transcodeJobs) { DARABONBA_PTR_SET_RVALUE(transcodeJobs_, transcodeJobs) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs> transcodeJobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
