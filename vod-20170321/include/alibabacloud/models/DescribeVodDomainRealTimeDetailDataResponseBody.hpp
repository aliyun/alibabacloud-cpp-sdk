// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEDETAILDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEDETAILDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeDetailDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeDetailDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeDetailDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainRealTimeDetailDataResponseBody() = default ;
    DescribeVodDomainRealTimeDetailDataResponseBody(const DescribeVodDomainRealTimeDetailDataResponseBody &) = default ;
    DescribeVodDomainRealTimeDetailDataResponseBody(DescribeVodDomainRealTimeDetailDataResponseBody &&) = default ;
    DescribeVodDomainRealTimeDetailDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeDetailDataResponseBody() = default ;
    DescribeVodDomainRealTimeDetailDataResponseBody& operator=(const DescribeVodDomainRealTimeDetailDataResponseBody &) = default ;
    DescribeVodDomainRealTimeDetailDataResponseBody& operator=(DescribeVodDomainRealTimeDetailDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DescribeVodDomainRealTimeDetailDataResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainRealTimeDetailDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data details. The data is returned as a JSON string. The following table describes the structure and fields:
    // > If no data exists for a field, the field is not returned.
    // 
    // | Field | Type | Description |
    // | ------------- |------------ | ----------- | 
    // | domain_name | String | The accelerated domain name. |
    // | isp | String | The ISP name. |
    // | location | String | The region name. |
    // | qps | Long | The queries per second (QPS). |
    // | bps | Long | The bandwidth data. Unit: bit/s. |
    // | http_code | Map | The HTTP status code details. The key is the status code name, and the value is the count of the status code. |
    // | time_stp | String | The data timestamp. The time is in the ISO 8601 standard in UTC. |
    shared_ptr<string> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
