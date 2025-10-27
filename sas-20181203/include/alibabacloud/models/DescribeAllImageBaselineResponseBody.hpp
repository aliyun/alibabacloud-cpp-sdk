// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAllImageBaselineResponseBodyImageBaselines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllImageBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllImageBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageBaselines, imageBaselines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllImageBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageBaselines, imageBaselines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllImageBaselineResponseBody() = default ;
    DescribeAllImageBaselineResponseBody(const DescribeAllImageBaselineResponseBody &) = default ;
    DescribeAllImageBaselineResponseBody(DescribeAllImageBaselineResponseBody &&) = default ;
    DescribeAllImageBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllImageBaselineResponseBody() = default ;
    DescribeAllImageBaselineResponseBody& operator=(const DescribeAllImageBaselineResponseBody &) = default ;
    DescribeAllImageBaselineResponseBody& operator=(DescribeAllImageBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageBaselines_ == nullptr
        && return this->requestId_ == nullptr; };
    // imageBaselines Field Functions 
    bool hasImageBaselines() const { return this->imageBaselines_ != nullptr;};
    void deleteImageBaselines() { this->imageBaselines_ = nullptr;};
    inline const DescribeAllImageBaselineResponseBodyImageBaselines & imageBaselines() const { DARABONBA_PTR_GET_CONST(imageBaselines_, DescribeAllImageBaselineResponseBodyImageBaselines) };
    inline DescribeAllImageBaselineResponseBodyImageBaselines imageBaselines() { DARABONBA_PTR_GET(imageBaselines_, DescribeAllImageBaselineResponseBodyImageBaselines) };
    inline DescribeAllImageBaselineResponseBody& setImageBaselines(const DescribeAllImageBaselineResponseBodyImageBaselines & imageBaselines) { DARABONBA_PTR_SET_VALUE(imageBaselines_, imageBaselines) };
    inline DescribeAllImageBaselineResponseBody& setImageBaselines(DescribeAllImageBaselineResponseBodyImageBaselines && imageBaselines) { DARABONBA_PTR_SET_RVALUE(imageBaselines_, imageBaselines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllImageBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The baselines that are used in image baseline checks.
    std::shared_ptr<DescribeAllImageBaselineResponseBodyImageBaselines> imageBaselines_ = nullptr;
    // The ID of the request, which is used to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
