// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTS_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanImageResponseBodyDataResultsSubResultsFrames.hpp>
#include <alibabacloud/models/ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList.hpp>
#include <alibabacloud/models/ScanImageResponseBodyDataResultsSubResultsLogoDataList.hpp>
#include <alibabacloud/models/ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList.hpp>
#include <alibabacloud/models/ScanImageResponseBodyDataResultsSubResultsSfaceDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageResponseBodyDataResultsSubResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageResponseBodyDataResultsSubResults& obj) { 
      DARABONBA_PTR_TO_JSON(Frames, frames_);
      DARABONBA_PTR_TO_JSON(HintWordsInfoList, hintWordsInfoList_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(LogoDataList, logoDataList_);
      DARABONBA_PTR_TO_JSON(OCRDataList, OCRDataList_);
      DARABONBA_PTR_TO_JSON(ProgramCodeDataList, programCodeDataList_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SfaceDataList, sfaceDataList_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageResponseBodyDataResultsSubResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Frames, frames_);
      DARABONBA_PTR_FROM_JSON(HintWordsInfoList, hintWordsInfoList_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(LogoDataList, logoDataList_);
      DARABONBA_PTR_FROM_JSON(OCRDataList, OCRDataList_);
      DARABONBA_PTR_FROM_JSON(ProgramCodeDataList, programCodeDataList_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SfaceDataList, sfaceDataList_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    ScanImageResponseBodyDataResultsSubResults() = default ;
    ScanImageResponseBodyDataResultsSubResults(const ScanImageResponseBodyDataResultsSubResults &) = default ;
    ScanImageResponseBodyDataResultsSubResults(ScanImageResponseBodyDataResultsSubResults &&) = default ;
    ScanImageResponseBodyDataResultsSubResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageResponseBodyDataResultsSubResults() = default ;
    ScanImageResponseBodyDataResultsSubResults& operator=(const ScanImageResponseBodyDataResultsSubResults &) = default ;
    ScanImageResponseBodyDataResultsSubResults& operator=(ScanImageResponseBodyDataResultsSubResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frames_ != nullptr
        && this->hintWordsInfoList_ != nullptr && this->label_ != nullptr && this->logoDataList_ != nullptr && this->OCRDataList_ != nullptr && this->programCodeDataList_ != nullptr
        && this->rate_ != nullptr && this->scene_ != nullptr && this->sfaceDataList_ != nullptr && this->suggestion_ != nullptr; };
    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<Models::ScanImageResponseBodyDataResultsSubResultsFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<Models::ScanImageResponseBodyDataResultsSubResultsFrames>) };
    inline vector<Models::ScanImageResponseBodyDataResultsSubResultsFrames> frames() { DARABONBA_PTR_GET(frames_, vector<Models::ScanImageResponseBodyDataResultsSubResultsFrames>) };
    inline ScanImageResponseBodyDataResultsSubResults& setFrames(const vector<Models::ScanImageResponseBodyDataResultsSubResultsFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline ScanImageResponseBodyDataResultsSubResults& setFrames(vector<Models::ScanImageResponseBodyDataResultsSubResultsFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // hintWordsInfoList Field Functions 
    bool hasHintWordsInfoList() const { return this->hintWordsInfoList_ != nullptr;};
    void deleteHintWordsInfoList() { this->hintWordsInfoList_ = nullptr;};
    inline const vector<Models::ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList> & hintWordsInfoList() const { DARABONBA_PTR_GET_CONST(hintWordsInfoList_, vector<Models::ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList>) };
    inline vector<Models::ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList> hintWordsInfoList() { DARABONBA_PTR_GET(hintWordsInfoList_, vector<Models::ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList>) };
    inline ScanImageResponseBodyDataResultsSubResults& setHintWordsInfoList(const vector<Models::ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList> & hintWordsInfoList) { DARABONBA_PTR_SET_VALUE(hintWordsInfoList_, hintWordsInfoList) };
    inline ScanImageResponseBodyDataResultsSubResults& setHintWordsInfoList(vector<Models::ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList> && hintWordsInfoList) { DARABONBA_PTR_SET_RVALUE(hintWordsInfoList_, hintWordsInfoList) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ScanImageResponseBodyDataResultsSubResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // logoDataList Field Functions 
    bool hasLogoDataList() const { return this->logoDataList_ != nullptr;};
    void deleteLogoDataList() { this->logoDataList_ = nullptr;};
    inline const vector<Models::ScanImageResponseBodyDataResultsSubResultsLogoDataList> & logoDataList() const { DARABONBA_PTR_GET_CONST(logoDataList_, vector<Models::ScanImageResponseBodyDataResultsSubResultsLogoDataList>) };
    inline vector<Models::ScanImageResponseBodyDataResultsSubResultsLogoDataList> logoDataList() { DARABONBA_PTR_GET(logoDataList_, vector<Models::ScanImageResponseBodyDataResultsSubResultsLogoDataList>) };
    inline ScanImageResponseBodyDataResultsSubResults& setLogoDataList(const vector<Models::ScanImageResponseBodyDataResultsSubResultsLogoDataList> & logoDataList) { DARABONBA_PTR_SET_VALUE(logoDataList_, logoDataList) };
    inline ScanImageResponseBodyDataResultsSubResults& setLogoDataList(vector<Models::ScanImageResponseBodyDataResultsSubResultsLogoDataList> && logoDataList) { DARABONBA_PTR_SET_RVALUE(logoDataList_, logoDataList) };


    // OCRDataList Field Functions 
    bool hasOCRDataList() const { return this->OCRDataList_ != nullptr;};
    void deleteOCRDataList() { this->OCRDataList_ = nullptr;};
    inline const vector<string> & OCRDataList() const { DARABONBA_PTR_GET_CONST(OCRDataList_, vector<string>) };
    inline vector<string> OCRDataList() { DARABONBA_PTR_GET(OCRDataList_, vector<string>) };
    inline ScanImageResponseBodyDataResultsSubResults& setOCRDataList(const vector<string> & OCRDataList) { DARABONBA_PTR_SET_VALUE(OCRDataList_, OCRDataList) };
    inline ScanImageResponseBodyDataResultsSubResults& setOCRDataList(vector<string> && OCRDataList) { DARABONBA_PTR_SET_RVALUE(OCRDataList_, OCRDataList) };


    // programCodeDataList Field Functions 
    bool hasProgramCodeDataList() const { return this->programCodeDataList_ != nullptr;};
    void deleteProgramCodeDataList() { this->programCodeDataList_ = nullptr;};
    inline const vector<Models::ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList> & programCodeDataList() const { DARABONBA_PTR_GET_CONST(programCodeDataList_, vector<Models::ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList>) };
    inline vector<Models::ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList> programCodeDataList() { DARABONBA_PTR_GET(programCodeDataList_, vector<Models::ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList>) };
    inline ScanImageResponseBodyDataResultsSubResults& setProgramCodeDataList(const vector<Models::ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList> & programCodeDataList) { DARABONBA_PTR_SET_VALUE(programCodeDataList_, programCodeDataList) };
    inline ScanImageResponseBodyDataResultsSubResults& setProgramCodeDataList(vector<Models::ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList> && programCodeDataList) { DARABONBA_PTR_SET_RVALUE(programCodeDataList_, programCodeDataList) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResults& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ScanImageResponseBodyDataResultsSubResults& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sfaceDataList Field Functions 
    bool hasSfaceDataList() const { return this->sfaceDataList_ != nullptr;};
    void deleteSfaceDataList() { this->sfaceDataList_ = nullptr;};
    inline const vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataList> & sfaceDataList() const { DARABONBA_PTR_GET_CONST(sfaceDataList_, vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataList>) };
    inline vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataList> sfaceDataList() { DARABONBA_PTR_GET(sfaceDataList_, vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataList>) };
    inline ScanImageResponseBodyDataResultsSubResults& setSfaceDataList(const vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataList> & sfaceDataList) { DARABONBA_PTR_SET_VALUE(sfaceDataList_, sfaceDataList) };
    inline ScanImageResponseBodyDataResultsSubResults& setSfaceDataList(vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataList> && sfaceDataList) { DARABONBA_PTR_SET_RVALUE(sfaceDataList_, sfaceDataList) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline ScanImageResponseBodyDataResultsSubResults& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<vector<Models::ScanImageResponseBodyDataResultsSubResultsFrames>> frames_ = nullptr;
    std::shared_ptr<vector<Models::ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList>> hintWordsInfoList_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<vector<Models::ScanImageResponseBodyDataResultsSubResultsLogoDataList>> logoDataList_ = nullptr;
    // 1
    std::shared_ptr<vector<string>> OCRDataList_ = nullptr;
    std::shared_ptr<vector<Models::ScanImageResponseBodyDataResultsSubResultsProgramCodeDataList>> programCodeDataList_ = nullptr;
    std::shared_ptr<float> rate_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<vector<Models::ScanImageResponseBodyDataResultsSubResultsSfaceDataList>> sfaceDataList_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
