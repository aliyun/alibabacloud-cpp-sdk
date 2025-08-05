// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTCOLLECTIONSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTCOLLECTIONSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDocumentCollectionsResponseBodyItemsCollectionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDocumentCollectionsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentCollectionsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionList, collectionList_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentCollectionsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionList, collectionList_);
    };
    ListDocumentCollectionsResponseBodyItems() = default ;
    ListDocumentCollectionsResponseBodyItems(const ListDocumentCollectionsResponseBodyItems &) = default ;
    ListDocumentCollectionsResponseBodyItems(ListDocumentCollectionsResponseBodyItems &&) = default ;
    ListDocumentCollectionsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentCollectionsResponseBodyItems() = default ;
    ListDocumentCollectionsResponseBodyItems& operator=(const ListDocumentCollectionsResponseBodyItems &) = default ;
    ListDocumentCollectionsResponseBodyItems& operator=(ListDocumentCollectionsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectionList_ != nullptr; };
    // collectionList Field Functions 
    bool hasCollectionList() const { return this->collectionList_ != nullptr;};
    void deleteCollectionList() { this->collectionList_ = nullptr;};
    inline const vector<Models::ListDocumentCollectionsResponseBodyItemsCollectionList> & collectionList() const { DARABONBA_PTR_GET_CONST(collectionList_, vector<Models::ListDocumentCollectionsResponseBodyItemsCollectionList>) };
    inline vector<Models::ListDocumentCollectionsResponseBodyItemsCollectionList> collectionList() { DARABONBA_PTR_GET(collectionList_, vector<Models::ListDocumentCollectionsResponseBodyItemsCollectionList>) };
    inline ListDocumentCollectionsResponseBodyItems& setCollectionList(const vector<Models::ListDocumentCollectionsResponseBodyItemsCollectionList> & collectionList) { DARABONBA_PTR_SET_VALUE(collectionList_, collectionList) };
    inline ListDocumentCollectionsResponseBodyItems& setCollectionList(vector<Models::ListDocumentCollectionsResponseBodyItemsCollectionList> && collectionList) { DARABONBA_PTR_SET_RVALUE(collectionList_, collectionList) };


  protected:
    std::shared_ptr<vector<Models::ListDocumentCollectionsResponseBodyItemsCollectionList>> collectionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
