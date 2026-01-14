// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHUNKITEM_HPP_
#define ALIBABACLOUD_MODELS_CHUNKITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChunkItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChunkItem& obj) { 
      DARABONBA_PTR_TO_JSON(chunkContent, chunkContent_);
      DARABONBA_PTR_TO_JSON(chunkId, chunkId_);
      DARABONBA_PTR_TO_JSON(docElsIds, docElsIds_);
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(docName, docName_);
      DARABONBA_PTR_TO_JSON(docUrl, docUrl_);
      DARABONBA_PTR_TO_JSON(rerankScore, rerankScore_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(weightedScore, weightedScore_);
    };
    friend void from_json(const Darabonba::Json& j, ChunkItem& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkContent, chunkContent_);
      DARABONBA_PTR_FROM_JSON(chunkId, chunkId_);
      DARABONBA_PTR_FROM_JSON(docElsIds, docElsIds_);
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(docName, docName_);
      DARABONBA_PTR_FROM_JSON(docUrl, docUrl_);
      DARABONBA_PTR_FROM_JSON(rerankScore, rerankScore_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(weightedScore, weightedScore_);
    };
    ChunkItem() = default ;
    ChunkItem(const ChunkItem &) = default ;
    ChunkItem(ChunkItem &&) = default ;
    ChunkItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChunkItem() = default ;
    ChunkItem& operator=(const ChunkItem &) = default ;
    ChunkItem& operator=(ChunkItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkContent_ == nullptr
        && this->chunkId_ == nullptr && this->docElsIds_ == nullptr && this->docId_ == nullptr && this->docName_ == nullptr && this->docUrl_ == nullptr
        && this->rerankScore_ == nullptr && this->score_ == nullptr && this->weightedScore_ == nullptr; };
    // chunkContent Field Functions 
    bool hasChunkContent() const { return this->chunkContent_ != nullptr;};
    void deleteChunkContent() { this->chunkContent_ = nullptr;};
    inline string getChunkContent() const { DARABONBA_PTR_GET_DEFAULT(chunkContent_, "") };
    inline ChunkItem& setChunkContent(string chunkContent) { DARABONBA_PTR_SET_VALUE(chunkContent_, chunkContent) };


    // chunkId Field Functions 
    bool hasChunkId() const { return this->chunkId_ != nullptr;};
    void deleteChunkId() { this->chunkId_ = nullptr;};
    inline string getChunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
    inline ChunkItem& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


    // docElsIds Field Functions 
    bool hasDocElsIds() const { return this->docElsIds_ != nullptr;};
    void deleteDocElsIds() { this->docElsIds_ = nullptr;};
    inline const vector<string> & getDocElsIds() const { DARABONBA_PTR_GET_CONST(docElsIds_, vector<string>) };
    inline vector<string> getDocElsIds() { DARABONBA_PTR_GET(docElsIds_, vector<string>) };
    inline ChunkItem& setDocElsIds(const vector<string> & docElsIds) { DARABONBA_PTR_SET_VALUE(docElsIds_, docElsIds) };
    inline ChunkItem& setDocElsIds(vector<string> && docElsIds) { DARABONBA_PTR_SET_RVALUE(docElsIds_, docElsIds) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline ChunkItem& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline ChunkItem& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docUrl Field Functions 
    bool hasDocUrl() const { return this->docUrl_ != nullptr;};
    void deleteDocUrl() { this->docUrl_ = nullptr;};
    inline string getDocUrl() const { DARABONBA_PTR_GET_DEFAULT(docUrl_, "") };
    inline ChunkItem& setDocUrl(string docUrl) { DARABONBA_PTR_SET_VALUE(docUrl_, docUrl) };


    // rerankScore Field Functions 
    bool hasRerankScore() const { return this->rerankScore_ != nullptr;};
    void deleteRerankScore() { this->rerankScore_ = nullptr;};
    inline float getRerankScore() const { DARABONBA_PTR_GET_DEFAULT(rerankScore_, 0.0) };
    inline ChunkItem& setRerankScore(float rerankScore) { DARABONBA_PTR_SET_VALUE(rerankScore_, rerankScore) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ChunkItem& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // weightedScore Field Functions 
    bool hasWeightedScore() const { return this->weightedScore_ != nullptr;};
    void deleteWeightedScore() { this->weightedScore_ = nullptr;};
    inline float getWeightedScore() const { DARABONBA_PTR_GET_DEFAULT(weightedScore_, 0.0) };
    inline ChunkItem& setWeightedScore(float weightedScore) { DARABONBA_PTR_SET_VALUE(weightedScore_, weightedScore) };


  protected:
    shared_ptr<string> chunkContent_ {};
    shared_ptr<string> chunkId_ {};
    shared_ptr<vector<string>> docElsIds_ {};
    shared_ptr<string> docId_ {};
    shared_ptr<string> docName_ {};
    shared_ptr<string> docUrl_ {};
    shared_ptr<float> rerankScore_ {};
    shared_ptr<float> score_ {};
    shared_ptr<float> weightedScore_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
