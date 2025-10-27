// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskCheckResultResponseBodyListRiskItemResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckResultResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckResultResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(AffectedCount, affectedCount_);
      DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
      DARABONBA_PTR_TO_JSON(RepairStatus, repairStatus_);
      DARABONBA_PTR_TO_JSON(RiskAssertType, riskAssertType_);
      DARABONBA_PTR_TO_JSON(RiskItemResources, riskItemResources_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartStatus, startStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckResultResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectedCount, affectedCount_);
      DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
      DARABONBA_PTR_FROM_JSON(RepairStatus, repairStatus_);
      DARABONBA_PTR_FROM_JSON(RiskAssertType, riskAssertType_);
      DARABONBA_PTR_FROM_JSON(RiskItemResources, riskItemResources_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartStatus, startStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeRiskCheckResultResponseBodyList() = default ;
    DescribeRiskCheckResultResponseBodyList(const DescribeRiskCheckResultResponseBodyList &) = default ;
    DescribeRiskCheckResultResponseBodyList(DescribeRiskCheckResultResponseBodyList &&) = default ;
    DescribeRiskCheckResultResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckResultResponseBodyList() = default ;
    DescribeRiskCheckResultResponseBodyList& operator=(const DescribeRiskCheckResultResponseBodyList &) = default ;
    DescribeRiskCheckResultResponseBodyList& operator=(DescribeRiskCheckResultResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectedCount_ == nullptr
        && return this->checkTime_ == nullptr && return this->itemId_ == nullptr && return this->remainingTime_ == nullptr && return this->repairStatus_ == nullptr && return this->riskAssertType_ == nullptr
        && return this->riskItemResources_ == nullptr && return this->riskLevel_ == nullptr && return this->sort_ == nullptr && return this->startStatus_ == nullptr && return this->status_ == nullptr
        && return this->taskId_ == nullptr && return this->title_ == nullptr && return this->type_ == nullptr; };
    // affectedCount Field Functions 
    bool hasAffectedCount() const { return this->affectedCount_ != nullptr;};
    void deleteAffectedCount() { this->affectedCount_ = nullptr;};
    inline int32_t affectedCount() const { DARABONBA_PTR_GET_DEFAULT(affectedCount_, 0) };
    inline DescribeRiskCheckResultResponseBodyList& setAffectedCount(int32_t affectedCount) { DARABONBA_PTR_SET_VALUE(affectedCount_, affectedCount) };


    // checkTime Field Functions 
    bool hasCheckTime() const { return this->checkTime_ != nullptr;};
    void deleteCheckTime() { this->checkTime_ = nullptr;};
    inline int64_t checkTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, 0L) };
    inline DescribeRiskCheckResultResponseBodyList& setCheckTime(int64_t checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline DescribeRiskCheckResultResponseBodyList& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // remainingTime Field Functions 
    bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
    void deleteRemainingTime() { this->remainingTime_ = nullptr;};
    inline int32_t remainingTime() const { DARABONBA_PTR_GET_DEFAULT(remainingTime_, 0) };
    inline DescribeRiskCheckResultResponseBodyList& setRemainingTime(int32_t remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };


    // repairStatus Field Functions 
    bool hasRepairStatus() const { return this->repairStatus_ != nullptr;};
    void deleteRepairStatus() { this->repairStatus_ = nullptr;};
    inline string repairStatus() const { DARABONBA_PTR_GET_DEFAULT(repairStatus_, "") };
    inline DescribeRiskCheckResultResponseBodyList& setRepairStatus(string repairStatus) { DARABONBA_PTR_SET_VALUE(repairStatus_, repairStatus) };


    // riskAssertType Field Functions 
    bool hasRiskAssertType() const { return this->riskAssertType_ != nullptr;};
    void deleteRiskAssertType() { this->riskAssertType_ = nullptr;};
    inline string riskAssertType() const { DARABONBA_PTR_GET_DEFAULT(riskAssertType_, "") };
    inline DescribeRiskCheckResultResponseBodyList& setRiskAssertType(string riskAssertType) { DARABONBA_PTR_SET_VALUE(riskAssertType_, riskAssertType) };


    // riskItemResources Field Functions 
    bool hasRiskItemResources() const { return this->riskItemResources_ != nullptr;};
    void deleteRiskItemResources() { this->riskItemResources_ = nullptr;};
    inline const vector<Models::DescribeRiskCheckResultResponseBodyListRiskItemResources> & riskItemResources() const { DARABONBA_PTR_GET_CONST(riskItemResources_, vector<Models::DescribeRiskCheckResultResponseBodyListRiskItemResources>) };
    inline vector<Models::DescribeRiskCheckResultResponseBodyListRiskItemResources> riskItemResources() { DARABONBA_PTR_GET(riskItemResources_, vector<Models::DescribeRiskCheckResultResponseBodyListRiskItemResources>) };
    inline DescribeRiskCheckResultResponseBodyList& setRiskItemResources(const vector<Models::DescribeRiskCheckResultResponseBodyListRiskItemResources> & riskItemResources) { DARABONBA_PTR_SET_VALUE(riskItemResources_, riskItemResources) };
    inline DescribeRiskCheckResultResponseBodyList& setRiskItemResources(vector<Models::DescribeRiskCheckResultResponseBodyListRiskItemResources> && riskItemResources) { DARABONBA_PTR_SET_RVALUE(riskItemResources_, riskItemResources) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeRiskCheckResultResponseBodyList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline int32_t sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0) };
    inline DescribeRiskCheckResultResponseBodyList& setSort(int32_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startStatus Field Functions 
    bool hasStartStatus() const { return this->startStatus_ != nullptr;};
    void deleteStartStatus() { this->startStatus_ = nullptr;};
    inline string startStatus() const { DARABONBA_PTR_GET_DEFAULT(startStatus_, "") };
    inline DescribeRiskCheckResultResponseBodyList& setStartStatus(string startStatus) { DARABONBA_PTR_SET_VALUE(startStatus_, startStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRiskCheckResultResponseBodyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeRiskCheckResultResponseBodyList& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeRiskCheckResultResponseBodyList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRiskCheckResultResponseBodyList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of affected assets.
    std::shared_ptr<int32_t> affectedCount_ = nullptr;
    // The timestamp when the last check was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> checkTime_ = nullptr;
    // The ID of the check item. For more information about the check item, see the check item table in the "Response parameters" section of this topic.
    std::shared_ptr<int64_t> itemId_ = nullptr;
    // The time when the next check will be performed.
    std::shared_ptr<int32_t> remainingTime_ = nullptr;
    // Indicates whether the risks that are detected based on the check item can be fixed. Valid values:
    // 
    // *   **enabled**: yes
    // *   **disabled**: no
    std::shared_ptr<string> repairStatus_ = nullptr;
    // The type of the affected assets.
    std::shared_ptr<string> riskAssertType_ = nullptr;
    // An array that consists of the details about the check item.
    std::shared_ptr<vector<Models::DescribeRiskCheckResultResponseBodyListRiskItemResources>> riskItemResources_ = nullptr;
    // The risk level of the check item. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The sequence number in the check results. The check items are sorted based on the sequence number.
    std::shared_ptr<int32_t> sort_ = nullptr;
    // Indicates whether the check item is supported by the edition of Security Center that you purchase. Valid values:
    // 
    // *   **enabled**: yes
    // *   **disable**: no
    std::shared_ptr<string> startStatus_ = nullptr;
    // The status of the check results. Valid values:
    // 
    // *   **pass**
    // *   **failed**
    // *   **running**
    // *   **waiting**
    // *   **ignored**
    // *   **falsePositive**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the check task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> title_ = nullptr;
    // The type of the check item. Valid values:
    // 
    // *   Identity authentication and permissions
    // *   Network access control
    // *   Log audit
    // *   Data security
    // *   Monitoring and alerting
    // *   Basic security protection
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
