// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICECRONSCALERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICECRONSCALERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceCronScalerResponseBodyScaleJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceCronScalerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceCronScalerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScaleJobs, scaleJobs_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceCronScalerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScaleJobs, scaleJobs_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DescribeServiceCronScalerResponseBody() = default ;
    DescribeServiceCronScalerResponseBody(const DescribeServiceCronScalerResponseBody &) = default ;
    DescribeServiceCronScalerResponseBody(DescribeServiceCronScalerResponseBody &&) = default ;
    DescribeServiceCronScalerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceCronScalerResponseBody() = default ;
    DescribeServiceCronScalerResponseBody& operator=(const DescribeServiceCronScalerResponseBody &) = default ;
    DescribeServiceCronScalerResponseBody& operator=(DescribeServiceCronScalerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeDates_ == nullptr
        && return this->requestId_ == nullptr && return this->scaleJobs_ == nullptr && return this->serviceName_ == nullptr; };
    // excludeDates Field Functions 
    bool hasExcludeDates() const { return this->excludeDates_ != nullptr;};
    void deleteExcludeDates() { this->excludeDates_ = nullptr;};
    inline const vector<string> & excludeDates() const { DARABONBA_PTR_GET_CONST(excludeDates_, vector<string>) };
    inline vector<string> excludeDates() { DARABONBA_PTR_GET(excludeDates_, vector<string>) };
    inline DescribeServiceCronScalerResponseBody& setExcludeDates(const vector<string> & excludeDates) { DARABONBA_PTR_SET_VALUE(excludeDates_, excludeDates) };
    inline DescribeServiceCronScalerResponseBody& setExcludeDates(vector<string> && excludeDates) { DARABONBA_PTR_SET_RVALUE(excludeDates_, excludeDates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceCronScalerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scaleJobs Field Functions 
    bool hasScaleJobs() const { return this->scaleJobs_ != nullptr;};
    void deleteScaleJobs() { this->scaleJobs_ = nullptr;};
    inline const vector<DescribeServiceCronScalerResponseBodyScaleJobs> & scaleJobs() const { DARABONBA_PTR_GET_CONST(scaleJobs_, vector<DescribeServiceCronScalerResponseBodyScaleJobs>) };
    inline vector<DescribeServiceCronScalerResponseBodyScaleJobs> scaleJobs() { DARABONBA_PTR_GET(scaleJobs_, vector<DescribeServiceCronScalerResponseBodyScaleJobs>) };
    inline DescribeServiceCronScalerResponseBody& setScaleJobs(const vector<DescribeServiceCronScalerResponseBodyScaleJobs> & scaleJobs) { DARABONBA_PTR_SET_VALUE(scaleJobs_, scaleJobs) };
    inline DescribeServiceCronScalerResponseBody& setScaleJobs(vector<DescribeServiceCronScalerResponseBodyScaleJobs> && scaleJobs) { DARABONBA_PTR_SET_RVALUE(scaleJobs_, scaleJobs) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeServiceCronScalerResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The points in time that are excluded when you schedule a CronHPA job. The points in time must be specified by using a cron expression.
    std::shared_ptr<vector<string>> excludeDates_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The CronHPA jobs.
    std::shared_ptr<vector<DescribeServiceCronScalerResponseBodyScaleJobs>> scaleJobs_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
