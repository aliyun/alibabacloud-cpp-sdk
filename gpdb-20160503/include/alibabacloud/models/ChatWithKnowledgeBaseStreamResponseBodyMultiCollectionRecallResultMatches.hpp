// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYMULTICOLLECTIONRECALLRESULTMATCHES_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYMULTICOLLECTIONRECALLRESULTMATCHES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_ANY_TO_JSON(LoaderMetadata, loaderMetadata_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RerankScore, rerankScore_);
      DARABONBA_PTR_TO_JSON(RetrievalSource, retrievalSource_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Vector, vector_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_ANY_FROM_JSON(LoaderMetadata, loaderMetadata_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RerankScore, rerankScore_);
      DARABONBA_PTR_FROM_JSON(RetrievalSource, retrievalSource_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Vector, vector_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches(const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches(ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& operator=(const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& operator=(ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->fileName_ != nullptr && this->fileURL_ != nullptr && this->id_ != nullptr && this->loaderMetadata_ != nullptr && this->metadata_ != nullptr
        && this->rerankScore_ != nullptr && this->retrievalSource_ != nullptr && this->score_ != nullptr && this->vector_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // loaderMetadata Field Functions 
    bool hasLoaderMetadata() const { return this->loaderMetadata_ != nullptr;};
    void deleteLoaderMetadata() { this->loaderMetadata_ = nullptr;};
    inline     const Darabonba::Json & loaderMetadata() const { DARABONBA_GET(loaderMetadata_) };
    Darabonba::Json & loaderMetadata() { DARABONBA_GET(loaderMetadata_) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setLoaderMetadata(const Darabonba::Json & loaderMetadata) { DARABONBA_SET_VALUE(loaderMetadata_, loaderMetadata) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setLoaderMetadata(Darabonba::Json & loaderMetadata) { DARABONBA_SET_RVALUE(loaderMetadata_, loaderMetadata) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, Models::ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata) };
    inline Models::ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata metadata() { DARABONBA_PTR_GET(metadata_, Models::ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setMetadata(const Models::ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setMetadata(Models::ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // rerankScore Field Functions 
    bool hasRerankScore() const { return this->rerankScore_ != nullptr;};
    void deleteRerankScore() { this->rerankScore_ = nullptr;};
    inline double rerankScore() const { DARABONBA_PTR_GET_DEFAULT(rerankScore_, 0.0) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setRerankScore(double rerankScore) { DARABONBA_PTR_SET_VALUE(rerankScore_, rerankScore) };


    // retrievalSource Field Functions 
    bool hasRetrievalSource() const { return this->retrievalSource_ != nullptr;};
    void deleteRetrievalSource() { this->retrievalSource_ = nullptr;};
    inline int64_t retrievalSource() const { DARABONBA_PTR_GET_DEFAULT(retrievalSource_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setRetrievalSource(int64_t retrievalSource) { DARABONBA_PTR_SET_VALUE(retrievalSource_, retrievalSource) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // vector Field Functions 
    bool hasVector() const { return this->vector_ != nullptr;};
    void deleteVector() { this->vector_ = nullptr;};
    inline const vector<double> & _vector() const { DARABONBA_PTR_GET_CONST(vector_, vector<double>) };
    inline vector<double> _vector() { DARABONBA_PTR_GET(vector_, vector<double>) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setVector(const vector<double> & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatches& setVector(vector<double> && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileURL_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    Darabonba::Json loaderMetadata_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultMatchesMetadata> metadata_ = nullptr;
    std::shared_ptr<double> rerankScore_ = nullptr;
    std::shared_ptr<int64_t> retrievalSource_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<vector<double>> vector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
