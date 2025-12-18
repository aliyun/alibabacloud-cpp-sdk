// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSEBODYDISCOVEREDRESOURCEPROFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSEBODYDISCOVEREDRESOURCEPROFILES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceProfileList, discoveredResourceProfileList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceProfileList, discoveredResourceProfileList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles() = default ;
    ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles(const ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles &) = default ;
    ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles(ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles &&) = default ;
    ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles() = default ;
    ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& operator=(const ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles &) = default ;
    ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& operator=(ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discoveredResourceProfileList_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->totalCount_ == nullptr; };
    // discoveredResourceProfileList Field Functions 
    bool hasDiscoveredResourceProfileList() const { return this->discoveredResourceProfileList_ != nullptr;};
    void deleteDiscoveredResourceProfileList() { this->discoveredResourceProfileList_ = nullptr;};
    inline const vector<Models::ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList> & discoveredResourceProfileList() const { DARABONBA_PTR_GET_CONST(discoveredResourceProfileList_, vector<Models::ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList>) };
    inline vector<Models::ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList> discoveredResourceProfileList() { DARABONBA_PTR_GET(discoveredResourceProfileList_, vector<Models::ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList>) };
    inline ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& setDiscoveredResourceProfileList(const vector<Models::ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList> & discoveredResourceProfileList) { DARABONBA_PTR_SET_VALUE(discoveredResourceProfileList_, discoveredResourceProfileList) };
    inline ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& setDiscoveredResourceProfileList(vector<Models::ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList> && discoveredResourceProfileList) { DARABONBA_PTR_SET_RVALUE(discoveredResourceProfileList_, discoveredResourceProfileList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the resources.
    std::shared_ptr<vector<Models::ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList>> discoveredResourceProfileList_ = nullptr;
    // The maximum number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that was used to initiate the next request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of resources.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
