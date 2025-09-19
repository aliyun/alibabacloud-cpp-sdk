// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESEARCHCONDITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESEARCHCONDITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSearchConditionResponseBodyConditionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSearchConditionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSearchConditionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionList, conditionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSearchConditionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionList, conditionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSearchConditionResponseBody() = default ;
    DescribeSearchConditionResponseBody(const DescribeSearchConditionResponseBody &) = default ;
    DescribeSearchConditionResponseBody(DescribeSearchConditionResponseBody &&) = default ;
    DescribeSearchConditionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSearchConditionResponseBody() = default ;
    DescribeSearchConditionResponseBody& operator=(const DescribeSearchConditionResponseBody &) = default ;
    DescribeSearchConditionResponseBody& operator=(DescribeSearchConditionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionList_ != nullptr
        && this->requestId_ != nullptr; };
    // conditionList Field Functions 
    bool hasConditionList() const { return this->conditionList_ != nullptr;};
    void deleteConditionList() { this->conditionList_ = nullptr;};
    inline const vector<DescribeSearchConditionResponseBodyConditionList> & conditionList() const { DARABONBA_PTR_GET_CONST(conditionList_, vector<DescribeSearchConditionResponseBodyConditionList>) };
    inline vector<DescribeSearchConditionResponseBodyConditionList> conditionList() { DARABONBA_PTR_GET(conditionList_, vector<DescribeSearchConditionResponseBodyConditionList>) };
    inline DescribeSearchConditionResponseBody& setConditionList(const vector<DescribeSearchConditionResponseBodyConditionList> & conditionList) { DARABONBA_PTR_SET_VALUE(conditionList_, conditionList) };
    inline DescribeSearchConditionResponseBody& setConditionList(vector<DescribeSearchConditionResponseBodyConditionList> && conditionList) { DARABONBA_PTR_SET_RVALUE(conditionList_, conditionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSearchConditionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the filter conditions.
    std::shared_ptr<vector<DescribeSearchConditionResponseBodyConditionList>> conditionList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
