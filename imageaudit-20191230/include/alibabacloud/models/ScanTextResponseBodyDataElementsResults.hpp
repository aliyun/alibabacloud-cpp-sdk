// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATAELEMENTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATAELEMENTSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanTextResponseBodyDataElementsResultsDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanTextResponseBodyDataElementsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanTextResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, ScanTextResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    ScanTextResponseBodyDataElementsResults() = default ;
    ScanTextResponseBodyDataElementsResults(const ScanTextResponseBodyDataElementsResults &) = default ;
    ScanTextResponseBodyDataElementsResults(ScanTextResponseBodyDataElementsResults &&) = default ;
    ScanTextResponseBodyDataElementsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanTextResponseBodyDataElementsResults() = default ;
    ScanTextResponseBodyDataElementsResults& operator=(const ScanTextResponseBodyDataElementsResults &) = default ;
    ScanTextResponseBodyDataElementsResults& operator=(ScanTextResponseBodyDataElementsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->details_ != nullptr
        && this->label_ != nullptr && this->rate_ != nullptr && this->suggestion_ != nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::ScanTextResponseBodyDataElementsResultsDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::ScanTextResponseBodyDataElementsResultsDetails>) };
    inline vector<Models::ScanTextResponseBodyDataElementsResultsDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::ScanTextResponseBodyDataElementsResultsDetails>) };
    inline ScanTextResponseBodyDataElementsResults& setDetails(const vector<Models::ScanTextResponseBodyDataElementsResultsDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline ScanTextResponseBodyDataElementsResults& setDetails(vector<Models::ScanTextResponseBodyDataElementsResultsDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ScanTextResponseBodyDataElementsResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ScanTextResponseBodyDataElementsResults& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline ScanTextResponseBodyDataElementsResults& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<vector<Models::ScanTextResponseBodyDataElementsResultsDetails>> details_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<float> rate_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
