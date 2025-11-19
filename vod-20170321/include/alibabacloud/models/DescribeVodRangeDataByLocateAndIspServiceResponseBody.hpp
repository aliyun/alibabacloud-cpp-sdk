// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODRANGEDATABYLOCATEANDISPSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODRANGEDATABYLOCATEANDISPSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRangeDataByLocateAndIspServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRangeDataByLocateAndIspServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonResult, jsonResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRangeDataByLocateAndIspServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonResult, jsonResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodRangeDataByLocateAndIspServiceResponseBody() = default ;
    DescribeVodRangeDataByLocateAndIspServiceResponseBody(const DescribeVodRangeDataByLocateAndIspServiceResponseBody &) = default ;
    DescribeVodRangeDataByLocateAndIspServiceResponseBody(DescribeVodRangeDataByLocateAndIspServiceResponseBody &&) = default ;
    DescribeVodRangeDataByLocateAndIspServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRangeDataByLocateAndIspServiceResponseBody() = default ;
    DescribeVodRangeDataByLocateAndIspServiceResponseBody& operator=(const DescribeVodRangeDataByLocateAndIspServiceResponseBody &) = default ;
    DescribeVodRangeDataByLocateAndIspServiceResponseBody& operator=(DescribeVodRangeDataByLocateAndIspServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jsonResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // jsonResult Field Functions 
    bool hasJsonResult() const { return this->jsonResult_ != nullptr;};
    void deleteJsonResult() { this->jsonResult_ = nullptr;};
    inline string jsonResult() const { DARABONBA_PTR_GET_DEFAULT(jsonResult_, "") };
    inline DescribeVodRangeDataByLocateAndIspServiceResponseBody& setJsonResult(string jsonResult) { DARABONBA_PTR_SET_VALUE(jsonResult_, jsonResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodRangeDataByLocateAndIspServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result. The value is in the JSON format. These parameters indicate the following information in sequence: UNIX time, region, ISP, distribution of HTTP status codes, response time, bandwidth (bit/s), average response rate, page views, cache hit ratio, and request hit ratio.
    std::shared_ptr<string> jsonResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
