// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGGERJOB_HPP_
#define ALIBABACLOUD_MODELS_DEBUGGERJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DebuggerJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebuggerJob& obj) { 
      DARABONBA_PTR_TO_JSON(DebuggerJobId, debuggerJobId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFailedTime, gmtFailedTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtRunningTime, gmtRunningTime_);
      DARABONBA_PTR_TO_JSON(GmtStoppedTime, gmtStoppedTime_);
      DARABONBA_PTR_TO_JSON(GmtSubmittedTime, gmtSubmittedTime_);
      DARABONBA_PTR_TO_JSON(GmtSucceedTime, gmtSucceedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, DebuggerJob& obj) { 
      DARABONBA_PTR_FROM_JSON(DebuggerJobId, debuggerJobId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFailedTime, gmtFailedTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtRunningTime, gmtRunningTime_);
      DARABONBA_PTR_FROM_JSON(GmtStoppedTime, gmtStoppedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSubmittedTime, gmtSubmittedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSucceedTime, gmtSucceedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    DebuggerJob() = default ;
    DebuggerJob(const DebuggerJob &) = default ;
    DebuggerJob(DebuggerJob &&) = default ;
    DebuggerJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebuggerJob() = default ;
    DebuggerJob& operator=(const DebuggerJob &) = default ;
    DebuggerJob& operator=(DebuggerJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debuggerJobId_ == nullptr
        && return this->displayName_ == nullptr && return this->duration_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtFailedTime_ == nullptr && return this->gmtFinishTime_ == nullptr
        && return this->gmtRunningTime_ == nullptr && return this->gmtStoppedTime_ == nullptr && return this->gmtSubmittedTime_ == nullptr && return this->gmtSucceedTime_ == nullptr && return this->status_ == nullptr
        && return this->userId_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // debuggerJobId Field Functions 
    bool hasDebuggerJobId() const { return this->debuggerJobId_ != nullptr;};
    void deleteDebuggerJobId() { this->debuggerJobId_ = nullptr;};
    inline string debuggerJobId() const { DARABONBA_PTR_GET_DEFAULT(debuggerJobId_, "") };
    inline DebuggerJob& setDebuggerJobId(string debuggerJobId) { DARABONBA_PTR_SET_VALUE(debuggerJobId_, debuggerJobId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DebuggerJob& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline DebuggerJob& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline DebuggerJob& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFailedTime Field Functions 
    bool hasGmtFailedTime() const { return this->gmtFailedTime_ != nullptr;};
    void deleteGmtFailedTime() { this->gmtFailedTime_ = nullptr;};
    inline string gmtFailedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFailedTime_, "") };
    inline DebuggerJob& setGmtFailedTime(string gmtFailedTime) { DARABONBA_PTR_SET_VALUE(gmtFailedTime_, gmtFailedTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline DebuggerJob& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtRunningTime Field Functions 
    bool hasGmtRunningTime() const { return this->gmtRunningTime_ != nullptr;};
    void deleteGmtRunningTime() { this->gmtRunningTime_ = nullptr;};
    inline string gmtRunningTime() const { DARABONBA_PTR_GET_DEFAULT(gmtRunningTime_, "") };
    inline DebuggerJob& setGmtRunningTime(string gmtRunningTime) { DARABONBA_PTR_SET_VALUE(gmtRunningTime_, gmtRunningTime) };


    // gmtStoppedTime Field Functions 
    bool hasGmtStoppedTime() const { return this->gmtStoppedTime_ != nullptr;};
    void deleteGmtStoppedTime() { this->gmtStoppedTime_ = nullptr;};
    inline string gmtStoppedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStoppedTime_, "") };
    inline DebuggerJob& setGmtStoppedTime(string gmtStoppedTime) { DARABONBA_PTR_SET_VALUE(gmtStoppedTime_, gmtStoppedTime) };


    // gmtSubmittedTime Field Functions 
    bool hasGmtSubmittedTime() const { return this->gmtSubmittedTime_ != nullptr;};
    void deleteGmtSubmittedTime() { this->gmtSubmittedTime_ = nullptr;};
    inline string gmtSubmittedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSubmittedTime_, "") };
    inline DebuggerJob& setGmtSubmittedTime(string gmtSubmittedTime) { DARABONBA_PTR_SET_VALUE(gmtSubmittedTime_, gmtSubmittedTime) };


    // gmtSucceedTime Field Functions 
    bool hasGmtSucceedTime() const { return this->gmtSucceedTime_ != nullptr;};
    void deleteGmtSucceedTime() { this->gmtSucceedTime_ = nullptr;};
    inline string gmtSucceedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSucceedTime_, "") };
    inline DebuggerJob& setGmtSucceedTime(string gmtSucceedTime) { DARABONBA_PTR_SET_VALUE(gmtSucceedTime_, gmtSucceedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DebuggerJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DebuggerJob& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DebuggerJob& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline DebuggerJob& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> debuggerJobId_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtFailedTime_ = nullptr;
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    std::shared_ptr<string> gmtRunningTime_ = nullptr;
    std::shared_ptr<string> gmtStoppedTime_ = nullptr;
    std::shared_ptr<string> gmtSubmittedTime_ = nullptr;
    std::shared_ptr<string> gmtSucceedTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
