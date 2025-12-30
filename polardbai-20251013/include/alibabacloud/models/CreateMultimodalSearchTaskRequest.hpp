// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODALSEARCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODALSEARCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class CreateMultimodalSearchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultimodalSearchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SearchModel, searchModel_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultimodalSearchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SearchModel, searchModel_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    CreateMultimodalSearchTaskRequest() = default ;
    CreateMultimodalSearchTaskRequest(const CreateMultimodalSearchTaskRequest &) = default ;
    CreateMultimodalSearchTaskRequest(CreateMultimodalSearchTaskRequest &&) = default ;
    CreateMultimodalSearchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultimodalSearchTaskRequest() = default ;
    CreateMultimodalSearchTaskRequest& operator=(const CreateMultimodalSearchTaskRequest &) = default ;
    CreateMultimodalSearchTaskRequest& operator=(CreateMultimodalSearchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetIds_ == nullptr && this->embeddingModel_ == nullptr && this->query_ == nullptr && this->searchModel_ == nullptr && this->topK_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMultimodalSearchTaskRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline const vector<string> & getDatasetIds() const { DARABONBA_PTR_GET_CONST(datasetIds_, vector<string>) };
    inline vector<string> getDatasetIds() { DARABONBA_PTR_GET(datasetIds_, vector<string>) };
    inline CreateMultimodalSearchTaskRequest& setDatasetIds(const vector<string> & datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };
    inline CreateMultimodalSearchTaskRequest& setDatasetIds(vector<string> && datasetIds) { DARABONBA_PTR_SET_RVALUE(datasetIds_, datasetIds) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline CreateMultimodalSearchTaskRequest& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline CreateMultimodalSearchTaskRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // searchModel Field Functions 
    bool hasSearchModel() const { return this->searchModel_ != nullptr;};
    void deleteSearchModel() { this->searchModel_ = nullptr;};
    inline string getSearchModel() const { DARABONBA_PTR_GET_DEFAULT(searchModel_, "") };
    inline CreateMultimodalSearchTaskRequest& setSearchModel(string searchModel) { DARABONBA_PTR_SET_VALUE(searchModel_, searchModel) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline CreateMultimodalSearchTaskRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<vector<string>> datasetIds_ {};
    shared_ptr<string> embeddingModel_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> searchModel_ {};
    shared_ptr<int32_t> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
