// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Collection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMetaCollectionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCollectionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionList, collectionList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCollectionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionList, collectionList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListMetaCollectionsResponseBodyData() = default ;
    ListMetaCollectionsResponseBodyData(const ListMetaCollectionsResponseBodyData &) = default ;
    ListMetaCollectionsResponseBodyData(ListMetaCollectionsResponseBodyData &&) = default ;
    ListMetaCollectionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCollectionsResponseBodyData() = default ;
    ListMetaCollectionsResponseBodyData& operator=(const ListMetaCollectionsResponseBodyData &) = default ;
    ListMetaCollectionsResponseBodyData& operator=(ListMetaCollectionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectionList_ != nullptr
        && this->nextToken_ != nullptr; };
    // collectionList Field Functions 
    bool hasCollectionList() const { return this->collectionList_ != nullptr;};
    void deleteCollectionList() { this->collectionList_ = nullptr;};
    inline const vector<Models::Collection> & collectionList() const { DARABONBA_PTR_GET_CONST(collectionList_, vector<Models::Collection>) };
    inline vector<Models::Collection> collectionList() { DARABONBA_PTR_GET(collectionList_, vector<Models::Collection>) };
    inline ListMetaCollectionsResponseBodyData& setCollectionList(const vector<Models::Collection> & collectionList) { DARABONBA_PTR_SET_VALUE(collectionList_, collectionList) };
    inline ListMetaCollectionsResponseBodyData& setCollectionList(vector<Models::Collection> && collectionList) { DARABONBA_PTR_SET_RVALUE(collectionList_, collectionList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMetaCollectionsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The collections.
    std::shared_ptr<vector<Models::Collection>> collectionList_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
