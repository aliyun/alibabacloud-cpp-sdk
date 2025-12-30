// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSCENEBATCHEDITINGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSCENEBATCHEDITINGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSceneBatchEditingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSceneBatchEditingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSceneBatchEditingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSceneBatchEditingJobRequest() = default ;
    SubmitSceneBatchEditingJobRequest(const SubmitSceneBatchEditingJobRequest &) = default ;
    SubmitSceneBatchEditingJobRequest(SubmitSceneBatchEditingJobRequest &&) = default ;
    SubmitSceneBatchEditingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSceneBatchEditingJobRequest() = default ;
    SubmitSceneBatchEditingJobRequest& operator=(const SubmitSceneBatchEditingJobRequest &) = default ;
    SubmitSceneBatchEditingJobRequest& operator=(SubmitSceneBatchEditingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputConfig_ == nullptr
        && this->projectIds_ == nullptr && this->userData_ == nullptr; };
    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitSceneBatchEditingJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline string getProjectIds() const { DARABONBA_PTR_GET_DEFAULT(projectIds_, "") };
    inline SubmitSceneBatchEditingJobRequest& setProjectIds(string projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSceneBatchEditingJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The output configuration. The structure is the same as the [OutputConfig](https://help.aliyun.com/zh/ims/use-cases/create-highlight-videos?spm=a2c4g.11186623.help-menu-193643.d_3_2_0_3.3af86997GreVu9\\&scm=20140722.H_2863940._.OR_help-T_cn~zh-V_1#4111a373d0xbz) for batch video generation, except that Count and GeneratePreviewOnly are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> outputConfig_ {};
    // A comma-separated list of editing project IDs. The video is rendered based on the timeline from each project.
    // 
    // This parameter is required.
    shared_ptr<string> projectIds_ {};
    // Custom user data, including callback configurations. For more information, see [UserData](~~357745#section-urj-v3f-0s1~~).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
