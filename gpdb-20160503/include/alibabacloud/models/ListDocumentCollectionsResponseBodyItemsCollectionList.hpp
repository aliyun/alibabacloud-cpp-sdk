// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTCOLLECTIONSRESPONSEBODYITEMSCOLLECTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTCOLLECTIONSRESPONSEBODYITEMSCOLLECTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDocumentCollectionsResponseBodyItemsCollectionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentCollectionsResponseBodyItemsCollectionList& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionName, collectionName_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_TO_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentCollectionsResponseBodyItemsCollectionList& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionName, collectionName_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_FROM_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
    };
    ListDocumentCollectionsResponseBodyItemsCollectionList() = default ;
    ListDocumentCollectionsResponseBodyItemsCollectionList(const ListDocumentCollectionsResponseBodyItemsCollectionList &) = default ;
    ListDocumentCollectionsResponseBodyItemsCollectionList(ListDocumentCollectionsResponseBodyItemsCollectionList &&) = default ;
    ListDocumentCollectionsResponseBodyItemsCollectionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentCollectionsResponseBodyItemsCollectionList() = default ;
    ListDocumentCollectionsResponseBodyItemsCollectionList& operator=(const ListDocumentCollectionsResponseBodyItemsCollectionList &) = default ;
    ListDocumentCollectionsResponseBodyItemsCollectionList& operator=(ListDocumentCollectionsResponseBodyItemsCollectionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectionName_ == nullptr
        && return this->dimension_ == nullptr && return this->embeddingModel_ == nullptr && return this->fullTextRetrievalFields_ == nullptr && return this->metadata_ == nullptr && return this->metrics_ == nullptr
        && return this->parser_ == nullptr; };
    // collectionName Field Functions 
    bool hasCollectionName() const { return this->collectionName_ != nullptr;};
    void deleteCollectionName() { this->collectionName_ = nullptr;};
    inline string collectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
    inline ListDocumentCollectionsResponseBodyItemsCollectionList& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline ListDocumentCollectionsResponseBodyItemsCollectionList& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string embeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline ListDocumentCollectionsResponseBodyItemsCollectionList& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


    // fullTextRetrievalFields Field Functions 
    bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
    void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
    inline string fullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
    inline ListDocumentCollectionsResponseBodyItemsCollectionList& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string metadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline ListDocumentCollectionsResponseBodyItemsCollectionList& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline ListDocumentCollectionsResponseBodyItemsCollectionList& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline ListDocumentCollectionsResponseBodyItemsCollectionList& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


  protected:
    // The name of the document collection.
    std::shared_ptr<string> collectionName_ = nullptr;
    // The number of vector dimensions.
    std::shared_ptr<int32_t> dimension_ = nullptr;
    // The name of the vector algorithm.
    std::shared_ptr<string> embeddingModel_ = nullptr;
    // The fields that are used for full-text search. Multiple fields are separated by commas (,).
    std::shared_ptr<string> fullTextRetrievalFields_ = nullptr;
    // The metadata.
    std::shared_ptr<string> metadata_ = nullptr;
    // The vector similarity algorithm.
    std::shared_ptr<string> metrics_ = nullptr;
    // The analyzer that is used for full-text search.
    std::shared_ptr<string> parser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
