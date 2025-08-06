// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICAPTIONEXTRACTIONJOBSRESPONSEBODYAICAPTIONEXTRACTIONJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAICAPTIONEXTRACTIONJOBSRESPONSEBODYAICAPTIONEXTRACTIONJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AICaptionExtractionResult, AICaptionExtractionResult_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AICaptionExtractionResult, AICaptionExtractionResult_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList() = default ;
    GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList(const GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList &) = default ;
    GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList(GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList &&) = default ;
    GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList() = default ;
    GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& operator=(const GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList &) = default ;
    GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& operator=(GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AICaptionExtractionResult_ != nullptr
        && this->code_ != nullptr && this->creationTime_ != nullptr && this->jobId_ != nullptr && this->message_ != nullptr && this->status_ != nullptr
        && this->templateConfig_ != nullptr && this->userData_ != nullptr && this->videoId_ != nullptr; };
    // AICaptionExtractionResult Field Functions 
    bool hasAICaptionExtractionResult() const { return this->AICaptionExtractionResult_ != nullptr;};
    void deleteAICaptionExtractionResult() { this->AICaptionExtractionResult_ = nullptr;};
    inline string AICaptionExtractionResult() const { DARABONBA_PTR_GET_DEFAULT(AICaptionExtractionResult_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setAICaptionExtractionResult(string AICaptionExtractionResult) { DARABONBA_PTR_SET_VALUE(AICaptionExtractionResult_, AICaptionExtractionResult) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetAICaptionExtractionJobsResponseBodyAICaptionExtractionJobList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    std::shared_ptr<string> AICaptionExtractionResult_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> templateConfig_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
