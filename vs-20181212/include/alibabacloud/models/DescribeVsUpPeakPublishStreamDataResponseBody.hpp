// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSUPPEAKPUBLISHSTREAMDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSUPPEAKPUBLISHSTREAMDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsUpPeakPublishStreamDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsUpPeakPublishStreamDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeVsUpPeakPublishStreamDatas, describeVsUpPeakPublishStreamDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsUpPeakPublishStreamDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeVsUpPeakPublishStreamDatas, describeVsUpPeakPublishStreamDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsUpPeakPublishStreamDataResponseBody() = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody(const DescribeVsUpPeakPublishStreamDataResponseBody &) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody(DescribeVsUpPeakPublishStreamDataResponseBody &&) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsUpPeakPublishStreamDataResponseBody() = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody& operator=(const DescribeVsUpPeakPublishStreamDataResponseBody &) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody& operator=(DescribeVsUpPeakPublishStreamDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeVsUpPeakPublishStreamDatas_ == nullptr
        && return this->requestId_ == nullptr; };
    // describeVsUpPeakPublishStreamDatas Field Functions 
    bool hasDescribeVsUpPeakPublishStreamDatas() const { return this->describeVsUpPeakPublishStreamDatas_ != nullptr;};
    void deleteDescribeVsUpPeakPublishStreamDatas() { this->describeVsUpPeakPublishStreamDatas_ = nullptr;};
    inline const DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas & describeVsUpPeakPublishStreamDatas() const { DARABONBA_PTR_GET_CONST(describeVsUpPeakPublishStreamDatas_, DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas) };
    inline DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas describeVsUpPeakPublishStreamDatas() { DARABONBA_PTR_GET(describeVsUpPeakPublishStreamDatas_, DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas) };
    inline DescribeVsUpPeakPublishStreamDataResponseBody& setDescribeVsUpPeakPublishStreamDatas(const DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas & describeVsUpPeakPublishStreamDatas) { DARABONBA_PTR_SET_VALUE(describeVsUpPeakPublishStreamDatas_, describeVsUpPeakPublishStreamDatas) };
    inline DescribeVsUpPeakPublishStreamDataResponseBody& setDescribeVsUpPeakPublishStreamDatas(DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas && describeVsUpPeakPublishStreamDatas) { DARABONBA_PTR_SET_RVALUE(describeVsUpPeakPublishStreamDatas_, describeVsUpPeakPublishStreamDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsUpPeakPublishStreamDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas> describeVsUpPeakPublishStreamDatas_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
