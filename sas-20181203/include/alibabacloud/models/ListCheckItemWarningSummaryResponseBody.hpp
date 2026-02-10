// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGSUMMARYRESPONSEBODY_HPP_
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
  class ListCheckItemWarningSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckItemWarningSummaryResponseBody() = default ;
    ListCheckItemWarningSummaryResponseBody(const ListCheckItemWarningSummaryResponseBody &) = default ;
    ListCheckItemWarningSummaryResponseBody(ListCheckItemWarningSummaryResponseBody &&) = default ;
    ListCheckItemWarningSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningSummaryResponseBody() = default ;
    ListCheckItemWarningSummaryResponseBody& operator=(const ListCheckItemWarningSummaryResponseBody &) = default ;
    ListCheckItemWarningSummaryResponseBody& operator=(ListCheckItemWarningSummaryResponseBody &&) = default ;
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
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Advice, advice_);
        DARABONBA_PTR_TO_JSON(AffiliatedRiskTypes, affiliatedRiskTypes_);
        DARABONBA_PTR_TO_JSON(AffiliatedRisks, affiliatedRisks_);
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
        DARABONBA_PTR_TO_JSON(CheckLevel, checkLevel_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(ContainerCheckItem, containerCheckItem_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableRisks, enableRisks_);
        DARABONBA_PTR_TO_JSON(RiskType, riskType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WarningMachineCount, warningMachineCount_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Advice, advice_);
        DARABONBA_PTR_FROM_JSON(AffiliatedRiskTypes, affiliatedRiskTypes_);
        DARABONBA_PTR_FROM_JSON(AffiliatedRisks, affiliatedRisks_);
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
        DARABONBA_PTR_FROM_JSON(CheckLevel, checkLevel_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(ContainerCheckItem, containerCheckItem_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableRisks, enableRisks_);
        DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WarningMachineCount, warningMachineCount_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advice_ == nullptr
        && this->affiliatedRiskTypes_ == nullptr && this->affiliatedRisks_ == nullptr && this->alias_ == nullptr && this->checkId_ == nullptr && this->checkItem_ == nullptr
        && this->checkLevel_ == nullptr && this->checkType_ == nullptr && this->containerCheckItem_ == nullptr && this->description_ == nullptr && this->enableRisks_ == nullptr
        && this->riskType_ == nullptr && this->status_ == nullptr && this->warningMachineCount_ == nullptr; };
      // advice Field Functions 
      bool hasAdvice() const { return this->advice_ != nullptr;};
      void deleteAdvice() { this->advice_ = nullptr;};
      inline string getAdvice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
      inline List& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


      // affiliatedRiskTypes Field Functions 
      bool hasAffiliatedRiskTypes() const { return this->affiliatedRiskTypes_ != nullptr;};
      void deleteAffiliatedRiskTypes() { this->affiliatedRiskTypes_ = nullptr;};
      inline const vector<string> & getAffiliatedRiskTypes() const { DARABONBA_PTR_GET_CONST(affiliatedRiskTypes_, vector<string>) };
      inline vector<string> getAffiliatedRiskTypes() { DARABONBA_PTR_GET(affiliatedRiskTypes_, vector<string>) };
      inline List& setAffiliatedRiskTypes(const vector<string> & affiliatedRiskTypes) { DARABONBA_PTR_SET_VALUE(affiliatedRiskTypes_, affiliatedRiskTypes) };
      inline List& setAffiliatedRiskTypes(vector<string> && affiliatedRiskTypes) { DARABONBA_PTR_SET_RVALUE(affiliatedRiskTypes_, affiliatedRiskTypes) };


      // affiliatedRisks Field Functions 
      bool hasAffiliatedRisks() const { return this->affiliatedRisks_ != nullptr;};
      void deleteAffiliatedRisks() { this->affiliatedRisks_ = nullptr;};
      inline const vector<string> & getAffiliatedRisks() const { DARABONBA_PTR_GET_CONST(affiliatedRisks_, vector<string>) };
      inline vector<string> getAffiliatedRisks() { DARABONBA_PTR_GET(affiliatedRisks_, vector<string>) };
      inline List& setAffiliatedRisks(const vector<string> & affiliatedRisks) { DARABONBA_PTR_SET_VALUE(affiliatedRisks_, affiliatedRisks) };
      inline List& setAffiliatedRisks(vector<string> && affiliatedRisks) { DARABONBA_PTR_SET_RVALUE(affiliatedRisks_, affiliatedRisks) };


      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline List& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline List& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkItem Field Functions 
      bool hasCheckItem() const { return this->checkItem_ != nullptr;};
      void deleteCheckItem() { this->checkItem_ = nullptr;};
      inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
      inline List& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


      // checkLevel Field Functions 
      bool hasCheckLevel() const { return this->checkLevel_ != nullptr;};
      void deleteCheckLevel() { this->checkLevel_ = nullptr;};
      inline string getCheckLevel() const { DARABONBA_PTR_GET_DEFAULT(checkLevel_, "") };
      inline List& setCheckLevel(string checkLevel) { DARABONBA_PTR_SET_VALUE(checkLevel_, checkLevel) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
      inline List& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // containerCheckItem Field Functions 
      bool hasContainerCheckItem() const { return this->containerCheckItem_ != nullptr;};
      void deleteContainerCheckItem() { this->containerCheckItem_ = nullptr;};
      inline bool getContainerCheckItem() const { DARABONBA_PTR_GET_DEFAULT(containerCheckItem_, false) };
      inline List& setContainerCheckItem(bool containerCheckItem) { DARABONBA_PTR_SET_VALUE(containerCheckItem_, containerCheckItem) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableRisks Field Functions 
      bool hasEnableRisks() const { return this->enableRisks_ != nullptr;};
      void deleteEnableRisks() { this->enableRisks_ = nullptr;};
      inline const vector<string> & getEnableRisks() const { DARABONBA_PTR_GET_CONST(enableRisks_, vector<string>) };
      inline vector<string> getEnableRisks() { DARABONBA_PTR_GET(enableRisks_, vector<string>) };
      inline List& setEnableRisks(const vector<string> & enableRisks) { DARABONBA_PTR_SET_VALUE(enableRisks_, enableRisks) };
      inline List& setEnableRisks(vector<string> && enableRisks) { DARABONBA_PTR_SET_RVALUE(enableRisks_, enableRisks) };


      // riskType Field Functions 
      bool hasRiskType() const { return this->riskType_ != nullptr;};
      void deleteRiskType() { this->riskType_ = nullptr;};
      inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
      inline List& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // warningMachineCount Field Functions 
      bool hasWarningMachineCount() const { return this->warningMachineCount_ != nullptr;};
      void deleteWarningMachineCount() { this->warningMachineCount_ = nullptr;};
      inline int32_t getWarningMachineCount() const { DARABONBA_PTR_GET_DEFAULT(warningMachineCount_, 0) };
      inline List& setWarningMachineCount(int32_t warningMachineCount) { DARABONBA_PTR_SET_VALUE(warningMachineCount_, warningMachineCount) };


    protected:
      // The suggestion on the check item.
      shared_ptr<string> advice_ {};
      // The types of the baselines to which the check item belongs.
      shared_ptr<vector<string>> affiliatedRiskTypes_ {};
      // The baselines to which the check item belongs.
      shared_ptr<vector<string>> affiliatedRisks_ {};
      // The alias of the baseline type.
      shared_ptr<string> alias_ {};
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The description of the check item.
      shared_ptr<string> checkItem_ {};
      // The risk level of the check item. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> checkLevel_ {};
      // The type of the check item.
      shared_ptr<string> checkType_ {};
      // Indicates whether the check item belongs to the container runtime type. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> containerCheckItem_ {};
      // The description of the check item.
      shared_ptr<string> description_ {};
      // The baselines in which the check item is enabled.
      shared_ptr<vector<string>> enableRisks_ {};
      // The type of the baseline.
      shared_ptr<string> riskType_ {};
      // Risk status of check items. Valid values:
      // 
      // *   **1**: failed
      // *   **3**: passed
      // *   **6**: whitelisted
      // *   **8**: fixed
      shared_ptr<int32_t> status_ {};
      // The number of servers that are affected by the check item.
      shared_ptr<int32_t> warningMachineCount_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListCheckItemWarningSummaryResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListCheckItemWarningSummaryResponseBody::List>) };
    inline vector<ListCheckItemWarningSummaryResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListCheckItemWarningSummaryResponseBody::List>) };
    inline ListCheckItemWarningSummaryResponseBody& setList(const vector<ListCheckItemWarningSummaryResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListCheckItemWarningSummaryResponseBody& setList(vector<ListCheckItemWarningSummaryResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckItemWarningSummaryResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckItemWarningSummaryResponseBody::PageInfo) };
    inline ListCheckItemWarningSummaryResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckItemWarningSummaryResponseBody::PageInfo) };
    inline ListCheckItemWarningSummaryResponseBody& setPageInfo(const ListCheckItemWarningSummaryResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckItemWarningSummaryResponseBody& setPageInfo(ListCheckItemWarningSummaryResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckItemWarningSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of check item risk statistics.
    shared_ptr<vector<ListCheckItemWarningSummaryResponseBody::List>> list_ {};
    // The pagination information.
    shared_ptr<ListCheckItemWarningSummaryResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
