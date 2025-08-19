// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERQUOTARESPONSEBODYEDGEIMPROVEDNODEPOOLQUOTA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERQUOTARESPONSEBODYEDGEIMPROVEDNODEPOOLQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota& obj) { 
      DARABONBA_PTR_TO_JSON(bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(period, period_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(period, period_);
    };
    DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota() = default ;
    DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota(const DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota &) = default ;
    DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota(DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota &&) = default ;
    DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota() = default ;
    DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota& operator=(const DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota &) = default ;
    DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota& operator=(DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->count_ != nullptr && this->period_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeUserQuotaResponseBodyEdgeImprovedNodepoolQuota& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    // This parameter is discontinued.
    // 
    // The maximum bandwidth of each enhanced edge node pool. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // This parameter is discontinued.
    // 
    // The maximum number of enhanced edge node pools that you can create within an Alibaba Cloud account.
    std::shared_ptr<int32_t> count_ = nullptr;
    // This parameter is discontinued.
    // 
    // The maximum subscription duration of an enhanced edge node pool. Unit: months.
    // 
    // >  You are charged for enhanced edge node pools based on the pay-as-you-go billing method. Therefore, you can ignore this parameter.
    std::shared_ptr<int32_t> period_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
