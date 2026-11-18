// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOCHARACTERREPLACEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOCHARACTERREPLACEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoCharacterReplaceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoCharacterReplaceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppParams, appParams_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoCharacterReplaceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppParams, appParams_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    SubmitVideoCharacterReplaceJobRequest() = default ;
    SubmitVideoCharacterReplaceJobRequest(const SubmitVideoCharacterReplaceJobRequest &) = default ;
    SubmitVideoCharacterReplaceJobRequest(SubmitVideoCharacterReplaceJobRequest &&) = default ;
    SubmitVideoCharacterReplaceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoCharacterReplaceJobRequest() = default ;
    SubmitVideoCharacterReplaceJobRequest& operator=(const SubmitVideoCharacterReplaceJobRequest &) = default ;
    SubmitVideoCharacterReplaceJobRequest& operator=(SubmitVideoCharacterReplaceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appParams_ == nullptr && this->folderId_ == nullptr && this->projectId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SubmitVideoCharacterReplaceJobRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appParams Field Functions 
    bool hasAppParams() const { return this->appParams_ != nullptr;};
    void deleteAppParams() { this->appParams_ = nullptr;};
    inline string getAppParams() const { DARABONBA_PTR_GET_DEFAULT(appParams_, "") };
    inline SubmitVideoCharacterReplaceJobRequest& setAppParams(string appParams) { DARABONBA_PTR_SET_VALUE(appParams_, appParams) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline SubmitVideoCharacterReplaceJobRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitVideoCharacterReplaceJobRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the video character replacement application. Use a configured application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The input parameters of the application, serialized as a JSON string. The field names and material requirements are subject to the input definition of the corresponding AppId.
    shared_ptr<string> appParams_ {};
    // The folder ID.
    shared_ptr<string> folderId_ {};
    // The project ID.
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
