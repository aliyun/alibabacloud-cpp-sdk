// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_SNAPSHOT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class Snapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CreationType, creationType_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotResourceId, snapshotResourceId_);
      DARABONBA_PTR_TO_JSON(SnapshotResourceType, snapshotResourceType_);
      DARABONBA_PTR_TO_JSON(SnapshotStoragePath, snapshotStoragePath_);
      DARABONBA_PTR_TO_JSON(SnapshotUrl, snapshotUrl_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotResourceId, snapshotResourceId_);
      DARABONBA_PTR_FROM_JSON(SnapshotResourceType, snapshotResourceType_);
      DARABONBA_PTR_FROM_JSON(SnapshotStoragePath, snapshotStoragePath_);
      DARABONBA_PTR_FROM_JSON(SnapshotUrl, snapshotUrl_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Snapshot() = default ;
    Snapshot(const Snapshot &) = default ;
    Snapshot(Snapshot &&) = default ;
    Snapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Snapshot() = default ;
    Snapshot& operator=(const Snapshot &) = default ;
    Snapshot& operator=(Snapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->creationType_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->snapshotId_ == nullptr && this->snapshotName_ == nullptr && this->snapshotResourceId_ == nullptr && this->snapshotResourceType_ == nullptr && this->snapshotStoragePath_ == nullptr
        && this->snapshotUrl_ == nullptr && this->workDir_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Snapshot& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creationType Field Functions 
    bool hasCreationType() const { return this->creationType_ != nullptr;};
    void deleteCreationType() { this->creationType_ = nullptr;};
    inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
    inline Snapshot& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Snapshot& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Snapshot& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Snapshot& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Snapshot& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline Snapshot& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline Snapshot& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // snapshotResourceId Field Functions 
    bool hasSnapshotResourceId() const { return this->snapshotResourceId_ != nullptr;};
    void deleteSnapshotResourceId() { this->snapshotResourceId_ = nullptr;};
    inline string getSnapshotResourceId() const { DARABONBA_PTR_GET_DEFAULT(snapshotResourceId_, "") };
    inline Snapshot& setSnapshotResourceId(string snapshotResourceId) { DARABONBA_PTR_SET_VALUE(snapshotResourceId_, snapshotResourceId) };


    // snapshotResourceType Field Functions 
    bool hasSnapshotResourceType() const { return this->snapshotResourceType_ != nullptr;};
    void deleteSnapshotResourceType() { this->snapshotResourceType_ = nullptr;};
    inline string getSnapshotResourceType() const { DARABONBA_PTR_GET_DEFAULT(snapshotResourceType_, "") };
    inline Snapshot& setSnapshotResourceType(string snapshotResourceType) { DARABONBA_PTR_SET_VALUE(snapshotResourceType_, snapshotResourceType) };


    // snapshotStoragePath Field Functions 
    bool hasSnapshotStoragePath() const { return this->snapshotStoragePath_ != nullptr;};
    void deleteSnapshotStoragePath() { this->snapshotStoragePath_ = nullptr;};
    inline string getSnapshotStoragePath() const { DARABONBA_PTR_GET_DEFAULT(snapshotStoragePath_, "") };
    inline Snapshot& setSnapshotStoragePath(string snapshotStoragePath) { DARABONBA_PTR_SET_VALUE(snapshotStoragePath_, snapshotStoragePath) };


    // snapshotUrl Field Functions 
    bool hasSnapshotUrl() const { return this->snapshotUrl_ != nullptr;};
    void deleteSnapshotUrl() { this->snapshotUrl_ = nullptr;};
    inline string getSnapshotUrl() const { DARABONBA_PTR_GET_DEFAULT(snapshotUrl_, "") };
    inline Snapshot& setSnapshotUrl(string snapshotUrl) { DARABONBA_PTR_SET_VALUE(snapshotUrl_, snapshotUrl) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline Snapshot& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Snapshot& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> creationType_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> snapshotId_ {};
    shared_ptr<string> snapshotName_ {};
    shared_ptr<string> snapshotResourceId_ {};
    shared_ptr<string> snapshotResourceType_ {};
    shared_ptr<string> snapshotStoragePath_ {};
    shared_ptr<string> snapshotUrl_ {};
    shared_ptr<string> workDir_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
