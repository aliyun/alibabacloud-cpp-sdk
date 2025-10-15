// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLDOCUMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECALLDOCUMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecallDocumentResponseBodyDataChunkList.hpp>
#include <alibabacloud/models/RecallDocumentResponseBodyDataChunkPartList.hpp>
#include <alibabacloud/models/RecallDocumentResponseBodyDataDocuments.hpp>
#include <alibabacloud/models/RecallDocumentResponseBodyDataTextChunkList.hpp>
#include <alibabacloud/models/RecallDocumentResponseBodyDataVectorChunkList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecallDocumentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(chunkList, chunkList_);
      DARABONBA_PTR_TO_JSON(chunkPartList, chunkPartList_);
      DARABONBA_PTR_TO_JSON(chunkTextList, chunkTextList_);
      DARABONBA_PTR_TO_JSON(documents, documents_);
      DARABONBA_PTR_TO_JSON(embeddingElapsedMs, embeddingElapsedMs_);
      DARABONBA_PTR_TO_JSON(textChunkList, textChunkList_);
      DARABONBA_PTR_TO_JSON(textSearchElapsedMs, textSearchElapsedMs_);
      DARABONBA_PTR_TO_JSON(totalElapsedMs, totalElapsedMs_);
      DARABONBA_PTR_TO_JSON(vectorChunkList, vectorChunkList_);
      DARABONBA_PTR_TO_JSON(vectorSearchElapsedMs, vectorSearchElapsedMs_);
    };
    friend void from_json(const Darabonba::Json& j, RecallDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkList, chunkList_);
      DARABONBA_PTR_FROM_JSON(chunkPartList, chunkPartList_);
      DARABONBA_PTR_FROM_JSON(chunkTextList, chunkTextList_);
      DARABONBA_PTR_FROM_JSON(documents, documents_);
      DARABONBA_PTR_FROM_JSON(embeddingElapsedMs, embeddingElapsedMs_);
      DARABONBA_PTR_FROM_JSON(textChunkList, textChunkList_);
      DARABONBA_PTR_FROM_JSON(textSearchElapsedMs, textSearchElapsedMs_);
      DARABONBA_PTR_FROM_JSON(totalElapsedMs, totalElapsedMs_);
      DARABONBA_PTR_FROM_JSON(vectorChunkList, vectorChunkList_);
      DARABONBA_PTR_FROM_JSON(vectorSearchElapsedMs, vectorSearchElapsedMs_);
    };
    RecallDocumentResponseBodyData() = default ;
    RecallDocumentResponseBodyData(const RecallDocumentResponseBodyData &) = default ;
    RecallDocumentResponseBodyData(RecallDocumentResponseBodyData &&) = default ;
    RecallDocumentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallDocumentResponseBodyData() = default ;
    RecallDocumentResponseBodyData& operator=(const RecallDocumentResponseBodyData &) = default ;
    RecallDocumentResponseBodyData& operator=(RecallDocumentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkList_ == nullptr
        && return this->chunkPartList_ == nullptr && return this->chunkTextList_ == nullptr && return this->documents_ == nullptr && return this->embeddingElapsedMs_ == nullptr && return this->textChunkList_ == nullptr
        && return this->textSearchElapsedMs_ == nullptr && return this->totalElapsedMs_ == nullptr && return this->vectorChunkList_ == nullptr && return this->vectorSearchElapsedMs_ == nullptr; };
    // chunkList Field Functions 
    bool hasChunkList() const { return this->chunkList_ != nullptr;};
    void deleteChunkList() { this->chunkList_ = nullptr;};
    inline const vector<Models::RecallDocumentResponseBodyDataChunkList> & chunkList() const { DARABONBA_PTR_GET_CONST(chunkList_, vector<Models::RecallDocumentResponseBodyDataChunkList>) };
    inline vector<Models::RecallDocumentResponseBodyDataChunkList> chunkList() { DARABONBA_PTR_GET(chunkList_, vector<Models::RecallDocumentResponseBodyDataChunkList>) };
    inline RecallDocumentResponseBodyData& setChunkList(const vector<Models::RecallDocumentResponseBodyDataChunkList> & chunkList) { DARABONBA_PTR_SET_VALUE(chunkList_, chunkList) };
    inline RecallDocumentResponseBodyData& setChunkList(vector<Models::RecallDocumentResponseBodyDataChunkList> && chunkList) { DARABONBA_PTR_SET_RVALUE(chunkList_, chunkList) };


    // chunkPartList Field Functions 
    bool hasChunkPartList() const { return this->chunkPartList_ != nullptr;};
    void deleteChunkPartList() { this->chunkPartList_ = nullptr;};
    inline const vector<Models::RecallDocumentResponseBodyDataChunkPartList> & chunkPartList() const { DARABONBA_PTR_GET_CONST(chunkPartList_, vector<Models::RecallDocumentResponseBodyDataChunkPartList>) };
    inline vector<Models::RecallDocumentResponseBodyDataChunkPartList> chunkPartList() { DARABONBA_PTR_GET(chunkPartList_, vector<Models::RecallDocumentResponseBodyDataChunkPartList>) };
    inline RecallDocumentResponseBodyData& setChunkPartList(const vector<Models::RecallDocumentResponseBodyDataChunkPartList> & chunkPartList) { DARABONBA_PTR_SET_VALUE(chunkPartList_, chunkPartList) };
    inline RecallDocumentResponseBodyData& setChunkPartList(vector<Models::RecallDocumentResponseBodyDataChunkPartList> && chunkPartList) { DARABONBA_PTR_SET_RVALUE(chunkPartList_, chunkPartList) };


    // chunkTextList Field Functions 
    bool hasChunkTextList() const { return this->chunkTextList_ != nullptr;};
    void deleteChunkTextList() { this->chunkTextList_ = nullptr;};
    inline const vector<string> & chunkTextList() const { DARABONBA_PTR_GET_CONST(chunkTextList_, vector<string>) };
    inline vector<string> chunkTextList() { DARABONBA_PTR_GET(chunkTextList_, vector<string>) };
    inline RecallDocumentResponseBodyData& setChunkTextList(const vector<string> & chunkTextList) { DARABONBA_PTR_SET_VALUE(chunkTextList_, chunkTextList) };
    inline RecallDocumentResponseBodyData& setChunkTextList(vector<string> && chunkTextList) { DARABONBA_PTR_SET_RVALUE(chunkTextList_, chunkTextList) };


    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<Models::RecallDocumentResponseBodyDataDocuments> & documents() const { DARABONBA_PTR_GET_CONST(documents_, vector<Models::RecallDocumentResponseBodyDataDocuments>) };
    inline vector<Models::RecallDocumentResponseBodyDataDocuments> documents() { DARABONBA_PTR_GET(documents_, vector<Models::RecallDocumentResponseBodyDataDocuments>) };
    inline RecallDocumentResponseBodyData& setDocuments(const vector<Models::RecallDocumentResponseBodyDataDocuments> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline RecallDocumentResponseBodyData& setDocuments(vector<Models::RecallDocumentResponseBodyDataDocuments> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // embeddingElapsedMs Field Functions 
    bool hasEmbeddingElapsedMs() const { return this->embeddingElapsedMs_ != nullptr;};
    void deleteEmbeddingElapsedMs() { this->embeddingElapsedMs_ = nullptr;};
    inline int64_t embeddingElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(embeddingElapsedMs_, 0L) };
    inline RecallDocumentResponseBodyData& setEmbeddingElapsedMs(int64_t embeddingElapsedMs) { DARABONBA_PTR_SET_VALUE(embeddingElapsedMs_, embeddingElapsedMs) };


    // textChunkList Field Functions 
    bool hasTextChunkList() const { return this->textChunkList_ != nullptr;};
    void deleteTextChunkList() { this->textChunkList_ = nullptr;};
    inline const vector<Models::RecallDocumentResponseBodyDataTextChunkList> & textChunkList() const { DARABONBA_PTR_GET_CONST(textChunkList_, vector<Models::RecallDocumentResponseBodyDataTextChunkList>) };
    inline vector<Models::RecallDocumentResponseBodyDataTextChunkList> textChunkList() { DARABONBA_PTR_GET(textChunkList_, vector<Models::RecallDocumentResponseBodyDataTextChunkList>) };
    inline RecallDocumentResponseBodyData& setTextChunkList(const vector<Models::RecallDocumentResponseBodyDataTextChunkList> & textChunkList) { DARABONBA_PTR_SET_VALUE(textChunkList_, textChunkList) };
    inline RecallDocumentResponseBodyData& setTextChunkList(vector<Models::RecallDocumentResponseBodyDataTextChunkList> && textChunkList) { DARABONBA_PTR_SET_RVALUE(textChunkList_, textChunkList) };


    // textSearchElapsedMs Field Functions 
    bool hasTextSearchElapsedMs() const { return this->textSearchElapsedMs_ != nullptr;};
    void deleteTextSearchElapsedMs() { this->textSearchElapsedMs_ = nullptr;};
    inline int64_t textSearchElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(textSearchElapsedMs_, 0L) };
    inline RecallDocumentResponseBodyData& setTextSearchElapsedMs(int64_t textSearchElapsedMs) { DARABONBA_PTR_SET_VALUE(textSearchElapsedMs_, textSearchElapsedMs) };


    // totalElapsedMs Field Functions 
    bool hasTotalElapsedMs() const { return this->totalElapsedMs_ != nullptr;};
    void deleteTotalElapsedMs() { this->totalElapsedMs_ = nullptr;};
    inline int64_t totalElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(totalElapsedMs_, 0L) };
    inline RecallDocumentResponseBodyData& setTotalElapsedMs(int64_t totalElapsedMs) { DARABONBA_PTR_SET_VALUE(totalElapsedMs_, totalElapsedMs) };


    // vectorChunkList Field Functions 
    bool hasVectorChunkList() const { return this->vectorChunkList_ != nullptr;};
    void deleteVectorChunkList() { this->vectorChunkList_ = nullptr;};
    inline const vector<Models::RecallDocumentResponseBodyDataVectorChunkList> & vectorChunkList() const { DARABONBA_PTR_GET_CONST(vectorChunkList_, vector<Models::RecallDocumentResponseBodyDataVectorChunkList>) };
    inline vector<Models::RecallDocumentResponseBodyDataVectorChunkList> vectorChunkList() { DARABONBA_PTR_GET(vectorChunkList_, vector<Models::RecallDocumentResponseBodyDataVectorChunkList>) };
    inline RecallDocumentResponseBodyData& setVectorChunkList(const vector<Models::RecallDocumentResponseBodyDataVectorChunkList> & vectorChunkList) { DARABONBA_PTR_SET_VALUE(vectorChunkList_, vectorChunkList) };
    inline RecallDocumentResponseBodyData& setVectorChunkList(vector<Models::RecallDocumentResponseBodyDataVectorChunkList> && vectorChunkList) { DARABONBA_PTR_SET_RVALUE(vectorChunkList_, vectorChunkList) };


    // vectorSearchElapsedMs Field Functions 
    bool hasVectorSearchElapsedMs() const { return this->vectorSearchElapsedMs_ != nullptr;};
    void deleteVectorSearchElapsedMs() { this->vectorSearchElapsedMs_ = nullptr;};
    inline int64_t vectorSearchElapsedMs() const { DARABONBA_PTR_GET_DEFAULT(vectorSearchElapsedMs_, 0L) };
    inline RecallDocumentResponseBodyData& setVectorSearchElapsedMs(int64_t vectorSearchElapsedMs) { DARABONBA_PTR_SET_VALUE(vectorSearchElapsedMs_, vectorSearchElapsedMs) };


  protected:
    std::shared_ptr<vector<Models::RecallDocumentResponseBodyDataChunkList>> chunkList_ = nullptr;
    std::shared_ptr<vector<Models::RecallDocumentResponseBodyDataChunkPartList>> chunkPartList_ = nullptr;
    std::shared_ptr<vector<string>> chunkTextList_ = nullptr;
    std::shared_ptr<vector<Models::RecallDocumentResponseBodyDataDocuments>> documents_ = nullptr;
    std::shared_ptr<int64_t> embeddingElapsedMs_ = nullptr;
    std::shared_ptr<vector<Models::RecallDocumentResponseBodyDataTextChunkList>> textChunkList_ = nullptr;
    std::shared_ptr<int64_t> textSearchElapsedMs_ = nullptr;
    std::shared_ptr<int64_t> totalElapsedMs_ = nullptr;
    std::shared_ptr<vector<Models::RecallDocumentResponseBodyDataVectorChunkList>> vectorChunkList_ = nullptr;
    std::shared_ptr<int64_t> vectorSearchElapsedMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
