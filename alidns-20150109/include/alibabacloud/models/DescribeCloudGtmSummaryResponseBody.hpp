// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTotalCount, instanceTotalCount_);
      DARABONBA_PTR_TO_JSON(MonitorTaskTotalCount, monitorTaskTotalCount_);
      DARABONBA_PTR_TO_JSON(MonitorTaskTotalQuota, monitorTaskTotalQuota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTotalCount, instanceTotalCount_);
      DARABONBA_PTR_FROM_JSON(MonitorTaskTotalCount, monitorTaskTotalCount_);
      DARABONBA_PTR_FROM_JSON(MonitorTaskTotalQuota, monitorTaskTotalQuota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudGtmSummaryResponseBody() = default ;
    DescribeCloudGtmSummaryResponseBody(const DescribeCloudGtmSummaryResponseBody &) = default ;
    DescribeCloudGtmSummaryResponseBody(DescribeCloudGtmSummaryResponseBody &&) = default ;
    DescribeCloudGtmSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmSummaryResponseBody() = default ;
    DescribeCloudGtmSummaryResponseBody& operator=(const DescribeCloudGtmSummaryResponseBody &) = default ;
    DescribeCloudGtmSummaryResponseBody& operator=(DescribeCloudGtmSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTotalCount_ == nullptr
        && return this->monitorTaskTotalCount_ == nullptr && return this->monitorTaskTotalQuota_ == nullptr && return this->requestId_ == nullptr; };
    // instanceTotalCount Field Functions 
    bool hasInstanceTotalCount() const { return this->instanceTotalCount_ != nullptr;};
    void deleteInstanceTotalCount() { this->instanceTotalCount_ = nullptr;};
    inline int32_t instanceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(instanceTotalCount_, 0) };
    inline DescribeCloudGtmSummaryResponseBody& setInstanceTotalCount(int32_t instanceTotalCount) { DARABONBA_PTR_SET_VALUE(instanceTotalCount_, instanceTotalCount) };


    // monitorTaskTotalCount Field Functions 
    bool hasMonitorTaskTotalCount() const { return this->monitorTaskTotalCount_ != nullptr;};
    void deleteMonitorTaskTotalCount() { this->monitorTaskTotalCount_ = nullptr;};
    inline int32_t monitorTaskTotalCount() const { DARABONBA_PTR_GET_DEFAULT(monitorTaskTotalCount_, 0) };
    inline DescribeCloudGtmSummaryResponseBody& setMonitorTaskTotalCount(int32_t monitorTaskTotalCount) { DARABONBA_PTR_SET_VALUE(monitorTaskTotalCount_, monitorTaskTotalCount) };


    // monitorTaskTotalQuota Field Functions 
    bool hasMonitorTaskTotalQuota() const { return this->monitorTaskTotalQuota_ != nullptr;};
    void deleteMonitorTaskTotalQuota() { this->monitorTaskTotalQuota_ = nullptr;};
    inline int32_t monitorTaskTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(monitorTaskTotalQuota_, 0) };
    inline DescribeCloudGtmSummaryResponseBody& setMonitorTaskTotalQuota(int32_t monitorTaskTotalQuota) { DARABONBA_PTR_SET_VALUE(monitorTaskTotalQuota_, monitorTaskTotalQuota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of instances within the current account.
    std::shared_ptr<int32_t> instanceTotalCount_ = nullptr;
    // The total number of configured health check tasks.
    std::shared_ptr<int32_t> monitorTaskTotalCount_ = nullptr;
    // The quota on the number of health check tasks.
    std::shared_ptr<int32_t> monitorTaskTotalQuota_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
