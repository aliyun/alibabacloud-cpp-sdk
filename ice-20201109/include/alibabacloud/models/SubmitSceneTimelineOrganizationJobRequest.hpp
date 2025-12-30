// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSCENETIMELINEORGANIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSCENETIMELINEORGANIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSceneTimelineOrganizationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSceneTimelineOrganizationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MediaSelectResult, mediaSelectResult_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSceneTimelineOrganizationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MediaSelectResult, mediaSelectResult_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSceneTimelineOrganizationJobRequest() = default ;
    SubmitSceneTimelineOrganizationJobRequest(const SubmitSceneTimelineOrganizationJobRequest &) = default ;
    SubmitSceneTimelineOrganizationJobRequest(SubmitSceneTimelineOrganizationJobRequest &&) = default ;
    SubmitSceneTimelineOrganizationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSceneTimelineOrganizationJobRequest() = default ;
    SubmitSceneTimelineOrganizationJobRequest& operator=(const SubmitSceneTimelineOrganizationJobRequest &) = default ;
    SubmitSceneTimelineOrganizationJobRequest& operator=(SubmitSceneTimelineOrganizationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->editingConfig_ == nullptr
        && this->inputConfig_ == nullptr && this->jobType_ == nullptr && this->mediaSelectResult_ == nullptr && this->outputConfig_ == nullptr && this->userData_ == nullptr; };
    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string getEditingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string getInputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // mediaSelectResult Field Functions 
    bool hasMediaSelectResult() const { return this->mediaSelectResult_ != nullptr;};
    void deleteMediaSelectResult() { this->mediaSelectResult_ = nullptr;};
    inline string getMediaSelectResult() const { DARABONBA_PTR_GET_DEFAULT(mediaSelectResult_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setMediaSelectResult(string mediaSelectResult) { DARABONBA_PTR_SET_VALUE(mediaSelectResult_, mediaSelectResult) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The editing configuration. Its structure depends on the value of JobType.
    // 
    // *   When JobType is set to Smart_Mix_Timeline_Organize, see [Image-text matching](https://help.aliyun.com/zh/ims/use-cases/intelligent-graphic-matching-into-a-piece/?spm=a2c4g.11186623.help-menu-193643.d_3_2_0_1.7c3d6997qndkZj).
    // *   When JobType is set to Screen_Media_Highlights_Timeline_Organize, see [Highlight mashup](https://help.aliyun.com/zh/ims/use-cases/create-highlight-videos?spm=a2c4g.11186623.help-menu-193643.d_3_2_0_3.84b5661bIcQULE).
    shared_ptr<string> editingConfig_ {};
    // The input configuration. Its structure and required fields depend on the value of JobType.
    // 
    // *   When JobType is set to Smart_Mix_Timeline_Organize, see [Image-text matching](https://help.aliyun.com/zh/ims/use-cases/intelligent-graphic-matching-into-a-piece/?spm=a2c4g.11186623.help-menu-193643.d_3_2_0_1.7c3d6997qndkZj).
    // *   When JobType is set to Screen_Media_Highlights_Timeline_Organize, see [Highlight mashup](https://help.aliyun.com/zh/ims/use-cases/create-highlight-videos?spm=a2c4g.11186623.help-menu-193643.d_3_2_0_3.84b5661bIcQULE).
    // 
    // This parameter is required.
    shared_ptr<string> inputConfig_ {};
    // The job type. Valid values:
    // 
    // *   Smart_Mix_Timeline_Organize: Image-text matching.
    // *   Screen_Media_Highlights_Timeline_Organize: Highlight mashup.
    // 
    // Differences:
    // 
    // *   Image-text matching: Arranges a timeline based on the results of matching a voiceover script to media assets. Ideal for bulk marketing videos and general-purpose montages.
    // *   Highlight mashup: Arranges a timeline based on the results of highlight clip selection. Ideal for creating action-packed highlight reels from short-form dramas.
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    // The media selection results from a previously run SubmitSceneMediaSelectionJob. You can retrieve this result by calling GetBatchMediaProducingJob.
    // 
    // This parameter is required.
    shared_ptr<string> mediaSelectResult_ {};
    // The output configuration. Its structure and required fields depend on the value of JobType.
    // 
    // *   When JobType is set to Smart_Mix_Timeline_Organize, see [Image-text matching](https://help.aliyun.com/zh/ims/use-cases/intelligent-graphic-matching-into-a-piece/?spm=a2c4g.11186623.help-menu-193643.d_3_2_0_1.7c3d6997qndkZj).
    // *   When JobType is set to Screen_Media_Highlights_Timeline_Organize, see [Highlight mashup](https://help.aliyun.com/zh/ims/use-cases/create-highlight-videos?spm=a2c4g.11186623.help-menu-193643.d_3_2_0_3.84b5661bIcQULE).
    // 
    // This parameter is required.
    shared_ptr<string> outputConfig_ {};
    // The user-defined data, including the business and callback configurations. For more information, see [UserData](~~357745#section-urj-v3f-0s1~~).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
