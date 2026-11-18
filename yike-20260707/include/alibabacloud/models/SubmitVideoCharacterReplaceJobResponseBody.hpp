// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOCHARACTERREPLACEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOCHARACTERREPLACEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoCharacterReplaceJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoCharacterReplaceJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoCharacterReplaceJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitVideoCharacterReplaceJobResponseBody() = default ;
    SubmitVideoCharacterReplaceJobResponseBody(const SubmitVideoCharacterReplaceJobResponseBody &) = default ;
    SubmitVideoCharacterReplaceJobResponseBody(SubmitVideoCharacterReplaceJobResponseBody &&) = default ;
    SubmitVideoCharacterReplaceJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoCharacterReplaceJobResponseBody() = default ;
    SubmitVideoCharacterReplaceJobResponseBody& operator=(const SubmitVideoCharacterReplaceJobResponseBody &) = default ;
    SubmitVideoCharacterReplaceJobResponseBody& operator=(SubmitVideoCharacterReplaceJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->requestId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitVideoCharacterReplaceJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitVideoCharacterReplaceJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job ID returned by SubmitVideoCharacterReplaceJob.
    shared_ptr<string> jobId_ {};
    // The request ID used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
