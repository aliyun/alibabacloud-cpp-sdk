// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CreateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowPublish, allowPublish_);
      DARABONBA_PTR_TO_JSON(AllowShare, allowShare_);
      DARABONBA_PTR_TO_JSON(AllowViewAll, allowViewAll_);
      DARABONBA_PTR_TO_JSON(DefaultShareToAll, defaultShareToAll_);
      DARABONBA_PTR_TO_JSON(OnlyAdminCreateDatasource, onlyAdminCreateDatasource_);
      DARABONBA_PTR_TO_JSON(UseComment, useComment_);
      DARABONBA_PTR_TO_JSON(WorkspaceDescription, workspaceDescription_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowPublish, allowPublish_);
      DARABONBA_PTR_FROM_JSON(AllowShare, allowShare_);
      DARABONBA_PTR_FROM_JSON(AllowViewAll, allowViewAll_);
      DARABONBA_PTR_FROM_JSON(DefaultShareToAll, defaultShareToAll_);
      DARABONBA_PTR_FROM_JSON(OnlyAdminCreateDatasource, onlyAdminCreateDatasource_);
      DARABONBA_PTR_FROM_JSON(UseComment, useComment_);
      DARABONBA_PTR_FROM_JSON(WorkspaceDescription, workspaceDescription_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest(CreateWorkspaceRequest &&) = default ;
    CreateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest& operator=(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest& operator=(CreateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowPublish_ == nullptr
        && this->allowShare_ == nullptr && this->allowViewAll_ == nullptr && this->defaultShareToAll_ == nullptr && this->onlyAdminCreateDatasource_ == nullptr && this->useComment_ == nullptr
        && this->workspaceDescription_ == nullptr && this->workspaceName_ == nullptr; };
    // allowPublish Field Functions 
    bool hasAllowPublish() const { return this->allowPublish_ != nullptr;};
    void deleteAllowPublish() { this->allowPublish_ = nullptr;};
    inline bool getAllowPublish() const { DARABONBA_PTR_GET_DEFAULT(allowPublish_, false) };
    inline CreateWorkspaceRequest& setAllowPublish(bool allowPublish) { DARABONBA_PTR_SET_VALUE(allowPublish_, allowPublish) };


    // allowShare Field Functions 
    bool hasAllowShare() const { return this->allowShare_ != nullptr;};
    void deleteAllowShare() { this->allowShare_ = nullptr;};
    inline bool getAllowShare() const { DARABONBA_PTR_GET_DEFAULT(allowShare_, false) };
    inline CreateWorkspaceRequest& setAllowShare(bool allowShare) { DARABONBA_PTR_SET_VALUE(allowShare_, allowShare) };


    // allowViewAll Field Functions 
    bool hasAllowViewAll() const { return this->allowViewAll_ != nullptr;};
    void deleteAllowViewAll() { this->allowViewAll_ = nullptr;};
    inline bool getAllowViewAll() const { DARABONBA_PTR_GET_DEFAULT(allowViewAll_, false) };
    inline CreateWorkspaceRequest& setAllowViewAll(bool allowViewAll) { DARABONBA_PTR_SET_VALUE(allowViewAll_, allowViewAll) };


    // defaultShareToAll Field Functions 
    bool hasDefaultShareToAll() const { return this->defaultShareToAll_ != nullptr;};
    void deleteDefaultShareToAll() { this->defaultShareToAll_ = nullptr;};
    inline bool getDefaultShareToAll() const { DARABONBA_PTR_GET_DEFAULT(defaultShareToAll_, false) };
    inline CreateWorkspaceRequest& setDefaultShareToAll(bool defaultShareToAll) { DARABONBA_PTR_SET_VALUE(defaultShareToAll_, defaultShareToAll) };


    // onlyAdminCreateDatasource Field Functions 
    bool hasOnlyAdminCreateDatasource() const { return this->onlyAdminCreateDatasource_ != nullptr;};
    void deleteOnlyAdminCreateDatasource() { this->onlyAdminCreateDatasource_ = nullptr;};
    inline bool getOnlyAdminCreateDatasource() const { DARABONBA_PTR_GET_DEFAULT(onlyAdminCreateDatasource_, false) };
    inline CreateWorkspaceRequest& setOnlyAdminCreateDatasource(bool onlyAdminCreateDatasource) { DARABONBA_PTR_SET_VALUE(onlyAdminCreateDatasource_, onlyAdminCreateDatasource) };


    // useComment Field Functions 
    bool hasUseComment() const { return this->useComment_ != nullptr;};
    void deleteUseComment() { this->useComment_ = nullptr;};
    inline bool getUseComment() const { DARABONBA_PTR_GET_DEFAULT(useComment_, false) };
    inline CreateWorkspaceRequest& setUseComment(bool useComment) { DARABONBA_PTR_SET_VALUE(useComment_, useComment) };


    // workspaceDescription Field Functions 
    bool hasWorkspaceDescription() const { return this->workspaceDescription_ != nullptr;};
    void deleteWorkspaceDescription() { this->workspaceDescription_ = nullptr;};
    inline string getWorkspaceDescription() const { DARABONBA_PTR_GET_DEFAULT(workspaceDescription_, "") };
    inline CreateWorkspaceRequest& setWorkspaceDescription(string workspaceDescription) { DARABONBA_PTR_SET_VALUE(workspaceDescription_, workspaceDescription) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Specifies whether reports in the workspace can be made public. Default value: true.
    shared_ptr<bool> allowPublish_ {};
    // Specifies whether reports in the workspace can be shared. Default value: true.
    shared_ptr<bool> allowShare_ {};
    // Specifies whether the workspace is in collaboration mode. Default value: true.
    shared_ptr<bool> allowViewAll_ {};
    // Specifies whether to grant read permissions on the works in the workspace to all workspace members by default. Default value: false.
    shared_ptr<bool> defaultShareToAll_ {};
    // Specifies whether only administrators can create data sources in the workspace. Default value: false.
    shared_ptr<bool> onlyAdminCreateDatasource_ {};
    // Specifies whether to use table remarks when you create a dataset in the workspace. Default value: true.
    shared_ptr<bool> useComment_ {};
    // The description of the workspace.
    shared_ptr<string> workspaceDescription_ {};
    // The name of the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
