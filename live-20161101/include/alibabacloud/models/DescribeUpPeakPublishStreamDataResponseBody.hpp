// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpPeakPublishStreamDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpPeakPublishStreamDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpPeakPublishStreamDatas, describeUpPeakPublishStreamDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpPeakPublishStreamDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpPeakPublishStreamDatas, describeUpPeakPublishStreamDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpPeakPublishStreamDataResponseBody() = default ;
    DescribeUpPeakPublishStreamDataResponseBody(const DescribeUpPeakPublishStreamDataResponseBody &) = default ;
    DescribeUpPeakPublishStreamDataResponseBody(DescribeUpPeakPublishStreamDataResponseBody &&) = default ;
    DescribeUpPeakPublishStreamDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpPeakPublishStreamDataResponseBody() = default ;
    DescribeUpPeakPublishStreamDataResponseBody& operator=(const DescribeUpPeakPublishStreamDataResponseBody &) = default ;
    DescribeUpPeakPublishStreamDataResponseBody& operator=(DescribeUpPeakPublishStreamDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->describeUpPeakPublishStreamDatas_ != nullptr
        && this->requestId_ != nullptr; };
    // describeUpPeakPublishStreamDatas Field Functions 
    bool hasDescribeUpPeakPublishStreamDatas() const { return this->describeUpPeakPublishStreamDatas_ != nullptr;};
    void deleteDescribeUpPeakPublishStreamDatas() { this->describeUpPeakPublishStreamDatas_ = nullptr;};
    inline const DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas & describeUpPeakPublishStreamDatas() const { DARABONBA_PTR_GET_CONST(describeUpPeakPublishStreamDatas_, DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas) };
    inline DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas describeUpPeakPublishStreamDatas() { DARABONBA_PTR_GET(describeUpPeakPublishStreamDatas_, DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas) };
    inline DescribeUpPeakPublishStreamDataResponseBody& setDescribeUpPeakPublishStreamDatas(const DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas & describeUpPeakPublishStreamDatas) { DARABONBA_PTR_SET_VALUE(describeUpPeakPublishStreamDatas_, describeUpPeakPublishStreamDatas) };
    inline DescribeUpPeakPublishStreamDataResponseBody& setDescribeUpPeakPublishStreamDatas(DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas && describeUpPeakPublishStreamDatas) { DARABONBA_PTR_SET_RVALUE(describeUpPeakPublishStreamDatas_, describeUpPeakPublishStreamDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpPeakPublishStreamDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the peak number of concurrently ingested streams on each day.
    std::shared_ptr<DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas> describeUpPeakPublishStreamDatas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
