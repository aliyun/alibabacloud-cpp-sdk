// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODYRISKCHECKSUMMARYGROUPSCOUNTBYSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODYRISKCHECKSUMMARYGROUPSCOUNTBYSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus() = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus &) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus(DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus &&) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus() = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus& operator=(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus &) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus& operator=(DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->status_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroupsCountByStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of detected risk items.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The status of the check item after the check is finished. Valid values:
    // 
    // *   **pass**: The check item passed the check, which indicates that the check item is normal.
    // *   **failed**: The check item failed the check, which indicates that risks are detected based on the check item.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
