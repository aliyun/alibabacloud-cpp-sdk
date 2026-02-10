// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSasContainerWebDefenseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSasContainerWebDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerWebDefenseRule, containerWebDefenseRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSasContainerWebDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerWebDefenseRule, containerWebDefenseRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSasContainerWebDefenseRuleResponseBody() = default ;
    GetSasContainerWebDefenseRuleResponseBody(const GetSasContainerWebDefenseRuleResponseBody &) = default ;
    GetSasContainerWebDefenseRuleResponseBody(GetSasContainerWebDefenseRuleResponseBody &&) = default ;
    GetSasContainerWebDefenseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSasContainerWebDefenseRuleResponseBody() = default ;
    GetSasContainerWebDefenseRuleResponseBody& operator=(const GetSasContainerWebDefenseRuleResponseBody &) = default ;
    GetSasContainerWebDefenseRuleResponseBody& operator=(GetSasContainerWebDefenseRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContainerWebDefenseRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerWebDefenseRule& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AppTotalCount, appTotalCount_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(PathConfDTOList, pathConfDTOList_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ContainerWebDefenseRule& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AppTotalCount, appTotalCount_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(PathConfDTOList, pathConfDTOList_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      };
      ContainerWebDefenseRule() = default ;
      ContainerWebDefenseRule(const ContainerWebDefenseRule &) = default ;
      ContainerWebDefenseRule(ContainerWebDefenseRule &&) = default ;
      ContainerWebDefenseRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerWebDefenseRule() = default ;
      ContainerWebDefenseRule& operator=(const ContainerWebDefenseRule &) = default ;
      ContainerWebDefenseRule& operator=(ContainerWebDefenseRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PathConfDTOList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PathConfDTOList& obj) { 
          DARABONBA_PTR_TO_JSON(BackupPath, backupPath_);
          DARABONBA_PTR_TO_JSON(DefenseMode, defenseMode_);
          DARABONBA_PTR_TO_JSON(DefensePath, defensePath_);
          DARABONBA_PTR_TO_JSON(ExcludeFile, excludeFile_);
          DARABONBA_PTR_TO_JSON(ExcludeFilePath, excludeFilePath_);
          DARABONBA_PTR_TO_JSON(ExcludeFileType, excludeFileType_);
          DARABONBA_PTR_TO_JSON(GuardType, guardType_);
          DARABONBA_PTR_TO_JSON(IncludeFile, includeFile_);
          DARABONBA_PTR_TO_JSON(IncludeFileType, includeFileType_);
          DARABONBA_PTR_TO_JSON(ProcessPathList, processPathList_);
        };
        friend void from_json(const Darabonba::Json& j, PathConfDTOList& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupPath, backupPath_);
          DARABONBA_PTR_FROM_JSON(DefenseMode, defenseMode_);
          DARABONBA_PTR_FROM_JSON(DefensePath, defensePath_);
          DARABONBA_PTR_FROM_JSON(ExcludeFile, excludeFile_);
          DARABONBA_PTR_FROM_JSON(ExcludeFilePath, excludeFilePath_);
          DARABONBA_PTR_FROM_JSON(ExcludeFileType, excludeFileType_);
          DARABONBA_PTR_FROM_JSON(GuardType, guardType_);
          DARABONBA_PTR_FROM_JSON(IncludeFile, includeFile_);
          DARABONBA_PTR_FROM_JSON(IncludeFileType, includeFileType_);
          DARABONBA_PTR_FROM_JSON(ProcessPathList, processPathList_);
        };
        PathConfDTOList() = default ;
        PathConfDTOList(const PathConfDTOList &) = default ;
        PathConfDTOList(PathConfDTOList &&) = default ;
        PathConfDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PathConfDTOList() = default ;
        PathConfDTOList& operator=(const PathConfDTOList &) = default ;
        PathConfDTOList& operator=(PathConfDTOList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupPath_ == nullptr
        && this->defenseMode_ == nullptr && this->defensePath_ == nullptr && this->excludeFile_ == nullptr && this->excludeFilePath_ == nullptr && this->excludeFileType_ == nullptr
        && this->guardType_ == nullptr && this->includeFile_ == nullptr && this->includeFileType_ == nullptr && this->processPathList_ == nullptr; };
        // backupPath Field Functions 
        bool hasBackupPath() const { return this->backupPath_ != nullptr;};
        void deleteBackupPath() { this->backupPath_ = nullptr;};
        inline string getBackupPath() const { DARABONBA_PTR_GET_DEFAULT(backupPath_, "") };
        inline PathConfDTOList& setBackupPath(string backupPath) { DARABONBA_PTR_SET_VALUE(backupPath_, backupPath) };


        // defenseMode Field Functions 
        bool hasDefenseMode() const { return this->defenseMode_ != nullptr;};
        void deleteDefenseMode() { this->defenseMode_ = nullptr;};
        inline string getDefenseMode() const { DARABONBA_PTR_GET_DEFAULT(defenseMode_, "") };
        inline PathConfDTOList& setDefenseMode(string defenseMode) { DARABONBA_PTR_SET_VALUE(defenseMode_, defenseMode) };


        // defensePath Field Functions 
        bool hasDefensePath() const { return this->defensePath_ != nullptr;};
        void deleteDefensePath() { this->defensePath_ = nullptr;};
        inline string getDefensePath() const { DARABONBA_PTR_GET_DEFAULT(defensePath_, "") };
        inline PathConfDTOList& setDefensePath(string defensePath) { DARABONBA_PTR_SET_VALUE(defensePath_, defensePath) };


        // excludeFile Field Functions 
        bool hasExcludeFile() const { return this->excludeFile_ != nullptr;};
        void deleteExcludeFile() { this->excludeFile_ = nullptr;};
        inline string getExcludeFile() const { DARABONBA_PTR_GET_DEFAULT(excludeFile_, "") };
        inline PathConfDTOList& setExcludeFile(string excludeFile) { DARABONBA_PTR_SET_VALUE(excludeFile_, excludeFile) };


        // excludeFilePath Field Functions 
        bool hasExcludeFilePath() const { return this->excludeFilePath_ != nullptr;};
        void deleteExcludeFilePath() { this->excludeFilePath_ = nullptr;};
        inline string getExcludeFilePath() const { DARABONBA_PTR_GET_DEFAULT(excludeFilePath_, "") };
        inline PathConfDTOList& setExcludeFilePath(string excludeFilePath) { DARABONBA_PTR_SET_VALUE(excludeFilePath_, excludeFilePath) };


        // excludeFileType Field Functions 
        bool hasExcludeFileType() const { return this->excludeFileType_ != nullptr;};
        void deleteExcludeFileType() { this->excludeFileType_ = nullptr;};
        inline string getExcludeFileType() const { DARABONBA_PTR_GET_DEFAULT(excludeFileType_, "") };
        inline PathConfDTOList& setExcludeFileType(string excludeFileType) { DARABONBA_PTR_SET_VALUE(excludeFileType_, excludeFileType) };


        // guardType Field Functions 
        bool hasGuardType() const { return this->guardType_ != nullptr;};
        void deleteGuardType() { this->guardType_ = nullptr;};
        inline int32_t getGuardType() const { DARABONBA_PTR_GET_DEFAULT(guardType_, 0) };
        inline PathConfDTOList& setGuardType(int32_t guardType) { DARABONBA_PTR_SET_VALUE(guardType_, guardType) };


        // includeFile Field Functions 
        bool hasIncludeFile() const { return this->includeFile_ != nullptr;};
        void deleteIncludeFile() { this->includeFile_ = nullptr;};
        inline string getIncludeFile() const { DARABONBA_PTR_GET_DEFAULT(includeFile_, "") };
        inline PathConfDTOList& setIncludeFile(string includeFile) { DARABONBA_PTR_SET_VALUE(includeFile_, includeFile) };


        // includeFileType Field Functions 
        bool hasIncludeFileType() const { return this->includeFileType_ != nullptr;};
        void deleteIncludeFileType() { this->includeFileType_ = nullptr;};
        inline string getIncludeFileType() const { DARABONBA_PTR_GET_DEFAULT(includeFileType_, "") };
        inline PathConfDTOList& setIncludeFileType(string includeFileType) { DARABONBA_PTR_SET_VALUE(includeFileType_, includeFileType) };


        // processPathList Field Functions 
        bool hasProcessPathList() const { return this->processPathList_ != nullptr;};
        void deleteProcessPathList() { this->processPathList_ = nullptr;};
        inline const vector<string> & getProcessPathList() const { DARABONBA_PTR_GET_CONST(processPathList_, vector<string>) };
        inline vector<string> getProcessPathList() { DARABONBA_PTR_GET(processPathList_, vector<string>) };
        inline PathConfDTOList& setProcessPathList(const vector<string> & processPathList) { DARABONBA_PTR_SET_VALUE(processPathList_, processPathList) };
        inline PathConfDTOList& setProcessPathList(vector<string> && processPathList) { DARABONBA_PTR_SET_RVALUE(processPathList_, processPathList) };


      protected:
        // Backup path.
        shared_ptr<string> backupPath_ {};
        // Action to be executed.
        // - **block** : Block
        // - **audit** : Alert
        shared_ptr<string> defenseMode_ {};
        // Defense path
        shared_ptr<string> defensePath_ {};
        // Excluded files.
        shared_ptr<string> excludeFile_ {};
        // Excluded file path.
        shared_ptr<string> excludeFilePath_ {};
        // Exclude file types.
        shared_ptr<string> excludeFileType_ {};
        // Protection mode.
        // - **0**: Basic mode (whitelist)
        // - **1**: Advanced mode (blacklist)
        shared_ptr<int32_t> guardType_ {};
        // Included files.
        shared_ptr<string> includeFile_ {};
        // Type of included files.
        shared_ptr<string> includeFileType_ {};
        // Whitelist process list.
        shared_ptr<vector<string>> processPathList_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->appTotalCount_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->pathConfDTOList_ == nullptr
        && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline ContainerWebDefenseRule& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // appTotalCount Field Functions 
      bool hasAppTotalCount() const { return this->appTotalCount_ != nullptr;};
      void deleteAppTotalCount() { this->appTotalCount_ = nullptr;};
      inline int32_t getAppTotalCount() const { DARABONBA_PTR_GET_DEFAULT(appTotalCount_, 0) };
      inline ContainerWebDefenseRule& setAppTotalCount(int32_t appTotalCount) { DARABONBA_PTR_SET_VALUE(appTotalCount_, appTotalCount) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ContainerWebDefenseRule& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ContainerWebDefenseRule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ContainerWebDefenseRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // pathConfDTOList Field Functions 
      bool hasPathConfDTOList() const { return this->pathConfDTOList_ != nullptr;};
      void deletePathConfDTOList() { this->pathConfDTOList_ = nullptr;};
      inline const vector<ContainerWebDefenseRule::PathConfDTOList> & getPathConfDTOList() const { DARABONBA_PTR_GET_CONST(pathConfDTOList_, vector<ContainerWebDefenseRule::PathConfDTOList>) };
      inline vector<ContainerWebDefenseRule::PathConfDTOList> getPathConfDTOList() { DARABONBA_PTR_GET(pathConfDTOList_, vector<ContainerWebDefenseRule::PathConfDTOList>) };
      inline ContainerWebDefenseRule& setPathConfDTOList(const vector<ContainerWebDefenseRule::PathConfDTOList> & pathConfDTOList) { DARABONBA_PTR_SET_VALUE(pathConfDTOList_, pathConfDTOList) };
      inline ContainerWebDefenseRule& setPathConfDTOList(vector<ContainerWebDefenseRule::PathConfDTOList> && pathConfDTOList) { DARABONBA_PTR_SET_RVALUE(pathConfDTOList_, pathConfDTOList) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ContainerWebDefenseRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleStatus Field Functions 
      bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
      void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
      inline int32_t getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, 0) };
      inline ContainerWebDefenseRule& setRuleStatus(int32_t ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    protected:
      // User ID.
      shared_ptr<int64_t> aliUid_ {};
      // Total number of applications.
      shared_ptr<int32_t> appTotalCount_ {};
      // Timestamp when the rule was created. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // Timestamp when the rule was last modified. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // Rule ID.
      shared_ptr<int64_t> id_ {};
      // List of configured file paths.
      shared_ptr<vector<ContainerWebDefenseRule::PathConfDTOList>> pathConfDTOList_ {};
      // Rule name.
      shared_ptr<string> ruleName_ {};
      // Rule status. The value descriptions are as follows:
      // 
      // - **1**: Enabled
      // - **0**: Disabled
      shared_ptr<int32_t> ruleStatus_ {};
    };

    virtual bool empty() const override { return this->containerWebDefenseRule_ == nullptr
        && this->requestId_ == nullptr; };
    // containerWebDefenseRule Field Functions 
    bool hasContainerWebDefenseRule() const { return this->containerWebDefenseRule_ != nullptr;};
    void deleteContainerWebDefenseRule() { this->containerWebDefenseRule_ = nullptr;};
    inline const GetSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRule & getContainerWebDefenseRule() const { DARABONBA_PTR_GET_CONST(containerWebDefenseRule_, GetSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRule) };
    inline GetSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRule getContainerWebDefenseRule() { DARABONBA_PTR_GET(containerWebDefenseRule_, GetSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRule) };
    inline GetSasContainerWebDefenseRuleResponseBody& setContainerWebDefenseRule(const GetSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRule & containerWebDefenseRule) { DARABONBA_PTR_SET_VALUE(containerWebDefenseRule_, containerWebDefenseRule) };
    inline GetSasContainerWebDefenseRuleResponseBody& setContainerWebDefenseRule(GetSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRule && containerWebDefenseRule) { DARABONBA_PTR_SET_RVALUE(containerWebDefenseRule_, containerWebDefenseRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSasContainerWebDefenseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the container file defense rule.
    shared_ptr<GetSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRule> containerWebDefenseRule_ {};
    // The ID of the current request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and issue localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
