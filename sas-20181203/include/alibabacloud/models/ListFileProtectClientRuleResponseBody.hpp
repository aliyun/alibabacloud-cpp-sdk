// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTCLIENTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTCLIENTRULERESPONSEBODY_HPP_
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
  class ListFileProtectClientRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectClientRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileProtectList, fileProtectList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectClientRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileProtectList, fileProtectList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFileProtectClientRuleResponseBody() = default ;
    ListFileProtectClientRuleResponseBody(const ListFileProtectClientRuleResponseBody &) = default ;
    ListFileProtectClientRuleResponseBody(ListFileProtectClientRuleResponseBody &&) = default ;
    ListFileProtectClientRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectClientRuleResponseBody() = default ;
    ListFileProtectClientRuleResponseBody& operator=(const ListFileProtectClientRuleResponseBody &) = default ;
    ListFileProtectClientRuleResponseBody& operator=(ListFileProtectClientRuleResponseBody &&) = default ;
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
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class FileProtectList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileProtectList& obj) { 
        DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_TO_JSON(EffectInstanceCount, effectInstanceCount_);
        DARABONBA_PTR_TO_JSON(ExcludeUsers, excludeUsers_);
        DARABONBA_PTR_TO_JSON(FileOps, fileOps_);
        DARABONBA_PTR_TO_JSON(FilePaths, filePaths_);
        DARABONBA_PTR_TO_JSON(FileTypes, fileTypes_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProcPaths, procPaths_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      };
      friend void from_json(const Darabonba::Json& j, FileProtectList& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_FROM_JSON(EffectInstanceCount, effectInstanceCount_);
        DARABONBA_PTR_FROM_JSON(ExcludeUsers, excludeUsers_);
        DARABONBA_PTR_FROM_JSON(FileOps, fileOps_);
        DARABONBA_PTR_FROM_JSON(FilePaths, filePaths_);
        DARABONBA_PTR_FROM_JSON(FileTypes, fileTypes_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProcPaths, procPaths_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
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
      virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->effectInstanceCount_ == nullptr && this->excludeUsers_ == nullptr && this->fileOps_ == nullptr && this->filePaths_ == nullptr && this->fileTypes_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->platform_ == nullptr && this->procPaths_ == nullptr
        && this->ruleAction_ == nullptr && this->ruleName_ == nullptr && this->status_ == nullptr && this->switchId_ == nullptr; };
      // alertLevel Field Functions 
      bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
      void deleteAlertLevel() { this->alertLevel_ = nullptr;};
      inline int32_t getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
      inline FileProtectList& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


      // effectInstanceCount Field Functions 
      bool hasEffectInstanceCount() const { return this->effectInstanceCount_ != nullptr;};
      void deleteEffectInstanceCount() { this->effectInstanceCount_ = nullptr;};
      inline int64_t getEffectInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(effectInstanceCount_, 0L) };
      inline FileProtectList& setEffectInstanceCount(int64_t effectInstanceCount) { DARABONBA_PTR_SET_VALUE(effectInstanceCount_, effectInstanceCount) };


      // excludeUsers Field Functions 
      bool hasExcludeUsers() const { return this->excludeUsers_ != nullptr;};
      void deleteExcludeUsers() { this->excludeUsers_ = nullptr;};
      inline const vector<string> & getExcludeUsers() const { DARABONBA_PTR_GET_CONST(excludeUsers_, vector<string>) };
      inline vector<string> getExcludeUsers() { DARABONBA_PTR_GET(excludeUsers_, vector<string>) };
      inline FileProtectList& setExcludeUsers(const vector<string> & excludeUsers) { DARABONBA_PTR_SET_VALUE(excludeUsers_, excludeUsers) };
      inline FileProtectList& setExcludeUsers(vector<string> && excludeUsers) { DARABONBA_PTR_SET_RVALUE(excludeUsers_, excludeUsers) };


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


      // fileTypes Field Functions 
      bool hasFileTypes() const { return this->fileTypes_ != nullptr;};
      void deleteFileTypes() { this->fileTypes_ = nullptr;};
      inline const vector<string> & getFileTypes() const { DARABONBA_PTR_GET_CONST(fileTypes_, vector<string>) };
      inline vector<string> getFileTypes() { DARABONBA_PTR_GET(fileTypes_, vector<string>) };
      inline FileProtectList& setFileTypes(const vector<string> & fileTypes) { DARABONBA_PTR_SET_VALUE(fileTypes_, fileTypes) };
      inline FileProtectList& setFileTypes(vector<string> && fileTypes) { DARABONBA_PTR_SET_RVALUE(fileTypes_, fileTypes) };


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


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
      inline FileProtectList& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


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
      shared_ptr<int32_t> alertLevel_ {};
      shared_ptr<int64_t> effectInstanceCount_ {};
      shared_ptr<vector<string>> excludeUsers_ {};
      shared_ptr<vector<string>> fileOps_ {};
      shared_ptr<vector<string>> filePaths_ {};
      shared_ptr<vector<string>> fileTypes_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<vector<string>> procPaths_ {};
      shared_ptr<string> ruleAction_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> switchId_ {};
    };

    virtual bool empty() const override { return this->fileProtectList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // fileProtectList Field Functions 
    bool hasFileProtectList() const { return this->fileProtectList_ != nullptr;};
    void deleteFileProtectList() { this->fileProtectList_ = nullptr;};
    inline const vector<ListFileProtectClientRuleResponseBody::FileProtectList> & getFileProtectList() const { DARABONBA_PTR_GET_CONST(fileProtectList_, vector<ListFileProtectClientRuleResponseBody::FileProtectList>) };
    inline vector<ListFileProtectClientRuleResponseBody::FileProtectList> getFileProtectList() { DARABONBA_PTR_GET(fileProtectList_, vector<ListFileProtectClientRuleResponseBody::FileProtectList>) };
    inline ListFileProtectClientRuleResponseBody& setFileProtectList(const vector<ListFileProtectClientRuleResponseBody::FileProtectList> & fileProtectList) { DARABONBA_PTR_SET_VALUE(fileProtectList_, fileProtectList) };
    inline ListFileProtectClientRuleResponseBody& setFileProtectList(vector<ListFileProtectClientRuleResponseBody::FileProtectList> && fileProtectList) { DARABONBA_PTR_SET_RVALUE(fileProtectList_, fileProtectList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListFileProtectClientRuleResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListFileProtectClientRuleResponseBody::PageInfo) };
    inline ListFileProtectClientRuleResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListFileProtectClientRuleResponseBody::PageInfo) };
    inline ListFileProtectClientRuleResponseBody& setPageInfo(const ListFileProtectClientRuleResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListFileProtectClientRuleResponseBody& setPageInfo(ListFileProtectClientRuleResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileProtectClientRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListFileProtectClientRuleResponseBody::FileProtectList>> fileProtectList_ {};
    shared_ptr<ListFileProtectClientRuleResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
