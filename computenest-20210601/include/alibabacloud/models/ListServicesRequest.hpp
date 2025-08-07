// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServicesRequestFilter.hpp>
#include <alibabacloud/models/ListServicesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(FuzzyKeyword, fuzzyKeyword_);
      DARABONBA_PTR_TO_JSON(InUsed, inUsed_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceAccessType, serviceAccessType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(FuzzyKeyword, fuzzyKeyword_);
      DARABONBA_PTR_FROM_JSON(InUsed, inUsed_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceAccessType, serviceAccessType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListServicesRequest() = default ;
    ListServicesRequest(const ListServicesRequest &) = default ;
    ListServicesRequest(ListServicesRequest &&) = default ;
    ListServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesRequest() = default ;
    ListServicesRequest& operator=(const ListServicesRequest &) = default ;
    ListServicesRequest& operator=(ListServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->fuzzyKeyword_ != nullptr && this->inUsed_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->orderByType_ != nullptr
        && this->regionId_ != nullptr && this->serviceAccessType_ != nullptr && this->tag_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListServicesRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListServicesRequestFilter>) };
    inline vector<ListServicesRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListServicesRequestFilter>) };
    inline ListServicesRequest& setFilter(const vector<ListServicesRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListServicesRequest& setFilter(vector<ListServicesRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // fuzzyKeyword Field Functions 
    bool hasFuzzyKeyword() const { return this->fuzzyKeyword_ != nullptr;};
    void deleteFuzzyKeyword() { this->fuzzyKeyword_ = nullptr;};
    inline string fuzzyKeyword() const { DARABONBA_PTR_GET_DEFAULT(fuzzyKeyword_, "") };
    inline ListServicesRequest& setFuzzyKeyword(string fuzzyKeyword) { DARABONBA_PTR_SET_VALUE(fuzzyKeyword_, fuzzyKeyword) };


    // inUsed Field Functions 
    bool hasInUsed() const { return this->inUsed_ != nullptr;};
    void deleteInUsed() { this->inUsed_ = nullptr;};
    inline bool inUsed() const { DARABONBA_PTR_GET_DEFAULT(inUsed_, false) };
    inline ListServicesRequest& setInUsed(bool inUsed) { DARABONBA_PTR_SET_VALUE(inUsed_, inUsed) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServicesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServicesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderByType Field Functions 
    bool hasOrderByType() const { return this->orderByType_ != nullptr;};
    void deleteOrderByType() { this->orderByType_ = nullptr;};
    inline string orderByType() const { DARABONBA_PTR_GET_DEFAULT(orderByType_, "") };
    inline ListServicesRequest& setOrderByType(string orderByType) { DARABONBA_PTR_SET_VALUE(orderByType_, orderByType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceAccessType Field Functions 
    bool hasServiceAccessType() const { return this->serviceAccessType_ != nullptr;};
    void deleteServiceAccessType() { this->serviceAccessType_ = nullptr;};
    inline string serviceAccessType() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessType_, "") };
    inline ListServicesRequest& setServiceAccessType(string serviceAccessType) { DARABONBA_PTR_SET_VALUE(serviceAccessType_, serviceAccessType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListServicesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListServicesRequestTag>) };
    inline vector<ListServicesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListServicesRequestTag>) };
    inline ListServicesRequest& setTag(const vector<ListServicesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListServicesRequest& setTag(vector<ListServicesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The filter.
    std::shared_ptr<vector<ListServicesRequestFilter>> filter_ = nullptr;
    // Keyword fuzzy query.
    std::shared_ptr<string> fuzzyKeyword_ = nullptr;
    // Whether it is used. Optional values:
    // 
    // 
    // 
    // - false: not being used.
    // 
    // 
    // 
    // - true: already in use.
    std::shared_ptr<bool> inUsed_ = nullptr;
    // The number of entries page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Service ordering type.
    std::shared_ptr<string> orderByType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Service access type.
    std::shared_ptr<string> serviceAccessType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListServicesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
