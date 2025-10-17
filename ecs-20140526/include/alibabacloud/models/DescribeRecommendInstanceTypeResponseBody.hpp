// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRecommendInstanceTypeResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRecommendInstanceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRecommendInstanceTypeResponseBody() = default ;
    DescribeRecommendInstanceTypeResponseBody(const DescribeRecommendInstanceTypeResponseBody &) = default ;
    DescribeRecommendInstanceTypeResponseBody(DescribeRecommendInstanceTypeResponseBody &&) = default ;
    DescribeRecommendInstanceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendInstanceTypeResponseBody() = default ;
    DescribeRecommendInstanceTypeResponseBody& operator=(const DescribeRecommendInstanceTypeResponseBody &) = default ;
    DescribeRecommendInstanceTypeResponseBody& operator=(DescribeRecommendInstanceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeRecommendInstanceTypeResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeRecommendInstanceTypeResponseBodyData) };
    inline DescribeRecommendInstanceTypeResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeRecommendInstanceTypeResponseBodyData) };
    inline DescribeRecommendInstanceTypeResponseBody& setData(const DescribeRecommendInstanceTypeResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRecommendInstanceTypeResponseBody& setData(DescribeRecommendInstanceTypeResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecommendInstanceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the recommended instance types.
    std::shared_ptr<DescribeRecommendInstanceTypeResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
