// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppRequestCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestCluster& obj) { 
      DARABONBA_PTR_TO_JSON(chunkModels, chunkModels_);
      DARABONBA_ANY_TO_JSON(graphRag, graphRag_);
      DARABONBA_PTR_TO_JSON(imageContentRecognizerModels, imageContentRecognizerModels_);
      DARABONBA_PTR_TO_JSON(maxQueryClauseLength, maxQueryClauseLength_);
      DARABONBA_PTR_TO_JSON(maxTimeoutMS, maxTimeoutMS_);
      DARABONBA_PTR_TO_JSON(textEmbeddingModel, textEmbeddingModel_);
      DARABONBA_PTR_TO_JSON(textSparseEmbeddingModel, textSparseEmbeddingModel_);
      DARABONBA_PTR_TO_JSON(vectorIndexConfigs, vectorIndexConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkModels, chunkModels_);
      DARABONBA_ANY_FROM_JSON(graphRag, graphRag_);
      DARABONBA_PTR_FROM_JSON(imageContentRecognizerModels, imageContentRecognizerModels_);
      DARABONBA_PTR_FROM_JSON(maxQueryClauseLength, maxQueryClauseLength_);
      DARABONBA_PTR_FROM_JSON(maxTimeoutMS, maxTimeoutMS_);
      DARABONBA_PTR_FROM_JSON(textEmbeddingModel, textEmbeddingModel_);
      DARABONBA_PTR_FROM_JSON(textSparseEmbeddingModel, textSparseEmbeddingModel_);
      DARABONBA_PTR_FROM_JSON(vectorIndexConfigs, vectorIndexConfigs_);
    };
    CreateAppRequestCluster() = default ;
    CreateAppRequestCluster(const CreateAppRequestCluster &) = default ;
    CreateAppRequestCluster(CreateAppRequestCluster &&) = default ;
    CreateAppRequestCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestCluster() = default ;
    CreateAppRequestCluster& operator=(const CreateAppRequestCluster &) = default ;
    CreateAppRequestCluster& operator=(CreateAppRequestCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkModels_ == nullptr
        && return this->graphRag_ == nullptr && return this->imageContentRecognizerModels_ == nullptr && return this->maxQueryClauseLength_ == nullptr && return this->maxTimeoutMS_ == nullptr && return this->textEmbeddingModel_ == nullptr
        && return this->textSparseEmbeddingModel_ == nullptr && return this->vectorIndexConfigs_ == nullptr; };
    // chunkModels Field Functions 
    bool hasChunkModels() const { return this->chunkModels_ != nullptr;};
    void deleteChunkModels() { this->chunkModels_ = nullptr;};
    inline const vector<Darabonba::Json> & chunkModels() const { DARABONBA_PTR_GET_CONST(chunkModels_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> chunkModels() { DARABONBA_PTR_GET(chunkModels_, vector<Darabonba::Json>) };
    inline CreateAppRequestCluster& setChunkModels(const vector<Darabonba::Json> & chunkModels) { DARABONBA_PTR_SET_VALUE(chunkModels_, chunkModels) };
    inline CreateAppRequestCluster& setChunkModels(vector<Darabonba::Json> && chunkModels) { DARABONBA_PTR_SET_RVALUE(chunkModels_, chunkModels) };


    // graphRag Field Functions 
    bool hasGraphRag() const { return this->graphRag_ != nullptr;};
    void deleteGraphRag() { this->graphRag_ = nullptr;};
    inline     const Darabonba::Json & graphRag() const { DARABONBA_GET(graphRag_) };
    Darabonba::Json & graphRag() { DARABONBA_GET(graphRag_) };
    inline CreateAppRequestCluster& setGraphRag(const Darabonba::Json & graphRag) { DARABONBA_SET_VALUE(graphRag_, graphRag) };
    inline CreateAppRequestCluster& setGraphRag(Darabonba::Json & graphRag) { DARABONBA_SET_RVALUE(graphRag_, graphRag) };


    // imageContentRecognizerModels Field Functions 
    bool hasImageContentRecognizerModels() const { return this->imageContentRecognizerModels_ != nullptr;};
    void deleteImageContentRecognizerModels() { this->imageContentRecognizerModels_ = nullptr;};
    inline const vector<Darabonba::Json> & imageContentRecognizerModels() const { DARABONBA_PTR_GET_CONST(imageContentRecognizerModels_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> imageContentRecognizerModels() { DARABONBA_PTR_GET(imageContentRecognizerModels_, vector<Darabonba::Json>) };
    inline CreateAppRequestCluster& setImageContentRecognizerModels(const vector<Darabonba::Json> & imageContentRecognizerModels) { DARABONBA_PTR_SET_VALUE(imageContentRecognizerModels_, imageContentRecognizerModels) };
    inline CreateAppRequestCluster& setImageContentRecognizerModels(vector<Darabonba::Json> && imageContentRecognizerModels) { DARABONBA_PTR_SET_RVALUE(imageContentRecognizerModels_, imageContentRecognizerModels) };


    // maxQueryClauseLength Field Functions 
    bool hasMaxQueryClauseLength() const { return this->maxQueryClauseLength_ != nullptr;};
    void deleteMaxQueryClauseLength() { this->maxQueryClauseLength_ = nullptr;};
    inline int32_t maxQueryClauseLength() const { DARABONBA_PTR_GET_DEFAULT(maxQueryClauseLength_, 0) };
    inline CreateAppRequestCluster& setMaxQueryClauseLength(int32_t maxQueryClauseLength) { DARABONBA_PTR_SET_VALUE(maxQueryClauseLength_, maxQueryClauseLength) };


    // maxTimeoutMS Field Functions 
    bool hasMaxTimeoutMS() const { return this->maxTimeoutMS_ != nullptr;};
    void deleteMaxTimeoutMS() { this->maxTimeoutMS_ = nullptr;};
    inline int32_t maxTimeoutMS() const { DARABONBA_PTR_GET_DEFAULT(maxTimeoutMS_, 0) };
    inline CreateAppRequestCluster& setMaxTimeoutMS(int32_t maxTimeoutMS) { DARABONBA_PTR_SET_VALUE(maxTimeoutMS_, maxTimeoutMS) };


    // textEmbeddingModel Field Functions 
    bool hasTextEmbeddingModel() const { return this->textEmbeddingModel_ != nullptr;};
    void deleteTextEmbeddingModel() { this->textEmbeddingModel_ = nullptr;};
    inline string textEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(textEmbeddingModel_, "") };
    inline CreateAppRequestCluster& setTextEmbeddingModel(string textEmbeddingModel) { DARABONBA_PTR_SET_VALUE(textEmbeddingModel_, textEmbeddingModel) };


    // textSparseEmbeddingModel Field Functions 
    bool hasTextSparseEmbeddingModel() const { return this->textSparseEmbeddingModel_ != nullptr;};
    void deleteTextSparseEmbeddingModel() { this->textSparseEmbeddingModel_ = nullptr;};
    inline string textSparseEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(textSparseEmbeddingModel_, "") };
    inline CreateAppRequestCluster& setTextSparseEmbeddingModel(string textSparseEmbeddingModel) { DARABONBA_PTR_SET_VALUE(textSparseEmbeddingModel_, textSparseEmbeddingModel) };


    // vectorIndexConfigs Field Functions 
    bool hasVectorIndexConfigs() const { return this->vectorIndexConfigs_ != nullptr;};
    void deleteVectorIndexConfigs() { this->vectorIndexConfigs_ = nullptr;};
    inline const vector<Darabonba::Json> & vectorIndexConfigs() const { DARABONBA_PTR_GET_CONST(vectorIndexConfigs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> vectorIndexConfigs() { DARABONBA_PTR_GET(vectorIndexConfigs_, vector<Darabonba::Json>) };
    inline CreateAppRequestCluster& setVectorIndexConfigs(const vector<Darabonba::Json> & vectorIndexConfigs) { DARABONBA_PTR_SET_VALUE(vectorIndexConfigs_, vectorIndexConfigs) };
    inline CreateAppRequestCluster& setVectorIndexConfigs(vector<Darabonba::Json> && vectorIndexConfigs) { DARABONBA_PTR_SET_RVALUE(vectorIndexConfigs_, vectorIndexConfigs) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> chunkModels_ = nullptr;
    Darabonba::Json graphRag_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> imageContentRecognizerModels_ = nullptr;
    // The maximum length of the query clause.
    std::shared_ptr<int32_t> maxQueryClauseLength_ = nullptr;
    // The timeout period. Unit: milliseconds.
    std::shared_ptr<int32_t> maxTimeoutMS_ = nullptr;
    std::shared_ptr<string> textEmbeddingModel_ = nullptr;
    std::shared_ptr<string> textSparseEmbeddingModel_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> vectorIndexConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
