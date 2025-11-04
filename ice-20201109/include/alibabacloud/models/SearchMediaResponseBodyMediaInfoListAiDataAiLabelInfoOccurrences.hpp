// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIDATAAILABELINFOOCCURRENCES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIDATAAILABELINFOOCCURRENCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FinegrainId, finegrainId_);
      DARABONBA_PTR_TO_JSON(FinegrainName, finegrainName_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(TableBatchSeqId, tableBatchSeqId_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(Tracks, tracks_);
      DARABONBA_PTR_TO_JSON(clipId, clipId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FinegrainId, finegrainId_);
      DARABONBA_PTR_FROM_JSON(FinegrainName, finegrainName_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(TableBatchSeqId, tableBatchSeqId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(Tracks, tracks_);
      DARABONBA_PTR_FROM_JSON(clipId, clipId_);
    };
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences() = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences(const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences &) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences(SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences &&) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences() = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& operator=(const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences &) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& operator=(SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->finegrainId_ == nullptr && return this->finegrainName_ == nullptr && return this->from_ == nullptr && return this->image_ == nullptr && return this->score_ == nullptr
        && return this->tableBatchSeqId_ == nullptr && return this->to_ == nullptr && return this->tracks_ == nullptr && return this->clipId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // finegrainId Field Functions 
    bool hasFinegrainId() const { return this->finegrainId_ != nullptr;};
    void deleteFinegrainId() { this->finegrainId_ = nullptr;};
    inline string finegrainId() const { DARABONBA_PTR_GET_DEFAULT(finegrainId_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setFinegrainId(string finegrainId) { DARABONBA_PTR_SET_VALUE(finegrainId_, finegrainId) };


    // finegrainName Field Functions 
    bool hasFinegrainName() const { return this->finegrainName_ != nullptr;};
    void deleteFinegrainName() { this->finegrainName_ = nullptr;};
    inline string finegrainName() const { DARABONBA_PTR_GET_DEFAULT(finegrainName_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setFinegrainName(string finegrainName) { DARABONBA_PTR_SET_VALUE(finegrainName_, finegrainName) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline double from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // tableBatchSeqId Field Functions 
    bool hasTableBatchSeqId() const { return this->tableBatchSeqId_ != nullptr;};
    void deleteTableBatchSeqId() { this->tableBatchSeqId_ = nullptr;};
    inline string tableBatchSeqId() const { DARABONBA_PTR_GET_DEFAULT(tableBatchSeqId_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setTableBatchSeqId(string tableBatchSeqId) { DARABONBA_PTR_SET_VALUE(tableBatchSeqId_, tableBatchSeqId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline double to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // tracks Field Functions 
    bool hasTracks() const { return this->tracks_ != nullptr;};
    void deleteTracks() { this->tracks_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks> & tracks() const { DARABONBA_PTR_GET_CONST(tracks_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks>) };
    inline vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks> tracks() { DARABONBA_PTR_GET(tracks_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks>) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setTracks(const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks> & tracks) { DARABONBA_PTR_SET_VALUE(tracks_, tracks) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setTracks(vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks> && tracks) { DARABONBA_PTR_SET_RVALUE(tracks_, tracks) };


    // clipId Field Functions 
    bool hasClipId() const { return this->clipId_ != nullptr;};
    void deleteClipId() { this->clipId_ = nullptr;};
    inline string clipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


  protected:
    // The text content.
    std::shared_ptr<string> content_ = nullptr;
    // The fine-grained ID of the entity.
    std::shared_ptr<string> finegrainId_ = nullptr;
    // The fine-grained name of the entity.
    std::shared_ptr<string> finegrainName_ = nullptr;
    // The start time of the clip.
    std::shared_ptr<double> from_ = nullptr;
    // The optimal face image encoded in Base64.
    std::shared_ptr<string> image_ = nullptr;
    // The score.
    std::shared_ptr<double> score_ = nullptr;
    // The sequence ID of the vector table.
    std::shared_ptr<string> tableBatchSeqId_ = nullptr;
    // The end time of the clip.
    std::shared_ptr<double> to_ = nullptr;
    // The track sequence.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks>> tracks_ = nullptr;
    // The ID of the clip.
    std::shared_ptr<string> clipId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
