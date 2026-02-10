// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMAGGREGATIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMAGGREGATIONRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class AggregationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AggregationList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      };
      friend void from_json(const Darabonba::Json& j, AggregationList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      };
      AggregationList() = default ;
      AggregationList(const AggregationList &) = default ;
      AggregationList(AggregationList &&) = default ;
      AggregationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AggregationList() = default ;
      AggregationList& operator=(const AggregationList &) = default ;
      AggregationList& operator=(AggregationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->ruleCount_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline AggregationList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AggregationList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline AggregationList& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    protected:
      // The ID of the aggregation type.
      shared_ptr<int32_t> id_ {};
      // The name of the aggregation type.
      shared_ptr<string> name_ {};
      // The number of rules that are of the aggregation type.
      shared_ptr<int32_t> ruleCount_ {};
    };

    virtual bool empty() const override { return this->aggregationList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // aggregationList Field Functions 
    bool hasAggregationList() const { return this->aggregationList_ != nullptr;};
    void deleteAggregationList() { this->aggregationList_ = nullptr;};
    inline const vector<ListSystemAggregationRulesResponseBody::AggregationList> & getAggregationList() const { DARABONBA_PTR_GET_CONST(aggregationList_, vector<ListSystemAggregationRulesResponseBody::AggregationList>) };
    inline vector<ListSystemAggregationRulesResponseBody::AggregationList> getAggregationList() { DARABONBA_PTR_GET(aggregationList_, vector<ListSystemAggregationRulesResponseBody::AggregationList>) };
    inline ListSystemAggregationRulesResponseBody& setAggregationList(const vector<ListSystemAggregationRulesResponseBody::AggregationList> & aggregationList) { DARABONBA_PTR_SET_VALUE(aggregationList_, aggregationList) };
    inline ListSystemAggregationRulesResponseBody& setAggregationList(vector<ListSystemAggregationRulesResponseBody::AggregationList> && aggregationList) { DARABONBA_PTR_SET_RVALUE(aggregationList_, aggregationList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListSystemAggregationRulesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListSystemAggregationRulesResponseBody::PageInfo) };
    inline ListSystemAggregationRulesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListSystemAggregationRulesResponseBody::PageInfo) };
    inline ListSystemAggregationRulesResponseBody& setPageInfo(const ListSystemAggregationRulesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListSystemAggregationRulesResponseBody& setPageInfo(ListSystemAggregationRulesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemAggregationRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the details about the aggregation types.
    shared_ptr<vector<ListSystemAggregationRulesResponseBody::AggregationList>> aggregationList_ {};
    // The pagination information.
    shared_ptr<ListSystemAggregationRulesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
