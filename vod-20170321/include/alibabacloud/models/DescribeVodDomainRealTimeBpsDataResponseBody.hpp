// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainRealTimeBpsDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainRealTimeBpsDataResponseBody() = default ;
    DescribeVodDomainRealTimeBpsDataResponseBody(const DescribeVodDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBody(DescribeVodDomainRealTimeBpsDataResponseBody &&) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeBpsDataResponseBody() = default ;
    DescribeVodDomainRealTimeBpsDataResponseBody& operator=(const DescribeVodDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBody& operator=(DescribeVodDomainRealTimeBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeVodDomainRealTimeBpsDataResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeVodDomainRealTimeBpsDataResponseBodyData) };
    inline DescribeVodDomainRealTimeBpsDataResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeVodDomainRealTimeBpsDataResponseBodyData) };
    inline DescribeVodDomainRealTimeBpsDataResponseBody& setData(const DescribeVodDomainRealTimeBpsDataResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVodDomainRealTimeBpsDataResponseBody& setData(DescribeVodDomainRealTimeBpsDataResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainRealTimeBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<DescribeVodDomainRealTimeBpsDataResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
