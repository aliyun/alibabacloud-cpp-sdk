// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPERIMENTFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPERIMENTFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class CreateExperimentFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExperimentFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExperimentFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateExperimentFolderRequest() = default ;
    CreateExperimentFolderRequest(const CreateExperimentFolderRequest &) = default ;
    CreateExperimentFolderRequest(CreateExperimentFolderRequest &&) = default ;
    CreateExperimentFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExperimentFolderRequest() = default ;
    CreateExperimentFolderRequest& operator=(const CreateExperimentFolderRequest &) = default ;
    CreateExperimentFolderRequest& operator=(CreateExperimentFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->name_ == nullptr && return this->parentFolderId_ == nullptr && return this->source_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateExperimentFolderRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateExperimentFolderRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline CreateExperimentFolderRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateExperimentFolderRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateExperimentFolderRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentFolderId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
