// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERHEALTHSTATUSRESPONSEBODYCS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERHEALTHSTATUSRESPONSEBODYCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterHealthStatusResponseBodyCS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterHealthStatusResponseBodyCS& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_TO_JSON(ExpectedCount, expectedCount_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnavailableCount, unavailableCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterHealthStatusResponseBodyCS& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_FROM_JSON(ExpectedCount, expectedCount_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnavailableCount, unavailableCount_);
    };
    DescribeDBClusterHealthStatusResponseBodyCS() = default ;
    DescribeDBClusterHealthStatusResponseBodyCS(const DescribeDBClusterHealthStatusResponseBodyCS &) = default ;
    DescribeDBClusterHealthStatusResponseBodyCS(DescribeDBClusterHealthStatusResponseBodyCS &&) = default ;
    DescribeDBClusterHealthStatusResponseBodyCS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterHealthStatusResponseBodyCS() = default ;
    DescribeDBClusterHealthStatusResponseBodyCS& operator=(const DescribeDBClusterHealthStatusResponseBodyCS &) = default ;
    DescribeDBClusterHealthStatusResponseBodyCS& operator=(DescribeDBClusterHealthStatusResponseBodyCS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeCount_ != nullptr
        && this->expectedCount_ != nullptr && this->riskCount_ != nullptr && this->status_ != nullptr && this->unavailableCount_ != nullptr; };
    // activeCount Field Functions 
    bool hasActiveCount() const { return this->activeCount_ != nullptr;};
    void deleteActiveCount() { this->activeCount_ = nullptr;};
    inline int64_t activeCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
    inline DescribeDBClusterHealthStatusResponseBodyCS& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


    // expectedCount Field Functions 
    bool hasExpectedCount() const { return this->expectedCount_ != nullptr;};
    void deleteExpectedCount() { this->expectedCount_ = nullptr;};
    inline int64_t expectedCount() const { DARABONBA_PTR_GET_DEFAULT(expectedCount_, 0L) };
    inline DescribeDBClusterHealthStatusResponseBodyCS& setExpectedCount(int64_t expectedCount) { DARABONBA_PTR_SET_VALUE(expectedCount_, expectedCount) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int64_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
    inline DescribeDBClusterHealthStatusResponseBodyCS& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBClusterHealthStatusResponseBodyCS& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unavailableCount Field Functions 
    bool hasUnavailableCount() const { return this->unavailableCount_ != nullptr;};
    void deleteUnavailableCount() { this->unavailableCount_ = nullptr;};
    inline int64_t unavailableCount() const { DARABONBA_PTR_GET_DEFAULT(unavailableCount_, 0L) };
    inline DescribeDBClusterHealthStatusResponseBodyCS& setUnavailableCount(int64_t unavailableCount) { DARABONBA_PTR_SET_VALUE(unavailableCount_, unavailableCount) };


  protected:
    // The number of healthy access nodes.
    std::shared_ptr<int64_t> activeCount_ = nullptr;
    // The total number of access nodes.
    std::shared_ptr<int64_t> expectedCount_ = nullptr;
    // The number of risky access nodes.
    std::shared_ptr<int64_t> riskCount_ = nullptr;
    // The health state of access nodes. Valid values:
    // 
    // *   **RISK**: risky
    // *   **NORMAL**: healthy
    // *   **UNAVAILABLE**: unavailable
    std::shared_ptr<string> status_ = nullptr;
    // The number of unavailable access nodes.
    std::shared_ptr<int64_t> unavailableCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
