// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODYMATCHESMATCHLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODYMATCHESMATCHLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentResponseBodyMatchesMatchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentResponseBodyMatchesMatchList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LoaderMetadata, loaderMetadata_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RerankScore, rerankScore_);
      DARABONBA_PTR_TO_JSON(RetrievalSource, retrievalSource_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentResponseBodyMatchesMatchList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LoaderMetadata, loaderMetadata_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RerankScore, rerankScore_);
      DARABONBA_PTR_FROM_JSON(RetrievalSource, retrievalSource_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    QueryKnowledgeBasesContentResponseBodyMatchesMatchList() = default ;
    QueryKnowledgeBasesContentResponseBodyMatchesMatchList(const QueryKnowledgeBasesContentResponseBodyMatchesMatchList &) = default ;
    QueryKnowledgeBasesContentResponseBodyMatchesMatchList(QueryKnowledgeBasesContentResponseBodyMatchesMatchList &&) = default ;
    QueryKnowledgeBasesContentResponseBodyMatchesMatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentResponseBodyMatchesMatchList() = default ;
    QueryKnowledgeBasesContentResponseBodyMatchesMatchList& operator=(const QueryKnowledgeBasesContentResponseBodyMatchesMatchList &) = default ;
    QueryKnowledgeBasesContentResponseBodyMatchesMatchList& operator=(QueryKnowledgeBasesContentResponseBodyMatchesMatchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->fileName_ == nullptr && return this->fileURL_ == nullptr && return this->id_ == nullptr && return this->loaderMetadata_ == nullptr && return this->metadata_ == nullptr
        && return this->rerankScore_ == nullptr && return this->retrievalSource_ == nullptr && return this->score_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // loaderMetadata Field Functions 
    bool hasLoaderMetadata() const { return this->loaderMetadata_ != nullptr;};
    void deleteLoaderMetadata() { this->loaderMetadata_ = nullptr;};
    inline string loaderMetadata() const { DARABONBA_PTR_GET_DEFAULT(loaderMetadata_, "") };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setLoaderMetadata(string loaderMetadata) { DARABONBA_PTR_SET_VALUE(loaderMetadata_, loaderMetadata) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> metadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // rerankScore Field Functions 
    bool hasRerankScore() const { return this->rerankScore_ != nullptr;};
    void deleteRerankScore() { this->rerankScore_ = nullptr;};
    inline double rerankScore() const { DARABONBA_PTR_GET_DEFAULT(rerankScore_, 0.0) };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setRerankScore(double rerankScore) { DARABONBA_PTR_SET_VALUE(rerankScore_, rerankScore) };


    // retrievalSource Field Functions 
    bool hasRetrievalSource() const { return this->retrievalSource_ != nullptr;};
    void deleteRetrievalSource() { this->retrievalSource_ = nullptr;};
    inline int32_t retrievalSource() const { DARABONBA_PTR_GET_DEFAULT(retrievalSource_, 0) };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setRetrievalSource(int32_t retrievalSource) { DARABONBA_PTR_SET_VALUE(retrievalSource_, retrievalSource) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline QueryKnowledgeBasesContentResponseBodyMatchesMatchList& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    // The content of the text.
    std::shared_ptr<string> content_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The public network URL of the image result. By default, the URL is valid for 2 hours.
    // 
    // You can use the UrlExpiration parameter to specify a validity period.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The unique ID of the vector data.
    std::shared_ptr<string> id_ = nullptr;
    // Document loader metadata.
    std::shared_ptr<string> loaderMetadata_ = nullptr;
    // The metadata map.
    std::shared_ptr<map<string, string>> metadata_ = nullptr;
    // The rerank score.
    std::shared_ptr<double> rerankScore_ = nullptr;
    // The source of the retrieval results. 1 indicates vector retrieval, 2 indicates full-text retrieval, and 3 indicates dual-path retrieval.
    std::shared_ptr<int32_t> retrievalSource_ = nullptr;
    // The similarity score of the data. It is related to the algorithm (l2, ip, or cosine) that is specified when you create an index.
    std::shared_ptr<double> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
