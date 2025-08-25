// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCastCrewListResponseBodyDataCastResults.hpp>
#include <alibabacloud/models/RecognizeVideoCastCrewListResponseBodyDataOcrResults.hpp>
#include <alibabacloud/models/RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults.hpp>
#include <alibabacloud/models/RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CastResults, castResults_);
      DARABONBA_PTR_TO_JSON(OcrResults, ocrResults_);
      DARABONBA_PTR_TO_JSON(OcrResultsUrl, ocrResultsUrl_);
      DARABONBA_PTR_TO_JSON(OcrVideoResultsUrl, ocrVideoResultsUrl_);
      DARABONBA_PTR_TO_JSON(SubtitlesResults, subtitlesResults_);
      DARABONBA_PTR_TO_JSON(VideoOcrResults, videoOcrResults_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CastResults, castResults_);
      DARABONBA_PTR_FROM_JSON(OcrResults, ocrResults_);
      DARABONBA_PTR_FROM_JSON(OcrResultsUrl, ocrResultsUrl_);
      DARABONBA_PTR_FROM_JSON(OcrVideoResultsUrl, ocrVideoResultsUrl_);
      DARABONBA_PTR_FROM_JSON(SubtitlesResults, subtitlesResults_);
      DARABONBA_PTR_FROM_JSON(VideoOcrResults, videoOcrResults_);
    };
    RecognizeVideoCastCrewListResponseBodyData() = default ;
    RecognizeVideoCastCrewListResponseBodyData(const RecognizeVideoCastCrewListResponseBodyData &) = default ;
    RecognizeVideoCastCrewListResponseBodyData(RecognizeVideoCastCrewListResponseBodyData &&) = default ;
    RecognizeVideoCastCrewListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListResponseBodyData() = default ;
    RecognizeVideoCastCrewListResponseBodyData& operator=(const RecognizeVideoCastCrewListResponseBodyData &) = default ;
    RecognizeVideoCastCrewListResponseBodyData& operator=(RecognizeVideoCastCrewListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->castResults_ != nullptr
        && this->ocrResults_ != nullptr && this->ocrResultsUrl_ != nullptr && this->ocrVideoResultsUrl_ != nullptr && this->subtitlesResults_ != nullptr && this->videoOcrResults_ != nullptr; };
    // castResults Field Functions 
    bool hasCastResults() const { return this->castResults_ != nullptr;};
    void deleteCastResults() { this->castResults_ = nullptr;};
    inline const vector<Models::RecognizeVideoCastCrewListResponseBodyDataCastResults> & castResults() const { DARABONBA_PTR_GET_CONST(castResults_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataCastResults>) };
    inline vector<Models::RecognizeVideoCastCrewListResponseBodyDataCastResults> castResults() { DARABONBA_PTR_GET(castResults_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataCastResults>) };
    inline RecognizeVideoCastCrewListResponseBodyData& setCastResults(const vector<Models::RecognizeVideoCastCrewListResponseBodyDataCastResults> & castResults) { DARABONBA_PTR_SET_VALUE(castResults_, castResults) };
    inline RecognizeVideoCastCrewListResponseBodyData& setCastResults(vector<Models::RecognizeVideoCastCrewListResponseBodyDataCastResults> && castResults) { DARABONBA_PTR_SET_RVALUE(castResults_, castResults) };


    // ocrResults Field Functions 
    bool hasOcrResults() const { return this->ocrResults_ != nullptr;};
    void deleteOcrResults() { this->ocrResults_ = nullptr;};
    inline const vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResults> & ocrResults() const { DARABONBA_PTR_GET_CONST(ocrResults_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResults>) };
    inline vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResults> ocrResults() { DARABONBA_PTR_GET(ocrResults_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResults>) };
    inline RecognizeVideoCastCrewListResponseBodyData& setOcrResults(const vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResults> & ocrResults) { DARABONBA_PTR_SET_VALUE(ocrResults_, ocrResults) };
    inline RecognizeVideoCastCrewListResponseBodyData& setOcrResults(vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResults> && ocrResults) { DARABONBA_PTR_SET_RVALUE(ocrResults_, ocrResults) };


    // ocrResultsUrl Field Functions 
    bool hasOcrResultsUrl() const { return this->ocrResultsUrl_ != nullptr;};
    void deleteOcrResultsUrl() { this->ocrResultsUrl_ = nullptr;};
    inline string ocrResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(ocrResultsUrl_, "") };
    inline RecognizeVideoCastCrewListResponseBodyData& setOcrResultsUrl(string ocrResultsUrl) { DARABONBA_PTR_SET_VALUE(ocrResultsUrl_, ocrResultsUrl) };


    // ocrVideoResultsUrl Field Functions 
    bool hasOcrVideoResultsUrl() const { return this->ocrVideoResultsUrl_ != nullptr;};
    void deleteOcrVideoResultsUrl() { this->ocrVideoResultsUrl_ = nullptr;};
    inline string ocrVideoResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(ocrVideoResultsUrl_, "") };
    inline RecognizeVideoCastCrewListResponseBodyData& setOcrVideoResultsUrl(string ocrVideoResultsUrl) { DARABONBA_PTR_SET_VALUE(ocrVideoResultsUrl_, ocrVideoResultsUrl) };


    // subtitlesResults Field Functions 
    bool hasSubtitlesResults() const { return this->subtitlesResults_ != nullptr;};
    void deleteSubtitlesResults() { this->subtitlesResults_ = nullptr;};
    inline const vector<Models::RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults> & subtitlesResults() const { DARABONBA_PTR_GET_CONST(subtitlesResults_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults>) };
    inline vector<Models::RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults> subtitlesResults() { DARABONBA_PTR_GET(subtitlesResults_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults>) };
    inline RecognizeVideoCastCrewListResponseBodyData& setSubtitlesResults(const vector<Models::RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults> & subtitlesResults) { DARABONBA_PTR_SET_VALUE(subtitlesResults_, subtitlesResults) };
    inline RecognizeVideoCastCrewListResponseBodyData& setSubtitlesResults(vector<Models::RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults> && subtitlesResults) { DARABONBA_PTR_SET_RVALUE(subtitlesResults_, subtitlesResults) };


    // videoOcrResults Field Functions 
    bool hasVideoOcrResults() const { return this->videoOcrResults_ != nullptr;};
    void deleteVideoOcrResults() { this->videoOcrResults_ = nullptr;};
    inline const vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults> & videoOcrResults() const { DARABONBA_PTR_GET_CONST(videoOcrResults_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults>) };
    inline vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults> videoOcrResults() { DARABONBA_PTR_GET(videoOcrResults_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults>) };
    inline RecognizeVideoCastCrewListResponseBodyData& setVideoOcrResults(const vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults> & videoOcrResults) { DARABONBA_PTR_SET_VALUE(videoOcrResults_, videoOcrResults) };
    inline RecognizeVideoCastCrewListResponseBodyData& setVideoOcrResults(vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults> && videoOcrResults) { DARABONBA_PTR_SET_RVALUE(videoOcrResults_, videoOcrResults) };


  protected:
    std::shared_ptr<vector<Models::RecognizeVideoCastCrewListResponseBodyDataCastResults>> castResults_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResults>> ocrResults_ = nullptr;
    std::shared_ptr<string> ocrResultsUrl_ = nullptr;
    std::shared_ptr<string> ocrVideoResultsUrl_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults>> subtitlesResults_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults>> videoOcrResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
