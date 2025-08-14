// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROJECTEXPORTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROJECTEXPORTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitProjectExportJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProjectExportJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(OutputMediaConfig, outputMediaConfig_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProjectExportJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(OutputMediaConfig, outputMediaConfig_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitProjectExportJobRequest() = default ;
    SubmitProjectExportJobRequest(const SubmitProjectExportJobRequest &) = default ;
    SubmitProjectExportJobRequest(SubmitProjectExportJobRequest &&) = default ;
    SubmitProjectExportJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProjectExportJobRequest() = default ;
    SubmitProjectExportJobRequest& operator=(const SubmitProjectExportJobRequest &) = default ;
    SubmitProjectExportJobRequest& operator=(SubmitProjectExportJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exportType_ != nullptr
        && this->outputMediaConfig_ != nullptr && this->projectId_ != nullptr && this->timeline_ != nullptr && this->userData_ != nullptr; };
    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline SubmitProjectExportJobRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // outputMediaConfig Field Functions 
    bool hasOutputMediaConfig() const { return this->outputMediaConfig_ != nullptr;};
    void deleteOutputMediaConfig() { this->outputMediaConfig_ = nullptr;};
    inline string outputMediaConfig() const { DARABONBA_PTR_GET_DEFAULT(outputMediaConfig_, "") };
    inline SubmitProjectExportJobRequest& setOutputMediaConfig(string outputMediaConfig) { DARABONBA_PTR_SET_VALUE(outputMediaConfig_, outputMediaConfig) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitProjectExportJobRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string timeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline SubmitProjectExportJobRequest& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitProjectExportJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> exportType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputMediaConfig_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> timeline_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
