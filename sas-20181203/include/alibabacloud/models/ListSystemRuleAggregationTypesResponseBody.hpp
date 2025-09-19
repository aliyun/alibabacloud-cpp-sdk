// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMRULEAGGREGATIONTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMRULEAGGREGATIONTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSystemRuleAggregationTypesResponseBodyAggregationTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSystemRuleAggregationTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemRuleAggregationTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationTypeList, aggregationTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemRuleAggregationTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationTypeList, aggregationTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSystemRuleAggregationTypesResponseBody() = default ;
    ListSystemRuleAggregationTypesResponseBody(const ListSystemRuleAggregationTypesResponseBody &) = default ;
    ListSystemRuleAggregationTypesResponseBody(ListSystemRuleAggregationTypesResponseBody &&) = default ;
    ListSystemRuleAggregationTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemRuleAggregationTypesResponseBody() = default ;
    ListSystemRuleAggregationTypesResponseBody& operator=(const ListSystemRuleAggregationTypesResponseBody &) = default ;
    ListSystemRuleAggregationTypesResponseBody& operator=(ListSystemRuleAggregationTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregationTypeList_ != nullptr
        && this->requestId_ != nullptr; };
    // aggregationTypeList Field Functions 
    bool hasAggregationTypeList() const { return this->aggregationTypeList_ != nullptr;};
    void deleteAggregationTypeList() { this->aggregationTypeList_ = nullptr;};
    inline const vector<ListSystemRuleAggregationTypesResponseBodyAggregationTypeList> & aggregationTypeList() const { DARABONBA_PTR_GET_CONST(aggregationTypeList_, vector<ListSystemRuleAggregationTypesResponseBodyAggregationTypeList>) };
    inline vector<ListSystemRuleAggregationTypesResponseBodyAggregationTypeList> aggregationTypeList() { DARABONBA_PTR_GET(aggregationTypeList_, vector<ListSystemRuleAggregationTypesResponseBodyAggregationTypeList>) };
    inline ListSystemRuleAggregationTypesResponseBody& setAggregationTypeList(const vector<ListSystemRuleAggregationTypesResponseBodyAggregationTypeList> & aggregationTypeList) { DARABONBA_PTR_SET_VALUE(aggregationTypeList_, aggregationTypeList) };
    inline ListSystemRuleAggregationTypesResponseBody& setAggregationTypeList(vector<ListSystemRuleAggregationTypesResponseBodyAggregationTypeList> && aggregationTypeList) { DARABONBA_PTR_SET_RVALUE(aggregationTypeList_, aggregationTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemRuleAggregationTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the aggregation types.
    std::shared_ptr<vector<ListSystemRuleAggregationTypesResponseBodyAggregationTypeList>> aggregationTypeList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
