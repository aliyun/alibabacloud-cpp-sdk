// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODYRISKCHECKSUMMARYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODYRISKCHECKSUMMARYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& obj) { 
      DARABONBA_PTR_TO_JSON(CountByStatus, countByStatus_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(CountByStatus, countByStatus_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups() = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups &) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups(DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups &&) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups() = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& operator=(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups &) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& operator=(DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->countByStatus_ != nullptr
        && this->id_ != nullptr && this->remainingTime_ != nullptr && this->sort_ != nullptr && this->status_ != nullptr && this->title_ != nullptr; };
    // countByStatus Field Functions 
    bool hasCountByStatus() const { return this->countByStatus_ != nullptr;};
    void deleteCountByStatus() { this->countByStatus_ = nullptr;};
    inline const vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus> & countByStatus() const { DARABONBA_PTR_GET_CONST(countByStatus_, vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus>) };
    inline vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus> countByStatus() { DARABONBA_PTR_GET(countByStatus_, vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus>) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& setCountByStatus(const vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus> & countByStatus) { DARABONBA_PTR_SET_VALUE(countByStatus_, countByStatus) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& setCountByStatus(vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus> && countByStatus) { DARABONBA_PTR_SET_RVALUE(countByStatus_, countByStatus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // remainingTime Field Functions 
    bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
    void deleteRemainingTime() { this->remainingTime_ = nullptr;};
    inline int32_t remainingTime() const { DARABONBA_PTR_GET_DEFAULT(remainingTime_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& setRemainingTime(int32_t remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline int32_t sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& setSort(int32_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // An array that consists of the statistics about check results.
    std::shared_ptr<vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus>> countByStatus_ = nullptr;
    // The ID of the check item type.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The remaining time before the check is complete.
    std::shared_ptr<int32_t> remainingTime_ = nullptr;
    // The sequence number of the check item type in the **All Types** drop-down list in the Security Center console.
    std::shared_ptr<int32_t> sort_ = nullptr;
    // The status of the check. Valid values:
    // 
    // *   **finish**: The check is finished.
    // *   **running**: The check is in progress.
    // *   **waiting**: The check is pending.
    // *   **notStart**: The check is not started.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the check item type.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
