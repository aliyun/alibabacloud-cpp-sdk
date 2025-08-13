// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULELISTBYEVENTCODESLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULELISTBYEVENTCODESLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleListByEventCodesListResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleListByEventCodesListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleListByEventCodesListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleListByEventCodesListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeRuleListByEventCodesListResponseBody() = default ;
    DescribeRuleListByEventCodesListResponseBody(const DescribeRuleListByEventCodesListResponseBody &) = default ;
    DescribeRuleListByEventCodesListResponseBody(DescribeRuleListByEventCodesListResponseBody &&) = default ;
    DescribeRuleListByEventCodesListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleListByEventCodesListResponseBody() = default ;
    DescribeRuleListByEventCodesListResponseBody& operator=(const DescribeRuleListByEventCodesListResponseBody &) = default ;
    DescribeRuleListByEventCodesListResponseBody& operator=(DescribeRuleListByEventCodesListResponseBody &&) = default ;
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
    inline DescribeRuleListByEventCodesListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeRuleListByEventCodesListResponseBodyResultObject> & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeRuleListByEventCodesListResponseBodyResultObject>) };
    inline vector<DescribeRuleListByEventCodesListResponseBodyResultObject> resultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeRuleListByEventCodesListResponseBodyResultObject>) };
    inline DescribeRuleListByEventCodesListResponseBody& setResultObject(const vector<DescribeRuleListByEventCodesListResponseBodyResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRuleListByEventCodesListResponseBody& setResultObject(vector<DescribeRuleListByEventCodesListResponseBodyResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned object
    std::shared_ptr<vector<DescribeRuleListByEventCodesListResponseBodyResultObject>> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
