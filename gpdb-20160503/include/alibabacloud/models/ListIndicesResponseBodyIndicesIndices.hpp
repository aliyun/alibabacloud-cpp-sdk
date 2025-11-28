// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODYINDICESINDICES_HPP_
#define ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODYINDICESINDICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListIndicesResponseBodyIndicesIndices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndicesResponseBodyIndicesIndices& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(IndexDef, indexDef_);
      DARABONBA_PTR_TO_JSON(IndexName, indexName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndicesResponseBodyIndicesIndices& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(IndexDef, indexDef_);
      DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    ListIndicesResponseBodyIndicesIndices() = default ;
    ListIndicesResponseBodyIndicesIndices(const ListIndicesResponseBodyIndicesIndices &) = default ;
    ListIndicesResponseBodyIndicesIndices(ListIndicesResponseBodyIndicesIndices &&) = default ;
    ListIndicesResponseBodyIndicesIndices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndicesResponseBodyIndicesIndices() = default ;
    ListIndicesResponseBodyIndicesIndices& operator=(const ListIndicesResponseBodyIndicesIndices &) = default ;
    ListIndicesResponseBodyIndicesIndices& operator=(ListIndicesResponseBodyIndicesIndices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && return this->indexDef_ == nullptr && return this->indexName_ == nullptr && return this->namespace_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline ListIndicesResponseBodyIndicesIndices& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // indexDef Field Functions 
    bool hasIndexDef() const { return this->indexDef_ != nullptr;};
    void deleteIndexDef() { this->indexDef_ = nullptr;};
    inline string indexDef() const { DARABONBA_PTR_GET_DEFAULT(indexDef_, "") };
    inline ListIndicesResponseBodyIndicesIndices& setIndexDef(string indexDef) { DARABONBA_PTR_SET_VALUE(indexDef_, indexDef) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ListIndicesResponseBodyIndicesIndices& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListIndicesResponseBodyIndicesIndices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The name of the collection.
    std::shared_ptr<string> collection_ = nullptr;
    // The definition of the index.
    std::shared_ptr<string> indexDef_ = nullptr;
    // The name of the index.
    std::shared_ptr<string> indexName_ = nullptr;
    // The namespace to which the pod belongs.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
