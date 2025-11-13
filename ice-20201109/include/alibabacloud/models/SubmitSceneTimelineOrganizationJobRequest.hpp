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
        && return this->inputConfig_ == nullptr && return this->jobType_ == nullptr && return this->mediaSelectResult_ == nullptr && return this->outputConfig_ == nullptr && return this->userData_ == nullptr; };
    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string editingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string inputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // mediaSelectResult Field Functions 
    bool hasMediaSelectResult() const { return this->mediaSelectResult_ != nullptr;};
    void deleteMediaSelectResult() { this->mediaSelectResult_ = nullptr;};
    inline string mediaSelectResult() const { DARABONBA_PTR_GET_DEFAULT(mediaSelectResult_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setMediaSelectResult(string mediaSelectResult) { DARABONBA_PTR_SET_VALUE(mediaSelectResult_, mediaSelectResult) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSceneTimelineOrganizationJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> editingConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mediaSelectResult_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputConfig_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
