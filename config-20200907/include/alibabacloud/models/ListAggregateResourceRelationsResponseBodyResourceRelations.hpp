// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCERELATIONSRESPONSEBODYRESOURCERELATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCERELATIONSRESPONSEBODYRESOURCERELATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregateResourceRelationsResponseBodyResourceRelationsResourceRelationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourceRelationsResponseBodyResourceRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourceRelationsResponseBodyResourceRelations& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceRelationList, resourceRelationList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourceRelationsResponseBodyResourceRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceRelationList, resourceRelationList_);
    };
    ListAggregateResourceRelationsResponseBodyResourceRelations() = default ;
    ListAggregateResourceRelationsResponseBodyResourceRelations(const ListAggregateResourceRelationsResponseBodyResourceRelations &) = default ;
    ListAggregateResourceRelationsResponseBodyResourceRelations(ListAggregateResourceRelationsResponseBodyResourceRelations &&) = default ;
    ListAggregateResourceRelationsResponseBodyResourceRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourceRelationsResponseBodyResourceRelations() = default ;
    ListAggregateResourceRelationsResponseBodyResourceRelations& operator=(const ListAggregateResourceRelationsResponseBodyResourceRelations &) = default ;
    ListAggregateResourceRelationsResponseBodyResourceRelations& operator=(ListAggregateResourceRelationsResponseBodyResourceRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->resourceRelationList_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggregateResourceRelationsResponseBodyResourceRelations& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregateResourceRelationsResponseBodyResourceRelations& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceRelationList Field Functions 
    bool hasResourceRelationList() const { return this->resourceRelationList_ != nullptr;};
    void deleteResourceRelationList() { this->resourceRelationList_ = nullptr;};
    inline const vector<Models::ListAggregateResourceRelationsResponseBodyResourceRelationsResourceRelationList> & resourceRelationList() const { DARABONBA_PTR_GET_CONST(resourceRelationList_, vector<Models::ListAggregateResourceRelationsResponseBodyResourceRelationsResourceRelationList>) };
    inline vector<Models::ListAggregateResourceRelationsResponseBodyResourceRelationsResourceRelationList> resourceRelationList() { DARABONBA_PTR_GET(resourceRelationList_, vector<Models::ListAggregateResourceRelationsResponseBodyResourceRelationsResourceRelationList>) };
    inline ListAggregateResourceRelationsResponseBodyResourceRelations& setResourceRelationList(const vector<Models::ListAggregateResourceRelationsResponseBodyResourceRelationsResourceRelationList> & resourceRelationList) { DARABONBA_PTR_SET_VALUE(resourceRelationList_, resourceRelationList) };
    inline ListAggregateResourceRelationsResponseBodyResourceRelations& setResourceRelationList(vector<Models::ListAggregateResourceRelationsResponseBodyResourceRelationsResourceRelationList> && resourceRelationList) { DARABONBA_PTR_SET_RVALUE(resourceRelationList_, resourceRelationList) };


  protected:
    // The maximum number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that was used to initiate the next request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // An array that contains the relationships.
    std::shared_ptr<vector<Models::ListAggregateResourceRelationsResponseBodyResourceRelationsResourceRelationList>> resourceRelationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
