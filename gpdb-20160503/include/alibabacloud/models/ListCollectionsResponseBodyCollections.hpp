// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLECTIONSRESPONSEBODYCOLLECTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLECTIONSRESPONSEBODYCOLLECTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListCollectionsResponseBodyCollections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollectionsResponseBodyCollections& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollectionsResponseBodyCollections& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
    };
    ListCollectionsResponseBodyCollections() = default ;
    ListCollectionsResponseBodyCollections(const ListCollectionsResponseBodyCollections &) = default ;
    ListCollectionsResponseBodyCollections(ListCollectionsResponseBodyCollections &&) = default ;
    ListCollectionsResponseBodyCollections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollectionsResponseBodyCollections() = default ;
    ListCollectionsResponseBodyCollections& operator=(const ListCollectionsResponseBodyCollections &) = default ;
    ListCollectionsResponseBodyCollections& operator=(ListCollectionsResponseBodyCollections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline const vector<string> & collection() const { DARABONBA_PTR_GET_CONST(collection_, vector<string>) };
    inline vector<string> collection() { DARABONBA_PTR_GET(collection_, vector<string>) };
    inline ListCollectionsResponseBodyCollections& setCollection(const vector<string> & collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };
    inline ListCollectionsResponseBodyCollections& setCollection(vector<string> && collection) { DARABONBA_PTR_SET_RVALUE(collection_, collection) };


  protected:
    std::shared_ptr<vector<string>> collection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
