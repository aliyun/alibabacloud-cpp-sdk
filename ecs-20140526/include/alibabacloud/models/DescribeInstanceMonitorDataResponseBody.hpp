// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceMonitorDataResponseBodyMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceMonitorDataResponseBody() = default ;
    DescribeInstanceMonitorDataResponseBody(const DescribeInstanceMonitorDataResponseBody &) = default ;
    DescribeInstanceMonitorDataResponseBody(DescribeInstanceMonitorDataResponseBody &&) = default ;
    DescribeInstanceMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMonitorDataResponseBody() = default ;
    DescribeInstanceMonitorDataResponseBody& operator=(const DescribeInstanceMonitorDataResponseBody &) = default ;
    DescribeInstanceMonitorDataResponseBody& operator=(DescribeInstanceMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->monitorData_ != nullptr
        && this->requestId_ != nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeInstanceMonitorDataResponseBodyMonitorData & monitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeInstanceMonitorDataResponseBodyMonitorData) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorData monitorData() { DARABONBA_PTR_GET(monitorData_, DescribeInstanceMonitorDataResponseBodyMonitorData) };
    inline DescribeInstanceMonitorDataResponseBody& setMonitorData(const DescribeInstanceMonitorDataResponseBodyMonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeInstanceMonitorDataResponseBody& setMonitorData(DescribeInstanceMonitorDataResponseBodyMonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring data of the instance.
    std::shared_ptr<DescribeInstanceMonitorDataResponseBodyMonitorData> monitorData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
