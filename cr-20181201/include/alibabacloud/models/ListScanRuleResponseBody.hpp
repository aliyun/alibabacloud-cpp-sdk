// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanRules, scanRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanRules, scanRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScanRuleResponseBody() = default ;
    ListScanRuleResponseBody(const ListScanRuleResponseBody &) = default ;
    ListScanRuleResponseBody(ListScanRuleResponseBody &&) = default ;
    ListScanRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanRuleResponseBody() = default ;
    ListScanRuleResponseBody& operator=(const ListScanRuleResponseBody &) = default ;
    ListScanRuleResponseBody& operator=(ListScanRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScanRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScanRules& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_TO_JSON(RepoNames, repoNames_);
        DARABONBA_PTR_TO_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(ScanRuleId, scanRuleId_);
        DARABONBA_PTR_TO_JSON(ScanScope, scanScope_);
        DARABONBA_PTR_TO_JSON(ScanType, scanType_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ScanRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_FROM_JSON(RepoNames, repoNames_);
        DARABONBA_PTR_FROM_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(ScanRuleId, scanRuleId_);
        DARABONBA_PTR_FROM_JSON(ScanScope, scanScope_);
        DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ScanRules() = default ;
      ScanRules(const ScanRules &) = default ;
      ScanRules(ScanRules &&) = default ;
      ScanRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScanRules() = default ;
      ScanRules& operator=(const ScanRules &) = default ;
      ScanRules& operator=(ScanRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->namespaces_ == nullptr && this->repoNames_ == nullptr && this->repoTagFilterPattern_ == nullptr && this->ruleName_ == nullptr && this->scanRuleId_ == nullptr
        && this->scanScope_ == nullptr && this->scanType_ == nullptr && this->triggerType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ScanRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // namespaces Field Functions 
      bool hasNamespaces() const { return this->namespaces_ != nullptr;};
      void deleteNamespaces() { this->namespaces_ = nullptr;};
      inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
      inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
      inline ScanRules& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
      inline ScanRules& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


      // repoNames Field Functions 
      bool hasRepoNames() const { return this->repoNames_ != nullptr;};
      void deleteRepoNames() { this->repoNames_ = nullptr;};
      inline const vector<string> & getRepoNames() const { DARABONBA_PTR_GET_CONST(repoNames_, vector<string>) };
      inline vector<string> getRepoNames() { DARABONBA_PTR_GET(repoNames_, vector<string>) };
      inline ScanRules& setRepoNames(const vector<string> & repoNames) { DARABONBA_PTR_SET_VALUE(repoNames_, repoNames) };
      inline ScanRules& setRepoNames(vector<string> && repoNames) { DARABONBA_PTR_SET_RVALUE(repoNames_, repoNames) };


      // repoTagFilterPattern Field Functions 
      bool hasRepoTagFilterPattern() const { return this->repoTagFilterPattern_ != nullptr;};
      void deleteRepoTagFilterPattern() { this->repoTagFilterPattern_ = nullptr;};
      inline string getRepoTagFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(repoTagFilterPattern_, "") };
      inline ScanRules& setRepoTagFilterPattern(string repoTagFilterPattern) { DARABONBA_PTR_SET_VALUE(repoTagFilterPattern_, repoTagFilterPattern) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ScanRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // scanRuleId Field Functions 
      bool hasScanRuleId() const { return this->scanRuleId_ != nullptr;};
      void deleteScanRuleId() { this->scanRuleId_ = nullptr;};
      inline string getScanRuleId() const { DARABONBA_PTR_GET_DEFAULT(scanRuleId_, "") };
      inline ScanRules& setScanRuleId(string scanRuleId) { DARABONBA_PTR_SET_VALUE(scanRuleId_, scanRuleId) };


      // scanScope Field Functions 
      bool hasScanScope() const { return this->scanScope_ != nullptr;};
      void deleteScanScope() { this->scanScope_ = nullptr;};
      inline string getScanScope() const { DARABONBA_PTR_GET_DEFAULT(scanScope_, "") };
      inline ScanRules& setScanScope(string scanScope) { DARABONBA_PTR_SET_VALUE(scanScope_, scanScope) };


      // scanType Field Functions 
      bool hasScanType() const { return this->scanType_ != nullptr;};
      void deleteScanType() { this->scanType_ = nullptr;};
      inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
      inline ScanRules& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline ScanRules& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ScanRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The list of namespaces.
      shared_ptr<vector<string>> namespaces_ {};
      // The repository name.
      shared_ptr<vector<string>> repoNames_ {};
      // The tag that triggers the scan matches the regular expression.
      shared_ptr<string> repoTagFilterPattern_ {};
      // The rule name.
      shared_ptr<string> ruleName_ {};
      // The scan rule id.
      shared_ptr<string> scanRuleId_ {};
      // The scan scope.
      shared_ptr<string> scanScope_ {};
      // The scan type. Valid values:
      // 
      // *   `VUL`: Products Cloud Security Scanner
      // *   `SBOM`: Product Content Analysis
      shared_ptr<string> scanType_ {};
      // The trigger type.
      shared_ptr<string> triggerType_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scanRules_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScanRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListScanRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListScanRuleResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScanRuleResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScanRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanRules Field Functions 
    bool hasScanRules() const { return this->scanRules_ != nullptr;};
    void deleteScanRules() { this->scanRules_ = nullptr;};
    inline const vector<ListScanRuleResponseBody::ScanRules> & getScanRules() const { DARABONBA_PTR_GET_CONST(scanRules_, vector<ListScanRuleResponseBody::ScanRules>) };
    inline vector<ListScanRuleResponseBody::ScanRules> getScanRules() { DARABONBA_PTR_GET(scanRules_, vector<ListScanRuleResponseBody::ScanRules>) };
    inline ListScanRuleResponseBody& setScanRules(const vector<ListScanRuleResponseBody::ScanRules> & scanRules) { DARABONBA_PTR_SET_VALUE(scanRules_, scanRules) };
    inline ListScanRuleResponseBody& setScanRules(vector<ListScanRuleResponseBody::ScanRules> && scanRules) { DARABONBA_PTR_SET_RVALUE(scanRules_, scanRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListScanRuleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Request Id
    shared_ptr<string> requestId_ {};
    // The list of scan rules.
    shared_ptr<vector<ListScanRuleResponseBody::ScanRules>> scanRules_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
