// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CreationType, creationType_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotResourceId, snapshotResourceId_);
      DARABONBA_PTR_TO_JSON(SnapshotResourceType, snapshotResourceType_);
      DARABONBA_PTR_TO_JSON(SnapshotStatus, snapshotStatus_);
      DARABONBA_PTR_TO_JSON(SnapshotStoragePath, snapshotStoragePath_);
      DARABONBA_PTR_TO_JSON(SnapshotUrl, snapshotUrl_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotResourceId, snapshotResourceId_);
      DARABONBA_PTR_FROM_JSON(SnapshotResourceType, snapshotResourceType_);
      DARABONBA_PTR_FROM_JSON(SnapshotStatus, snapshotStatus_);
      DARABONBA_PTR_FROM_JSON(SnapshotStoragePath, snapshotStoragePath_);
      DARABONBA_PTR_FROM_JSON(SnapshotUrl, snapshotUrl_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetSnapshotResponseBody() = default ;
    GetSnapshotResponseBody(const GetSnapshotResponseBody &) = default ;
    GetSnapshotResponseBody(GetSnapshotResponseBody &&) = default ;
    GetSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotResponseBody() = default ;
    GetSnapshotResponseBody& operator=(const GetSnapshotResponseBody &) = default ;
    GetSnapshotResponseBody& operator=(GetSnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->creationType_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->errorMessage_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->requestId_ == nullptr && this->snapshotId_ == nullptr && this->snapshotName_ == nullptr && this->snapshotResourceId_ == nullptr
        && this->snapshotResourceType_ == nullptr && this->snapshotStatus_ == nullptr && this->snapshotStoragePath_ == nullptr && this->snapshotUrl_ == nullptr && this->workDir_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetSnapshotResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creationType Field Functions 
    bool hasCreationType() const { return this->creationType_ != nullptr;};
    void deleteCreationType() { this->creationType_ = nullptr;};
    inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
    inline GetSnapshotResponseBody& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetSnapshotResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSnapshotResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSnapshotResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetSnapshotResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetSnapshotResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline GetSnapshotResponseBody& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline GetSnapshotResponseBody& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // snapshotResourceId Field Functions 
    bool hasSnapshotResourceId() const { return this->snapshotResourceId_ != nullptr;};
    void deleteSnapshotResourceId() { this->snapshotResourceId_ = nullptr;};
    inline string getSnapshotResourceId() const { DARABONBA_PTR_GET_DEFAULT(snapshotResourceId_, "") };
    inline GetSnapshotResponseBody& setSnapshotResourceId(string snapshotResourceId) { DARABONBA_PTR_SET_VALUE(snapshotResourceId_, snapshotResourceId) };


    // snapshotResourceType Field Functions 
    bool hasSnapshotResourceType() const { return this->snapshotResourceType_ != nullptr;};
    void deleteSnapshotResourceType() { this->snapshotResourceType_ = nullptr;};
    inline string getSnapshotResourceType() const { DARABONBA_PTR_GET_DEFAULT(snapshotResourceType_, "") };
    inline GetSnapshotResponseBody& setSnapshotResourceType(string snapshotResourceType) { DARABONBA_PTR_SET_VALUE(snapshotResourceType_, snapshotResourceType) };


    // snapshotStatus Field Functions 
    bool hasSnapshotStatus() const { return this->snapshotStatus_ != nullptr;};
    void deleteSnapshotStatus() { this->snapshotStatus_ = nullptr;};
    inline string getSnapshotStatus() const { DARABONBA_PTR_GET_DEFAULT(snapshotStatus_, "") };
    inline GetSnapshotResponseBody& setSnapshotStatus(string snapshotStatus) { DARABONBA_PTR_SET_VALUE(snapshotStatus_, snapshotStatus) };


    // snapshotStoragePath Field Functions 
    bool hasSnapshotStoragePath() const { return this->snapshotStoragePath_ != nullptr;};
    void deleteSnapshotStoragePath() { this->snapshotStoragePath_ = nullptr;};
    inline string getSnapshotStoragePath() const { DARABONBA_PTR_GET_DEFAULT(snapshotStoragePath_, "") };
    inline GetSnapshotResponseBody& setSnapshotStoragePath(string snapshotStoragePath) { DARABONBA_PTR_SET_VALUE(snapshotStoragePath_, snapshotStoragePath) };


    // snapshotUrl Field Functions 
    bool hasSnapshotUrl() const { return this->snapshotUrl_ != nullptr;};
    void deleteSnapshotUrl() { this->snapshotUrl_ = nullptr;};
    inline string getSnapshotUrl() const { DARABONBA_PTR_GET_DEFAULT(snapshotUrl_, "") };
    inline GetSnapshotResponseBody& setSnapshotUrl(string snapshotUrl) { DARABONBA_PTR_SET_VALUE(snapshotUrl_, snapshotUrl) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline GetSnapshotResponseBody& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetSnapshotResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Workspace visibility. Possible values are:
    // - PRIVATE: In this workspace, visible only to you and administrators.
    // - PUBLIC: In this workspace, visible to everyone.
    shared_ptr<string> accessibility_ {};
    // Snapshot creation type. Valid values:
    // * ManualCreated: Manually created
    // * DeploymentAutoCreated: Automatically created by service deployment
    // * EvaluationAutoCreated: Automatically created by evaluation job
    shared_ptr<string> creationType_ {};
    // Creator ID.
    shared_ptr<string> creator_ {};
    // Snapshot description.
    shared_ptr<string> description_ {};
    shared_ptr<string> errorMessage_ {};
    // Creation Time.
    shared_ptr<string> gmtCreateTime_ {};
    // Updated At.
    shared_ptr<string> gmtModifiedTime_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Snapshot ID.
    shared_ptr<string> snapshotId_ {};
    // Snapshot name.
    shared_ptr<string> snapshotName_ {};
    // Snapshot resource ID.
    shared_ptr<string> snapshotResourceId_ {};
    // Snapshot resource type. Valid values:
    // * Flow: pipeline
    shared_ptr<string> snapshotResourceType_ {};
    shared_ptr<string> snapshotStatus_ {};
    // OSS path where the snapshot source file is stored.
    shared_ptr<string> snapshotStoragePath_ {};
    // Snapshot download URL.
    shared_ptr<string> snapshotUrl_ {};
    // The OSS working directory where the snapshot is stored.
    shared_ptr<string> workDir_ {};
    // Workspace ID. For information about how to obtain a workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
