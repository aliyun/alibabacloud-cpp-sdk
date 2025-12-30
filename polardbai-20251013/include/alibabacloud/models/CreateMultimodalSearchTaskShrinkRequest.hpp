// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODALSEARCHTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODALSEARCHTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class CreateMultimodalSearchTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultimodalSearchTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIdsShrink_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SearchModel, searchModel_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultimodalSearchTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SearchModel, searchModel_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    CreateMultimodalSearchTaskShrinkRequest() = default ;
    CreateMultimodalSearchTaskShrinkRequest(const CreateMultimodalSearchTaskShrinkRequest &) = default ;
    CreateMultimodalSearchTaskShrinkRequest(CreateMultimodalSearchTaskShrinkRequest &&) = default ;
    CreateMultimodalSearchTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultimodalSearchTaskShrinkRequest() = default ;
    CreateMultimodalSearchTaskShrinkRequest& operator=(const CreateMultimodalSearchTaskShrinkRequest &) = default ;
    CreateMultimodalSearchTaskShrinkRequest& operator=(CreateMultimodalSearchTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetIdsShrink_ == nullptr && this->embeddingModel_ == nullptr && this->query_ == nullptr && this->searchModel_ == nullptr && this->topK_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMultimodalSearchTaskShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetIdsShrink Field Functions 
    bool hasDatasetIdsShrink() const { return this->datasetIdsShrink_ != nullptr;};
    void deleteDatasetIdsShrink() { this->datasetIdsShrink_ = nullptr;};
    inline string getDatasetIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(datasetIdsShrink_, "") };
    inline CreateMultimodalSearchTaskShrinkRequest& setDatasetIdsShrink(string datasetIdsShrink) { DARABONBA_PTR_SET_VALUE(datasetIdsShrink_, datasetIdsShrink) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline CreateMultimodalSearchTaskShrinkRequest& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline CreateMultimodalSearchTaskShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // searchModel Field Functions 
    bool hasSearchModel() const { return this->searchModel_ != nullptr;};
    void deleteSearchModel() { this->searchModel_ = nullptr;};
    inline string getSearchModel() const { DARABONBA_PTR_GET_DEFAULT(searchModel_, "") };
    inline CreateMultimodalSearchTaskShrinkRequest& setSearchModel(string searchModel) { DARABONBA_PTR_SET_VALUE(searchModel_, searchModel) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline CreateMultimodalSearchTaskShrinkRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> datasetIdsShrink_ {};
    shared_ptr<string> embeddingModel_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> searchModel_ {};
    shared_ptr<int32_t> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
