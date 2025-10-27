// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGSUMMARYRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGSUMMARYRESPONSEBODYLIST_HPP_
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
  class ListCheckItemWarningSummaryResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningSummaryResponseBodyList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningSummaryResponseBodyList& obj) { 
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
    ListCheckItemWarningSummaryResponseBodyList() = default ;
    ListCheckItemWarningSummaryResponseBodyList(const ListCheckItemWarningSummaryResponseBodyList &) = default ;
    ListCheckItemWarningSummaryResponseBodyList(ListCheckItemWarningSummaryResponseBodyList &&) = default ;
    ListCheckItemWarningSummaryResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningSummaryResponseBodyList() = default ;
    ListCheckItemWarningSummaryResponseBodyList& operator=(const ListCheckItemWarningSummaryResponseBodyList &) = default ;
    ListCheckItemWarningSummaryResponseBodyList& operator=(ListCheckItemWarningSummaryResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advice_ == nullptr
        && return this->affiliatedRiskTypes_ == nullptr && return this->affiliatedRisks_ == nullptr && return this->alias_ == nullptr && return this->checkId_ == nullptr && return this->checkItem_ == nullptr
        && return this->checkLevel_ == nullptr && return this->checkType_ == nullptr && return this->containerCheckItem_ == nullptr && return this->description_ == nullptr && return this->enableRisks_ == nullptr
        && return this->riskType_ == nullptr && return this->status_ == nullptr && return this->warningMachineCount_ == nullptr; };
    // advice Field Functions 
    bool hasAdvice() const { return this->advice_ != nullptr;};
    void deleteAdvice() { this->advice_ = nullptr;};
    inline string advice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
    inline ListCheckItemWarningSummaryResponseBodyList& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


    // affiliatedRiskTypes Field Functions 
    bool hasAffiliatedRiskTypes() const { return this->affiliatedRiskTypes_ != nullptr;};
    void deleteAffiliatedRiskTypes() { this->affiliatedRiskTypes_ = nullptr;};
    inline const vector<string> & affiliatedRiskTypes() const { DARABONBA_PTR_GET_CONST(affiliatedRiskTypes_, vector<string>) };
    inline vector<string> affiliatedRiskTypes() { DARABONBA_PTR_GET(affiliatedRiskTypes_, vector<string>) };
    inline ListCheckItemWarningSummaryResponseBodyList& setAffiliatedRiskTypes(const vector<string> & affiliatedRiskTypes) { DARABONBA_PTR_SET_VALUE(affiliatedRiskTypes_, affiliatedRiskTypes) };
    inline ListCheckItemWarningSummaryResponseBodyList& setAffiliatedRiskTypes(vector<string> && affiliatedRiskTypes) { DARABONBA_PTR_SET_RVALUE(affiliatedRiskTypes_, affiliatedRiskTypes) };


    // affiliatedRisks Field Functions 
    bool hasAffiliatedRisks() const { return this->affiliatedRisks_ != nullptr;};
    void deleteAffiliatedRisks() { this->affiliatedRisks_ = nullptr;};
    inline const vector<string> & affiliatedRisks() const { DARABONBA_PTR_GET_CONST(affiliatedRisks_, vector<string>) };
    inline vector<string> affiliatedRisks() { DARABONBA_PTR_GET(affiliatedRisks_, vector<string>) };
    inline ListCheckItemWarningSummaryResponseBodyList& setAffiliatedRisks(const vector<string> & affiliatedRisks) { DARABONBA_PTR_SET_VALUE(affiliatedRisks_, affiliatedRisks) };
    inline ListCheckItemWarningSummaryResponseBodyList& setAffiliatedRisks(vector<string> && affiliatedRisks) { DARABONBA_PTR_SET_RVALUE(affiliatedRisks_, affiliatedRisks) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListCheckItemWarningSummaryResponseBodyList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckItemWarningSummaryResponseBodyList& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline string checkItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
    inline ListCheckItemWarningSummaryResponseBodyList& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


    // checkLevel Field Functions 
    bool hasCheckLevel() const { return this->checkLevel_ != nullptr;};
    void deleteCheckLevel() { this->checkLevel_ = nullptr;};
    inline string checkLevel() const { DARABONBA_PTR_GET_DEFAULT(checkLevel_, "") };
    inline ListCheckItemWarningSummaryResponseBodyList& setCheckLevel(string checkLevel) { DARABONBA_PTR_SET_VALUE(checkLevel_, checkLevel) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListCheckItemWarningSummaryResponseBodyList& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // containerCheckItem Field Functions 
    bool hasContainerCheckItem() const { return this->containerCheckItem_ != nullptr;};
    void deleteContainerCheckItem() { this->containerCheckItem_ = nullptr;};
    inline bool containerCheckItem() const { DARABONBA_PTR_GET_DEFAULT(containerCheckItem_, false) };
    inline ListCheckItemWarningSummaryResponseBodyList& setContainerCheckItem(bool containerCheckItem) { DARABONBA_PTR_SET_VALUE(containerCheckItem_, containerCheckItem) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCheckItemWarningSummaryResponseBodyList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableRisks Field Functions 
    bool hasEnableRisks() const { return this->enableRisks_ != nullptr;};
    void deleteEnableRisks() { this->enableRisks_ = nullptr;};
    inline const vector<string> & enableRisks() const { DARABONBA_PTR_GET_CONST(enableRisks_, vector<string>) };
    inline vector<string> enableRisks() { DARABONBA_PTR_GET(enableRisks_, vector<string>) };
    inline ListCheckItemWarningSummaryResponseBodyList& setEnableRisks(const vector<string> & enableRisks) { DARABONBA_PTR_SET_VALUE(enableRisks_, enableRisks) };
    inline ListCheckItemWarningSummaryResponseBodyList& setEnableRisks(vector<string> && enableRisks) { DARABONBA_PTR_SET_RVALUE(enableRisks_, enableRisks) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline ListCheckItemWarningSummaryResponseBodyList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListCheckItemWarningSummaryResponseBodyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // warningMachineCount Field Functions 
    bool hasWarningMachineCount() const { return this->warningMachineCount_ != nullptr;};
    void deleteWarningMachineCount() { this->warningMachineCount_ = nullptr;};
    inline int32_t warningMachineCount() const { DARABONBA_PTR_GET_DEFAULT(warningMachineCount_, 0) };
    inline ListCheckItemWarningSummaryResponseBodyList& setWarningMachineCount(int32_t warningMachineCount) { DARABONBA_PTR_SET_VALUE(warningMachineCount_, warningMachineCount) };


  protected:
    // The suggestion on the check item.
    std::shared_ptr<string> advice_ = nullptr;
    // The types of the baselines to which the check item belongs.
    std::shared_ptr<vector<string>> affiliatedRiskTypes_ = nullptr;
    // The baselines to which the check item belongs.
    std::shared_ptr<vector<string>> affiliatedRisks_ = nullptr;
    // The alias of the baseline type.
    std::shared_ptr<string> alias_ = nullptr;
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The description of the check item.
    std::shared_ptr<string> checkItem_ = nullptr;
    // The risk level of the check item. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> checkLevel_ = nullptr;
    // The type of the check item.
    std::shared_ptr<string> checkType_ = nullptr;
    // Indicates whether the check item belongs to the container runtime type. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> containerCheckItem_ = nullptr;
    // The description of the check item.
    std::shared_ptr<string> description_ = nullptr;
    // The baselines in which the check item is enabled.
    std::shared_ptr<vector<string>> enableRisks_ = nullptr;
    // The type of the baseline.
    std::shared_ptr<string> riskType_ = nullptr;
    // Risk status of check items. Valid values:
    // 
    // *   **1**: failed
    // *   **3**: passed
    // *   **6**: whitelisted
    // *   **8**: fixed
    std::shared_ptr<int32_t> status_ = nullptr;
    // The number of servers that are affected by the check item.
    std::shared_ptr<int32_t> warningMachineCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
