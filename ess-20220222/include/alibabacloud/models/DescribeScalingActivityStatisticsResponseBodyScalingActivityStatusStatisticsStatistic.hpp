// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODYSCALINGACTIVITYSTATUSSTATISTICSSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODYSCALINGACTIVITYSTATUSSTATISTICSSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(FailedActivityCount, failedActivityCount_);
      DARABONBA_PTR_TO_JSON(SuccessActivityCount, successActivityCount_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(WarningActivityCount, warningActivityCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedActivityCount, failedActivityCount_);
      DARABONBA_PTR_FROM_JSON(SuccessActivityCount, successActivityCount_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(WarningActivityCount, warningActivityCount_);
    };
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic() = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic(const DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic &) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic(DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic &&) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic() = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic& operator=(const DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic &) = default ;
    DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic& operator=(DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedActivityCount_ == nullptr
        && return this->successActivityCount_ == nullptr && return this->time_ == nullptr && return this->warningActivityCount_ == nullptr; };
    // failedActivityCount Field Functions 
    bool hasFailedActivityCount() const { return this->failedActivityCount_ != nullptr;};
    void deleteFailedActivityCount() { this->failedActivityCount_ = nullptr;};
    inline int32_t failedActivityCount() const { DARABONBA_PTR_GET_DEFAULT(failedActivityCount_, 0) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic& setFailedActivityCount(int32_t failedActivityCount) { DARABONBA_PTR_SET_VALUE(failedActivityCount_, failedActivityCount) };


    // successActivityCount Field Functions 
    bool hasSuccessActivityCount() const { return this->successActivityCount_ != nullptr;};
    void deleteSuccessActivityCount() { this->successActivityCount_ = nullptr;};
    inline int32_t successActivityCount() const { DARABONBA_PTR_GET_DEFAULT(successActivityCount_, 0) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic& setSuccessActivityCount(int32_t successActivityCount) { DARABONBA_PTR_SET_VALUE(successActivityCount_, successActivityCount) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // warningActivityCount Field Functions 
    bool hasWarningActivityCount() const { return this->warningActivityCount_ != nullptr;};
    void deleteWarningActivityCount() { this->warningActivityCount_ = nullptr;};
    inline int32_t warningActivityCount() const { DARABONBA_PTR_GET_DEFAULT(warningActivityCount_, 0) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatisticsStatistic& setWarningActivityCount(int32_t warningActivityCount) { DARABONBA_PTR_SET_VALUE(warningActivityCount_, warningActivityCount) };


  protected:
    std::shared_ptr<int32_t> failedActivityCount_ = nullptr;
    std::shared_ptr<int32_t> successActivityCount_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<int32_t> warningActivityCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
