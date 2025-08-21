// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBANDWIDTHDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBANDWIDTHDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserBandWidthDataResponseBodyMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeUserBandWidthDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBandWidthDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBandWidthDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserBandWidthDataResponseBody() = default ;
    DescribeUserBandWidthDataResponseBody(const DescribeUserBandWidthDataResponseBody &) = default ;
    DescribeUserBandWidthDataResponseBody(DescribeUserBandWidthDataResponseBody &&) = default ;
    DescribeUserBandWidthDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBandWidthDataResponseBody() = default ;
    DescribeUserBandWidthDataResponseBody& operator=(const DescribeUserBandWidthDataResponseBody &) = default ;
    DescribeUserBandWidthDataResponseBody& operator=(DescribeUserBandWidthDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->monitorData_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeUserBandWidthDataResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeUserBandWidthDataResponseBodyMonitorData & monitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeUserBandWidthDataResponseBodyMonitorData) };
    inline DescribeUserBandWidthDataResponseBodyMonitorData monitorData() { DARABONBA_PTR_GET(monitorData_, DescribeUserBandWidthDataResponseBodyMonitorData) };
    inline DescribeUserBandWidthDataResponseBody& setMonitorData(const DescribeUserBandWidthDataResponseBodyMonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeUserBandWidthDataResponseBody& setMonitorData(DescribeUserBandWidthDataResponseBodyMonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserBandWidthDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. 0 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The monitoring data.
    std::shared_ptr<DescribeUserBandWidthDataResponseBodyMonitorData> monitorData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
