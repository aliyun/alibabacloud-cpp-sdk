// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEpnBandWidthDataResponseBodyMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnBandWidthDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnBandWidthDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnBandWidthDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEpnBandWidthDataResponseBody() = default ;
    DescribeEpnBandWidthDataResponseBody(const DescribeEpnBandWidthDataResponseBody &) = default ;
    DescribeEpnBandWidthDataResponseBody(DescribeEpnBandWidthDataResponseBody &&) = default ;
    DescribeEpnBandWidthDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnBandWidthDataResponseBody() = default ;
    DescribeEpnBandWidthDataResponseBody& operator=(const DescribeEpnBandWidthDataResponseBody &) = default ;
    DescribeEpnBandWidthDataResponseBody& operator=(DescribeEpnBandWidthDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->monitorData_ != nullptr
        && this->requestId_ != nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeEpnBandWidthDataResponseBodyMonitorData & monitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeEpnBandWidthDataResponseBodyMonitorData) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorData monitorData() { DARABONBA_PTR_GET(monitorData_, DescribeEpnBandWidthDataResponseBodyMonitorData) };
    inline DescribeEpnBandWidthDataResponseBody& setMonitorData(const DescribeEpnBandWidthDataResponseBodyMonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeEpnBandWidthDataResponseBody& setMonitorData(DescribeEpnBandWidthDataResponseBodyMonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEpnBandWidthDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring data of the instance.
    std::shared_ptr<DescribeEpnBandWidthDataResponseBodyMonitorData> monitorData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
