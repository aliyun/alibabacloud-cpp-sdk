// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSUMMARYRESPONSEBODY_HPP_
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
  class DescribeCheckWarningSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WarningSummarys, warningSummarys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WarningSummarys, warningSummarys_);
    };
    DescribeCheckWarningSummaryResponseBody() = default ;
    DescribeCheckWarningSummaryResponseBody(const DescribeCheckWarningSummaryResponseBody &) = default ;
    DescribeCheckWarningSummaryResponseBody(DescribeCheckWarningSummaryResponseBody &&) = default ;
    DescribeCheckWarningSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningSummaryResponseBody() = default ;
    DescribeCheckWarningSummaryResponseBody& operator=(const DescribeCheckWarningSummaryResponseBody &) = default ;
    DescribeCheckWarningSummaryResponseBody& operator=(DescribeCheckWarningSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WarningSummarys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarningSummarys& obj) { 
        DARABONBA_PTR_TO_JSON(CheckCount, checkCount_);
        DARABONBA_PTR_TO_JSON(CheckExploit, checkExploit_);
        DARABONBA_PTR_TO_JSON(ContainerRisk, containerRisk_);
        DARABONBA_PTR_TO_JSON(DatabaseRisk, databaseRisk_);
        DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
        DARABONBA_PTR_TO_JSON(LastFoundTime, lastFoundTime_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
        DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
        DARABONBA_PTR_TO_JSON(RiskId, riskId_);
        DARABONBA_PTR_TO_JSON(RiskName, riskName_);
        DARABONBA_PTR_TO_JSON(SubTypeAlias, subTypeAlias_);
        DARABONBA_PTR_TO_JSON(TypeAlias, typeAlias_);
        DARABONBA_PTR_TO_JSON(WarningMachineCount, warningMachineCount_);
      };
      friend void from_json(const Darabonba::Json& j, WarningSummarys& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckCount, checkCount_);
        DARABONBA_PTR_FROM_JSON(CheckExploit, checkExploit_);
        DARABONBA_PTR_FROM_JSON(ContainerRisk, containerRisk_);
        DARABONBA_PTR_FROM_JSON(DatabaseRisk, databaseRisk_);
        DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
        DARABONBA_PTR_FROM_JSON(LastFoundTime, lastFoundTime_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
        DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
        DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
        DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
        DARABONBA_PTR_FROM_JSON(SubTypeAlias, subTypeAlias_);
        DARABONBA_PTR_FROM_JSON(TypeAlias, typeAlias_);
        DARABONBA_PTR_FROM_JSON(WarningMachineCount, warningMachineCount_);
      };
      WarningSummarys() = default ;
      WarningSummarys(const WarningSummarys &) = default ;
      WarningSummarys(WarningSummarys &&) = default ;
      WarningSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarningSummarys() = default ;
      WarningSummarys& operator=(const WarningSummarys &) = default ;
      WarningSummarys& operator=(WarningSummarys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkCount_ == nullptr
        && this->checkExploit_ == nullptr && this->containerRisk_ == nullptr && this->databaseRisk_ == nullptr && this->highWarningCount_ == nullptr && this->lastFoundTime_ == nullptr
        && this->level_ == nullptr && this->lowWarningCount_ == nullptr && this->mediumWarningCount_ == nullptr && this->riskId_ == nullptr && this->riskName_ == nullptr
        && this->subTypeAlias_ == nullptr && this->typeAlias_ == nullptr && this->warningMachineCount_ == nullptr; };
      // checkCount Field Functions 
      bool hasCheckCount() const { return this->checkCount_ != nullptr;};
      void deleteCheckCount() { this->checkCount_ = nullptr;};
      inline int32_t getCheckCount() const { DARABONBA_PTR_GET_DEFAULT(checkCount_, 0) };
      inline WarningSummarys& setCheckCount(int32_t checkCount) { DARABONBA_PTR_SET_VALUE(checkCount_, checkCount) };


      // checkExploit Field Functions 
      bool hasCheckExploit() const { return this->checkExploit_ != nullptr;};
      void deleteCheckExploit() { this->checkExploit_ = nullptr;};
      inline bool getCheckExploit() const { DARABONBA_PTR_GET_DEFAULT(checkExploit_, false) };
      inline WarningSummarys& setCheckExploit(bool checkExploit) { DARABONBA_PTR_SET_VALUE(checkExploit_, checkExploit) };


      // containerRisk Field Functions 
      bool hasContainerRisk() const { return this->containerRisk_ != nullptr;};
      void deleteContainerRisk() { this->containerRisk_ = nullptr;};
      inline bool getContainerRisk() const { DARABONBA_PTR_GET_DEFAULT(containerRisk_, false) };
      inline WarningSummarys& setContainerRisk(bool containerRisk) { DARABONBA_PTR_SET_VALUE(containerRisk_, containerRisk) };


      // databaseRisk Field Functions 
      bool hasDatabaseRisk() const { return this->databaseRisk_ != nullptr;};
      void deleteDatabaseRisk() { this->databaseRisk_ = nullptr;};
      inline bool getDatabaseRisk() const { DARABONBA_PTR_GET_DEFAULT(databaseRisk_, false) };
      inline WarningSummarys& setDatabaseRisk(bool databaseRisk) { DARABONBA_PTR_SET_VALUE(databaseRisk_, databaseRisk) };


      // highWarningCount Field Functions 
      bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
      void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
      inline int32_t getHighWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
      inline WarningSummarys& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


      // lastFoundTime Field Functions 
      bool hasLastFoundTime() const { return this->lastFoundTime_ != nullptr;};
      void deleteLastFoundTime() { this->lastFoundTime_ = nullptr;};
      inline string getLastFoundTime() const { DARABONBA_PTR_GET_DEFAULT(lastFoundTime_, "") };
      inline WarningSummarys& setLastFoundTime(string lastFoundTime) { DARABONBA_PTR_SET_VALUE(lastFoundTime_, lastFoundTime) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline WarningSummarys& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // lowWarningCount Field Functions 
      bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
      void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
      inline int32_t getLowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
      inline WarningSummarys& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


      // mediumWarningCount Field Functions 
      bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
      void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
      inline int32_t getMediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
      inline WarningSummarys& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


      // riskId Field Functions 
      bool hasRiskId() const { return this->riskId_ != nullptr;};
      void deleteRiskId() { this->riskId_ = nullptr;};
      inline int64_t getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
      inline WarningSummarys& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


      // riskName Field Functions 
      bool hasRiskName() const { return this->riskName_ != nullptr;};
      void deleteRiskName() { this->riskName_ = nullptr;};
      inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
      inline WarningSummarys& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


      // subTypeAlias Field Functions 
      bool hasSubTypeAlias() const { return this->subTypeAlias_ != nullptr;};
      void deleteSubTypeAlias() { this->subTypeAlias_ = nullptr;};
      inline string getSubTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(subTypeAlias_, "") };
      inline WarningSummarys& setSubTypeAlias(string subTypeAlias) { DARABONBA_PTR_SET_VALUE(subTypeAlias_, subTypeAlias) };


      // typeAlias Field Functions 
      bool hasTypeAlias() const { return this->typeAlias_ != nullptr;};
      void deleteTypeAlias() { this->typeAlias_ = nullptr;};
      inline string getTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(typeAlias_, "") };
      inline WarningSummarys& setTypeAlias(string typeAlias) { DARABONBA_PTR_SET_VALUE(typeAlias_, typeAlias) };


      // warningMachineCount Field Functions 
      bool hasWarningMachineCount() const { return this->warningMachineCount_ != nullptr;};
      void deleteWarningMachineCount() { this->warningMachineCount_ = nullptr;};
      inline int32_t getWarningMachineCount() const { DARABONBA_PTR_GET_DEFAULT(warningMachineCount_, 0) };
      inline WarningSummarys& setWarningMachineCount(int32_t warningMachineCount) { DARABONBA_PTR_SET_VALUE(warningMachineCount_, warningMachineCount) };


    protected:
      // The number of check items.
      shared_ptr<int32_t> checkCount_ {};
      // Indicates whether the risk item can be exploited. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> checkExploit_ {};
      // Indicates  whether the risk item is a container runtime risk item. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> containerRisk_ {};
      // Indicates whether the risk item is a database risk item. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> databaseRisk_ {};
      // The number of high-risk items.
      shared_ptr<int32_t> highWarningCount_ {};
      // The time when the last baseline check was performed.
      shared_ptr<string> lastFoundTime_ {};
      // The risk level of the risk item. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> level_ {};
      // The number of low-risk items.
      shared_ptr<int32_t> lowWarningCount_ {};
      // The number of medium-risk items.
      shared_ptr<int32_t> mediumWarningCount_ {};
      // The ID of the risk item.
      shared_ptr<int64_t> riskId_ {};
      // The name of the risk item.
      shared_ptr<string> riskName_ {};
      // The level-2 type of the risk item.
      shared_ptr<string> subTypeAlias_ {};
      // The level-1 type of the check item. Examples: database, system, weak password, and middleware.
      shared_ptr<string> typeAlias_ {};
      // The number of assets on which risk items are detected.
      shared_ptr<int32_t> warningMachineCount_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->warningSummarys_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCheckWarningSummaryResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCheckWarningSummaryResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCheckWarningSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckWarningSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCheckWarningSummaryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // warningSummarys Field Functions 
    bool hasWarningSummarys() const { return this->warningSummarys_ != nullptr;};
    void deleteWarningSummarys() { this->warningSummarys_ = nullptr;};
    inline const vector<DescribeCheckWarningSummaryResponseBody::WarningSummarys> & getWarningSummarys() const { DARABONBA_PTR_GET_CONST(warningSummarys_, vector<DescribeCheckWarningSummaryResponseBody::WarningSummarys>) };
    inline vector<DescribeCheckWarningSummaryResponseBody::WarningSummarys> getWarningSummarys() { DARABONBA_PTR_GET(warningSummarys_, vector<DescribeCheckWarningSummaryResponseBody::WarningSummarys>) };
    inline DescribeCheckWarningSummaryResponseBody& setWarningSummarys(const vector<DescribeCheckWarningSummaryResponseBody::WarningSummarys> & warningSummarys) { DARABONBA_PTR_SET_VALUE(warningSummarys_, warningSummarys) };
    inline DescribeCheckWarningSummaryResponseBody& setWarningSummarys(vector<DescribeCheckWarningSummaryResponseBody::WarningSummarys> && warningSummarys) { DARABONBA_PTR_SET_RVALUE(warningSummarys_, warningSummarys) };


  protected:
    // The number of check items returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the current page.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of check items.
    shared_ptr<int32_t> totalCount_ {};
    // The statistics of check items.
    shared_ptr<vector<DescribeCheckWarningSummaryResponseBody::WarningSummarys>> warningSummarys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
