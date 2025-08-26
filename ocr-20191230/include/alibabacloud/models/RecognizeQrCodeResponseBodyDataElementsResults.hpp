// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEQRCODERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEQRCODERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeQrCodeResponseBodyDataElementsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeQrCodeResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(QrCodesData, qrCodesData_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeQrCodeResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(QrCodesData, qrCodesData_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    RecognizeQrCodeResponseBodyDataElementsResults() = default ;
    RecognizeQrCodeResponseBodyDataElementsResults(const RecognizeQrCodeResponseBodyDataElementsResults &) = default ;
    RecognizeQrCodeResponseBodyDataElementsResults(RecognizeQrCodeResponseBodyDataElementsResults &&) = default ;
    RecognizeQrCodeResponseBodyDataElementsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeQrCodeResponseBodyDataElementsResults() = default ;
    RecognizeQrCodeResponseBodyDataElementsResults& operator=(const RecognizeQrCodeResponseBodyDataElementsResults &) = default ;
    RecognizeQrCodeResponseBodyDataElementsResults& operator=(RecognizeQrCodeResponseBodyDataElementsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->qrCodesData_ != nullptr && this->rate_ != nullptr && this->suggestion_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline RecognizeQrCodeResponseBodyDataElementsResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // qrCodesData Field Functions 
    bool hasQrCodesData() const { return this->qrCodesData_ != nullptr;};
    void deleteQrCodesData() { this->qrCodesData_ = nullptr;};
    inline const vector<string> & qrCodesData() const { DARABONBA_PTR_GET_CONST(qrCodesData_, vector<string>) };
    inline vector<string> qrCodesData() { DARABONBA_PTR_GET(qrCodesData_, vector<string>) };
    inline RecognizeQrCodeResponseBodyDataElementsResults& setQrCodesData(const vector<string> & qrCodesData) { DARABONBA_PTR_SET_VALUE(qrCodesData_, qrCodesData) };
    inline RecognizeQrCodeResponseBodyDataElementsResults& setQrCodesData(vector<string> && qrCodesData) { DARABONBA_PTR_SET_RVALUE(qrCodesData_, qrCodesData) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline RecognizeQrCodeResponseBodyDataElementsResults& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline RecognizeQrCodeResponseBodyDataElementsResults& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<string> label_ = nullptr;
    // 1
    std::shared_ptr<vector<string>> qrCodesData_ = nullptr;
    std::shared_ptr<float> rate_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
