// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERANGEDATABYLOCATEANDISPSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERANGEDATABYLOCATEANDISPSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRangeDataByLocateAndIspServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRangeDataByLocateAndIspServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonResult, jsonResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRangeDataByLocateAndIspServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonResult, jsonResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRangeDataByLocateAndIspServiceResponseBody() = default ;
    DescribeRangeDataByLocateAndIspServiceResponseBody(const DescribeRangeDataByLocateAndIspServiceResponseBody &) = default ;
    DescribeRangeDataByLocateAndIspServiceResponseBody(DescribeRangeDataByLocateAndIspServiceResponseBody &&) = default ;
    DescribeRangeDataByLocateAndIspServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRangeDataByLocateAndIspServiceResponseBody() = default ;
    DescribeRangeDataByLocateAndIspServiceResponseBody& operator=(const DescribeRangeDataByLocateAndIspServiceResponseBody &) = default ;
    DescribeRangeDataByLocateAndIspServiceResponseBody& operator=(DescribeRangeDataByLocateAndIspServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jsonResult_ != nullptr
        && this->requestId_ != nullptr; };
    // jsonResult Field Functions 
    bool hasJsonResult() const { return this->jsonResult_ != nullptr;};
    void deleteJsonResult() { this->jsonResult_ = nullptr;};
    inline string jsonResult() const { DARABONBA_PTR_GET_DEFAULT(jsonResult_, "") };
    inline DescribeRangeDataByLocateAndIspServiceResponseBody& setJsonResult(string jsonResult) { DARABONBA_PTR_SET_VALUE(jsonResult_, jsonResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRangeDataByLocateAndIspServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters in the JSON format. These parameters indicate the following information in sequence: UNIX time, region, ISP, distribution of HTTP status codes, response time, bandwidth (bit/s), average response rate, page views, cache hit ratio, and request hit ratio.
    std::shared_ptr<string> jsonResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
