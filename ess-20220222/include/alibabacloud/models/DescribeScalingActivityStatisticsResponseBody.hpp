// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics.hpp>
#include <alibabacloud/models/DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivityStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivityStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityErrorCodeStatistics, scalingActivityErrorCodeStatistics_);
      DARABONBA_PTR_TO_JSON(ScalingActivityStatusStatistics, scalingActivityStatusStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivityStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityErrorCodeStatistics, scalingActivityErrorCodeStatistics_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityStatusStatistics, scalingActivityStatusStatistics_);
    };
    DescribeScalingActivityStatisticsResponseBody() = default ;
    DescribeScalingActivityStatisticsResponseBody(const DescribeScalingActivityStatisticsResponseBody &) = default ;
    DescribeScalingActivityStatisticsResponseBody(DescribeScalingActivityStatisticsResponseBody &&) = default ;
    DescribeScalingActivityStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivityStatisticsResponseBody() = default ;
    DescribeScalingActivityStatisticsResponseBody& operator=(const DescribeScalingActivityStatisticsResponseBody &) = default ;
    DescribeScalingActivityStatisticsResponseBody& operator=(DescribeScalingActivityStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scalingActivityErrorCodeStatistics_ == nullptr && return this->scalingActivityStatusStatistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingActivityStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityErrorCodeStatistics Field Functions 
    bool hasScalingActivityErrorCodeStatistics() const { return this->scalingActivityErrorCodeStatistics_ != nullptr;};
    void deleteScalingActivityErrorCodeStatistics() { this->scalingActivityErrorCodeStatistics_ = nullptr;};
    inline const DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics & scalingActivityErrorCodeStatistics() const { DARABONBA_PTR_GET_CONST(scalingActivityErrorCodeStatistics_, DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics scalingActivityErrorCodeStatistics() { DARABONBA_PTR_GET(scalingActivityErrorCodeStatistics_, DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody& setScalingActivityErrorCodeStatistics(const DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics & scalingActivityErrorCodeStatistics) { DARABONBA_PTR_SET_VALUE(scalingActivityErrorCodeStatistics_, scalingActivityErrorCodeStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody& setScalingActivityErrorCodeStatistics(DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics && scalingActivityErrorCodeStatistics) { DARABONBA_PTR_SET_RVALUE(scalingActivityErrorCodeStatistics_, scalingActivityErrorCodeStatistics) };


    // scalingActivityStatusStatistics Field Functions 
    bool hasScalingActivityStatusStatistics() const { return this->scalingActivityStatusStatistics_ != nullptr;};
    void deleteScalingActivityStatusStatistics() { this->scalingActivityStatusStatistics_ = nullptr;};
    inline const DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics & scalingActivityStatusStatistics() const { DARABONBA_PTR_GET_CONST(scalingActivityStatusStatistics_, DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics) };
    inline DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics scalingActivityStatusStatistics() { DARABONBA_PTR_GET(scalingActivityStatusStatistics_, DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody& setScalingActivityStatusStatistics(const DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics & scalingActivityStatusStatistics) { DARABONBA_PTR_SET_VALUE(scalingActivityStatusStatistics_, scalingActivityStatusStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody& setScalingActivityStatusStatistics(DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics && scalingActivityStatusStatistics) { DARABONBA_PTR_SET_RVALUE(scalingActivityStatusStatistics_, scalingActivityStatusStatistics) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeScalingActivityStatisticsResponseBodyScalingActivityErrorCodeStatistics> scalingActivityErrorCodeStatistics_ = nullptr;
    std::shared_ptr<DescribeScalingActivityStatisticsResponseBodyScalingActivityStatusStatistics> scalingActivityStatusStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
