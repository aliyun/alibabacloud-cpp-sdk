// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDEVICESDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDEVICESDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsDevicesDataResponseBodyDevicesDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDevicesDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDevicesDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DevicesDataPerInterval, devicesDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDevicesDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DevicesDataPerInterval, devicesDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsDevicesDataResponseBody() = default ;
    DescribeVsDevicesDataResponseBody(const DescribeVsDevicesDataResponseBody &) = default ;
    DescribeVsDevicesDataResponseBody(DescribeVsDevicesDataResponseBody &&) = default ;
    DescribeVsDevicesDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDevicesDataResponseBody() = default ;
    DescribeVsDevicesDataResponseBody& operator=(const DescribeVsDevicesDataResponseBody &) = default ;
    DescribeVsDevicesDataResponseBody& operator=(DescribeVsDevicesDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devicesDataPerInterval_ == nullptr
        && return this->requestId_ == nullptr; };
    // devicesDataPerInterval Field Functions 
    bool hasDevicesDataPerInterval() const { return this->devicesDataPerInterval_ != nullptr;};
    void deleteDevicesDataPerInterval() { this->devicesDataPerInterval_ = nullptr;};
    inline const DescribeVsDevicesDataResponseBodyDevicesDataPerInterval & devicesDataPerInterval() const { DARABONBA_PTR_GET_CONST(devicesDataPerInterval_, DescribeVsDevicesDataResponseBodyDevicesDataPerInterval) };
    inline DescribeVsDevicesDataResponseBodyDevicesDataPerInterval devicesDataPerInterval() { DARABONBA_PTR_GET(devicesDataPerInterval_, DescribeVsDevicesDataResponseBodyDevicesDataPerInterval) };
    inline DescribeVsDevicesDataResponseBody& setDevicesDataPerInterval(const DescribeVsDevicesDataResponseBodyDevicesDataPerInterval & devicesDataPerInterval) { DARABONBA_PTR_SET_VALUE(devicesDataPerInterval_, devicesDataPerInterval) };
    inline DescribeVsDevicesDataResponseBody& setDevicesDataPerInterval(DescribeVsDevicesDataResponseBodyDevicesDataPerInterval && devicesDataPerInterval) { DARABONBA_PTR_SET_RVALUE(devicesDataPerInterval_, devicesDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDevicesDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeVsDevicesDataResponseBodyDevicesDataPerInterval> devicesDataPerInterval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
