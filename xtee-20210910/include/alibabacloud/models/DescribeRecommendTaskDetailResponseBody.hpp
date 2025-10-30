// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRecommendTaskDetailResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeRecommendTaskDetailResponseBody() = default ;
    DescribeRecommendTaskDetailResponseBody(const DescribeRecommendTaskDetailResponseBody &) = default ;
    DescribeRecommendTaskDetailResponseBody(DescribeRecommendTaskDetailResponseBody &&) = default ;
    DescribeRecommendTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendTaskDetailResponseBody() = default ;
    DescribeRecommendTaskDetailResponseBody& operator=(const DescribeRecommendTaskDetailResponseBody &) = default ;
    DescribeRecommendTaskDetailResponseBody& operator=(DescribeRecommendTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecommendTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeRecommendTaskDetailResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeRecommendTaskDetailResponseBodyResultObject) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, DescribeRecommendTaskDetailResponseBodyResultObject) };
    inline DescribeRecommendTaskDetailResponseBody& setResultObject(const DescribeRecommendTaskDetailResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRecommendTaskDetailResponseBody& setResultObject(DescribeRecommendTaskDetailResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Return result
    std::shared_ptr<DescribeRecommendTaskDetailResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
