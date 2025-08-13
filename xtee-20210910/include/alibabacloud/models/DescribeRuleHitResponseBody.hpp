// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleHitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(resultObject, resultObject_);
    };
    DescribeRuleHitResponseBody() = default ;
    DescribeRuleHitResponseBody(const DescribeRuleHitResponseBody &) = default ;
    DescribeRuleHitResponseBody(DescribeRuleHitResponseBody &&) = default ;
    DescribeRuleHitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitResponseBody() = default ;
    DescribeRuleHitResponseBody& operator=(const DescribeRuleHitResponseBody &) = default ;
    DescribeRuleHitResponseBody& operator=(DescribeRuleHitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resultObject_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline     const Darabonba::Json & resultObject() const { DARABONBA_GET(resultObject_) };
    Darabonba::Json & resultObject() { DARABONBA_GET(resultObject_) };
    inline DescribeRuleHitResponseBody& setResultObject(const Darabonba::Json & resultObject) { DARABONBA_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRuleHitResponseBody& setResultObject(Darabonba::Json & resultObject) { DARABONBA_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Return object
    Darabonba::Json resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
