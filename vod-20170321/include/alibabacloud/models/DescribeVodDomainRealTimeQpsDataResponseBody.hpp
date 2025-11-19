// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEQPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEQPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainRealTimeQpsDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeQpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainRealTimeQpsDataResponseBody() = default ;
    DescribeVodDomainRealTimeQpsDataResponseBody(const DescribeVodDomainRealTimeQpsDataResponseBody &) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBody(DescribeVodDomainRealTimeQpsDataResponseBody &&) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeQpsDataResponseBody() = default ;
    DescribeVodDomainRealTimeQpsDataResponseBody& operator=(const DescribeVodDomainRealTimeQpsDataResponseBody &) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBody& operator=(DescribeVodDomainRealTimeQpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeVodDomainRealTimeQpsDataResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeVodDomainRealTimeQpsDataResponseBodyData) };
    inline DescribeVodDomainRealTimeQpsDataResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeVodDomainRealTimeQpsDataResponseBodyData) };
    inline DescribeVodDomainRealTimeQpsDataResponseBody& setData(const DescribeVodDomainRealTimeQpsDataResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVodDomainRealTimeQpsDataResponseBody& setData(DescribeVodDomainRealTimeQpsDataResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainRealTimeQpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<DescribeVodDomainRealTimeQpsDataResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
