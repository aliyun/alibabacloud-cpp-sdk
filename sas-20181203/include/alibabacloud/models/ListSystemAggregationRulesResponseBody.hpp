// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMAGGREGATIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMAGGREGATIONRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSystemAggregationRulesResponseBodyAggregationList.hpp>
#include <alibabacloud/models/ListSystemAggregationRulesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSystemAggregationRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemAggregationRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationList, aggregationList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemAggregationRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationList, aggregationList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSystemAggregationRulesResponseBody() = default ;
    ListSystemAggregationRulesResponseBody(const ListSystemAggregationRulesResponseBody &) = default ;
    ListSystemAggregationRulesResponseBody(ListSystemAggregationRulesResponseBody &&) = default ;
    ListSystemAggregationRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemAggregationRulesResponseBody() = default ;
    ListSystemAggregationRulesResponseBody& operator=(const ListSystemAggregationRulesResponseBody &) = default ;
    ListSystemAggregationRulesResponseBody& operator=(ListSystemAggregationRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregationList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // aggregationList Field Functions 
    bool hasAggregationList() const { return this->aggregationList_ != nullptr;};
    void deleteAggregationList() { this->aggregationList_ = nullptr;};
    inline const vector<ListSystemAggregationRulesResponseBodyAggregationList> & aggregationList() const { DARABONBA_PTR_GET_CONST(aggregationList_, vector<ListSystemAggregationRulesResponseBodyAggregationList>) };
    inline vector<ListSystemAggregationRulesResponseBodyAggregationList> aggregationList() { DARABONBA_PTR_GET(aggregationList_, vector<ListSystemAggregationRulesResponseBodyAggregationList>) };
    inline ListSystemAggregationRulesResponseBody& setAggregationList(const vector<ListSystemAggregationRulesResponseBodyAggregationList> & aggregationList) { DARABONBA_PTR_SET_VALUE(aggregationList_, aggregationList) };
    inline ListSystemAggregationRulesResponseBody& setAggregationList(vector<ListSystemAggregationRulesResponseBodyAggregationList> && aggregationList) { DARABONBA_PTR_SET_RVALUE(aggregationList_, aggregationList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListSystemAggregationRulesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListSystemAggregationRulesResponseBodyPageInfo) };
    inline ListSystemAggregationRulesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListSystemAggregationRulesResponseBodyPageInfo) };
    inline ListSystemAggregationRulesResponseBody& setPageInfo(const ListSystemAggregationRulesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListSystemAggregationRulesResponseBody& setPageInfo(ListSystemAggregationRulesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemAggregationRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the details about the aggregation types.
    std::shared_ptr<vector<ListSystemAggregationRulesResponseBodyAggregationList>> aggregationList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListSystemAggregationRulesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
