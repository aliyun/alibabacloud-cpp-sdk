// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeListFaceVerifyDataResponseBodyMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeListFaceVerifyDataResponseBody() = default ;
    DescribeListFaceVerifyDataResponseBody(const DescribeListFaceVerifyDataResponseBody &) = default ;
    DescribeListFaceVerifyDataResponseBody(DescribeListFaceVerifyDataResponseBody &&) = default ;
    DescribeListFaceVerifyDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyDataResponseBody() = default ;
    DescribeListFaceVerifyDataResponseBody& operator=(const DescribeListFaceVerifyDataResponseBody &) = default ;
    DescribeListFaceVerifyDataResponseBody& operator=(DescribeListFaceVerifyDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorData_ == nullptr
        && return this->requestId_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeListFaceVerifyDataResponseBodyMonitorData & monitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeListFaceVerifyDataResponseBodyMonitorData) };
    inline DescribeListFaceVerifyDataResponseBodyMonitorData monitorData() { DARABONBA_PTR_GET(monitorData_, DescribeListFaceVerifyDataResponseBodyMonitorData) };
    inline DescribeListFaceVerifyDataResponseBody& setMonitorData(const DescribeListFaceVerifyDataResponseBodyMonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeListFaceVerifyDataResponseBody& setMonitorData(DescribeListFaceVerifyDataResponseBodyMonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListFaceVerifyDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    std::shared_ptr<DescribeListFaceVerifyDataResponseBodyMonitorData> monitorData_ = nullptr;
    // ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
