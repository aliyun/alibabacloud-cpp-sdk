// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATASUBTITLESRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATASUBTITLESRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& obj) { 
      DARABONBA_PTR_TO_JSON(SubtitlesAllResults, subtitlesAllResults_);
      DARABONBA_PTR_TO_JSON(SubtitlesAllResultsUrl, subtitlesAllResultsUrl_);
      DARABONBA_PTR_TO_JSON(SubtitlesChineseResults, subtitlesChineseResults_);
      DARABONBA_PTR_TO_JSON(SubtitlesChineseResultsUrl, subtitlesChineseResultsUrl_);
      DARABONBA_ANY_TO_JSON(SubtitlesEnglishResults, subtitlesEnglishResults_);
      DARABONBA_PTR_TO_JSON(SubtitlesEnglishResultsUrl, subtitlesEnglishResultsUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& obj) { 
      DARABONBA_PTR_FROM_JSON(SubtitlesAllResults, subtitlesAllResults_);
      DARABONBA_PTR_FROM_JSON(SubtitlesAllResultsUrl, subtitlesAllResultsUrl_);
      DARABONBA_PTR_FROM_JSON(SubtitlesChineseResults, subtitlesChineseResults_);
      DARABONBA_PTR_FROM_JSON(SubtitlesChineseResultsUrl, subtitlesChineseResultsUrl_);
      DARABONBA_ANY_FROM_JSON(SubtitlesEnglishResults, subtitlesEnglishResults_);
      DARABONBA_PTR_FROM_JSON(SubtitlesEnglishResultsUrl, subtitlesEnglishResultsUrl_);
    };
    RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults() = default ;
    RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults(const RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults(RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults &&) = default ;
    RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults() = default ;
    RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& operator=(const RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& operator=(RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subtitlesAllResults_ != nullptr
        && this->subtitlesAllResultsUrl_ != nullptr && this->subtitlesChineseResults_ != nullptr && this->subtitlesChineseResultsUrl_ != nullptr && this->subtitlesEnglishResults_ != nullptr && this->subtitlesEnglishResultsUrl_ != nullptr; };
    // subtitlesAllResults Field Functions 
    bool hasSubtitlesAllResults() const { return this->subtitlesAllResults_ != nullptr;};
    void deleteSubtitlesAllResults() { this->subtitlesAllResults_ = nullptr;};
    inline const map<string, string> & subtitlesAllResults() const { DARABONBA_PTR_GET_CONST(subtitlesAllResults_, map<string, string>) };
    inline map<string, string> subtitlesAllResults() { DARABONBA_PTR_GET(subtitlesAllResults_, map<string, string>) };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesAllResults(const map<string, string> & subtitlesAllResults) { DARABONBA_PTR_SET_VALUE(subtitlesAllResults_, subtitlesAllResults) };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesAllResults(map<string, string> && subtitlesAllResults) { DARABONBA_PTR_SET_RVALUE(subtitlesAllResults_, subtitlesAllResults) };


    // subtitlesAllResultsUrl Field Functions 
    bool hasSubtitlesAllResultsUrl() const { return this->subtitlesAllResultsUrl_ != nullptr;};
    void deleteSubtitlesAllResultsUrl() { this->subtitlesAllResultsUrl_ = nullptr;};
    inline string subtitlesAllResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(subtitlesAllResultsUrl_, "") };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesAllResultsUrl(string subtitlesAllResultsUrl) { DARABONBA_PTR_SET_VALUE(subtitlesAllResultsUrl_, subtitlesAllResultsUrl) };


    // subtitlesChineseResults Field Functions 
    bool hasSubtitlesChineseResults() const { return this->subtitlesChineseResults_ != nullptr;};
    void deleteSubtitlesChineseResults() { this->subtitlesChineseResults_ = nullptr;};
    inline const map<string, string> & subtitlesChineseResults() const { DARABONBA_PTR_GET_CONST(subtitlesChineseResults_, map<string, string>) };
    inline map<string, string> subtitlesChineseResults() { DARABONBA_PTR_GET(subtitlesChineseResults_, map<string, string>) };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesChineseResults(const map<string, string> & subtitlesChineseResults) { DARABONBA_PTR_SET_VALUE(subtitlesChineseResults_, subtitlesChineseResults) };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesChineseResults(map<string, string> && subtitlesChineseResults) { DARABONBA_PTR_SET_RVALUE(subtitlesChineseResults_, subtitlesChineseResults) };


    // subtitlesChineseResultsUrl Field Functions 
    bool hasSubtitlesChineseResultsUrl() const { return this->subtitlesChineseResultsUrl_ != nullptr;};
    void deleteSubtitlesChineseResultsUrl() { this->subtitlesChineseResultsUrl_ = nullptr;};
    inline string subtitlesChineseResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(subtitlesChineseResultsUrl_, "") };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesChineseResultsUrl(string subtitlesChineseResultsUrl) { DARABONBA_PTR_SET_VALUE(subtitlesChineseResultsUrl_, subtitlesChineseResultsUrl) };


    // subtitlesEnglishResults Field Functions 
    bool hasSubtitlesEnglishResults() const { return this->subtitlesEnglishResults_ != nullptr;};
    void deleteSubtitlesEnglishResults() { this->subtitlesEnglishResults_ = nullptr;};
    inline     const Darabonba::Json & subtitlesEnglishResults() const { DARABONBA_GET(subtitlesEnglishResults_) };
    Darabonba::Json & subtitlesEnglishResults() { DARABONBA_GET(subtitlesEnglishResults_) };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesEnglishResults(const Darabonba::Json & subtitlesEnglishResults) { DARABONBA_SET_VALUE(subtitlesEnglishResults_, subtitlesEnglishResults) };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesEnglishResults(Darabonba::Json & subtitlesEnglishResults) { DARABONBA_SET_RVALUE(subtitlesEnglishResults_, subtitlesEnglishResults) };


    // subtitlesEnglishResultsUrl Field Functions 
    bool hasSubtitlesEnglishResultsUrl() const { return this->subtitlesEnglishResultsUrl_ != nullptr;};
    void deleteSubtitlesEnglishResultsUrl() { this->subtitlesEnglishResultsUrl_ = nullptr;};
    inline string subtitlesEnglishResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(subtitlesEnglishResultsUrl_, "") };
    inline RecognizeVideoCastCrewListResponseBodyDataSubtitlesResults& setSubtitlesEnglishResultsUrl(string subtitlesEnglishResultsUrl) { DARABONBA_PTR_SET_VALUE(subtitlesEnglishResultsUrl_, subtitlesEnglishResultsUrl) };


  protected:
    std::shared_ptr<map<string, string>> subtitlesAllResults_ = nullptr;
    std::shared_ptr<string> subtitlesAllResultsUrl_ = nullptr;
    std::shared_ptr<map<string, string>> subtitlesChineseResults_ = nullptr;
    std::shared_ptr<string> subtitlesChineseResultsUrl_ = nullptr;
    Darabonba::Json subtitlesEnglishResults_ = nullptr;
    std::shared_ptr<string> subtitlesEnglishResultsUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
