// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeExpressionVariableDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressionVariableDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressionVariableDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(resultObject, resultObject_);
    };
    DescribeExpressionVariableDetailResponseBody() = default ;
    DescribeExpressionVariableDetailResponseBody(const DescribeExpressionVariableDetailResponseBody &) = default ;
    DescribeExpressionVariableDetailResponseBody(DescribeExpressionVariableDetailResponseBody &&) = default ;
    DescribeExpressionVariableDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressionVariableDetailResponseBody() = default ;
    DescribeExpressionVariableDetailResponseBody& operator=(const DescribeExpressionVariableDetailResponseBody &) = default ;
    DescribeExpressionVariableDetailResponseBody& operator=(DescribeExpressionVariableDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressionVariableDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline     const Darabonba::Json & getResultObject() const { DARABONBA_GET(resultObject_) };
    Darabonba::Json & getResultObject() { DARABONBA_GET(resultObject_) };
    inline DescribeExpressionVariableDetailResponseBody& setResultObject(const Darabonba::Json & resultObject) { DARABONBA_SET_VALUE(resultObject_, resultObject) };
    inline DescribeExpressionVariableDetailResponseBody& setResultObject(Darabonba::Json && resultObject) { DARABONBA_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    Darabonba::Json resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
