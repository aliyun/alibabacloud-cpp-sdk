// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSUMMARYRESPONSEBODYWARNINGSUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSUMMARYRESPONSEBODYWARNINGSUMMARYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningSummaryResponseBodyWarningSummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningSummaryResponseBodyWarningSummarys& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningSummaryResponseBodyWarningSummarys& obj) { 
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
    DescribeCheckWarningSummaryResponseBodyWarningSummarys() = default ;
    DescribeCheckWarningSummaryResponseBodyWarningSummarys(const DescribeCheckWarningSummaryResponseBodyWarningSummarys &) = default ;
    DescribeCheckWarningSummaryResponseBodyWarningSummarys(DescribeCheckWarningSummaryResponseBodyWarningSummarys &&) = default ;
    DescribeCheckWarningSummaryResponseBodyWarningSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningSummaryResponseBodyWarningSummarys() = default ;
    DescribeCheckWarningSummaryResponseBodyWarningSummarys& operator=(const DescribeCheckWarningSummaryResponseBodyWarningSummarys &) = default ;
    DescribeCheckWarningSummaryResponseBodyWarningSummarys& operator=(DescribeCheckWarningSummaryResponseBodyWarningSummarys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkCount_ != nullptr
        && this->checkExploit_ != nullptr && this->containerRisk_ != nullptr && this->databaseRisk_ != nullptr && this->highWarningCount_ != nullptr && this->lastFoundTime_ != nullptr
        && this->level_ != nullptr && this->lowWarningCount_ != nullptr && this->mediumWarningCount_ != nullptr && this->riskId_ != nullptr && this->riskName_ != nullptr
        && this->subTypeAlias_ != nullptr && this->typeAlias_ != nullptr && this->warningMachineCount_ != nullptr; };
    // checkCount Field Functions 
    bool hasCheckCount() const { return this->checkCount_ != nullptr;};
    void deleteCheckCount() { this->checkCount_ = nullptr;};
    inline int32_t checkCount() const { DARABONBA_PTR_GET_DEFAULT(checkCount_, 0) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setCheckCount(int32_t checkCount) { DARABONBA_PTR_SET_VALUE(checkCount_, checkCount) };


    // checkExploit Field Functions 
    bool hasCheckExploit() const { return this->checkExploit_ != nullptr;};
    void deleteCheckExploit() { this->checkExploit_ = nullptr;};
    inline bool checkExploit() const { DARABONBA_PTR_GET_DEFAULT(checkExploit_, false) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setCheckExploit(bool checkExploit) { DARABONBA_PTR_SET_VALUE(checkExploit_, checkExploit) };


    // containerRisk Field Functions 
    bool hasContainerRisk() const { return this->containerRisk_ != nullptr;};
    void deleteContainerRisk() { this->containerRisk_ = nullptr;};
    inline bool containerRisk() const { DARABONBA_PTR_GET_DEFAULT(containerRisk_, false) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setContainerRisk(bool containerRisk) { DARABONBA_PTR_SET_VALUE(containerRisk_, containerRisk) };


    // databaseRisk Field Functions 
    bool hasDatabaseRisk() const { return this->databaseRisk_ != nullptr;};
    void deleteDatabaseRisk() { this->databaseRisk_ = nullptr;};
    inline bool databaseRisk() const { DARABONBA_PTR_GET_DEFAULT(databaseRisk_, false) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setDatabaseRisk(bool databaseRisk) { DARABONBA_PTR_SET_VALUE(databaseRisk_, databaseRisk) };


    // highWarningCount Field Functions 
    bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
    void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
    inline int32_t highWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


    // lastFoundTime Field Functions 
    bool hasLastFoundTime() const { return this->lastFoundTime_ != nullptr;};
    void deleteLastFoundTime() { this->lastFoundTime_ = nullptr;};
    inline string lastFoundTime() const { DARABONBA_PTR_GET_DEFAULT(lastFoundTime_, "") };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setLastFoundTime(string lastFoundTime) { DARABONBA_PTR_SET_VALUE(lastFoundTime_, lastFoundTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // lowWarningCount Field Functions 
    bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
    void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
    inline int32_t lowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


    // mediumWarningCount Field Functions 
    bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
    void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
    inline int32_t mediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t riskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string riskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // subTypeAlias Field Functions 
    bool hasSubTypeAlias() const { return this->subTypeAlias_ != nullptr;};
    void deleteSubTypeAlias() { this->subTypeAlias_ = nullptr;};
    inline string subTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(subTypeAlias_, "") };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setSubTypeAlias(string subTypeAlias) { DARABONBA_PTR_SET_VALUE(subTypeAlias_, subTypeAlias) };


    // typeAlias Field Functions 
    bool hasTypeAlias() const { return this->typeAlias_ != nullptr;};
    void deleteTypeAlias() { this->typeAlias_ = nullptr;};
    inline string typeAlias() const { DARABONBA_PTR_GET_DEFAULT(typeAlias_, "") };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setTypeAlias(string typeAlias) { DARABONBA_PTR_SET_VALUE(typeAlias_, typeAlias) };


    // warningMachineCount Field Functions 
    bool hasWarningMachineCount() const { return this->warningMachineCount_ != nullptr;};
    void deleteWarningMachineCount() { this->warningMachineCount_ = nullptr;};
    inline int32_t warningMachineCount() const { DARABONBA_PTR_GET_DEFAULT(warningMachineCount_, 0) };
    inline DescribeCheckWarningSummaryResponseBodyWarningSummarys& setWarningMachineCount(int32_t warningMachineCount) { DARABONBA_PTR_SET_VALUE(warningMachineCount_, warningMachineCount) };


  protected:
    // The number of check items.
    std::shared_ptr<int32_t> checkCount_ = nullptr;
    // Indicates whether the risk item can be exploited. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> checkExploit_ = nullptr;
    // Indicates  whether the risk item is a container runtime risk item. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> containerRisk_ = nullptr;
    // Indicates whether the risk item is a database risk item. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> databaseRisk_ = nullptr;
    // The number of high-risk items.
    std::shared_ptr<int32_t> highWarningCount_ = nullptr;
    // The time when the last baseline check was performed.
    std::shared_ptr<string> lastFoundTime_ = nullptr;
    // The risk level of the risk item. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> level_ = nullptr;
    // The number of low-risk items.
    std::shared_ptr<int32_t> lowWarningCount_ = nullptr;
    // The number of medium-risk items.
    std::shared_ptr<int32_t> mediumWarningCount_ = nullptr;
    // The ID of the risk item.
    std::shared_ptr<int64_t> riskId_ = nullptr;
    // The name of the risk item.
    std::shared_ptr<string> riskName_ = nullptr;
    // The level-2 type of the risk item.
    std::shared_ptr<string> subTypeAlias_ = nullptr;
    // The level-1 type of the check item. Examples: database, system, weak password, and middleware.
    std::shared_ptr<string> typeAlias_ = nullptr;
    // The number of assets on which risk items are detected.
    std::shared_ptr<int32_t> warningMachineCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
