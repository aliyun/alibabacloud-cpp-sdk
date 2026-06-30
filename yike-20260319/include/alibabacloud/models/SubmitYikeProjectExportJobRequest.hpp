// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKEPROJECTEXPORTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKEPROJECTEXPORTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class SubmitYikeProjectExportJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikeProjectExportJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikeProjectExportJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitYikeProjectExportJobRequest() = default ;
    SubmitYikeProjectExportJobRequest(const SubmitYikeProjectExportJobRequest &) = default ;
    SubmitYikeProjectExportJobRequest(SubmitYikeProjectExportJobRequest &&) = default ;
    SubmitYikeProjectExportJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitYikeProjectExportJobRequest() = default ;
    SubmitYikeProjectExportJobRequest& operator=(const SubmitYikeProjectExportJobRequest &) = default ;
    SubmitYikeProjectExportJobRequest& operator=(SubmitYikeProjectExportJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportType_ == nullptr
        && this->projectId_ == nullptr && this->userData_ == nullptr; };
    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline SubmitYikeProjectExportJobRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitYikeProjectExportJobRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitYikeProjectExportJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The export type of the editing project. Valid values:
    // - PureAudio: pure audio (the export result returns a pure audio file and a subtitle file).
    shared_ptr<string> exportType_ {};
    // The ID of the online editing project.
    shared_ptr<string> projectId_ {};
    // The custom parameter in JSON string format. The callback result carries this parameter as-is (for example, newsKey).
    // The system reserved field NotifyAddress specifies the callback URL. After the task is complete, a callback is sent to this URL. Example: {"NotifyAddress": "http://xxx.callback.url"}
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
