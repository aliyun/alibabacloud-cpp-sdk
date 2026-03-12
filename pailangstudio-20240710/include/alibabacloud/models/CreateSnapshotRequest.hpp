// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CreationType, creationType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotResourceId, snapshotResourceId_);
      DARABONBA_PTR_TO_JSON(SnapshotResourceType, snapshotResourceType_);
      DARABONBA_PTR_TO_JSON(SourceStoragePath, sourceStoragePath_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotResourceId, snapshotResourceId_);
      DARABONBA_PTR_FROM_JSON(SnapshotResourceType, snapshotResourceType_);
      DARABONBA_PTR_FROM_JSON(SourceStoragePath, sourceStoragePath_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateSnapshotRequest() = default ;
    CreateSnapshotRequest(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest(CreateSnapshotRequest &&) = default ;
    CreateSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotRequest() = default ;
    CreateSnapshotRequest& operator=(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest& operator=(CreateSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->creationType_ == nullptr && this->description_ == nullptr && this->snapshotName_ == nullptr && this->snapshotResourceId_ == nullptr && this->snapshotResourceType_ == nullptr
        && this->sourceStoragePath_ == nullptr && this->workDir_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateSnapshotRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creationType Field Functions 
    bool hasCreationType() const { return this->creationType_ != nullptr;};
    void deleteCreationType() { this->creationType_ = nullptr;};
    inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
    inline CreateSnapshotRequest& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSnapshotRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline CreateSnapshotRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // snapshotResourceId Field Functions 
    bool hasSnapshotResourceId() const { return this->snapshotResourceId_ != nullptr;};
    void deleteSnapshotResourceId() { this->snapshotResourceId_ = nullptr;};
    inline string getSnapshotResourceId() const { DARABONBA_PTR_GET_DEFAULT(snapshotResourceId_, "") };
    inline CreateSnapshotRequest& setSnapshotResourceId(string snapshotResourceId) { DARABONBA_PTR_SET_VALUE(snapshotResourceId_, snapshotResourceId) };


    // snapshotResourceType Field Functions 
    bool hasSnapshotResourceType() const { return this->snapshotResourceType_ != nullptr;};
    void deleteSnapshotResourceType() { this->snapshotResourceType_ = nullptr;};
    inline string getSnapshotResourceType() const { DARABONBA_PTR_GET_DEFAULT(snapshotResourceType_, "") };
    inline CreateSnapshotRequest& setSnapshotResourceType(string snapshotResourceType) { DARABONBA_PTR_SET_VALUE(snapshotResourceType_, snapshotResourceType) };


    // sourceStoragePath Field Functions 
    bool hasSourceStoragePath() const { return this->sourceStoragePath_ != nullptr;};
    void deleteSourceStoragePath() { this->sourceStoragePath_ = nullptr;};
    inline string getSourceStoragePath() const { DARABONBA_PTR_GET_DEFAULT(sourceStoragePath_, "") };
    inline CreateSnapshotRequest& setSourceStoragePath(string sourceStoragePath) { DARABONBA_PTR_SET_VALUE(sourceStoragePath_, sourceStoragePath) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline CreateSnapshotRequest& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateSnapshotRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> creationType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> snapshotName_ {};
    shared_ptr<string> snapshotResourceId_ {};
    shared_ptr<string> snapshotResourceType_ {};
    shared_ptr<string> sourceStoragePath_ {};
    shared_ptr<string> workDir_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
