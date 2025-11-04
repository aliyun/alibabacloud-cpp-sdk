// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeParentJob, transcodeParentJob_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeParentJob, transcodeParentJob_);
    };
    GetTranscodeJobResponseBody() = default ;
    GetTranscodeJobResponseBody(const GetTranscodeJobResponseBody &) = default ;
    GetTranscodeJobResponseBody(GetTranscodeJobResponseBody &&) = default ;
    GetTranscodeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBody() = default ;
    GetTranscodeJobResponseBody& operator=(const GetTranscodeJobResponseBody &) = default ;
    GetTranscodeJobResponseBody& operator=(GetTranscodeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->transcodeParentJob_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeParentJob Field Functions 
    bool hasTranscodeParentJob() const { return this->transcodeParentJob_ != nullptr;};
    void deleteTranscodeParentJob() { this->transcodeParentJob_ = nullptr;};
    inline const GetTranscodeJobResponseBodyTranscodeParentJob & transcodeParentJob() const { DARABONBA_PTR_GET_CONST(transcodeParentJob_, GetTranscodeJobResponseBodyTranscodeParentJob) };
    inline GetTranscodeJobResponseBodyTranscodeParentJob transcodeParentJob() { DARABONBA_PTR_GET(transcodeParentJob_, GetTranscodeJobResponseBodyTranscodeParentJob) };
    inline GetTranscodeJobResponseBody& setTranscodeParentJob(const GetTranscodeJobResponseBodyTranscodeParentJob & transcodeParentJob) { DARABONBA_PTR_SET_VALUE(transcodeParentJob_, transcodeParentJob) };
    inline GetTranscodeJobResponseBody& setTranscodeParentJob(GetTranscodeJobResponseBodyTranscodeParentJob && transcodeParentJob) { DARABONBA_PTR_SET_RVALUE(transcodeParentJob_, transcodeParentJob) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // TranscodeParentJobWithSubJobDTO
    std::shared_ptr<GetTranscodeJobResponseBodyTranscodeParentJob> transcodeParentJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
