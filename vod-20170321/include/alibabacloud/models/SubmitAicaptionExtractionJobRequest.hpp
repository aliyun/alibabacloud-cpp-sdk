// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAICAPTIONEXTRACTIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAICAPTIONEXTRACTIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAICaptionExtractionJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAICaptionExtractionJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIPipelineId, AIPipelineId_);
      DARABONBA_PTR_TO_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAICaptionExtractionJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIPipelineId, AIPipelineId_);
      DARABONBA_PTR_FROM_JSON(JobConfig, jobConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    SubmitAICaptionExtractionJobRequest() = default ;
    SubmitAICaptionExtractionJobRequest(const SubmitAICaptionExtractionJobRequest &) = default ;
    SubmitAICaptionExtractionJobRequest(SubmitAICaptionExtractionJobRequest &&) = default ;
    SubmitAICaptionExtractionJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAICaptionExtractionJobRequest() = default ;
    SubmitAICaptionExtractionJobRequest& operator=(const SubmitAICaptionExtractionJobRequest &) = default ;
    SubmitAICaptionExtractionJobRequest& operator=(SubmitAICaptionExtractionJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIPipelineId_ != nullptr
        && this->jobConfig_ != nullptr && this->userData_ != nullptr && this->videoId_ != nullptr; };
    // AIPipelineId Field Functions 
    bool hasAIPipelineId() const { return this->AIPipelineId_ != nullptr;};
    void deleteAIPipelineId() { this->AIPipelineId_ = nullptr;};
    inline string AIPipelineId() const { DARABONBA_PTR_GET_DEFAULT(AIPipelineId_, "") };
    inline SubmitAICaptionExtractionJobRequest& setAIPipelineId(string AIPipelineId) { DARABONBA_PTR_SET_VALUE(AIPipelineId_, AIPipelineId) };


    // jobConfig Field Functions 
    bool hasJobConfig() const { return this->jobConfig_ != nullptr;};
    void deleteJobConfig() { this->jobConfig_ = nullptr;};
    inline string jobConfig() const { DARABONBA_PTR_GET_DEFAULT(jobConfig_, "") };
    inline SubmitAICaptionExtractionJobRequest& setJobConfig(string jobConfig) { DARABONBA_PTR_SET_VALUE(jobConfig_, jobConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAICaptionExtractionJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitAICaptionExtractionJobRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    std::shared_ptr<string> AIPipelineId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobConfig_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
