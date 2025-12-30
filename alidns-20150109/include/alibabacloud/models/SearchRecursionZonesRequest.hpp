// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchRecursionZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EffectiveScopes, effectiveScopes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EffectiveScopes, effectiveScopes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    SearchRecursionZonesRequest() = default ;
    SearchRecursionZonesRequest(const SearchRecursionZonesRequest &) = default ;
    SearchRecursionZonesRequest(SearchRecursionZonesRequest &&) = default ;
    SearchRecursionZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionZonesRequest() = default ;
    SearchRecursionZonesRequest& operator=(const SearchRecursionZonesRequest &) = default ;
    SearchRecursionZonesRequest& operator=(SearchRecursionZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EffectiveScopes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EffectiveScopes& obj) { 
        DARABONBA_PTR_TO_JSON(EffectiveType, effectiveType_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, EffectiveScopes& obj) { 
        DARABONBA_PTR_FROM_JSON(EffectiveType, effectiveType_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
      };
      EffectiveScopes() = default ;
      EffectiveScopes(const EffectiveScopes &) = default ;
      EffectiveScopes(EffectiveScopes &&) = default ;
      EffectiveScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EffectiveScopes() = default ;
      EffectiveScopes& operator=(const EffectiveScopes &) = default ;
      EffectiveScopes& operator=(EffectiveScopes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->effectiveType_ == nullptr
        && this->scope_ == nullptr; };
      // effectiveType Field Functions 
      bool hasEffectiveType() const { return this->effectiveType_ != nullptr;};
      void deleteEffectiveType() { this->effectiveType_ = nullptr;};
      inline string getEffectiveType() const { DARABONBA_PTR_GET_DEFAULT(effectiveType_, "") };
      inline EffectiveScopes& setEffectiveType(string effectiveType) { DARABONBA_PTR_SET_VALUE(effectiveType_, effectiveType) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const vector<string> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<string>) };
      inline vector<string> getScope() { DARABONBA_PTR_GET(scope_, vector<string>) };
      inline EffectiveScopes& setScope(const vector<string> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline EffectiveScopes& setScope(vector<string> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    protected:
      shared_ptr<string> effectiveType_ {};
      shared_ptr<vector<string>> scope_ {};
    };

    virtual bool empty() const override { return this->direction_ == nullptr
        && this->effectiveScopes_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->remark_ == nullptr && this->zoneName_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline SearchRecursionZonesRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // effectiveScopes Field Functions 
    bool hasEffectiveScopes() const { return this->effectiveScopes_ != nullptr;};
    void deleteEffectiveScopes() { this->effectiveScopes_ = nullptr;};
    inline const vector<SearchRecursionZonesRequest::EffectiveScopes> & getEffectiveScopes() const { DARABONBA_PTR_GET_CONST(effectiveScopes_, vector<SearchRecursionZonesRequest::EffectiveScopes>) };
    inline vector<SearchRecursionZonesRequest::EffectiveScopes> getEffectiveScopes() { DARABONBA_PTR_GET(effectiveScopes_, vector<SearchRecursionZonesRequest::EffectiveScopes>) };
    inline SearchRecursionZonesRequest& setEffectiveScopes(const vector<SearchRecursionZonesRequest::EffectiveScopes> & effectiveScopes) { DARABONBA_PTR_SET_VALUE(effectiveScopes_, effectiveScopes) };
    inline SearchRecursionZonesRequest& setEffectiveScopes(vector<SearchRecursionZonesRequest::EffectiveScopes> && effectiveScopes) { DARABONBA_PTR_SET_RVALUE(effectiveScopes_, effectiveScopes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchRecursionZonesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchRecursionZonesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline SearchRecursionZonesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchRecursionZonesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchRecursionZonesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SearchRecursionZonesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline SearchRecursionZonesRequest& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    shared_ptr<string> direction_ {};
    shared_ptr<vector<SearchRecursionZonesRequest::EffectiveScopes>> effectiveScopes_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> orderBy_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> zoneName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
