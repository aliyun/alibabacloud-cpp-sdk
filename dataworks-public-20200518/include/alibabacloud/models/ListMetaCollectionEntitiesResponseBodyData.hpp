// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACOLLECTIONENTITIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACOLLECTIONENTITIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Entity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMetaCollectionEntitiesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCollectionEntitiesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EntityList, entityList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCollectionEntitiesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListMetaCollectionEntitiesResponseBodyData() = default ;
    ListMetaCollectionEntitiesResponseBodyData(const ListMetaCollectionEntitiesResponseBodyData &) = default ;
    ListMetaCollectionEntitiesResponseBodyData(ListMetaCollectionEntitiesResponseBodyData &&) = default ;
    ListMetaCollectionEntitiesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCollectionEntitiesResponseBodyData() = default ;
    ListMetaCollectionEntitiesResponseBodyData& operator=(const ListMetaCollectionEntitiesResponseBodyData &) = default ;
    ListMetaCollectionEntitiesResponseBodyData& operator=(ListMetaCollectionEntitiesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityList_ != nullptr
        && this->nextToken_ != nullptr; };
    // entityList Field Functions 
    bool hasEntityList() const { return this->entityList_ != nullptr;};
    void deleteEntityList() { this->entityList_ = nullptr;};
    inline const vector<Models::Entity> & entityList() const { DARABONBA_PTR_GET_CONST(entityList_, vector<Models::Entity>) };
    inline vector<Models::Entity> entityList() { DARABONBA_PTR_GET(entityList_, vector<Models::Entity>) };
    inline ListMetaCollectionEntitiesResponseBodyData& setEntityList(const vector<Models::Entity> & entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };
    inline ListMetaCollectionEntitiesResponseBodyData& setEntityList(vector<Models::Entity> && entityList) { DARABONBA_PTR_SET_RVALUE(entityList_, entityList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMetaCollectionEntitiesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The entities.
    std::shared_ptr<vector<Models::Entity>> entityList_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
