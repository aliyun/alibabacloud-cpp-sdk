// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageBaselineDetailResponseBodyBaselineDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineDetail, baselineDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineDetail, baselineDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageBaselineDetailResponseBody() = default ;
    DescribeImageBaselineDetailResponseBody(const DescribeImageBaselineDetailResponseBody &) = default ;
    DescribeImageBaselineDetailResponseBody(DescribeImageBaselineDetailResponseBody &&) = default ;
    DescribeImageBaselineDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineDetailResponseBody() = default ;
    DescribeImageBaselineDetailResponseBody& operator=(const DescribeImageBaselineDetailResponseBody &) = default ;
    DescribeImageBaselineDetailResponseBody& operator=(DescribeImageBaselineDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // baselineDetail Field Functions 
    bool hasBaselineDetail() const { return this->baselineDetail_ != nullptr;};
    void deleteBaselineDetail() { this->baselineDetail_ = nullptr;};
    inline const DescribeImageBaselineDetailResponseBodyBaselineDetail & baselineDetail() const { DARABONBA_PTR_GET_CONST(baselineDetail_, DescribeImageBaselineDetailResponseBodyBaselineDetail) };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail baselineDetail() { DARABONBA_PTR_GET(baselineDetail_, DescribeImageBaselineDetailResponseBodyBaselineDetail) };
    inline DescribeImageBaselineDetailResponseBody& setBaselineDetail(const DescribeImageBaselineDetailResponseBodyBaselineDetail & baselineDetail) { DARABONBA_PTR_SET_VALUE(baselineDetail_, baselineDetail) };
    inline DescribeImageBaselineDetailResponseBody& setBaselineDetail(DescribeImageBaselineDetailResponseBodyBaselineDetail && baselineDetail) { DARABONBA_PTR_SET_RVALUE(baselineDetail_, baselineDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the image baseline.
    std::shared_ptr<DescribeImageBaselineDetailResponseBodyBaselineDetail> baselineDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
