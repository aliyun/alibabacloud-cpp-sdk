// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSASCONTAINERWEBDEFENSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSASCONTAINERWEBDEFENSERULERESPONSEBODY_HPP_
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
  class ListSasContainerWebDefenseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSasContainerWebDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerWebDefenseRuleList, containerWebDefenseRuleList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSasContainerWebDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerWebDefenseRuleList, containerWebDefenseRuleList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSasContainerWebDefenseRuleResponseBody() = default ;
    ListSasContainerWebDefenseRuleResponseBody(const ListSasContainerWebDefenseRuleResponseBody &) = default ;
    ListSasContainerWebDefenseRuleResponseBody(ListSasContainerWebDefenseRuleResponseBody &&) = default ;
    ListSasContainerWebDefenseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSasContainerWebDefenseRuleResponseBody() = default ;
    ListSasContainerWebDefenseRuleResponseBody& operator=(const ListSasContainerWebDefenseRuleResponseBody &) = default ;
    ListSasContainerWebDefenseRuleResponseBody& operator=(ListSasContainerWebDefenseRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ContainerWebDefenseRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerWebDefenseRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ApptotalCount, apptotalCount_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(PathConfDTOList, pathConfDTOList_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ContainerWebDefenseRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ApptotalCount, apptotalCount_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(PathConfDTOList, pathConfDTOList_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      };
      ContainerWebDefenseRuleList() = default ;
      ContainerWebDefenseRuleList(const ContainerWebDefenseRuleList &) = default ;
      ContainerWebDefenseRuleList(ContainerWebDefenseRuleList &&) = default ;
      ContainerWebDefenseRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerWebDefenseRuleList() = default ;
      ContainerWebDefenseRuleList& operator=(const ContainerWebDefenseRuleList &) = default ;
      ContainerWebDefenseRuleList& operator=(ContainerWebDefenseRuleList &&) = default ;
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
        // The backup paths.
        shared_ptr<string> backupPath_ {};
        // The prevention mode. Valid values:
        // 
        // *   **block**
        // *   **audit**
        shared_ptr<string> defenseMode_ {};
        // The protected path.
        shared_ptr<string> defensePath_ {};
        // The file that is excluded.
        shared_ptr<string> excludeFile_ {};
        // The path to the file that is excluded.
        shared_ptr<string> excludeFilePath_ {};
        // The type of the file that is excluded.
        shared_ptr<string> excludeFileType_ {};
        // The protection mode. Valid values:
        // 
        // *   **0**: basic mode (whitelist)
        // *   **1**: complex mode (blacklist)
        shared_ptr<int32_t> guardType_ {};
        // The file that is included.
        shared_ptr<string> includeFile_ {};
        // The type of the file that is included.
        shared_ptr<string> includeFileType_ {};
        // The processes that are added to the whitelist.
        shared_ptr<vector<string>> processPathList_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->apptotalCount_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->pathConfDTOList_ == nullptr
        && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline ContainerWebDefenseRuleList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // apptotalCount Field Functions 
      bool hasApptotalCount() const { return this->apptotalCount_ != nullptr;};
      void deleteApptotalCount() { this->apptotalCount_ = nullptr;};
      inline int32_t getApptotalCount() const { DARABONBA_PTR_GET_DEFAULT(apptotalCount_, 0) };
      inline ContainerWebDefenseRuleList& setApptotalCount(int32_t apptotalCount) { DARABONBA_PTR_SET_VALUE(apptotalCount_, apptotalCount) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ContainerWebDefenseRuleList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ContainerWebDefenseRuleList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ContainerWebDefenseRuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // pathConfDTOList Field Functions 
      bool hasPathConfDTOList() const { return this->pathConfDTOList_ != nullptr;};
      void deletePathConfDTOList() { this->pathConfDTOList_ = nullptr;};
      inline const vector<ContainerWebDefenseRuleList::PathConfDTOList> & getPathConfDTOList() const { DARABONBA_PTR_GET_CONST(pathConfDTOList_, vector<ContainerWebDefenseRuleList::PathConfDTOList>) };
      inline vector<ContainerWebDefenseRuleList::PathConfDTOList> getPathConfDTOList() { DARABONBA_PTR_GET(pathConfDTOList_, vector<ContainerWebDefenseRuleList::PathConfDTOList>) };
      inline ContainerWebDefenseRuleList& setPathConfDTOList(const vector<ContainerWebDefenseRuleList::PathConfDTOList> & pathConfDTOList) { DARABONBA_PTR_SET_VALUE(pathConfDTOList_, pathConfDTOList) };
      inline ContainerWebDefenseRuleList& setPathConfDTOList(vector<ContainerWebDefenseRuleList::PathConfDTOList> && pathConfDTOList) { DARABONBA_PTR_SET_RVALUE(pathConfDTOList_, pathConfDTOList) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ContainerWebDefenseRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleStatus Field Functions 
      bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
      void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
      inline int32_t getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, 0) };
      inline ContainerWebDefenseRuleList& setRuleStatus(int32_t ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    protected:
      // The user ID.
      shared_ptr<int64_t> aliUid_ {};
      // The number of the applications.
      shared_ptr<int32_t> apptotalCount_ {};
      // The creation time. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The timestamp when the alert event was last modified. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The ID of the rule.
      shared_ptr<int64_t> id_ {};
      // The paths that are protected.
      shared_ptr<vector<ContainerWebDefenseRuleList::PathConfDTOList>> pathConfDTOList_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The status of the rule. Valid values:
      // 
      // *   **1**: enabled
      // *   **0**: disabled
      shared_ptr<int32_t> ruleStatus_ {};
    };

    virtual bool empty() const override { return this->containerWebDefenseRuleList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // containerWebDefenseRuleList Field Functions 
    bool hasContainerWebDefenseRuleList() const { return this->containerWebDefenseRuleList_ != nullptr;};
    void deleteContainerWebDefenseRuleList() { this->containerWebDefenseRuleList_ = nullptr;};
    inline const vector<ListSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRuleList> & getContainerWebDefenseRuleList() const { DARABONBA_PTR_GET_CONST(containerWebDefenseRuleList_, vector<ListSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRuleList>) };
    inline vector<ListSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRuleList> getContainerWebDefenseRuleList() { DARABONBA_PTR_GET(containerWebDefenseRuleList_, vector<ListSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRuleList>) };
    inline ListSasContainerWebDefenseRuleResponseBody& setContainerWebDefenseRuleList(const vector<ListSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRuleList> & containerWebDefenseRuleList) { DARABONBA_PTR_SET_VALUE(containerWebDefenseRuleList_, containerWebDefenseRuleList) };
    inline ListSasContainerWebDefenseRuleResponseBody& setContainerWebDefenseRuleList(vector<ListSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRuleList> && containerWebDefenseRuleList) { DARABONBA_PTR_SET_RVALUE(containerWebDefenseRuleList_, containerWebDefenseRuleList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListSasContainerWebDefenseRuleResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListSasContainerWebDefenseRuleResponseBody::PageInfo) };
    inline ListSasContainerWebDefenseRuleResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListSasContainerWebDefenseRuleResponseBody::PageInfo) };
    inline ListSasContainerWebDefenseRuleResponseBody& setPageInfo(const ListSasContainerWebDefenseRuleResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListSasContainerWebDefenseRuleResponseBody& setPageInfo(ListSasContainerWebDefenseRuleResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSasContainerWebDefenseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The rules for container tamper-proofing.
    shared_ptr<vector<ListSasContainerWebDefenseRuleResponseBody::ContainerWebDefenseRuleList>> containerWebDefenseRuleList_ {};
    // The pagination information.
    shared_ptr<ListSasContainerWebDefenseRuleResponseBody::PageInfo> pageInfo_ {};
    // The request ID, which is used to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
