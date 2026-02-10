// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTRULERESPONSEBODY_HPP_
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
  class ListFileProtectRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileProtectList, fileProtectList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileProtectList, fileProtectList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFileProtectRuleResponseBody() = default ;
    ListFileProtectRuleResponseBody(const ListFileProtectRuleResponseBody &) = default ;
    ListFileProtectRuleResponseBody(ListFileProtectRuleResponseBody &&) = default ;
    ListFileProtectRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectRuleResponseBody() = default ;
    ListFileProtectRuleResponseBody& operator=(const ListFileProtectRuleResponseBody &) = default ;
    ListFileProtectRuleResponseBody& operator=(ListFileProtectRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
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
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class FileProtectList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileProtectList& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_TO_JSON(EffectInstanceCount, effectInstanceCount_);
        DARABONBA_PTR_TO_JSON(FileOps, fileOps_);
        DARABONBA_PTR_TO_JSON(FilePaths, filePaths_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProcPaths, procPaths_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      };
      friend void from_json(const Darabonba::Json& j, FileProtectList& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_FROM_JSON(EffectInstanceCount, effectInstanceCount_);
        DARABONBA_PTR_FROM_JSON(FileOps, fileOps_);
        DARABONBA_PTR_FROM_JSON(FilePaths, filePaths_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProcPaths, procPaths_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      };
      FileProtectList() = default ;
      FileProtectList(const FileProtectList &) = default ;
      FileProtectList(FileProtectList &&) = default ;
      FileProtectList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileProtectList() = default ;
      FileProtectList& operator=(const FileProtectList &) = default ;
      FileProtectList& operator=(FileProtectList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->alertLevel_ == nullptr && this->effectInstanceCount_ == nullptr && this->fileOps_ == nullptr && this->filePaths_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->platform_ == nullptr && this->procPaths_ == nullptr && this->ruleName_ == nullptr
        && this->status_ == nullptr && this->switchId_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline FileProtectList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // alertLevel Field Functions 
      bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
      void deleteAlertLevel() { this->alertLevel_ = nullptr;};
      inline string getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
      inline FileProtectList& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


      // effectInstanceCount Field Functions 
      bool hasEffectInstanceCount() const { return this->effectInstanceCount_ != nullptr;};
      void deleteEffectInstanceCount() { this->effectInstanceCount_ = nullptr;};
      inline int64_t getEffectInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(effectInstanceCount_, 0L) };
      inline FileProtectList& setEffectInstanceCount(int64_t effectInstanceCount) { DARABONBA_PTR_SET_VALUE(effectInstanceCount_, effectInstanceCount) };


      // fileOps Field Functions 
      bool hasFileOps() const { return this->fileOps_ != nullptr;};
      void deleteFileOps() { this->fileOps_ = nullptr;};
      inline const vector<string> & getFileOps() const { DARABONBA_PTR_GET_CONST(fileOps_, vector<string>) };
      inline vector<string> getFileOps() { DARABONBA_PTR_GET(fileOps_, vector<string>) };
      inline FileProtectList& setFileOps(const vector<string> & fileOps) { DARABONBA_PTR_SET_VALUE(fileOps_, fileOps) };
      inline FileProtectList& setFileOps(vector<string> && fileOps) { DARABONBA_PTR_SET_RVALUE(fileOps_, fileOps) };


      // filePaths Field Functions 
      bool hasFilePaths() const { return this->filePaths_ != nullptr;};
      void deleteFilePaths() { this->filePaths_ = nullptr;};
      inline const vector<string> & getFilePaths() const { DARABONBA_PTR_GET_CONST(filePaths_, vector<string>) };
      inline vector<string> getFilePaths() { DARABONBA_PTR_GET(filePaths_, vector<string>) };
      inline FileProtectList& setFilePaths(const vector<string> & filePaths) { DARABONBA_PTR_SET_VALUE(filePaths_, filePaths) };
      inline FileProtectList& setFilePaths(vector<string> && filePaths) { DARABONBA_PTR_SET_RVALUE(filePaths_, filePaths) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline FileProtectList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline FileProtectList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline FileProtectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline FileProtectList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // procPaths Field Functions 
      bool hasProcPaths() const { return this->procPaths_ != nullptr;};
      void deleteProcPaths() { this->procPaths_ = nullptr;};
      inline const vector<string> & getProcPaths() const { DARABONBA_PTR_GET_CONST(procPaths_, vector<string>) };
      inline vector<string> getProcPaths() { DARABONBA_PTR_GET(procPaths_, vector<string>) };
      inline FileProtectList& setProcPaths(const vector<string> & procPaths) { DARABONBA_PTR_SET_VALUE(procPaths_, procPaths) };
      inline FileProtectList& setProcPaths(vector<string> && procPaths) { DARABONBA_PTR_SET_RVALUE(procPaths_, procPaths) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline FileProtectList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline FileProtectList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline FileProtectList& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    protected:
      // The handling method of the rule. Valid values:
      // 
      // *   pass: allow
      // *   alert
      shared_ptr<string> action_ {};
      // The severity of alerts. Valid values:
      // 
      // *   0: does not generate alerts
      // *   1: sends notifications
      // *   2: suspicious
      // *   3: high-risk
      shared_ptr<string> alertLevel_ {};
      // The total number of affected assets.
      shared_ptr<int64_t> effectInstanceCount_ {};
      // The operations performed on the files.
      shared_ptr<vector<string>> fileOps_ {};
      // The paths to the monitored files. Wildcard characters are supported.
      shared_ptr<vector<string>> filePaths_ {};
      // The time when the rule was created.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the rule was last modified.
      shared_ptr<int64_t> gmtModified_ {};
      // The ID of the rule.
      shared_ptr<int64_t> id_ {};
      // The type of the operating system. Valid values:
      // 
      // *   **windows**: Windows
      // *   **linux**: Linux
      shared_ptr<string> platform_ {};
      // The paths to the monitored processes. Wildcard characters are supported.
      shared_ptr<vector<string>> procPaths_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The status of the rule. Valid values:
      // 
      // *   0: disabled
      // *   1: enabled
      shared_ptr<int32_t> status_ {};
      // The switch ID of the rule.
      shared_ptr<string> switchId_ {};
    };

    virtual bool empty() const override { return this->fileProtectList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // fileProtectList Field Functions 
    bool hasFileProtectList() const { return this->fileProtectList_ != nullptr;};
    void deleteFileProtectList() { this->fileProtectList_ = nullptr;};
    inline const vector<ListFileProtectRuleResponseBody::FileProtectList> & getFileProtectList() const { DARABONBA_PTR_GET_CONST(fileProtectList_, vector<ListFileProtectRuleResponseBody::FileProtectList>) };
    inline vector<ListFileProtectRuleResponseBody::FileProtectList> getFileProtectList() { DARABONBA_PTR_GET(fileProtectList_, vector<ListFileProtectRuleResponseBody::FileProtectList>) };
    inline ListFileProtectRuleResponseBody& setFileProtectList(const vector<ListFileProtectRuleResponseBody::FileProtectList> & fileProtectList) { DARABONBA_PTR_SET_VALUE(fileProtectList_, fileProtectList) };
    inline ListFileProtectRuleResponseBody& setFileProtectList(vector<ListFileProtectRuleResponseBody::FileProtectList> && fileProtectList) { DARABONBA_PTR_SET_RVALUE(fileProtectList_, fileProtectList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListFileProtectRuleResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListFileProtectRuleResponseBody::PageInfo) };
    inline ListFileProtectRuleResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListFileProtectRuleResponseBody::PageInfo) };
    inline ListFileProtectRuleResponseBody& setPageInfo(const ListFileProtectRuleResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListFileProtectRuleResponseBody& setPageInfo(ListFileProtectRuleResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileProtectRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of returned data.
    shared_ptr<vector<ListFileProtectRuleResponseBody::FileProtectList>> fileProtectList_ {};
    // The pagination information.
    shared_ptr<ListFileProtectRuleResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
