// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELINGPROJECTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELINGPROJECTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeModelingProjectDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelingProjectDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelingProjectDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeModelingProjectDetailResponseBody() = default ;
    DescribeModelingProjectDetailResponseBody(const DescribeModelingProjectDetailResponseBody &) = default ;
    DescribeModelingProjectDetailResponseBody(DescribeModelingProjectDetailResponseBody &&) = default ;
    DescribeModelingProjectDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelingProjectDetailResponseBody() = default ;
    DescribeModelingProjectDetailResponseBody& operator=(const DescribeModelingProjectDetailResponseBody &) = default ;
    DescribeModelingProjectDetailResponseBody& operator=(DescribeModelingProjectDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EnvStatus, envStatus_);
        DARABONBA_PTR_TO_JSON(LoginAccount, loginAccount_);
        DARABONBA_PTR_TO_JSON(MachineSpec, machineSpec_);
        DARABONBA_PTR_TO_JSON(ManualPhase, manualPhase_);
        DARABONBA_PTR_TO_JSON(ModelingStatus, modelingStatus_);
        DARABONBA_PTR_TO_JSON(PocTasks, pocTasks_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(SyncedFiles, syncedFiles_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EnvStatus, envStatus_);
        DARABONBA_PTR_FROM_JSON(LoginAccount, loginAccount_);
        DARABONBA_PTR_FROM_JSON(MachineSpec, machineSpec_);
        DARABONBA_PTR_FROM_JSON(ManualPhase, manualPhase_);
        DARABONBA_PTR_FROM_JSON(ModelingStatus, modelingStatus_);
        DARABONBA_PTR_FROM_JSON(PocTasks, pocTasks_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(SyncedFiles, syncedFiles_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SyncedFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SyncedFiles& obj) { 
          DARABONBA_PTR_TO_JSON(Deployable, deployable_);
          DARABONBA_PTR_TO_JSON(Files, files_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(SyncedTime, syncedTime_);
        };
        friend void from_json(const Darabonba::Json& j, SyncedFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(Deployable, deployable_);
          DARABONBA_PTR_FROM_JSON(Files, files_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(SyncedTime, syncedTime_);
        };
        SyncedFiles() = default ;
        SyncedFiles(const SyncedFiles &) = default ;
        SyncedFiles(SyncedFiles &&) = default ;
        SyncedFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SyncedFiles() = default ;
        SyncedFiles& operator=(const SyncedFiles &) = default ;
        SyncedFiles& operator=(SyncedFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Files : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Files& obj) { 
            DARABONBA_PTR_TO_JSON(Downloadable, downloadable_);
            DARABONBA_PTR_TO_JSON(FileId, fileId_);
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(Visible, visible_);
          };
          friend void from_json(const Darabonba::Json& j, Files& obj) { 
            DARABONBA_PTR_FROM_JSON(Downloadable, downloadable_);
            DARABONBA_PTR_FROM_JSON(FileId, fileId_);
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(Visible, visible_);
          };
          Files() = default ;
          Files(const Files &) = default ;
          Files(Files &&) = default ;
          Files(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Files() = default ;
          Files& operator=(const Files &) = default ;
          Files& operator=(Files &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->downloadable_ == nullptr
        && this->fileId_ == nullptr && this->fileName_ == nullptr && this->visible_ == nullptr; };
          // downloadable Field Functions 
          bool hasDownloadable() const { return this->downloadable_ != nullptr;};
          void deleteDownloadable() { this->downloadable_ = nullptr;};
          inline bool getDownloadable() const { DARABONBA_PTR_GET_DEFAULT(downloadable_, false) };
          inline Files& setDownloadable(bool downloadable) { DARABONBA_PTR_SET_VALUE(downloadable_, downloadable) };


          // fileId Field Functions 
          bool hasFileId() const { return this->fileId_ != nullptr;};
          void deleteFileId() { this->fileId_ = nullptr;};
          inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
          inline Files& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline Files& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // visible Field Functions 
          bool hasVisible() const { return this->visible_ != nullptr;};
          void deleteVisible() { this->visible_ = nullptr;};
          inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
          inline Files& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


        protected:
          // Whether it is downloadable.
          shared_ptr<bool> downloadable_ {};
          // The ID of the file.
          shared_ptr<int64_t> fileId_ {};
          // The name of the file.
          shared_ptr<string> fileName_ {};
          // Visibility:
          // 
          // **true**: Visible
          // 
          // **false**: Not visible
          shared_ptr<bool> visible_ {};
        };

        virtual bool empty() const override { return this->deployable_ == nullptr
        && this->files_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->syncedTime_ == nullptr; };
        // deployable Field Functions 
        bool hasDeployable() const { return this->deployable_ != nullptr;};
        void deleteDeployable() { this->deployable_ = nullptr;};
        inline bool getDeployable() const { DARABONBA_PTR_GET_DEFAULT(deployable_, false) };
        inline SyncedFiles& setDeployable(bool deployable) { DARABONBA_PTR_SET_VALUE(deployable_, deployable) };


        // files Field Functions 
        bool hasFiles() const { return this->files_ != nullptr;};
        void deleteFiles() { this->files_ = nullptr;};
        inline const vector<SyncedFiles::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<SyncedFiles::Files>) };
        inline vector<SyncedFiles::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<SyncedFiles::Files>) };
        inline SyncedFiles& setFiles(const vector<SyncedFiles::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
        inline SyncedFiles& setFiles(vector<SyncedFiles::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline SyncedFiles& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline SyncedFiles& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // syncedTime Field Functions 
        bool hasSyncedTime() const { return this->syncedTime_ != nullptr;};
        void deleteSyncedTime() { this->syncedTime_ = nullptr;};
        inline string getSyncedTime() const { DARABONBA_PTR_GET_DEFAULT(syncedTime_, "") };
        inline SyncedFiles& setSyncedTime(string syncedTime) { DARABONBA_PTR_SET_VALUE(syncedTime_, syncedTime) };


      protected:
        // Whether deployment is supported.
        shared_ptr<bool> deployable_ {};
        // Files generated by modeling.
        shared_ptr<vector<SyncedFiles::Files>> files_ {};
        // Application group ID.
        shared_ptr<int64_t> groupId_ {};
        // File group name.
        shared_ptr<string> groupName_ {};
        // Synchronization time.
        shared_ptr<string> syncedTime_ {};
      };

      class PocTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PocTasks& obj) { 
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        };
        friend void from_json(const Darabonba::Json& j, PocTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        };
        PocTasks() = default ;
        PocTasks(const PocTasks &) = default ;
        PocTasks(PocTasks &&) = default ;
        PocTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PocTasks() = default ;
        PocTasks& operator=(const PocTasks &) = default ;
        PocTasks& operator=(PocTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileName_ == nullptr
        && this->serviceCode_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr; };
        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline PocTasks& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // serviceCode Field Functions 
        bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
        void deleteServiceCode() { this->serviceCode_ = nullptr;};
        inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
        inline PocTasks& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PocTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline PocTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      protected:
        // Retrospective file name.
        shared_ptr<string> fileName_ {};
        // Service code
        shared_ptr<string> serviceCode_ {};
        // File synchronization status.
        shared_ptr<string> status_ {};
        // Retrospective task name.
        shared_ptr<string> taskName_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->envStatus_ == nullptr && this->loginAccount_ == nullptr && this->machineSpec_ == nullptr && this->manualPhase_ == nullptr && this->modelingStatus_ == nullptr
        && this->pocTasks_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->remark_ == nullptr && this->startTime_ == nullptr
        && this->syncedFiles_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ResultObject& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // envStatus Field Functions 
      bool hasEnvStatus() const { return this->envStatus_ != nullptr;};
      void deleteEnvStatus() { this->envStatus_ = nullptr;};
      inline string getEnvStatus() const { DARABONBA_PTR_GET_DEFAULT(envStatus_, "") };
      inline ResultObject& setEnvStatus(string envStatus) { DARABONBA_PTR_SET_VALUE(envStatus_, envStatus) };


      // loginAccount Field Functions 
      bool hasLoginAccount() const { return this->loginAccount_ != nullptr;};
      void deleteLoginAccount() { this->loginAccount_ = nullptr;};
      inline string getLoginAccount() const { DARABONBA_PTR_GET_DEFAULT(loginAccount_, "") };
      inline ResultObject& setLoginAccount(string loginAccount) { DARABONBA_PTR_SET_VALUE(loginAccount_, loginAccount) };


      // machineSpec Field Functions 
      bool hasMachineSpec() const { return this->machineSpec_ != nullptr;};
      void deleteMachineSpec() { this->machineSpec_ = nullptr;};
      inline string getMachineSpec() const { DARABONBA_PTR_GET_DEFAULT(machineSpec_, "") };
      inline ResultObject& setMachineSpec(string machineSpec) { DARABONBA_PTR_SET_VALUE(machineSpec_, machineSpec) };


      // manualPhase Field Functions 
      bool hasManualPhase() const { return this->manualPhase_ != nullptr;};
      void deleteManualPhase() { this->manualPhase_ = nullptr;};
      inline string getManualPhase() const { DARABONBA_PTR_GET_DEFAULT(manualPhase_, "") };
      inline ResultObject& setManualPhase(string manualPhase) { DARABONBA_PTR_SET_VALUE(manualPhase_, manualPhase) };


      // modelingStatus Field Functions 
      bool hasModelingStatus() const { return this->modelingStatus_ != nullptr;};
      void deleteModelingStatus() { this->modelingStatus_ = nullptr;};
      inline string getModelingStatus() const { DARABONBA_PTR_GET_DEFAULT(modelingStatus_, "") };
      inline ResultObject& setModelingStatus(string modelingStatus) { DARABONBA_PTR_SET_VALUE(modelingStatus_, modelingStatus) };


      // pocTasks Field Functions 
      bool hasPocTasks() const { return this->pocTasks_ != nullptr;};
      void deletePocTasks() { this->pocTasks_ = nullptr;};
      inline const vector<ResultObject::PocTasks> & getPocTasks() const { DARABONBA_PTR_GET_CONST(pocTasks_, vector<ResultObject::PocTasks>) };
      inline vector<ResultObject::PocTasks> getPocTasks() { DARABONBA_PTR_GET(pocTasks_, vector<ResultObject::PocTasks>) };
      inline ResultObject& setPocTasks(const vector<ResultObject::PocTasks> & pocTasks) { DARABONBA_PTR_SET_VALUE(pocTasks_, pocTasks) };
      inline ResultObject& setPocTasks(vector<ResultObject::PocTasks> && pocTasks) { DARABONBA_PTR_SET_RVALUE(pocTasks_, pocTasks) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline ResultObject& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline ResultObject& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline ResultObject& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ResultObject& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // syncedFiles Field Functions 
      bool hasSyncedFiles() const { return this->syncedFiles_ != nullptr;};
      void deleteSyncedFiles() { this->syncedFiles_ = nullptr;};
      inline const vector<ResultObject::SyncedFiles> & getSyncedFiles() const { DARABONBA_PTR_GET_CONST(syncedFiles_, vector<ResultObject::SyncedFiles>) };
      inline vector<ResultObject::SyncedFiles> getSyncedFiles() { DARABONBA_PTR_GET(syncedFiles_, vector<ResultObject::SyncedFiles>) };
      inline ResultObject& setSyncedFiles(const vector<ResultObject::SyncedFiles> & syncedFiles) { DARABONBA_PTR_SET_VALUE(syncedFiles_, syncedFiles) };
      inline ResultObject& setSyncedFiles(vector<ResultObject::SyncedFiles> && syncedFiles) { DARABONBA_PTR_SET_RVALUE(syncedFiles_, syncedFiles) };


    protected:
      // End time of the security modeling project.
      shared_ptr<int64_t> endTime_ {};
      // Security environment status.
      shared_ptr<string> envStatus_ {};
      // Login account.
      shared_ptr<string> loginAccount_ {};
      // Machine specification.
      shared_ptr<string> machineSpec_ {};
      // Manual operation phase.
      shared_ptr<string> manualPhase_ {};
      // Modeling project status.
      shared_ptr<string> modelingStatus_ {};
      // Associated POC tasks.
      shared_ptr<vector<ResultObject::PocTasks>> pocTasks_ {};
      // Project ID
      shared_ptr<string> projectId_ {};
      // Project name.
      shared_ptr<string> projectName_ {};
      // Remark information.
      shared_ptr<string> remark_ {};
      // Start time of the security modeling project.
      shared_ptr<int64_t> startTime_ {};
      // Synchronized files.
      shared_ptr<vector<ResultObject::SyncedFiles>> syncedFiles_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeModelingProjectDetailResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelingProjectDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeModelingProjectDetailResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeModelingProjectDetailResponseBody::ResultObject) };
    inline DescribeModelingProjectDetailResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeModelingProjectDetailResponseBody::ResultObject) };
    inline DescribeModelingProjectDetailResponseBody& setResultObject(const DescribeModelingProjectDetailResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeModelingProjectDetailResponseBody& setResultObject(DescribeModelingProjectDetailResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeModelingProjectDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code. A return value of 200 indicates success.
    shared_ptr<int64_t> code_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result.
    shared_ptr<DescribeModelingProjectDetailResponseBody::ResultObject> resultObject_ {};
    // Whether the call was successful.
    // 
    // - **true**: Call succeeded.
    // - **false**: Call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
