// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEPUBLICFACERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEPUBLICFACERESPONSEBODYDATAELEMENTSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizePublicFaceResponseBodyDataElementsResultsSubResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizePublicFaceResponseBodyDataElementsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizePublicFaceResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(SubResults, subResults_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizePublicFaceResponseBodyDataElementsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(SubResults, subResults_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    RecognizePublicFaceResponseBodyDataElementsResults() = default ;
    RecognizePublicFaceResponseBodyDataElementsResults(const RecognizePublicFaceResponseBodyDataElementsResults &) = default ;
    RecognizePublicFaceResponseBodyDataElementsResults(RecognizePublicFaceResponseBodyDataElementsResults &&) = default ;
    RecognizePublicFaceResponseBodyDataElementsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizePublicFaceResponseBodyDataElementsResults() = default ;
    RecognizePublicFaceResponseBodyDataElementsResults& operator=(const RecognizePublicFaceResponseBodyDataElementsResults &) = default ;
    RecognizePublicFaceResponseBodyDataElementsResults& operator=(RecognizePublicFaceResponseBodyDataElementsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->rate_ == nullptr && return this->subResults_ == nullptr && return this->suggestion_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline RecognizePublicFaceResponseBodyDataElementsResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline RecognizePublicFaceResponseBodyDataElementsResults& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // subResults Field Functions 
    bool hasSubResults() const { return this->subResults_ != nullptr;};
    void deleteSubResults() { this->subResults_ = nullptr;};
    inline const vector<Models::RecognizePublicFaceResponseBodyDataElementsResultsSubResults> & subResults() const { DARABONBA_PTR_GET_CONST(subResults_, vector<Models::RecognizePublicFaceResponseBodyDataElementsResultsSubResults>) };
    inline vector<Models::RecognizePublicFaceResponseBodyDataElementsResultsSubResults> subResults() { DARABONBA_PTR_GET(subResults_, vector<Models::RecognizePublicFaceResponseBodyDataElementsResultsSubResults>) };
    inline RecognizePublicFaceResponseBodyDataElementsResults& setSubResults(const vector<Models::RecognizePublicFaceResponseBodyDataElementsResultsSubResults> & subResults) { DARABONBA_PTR_SET_VALUE(subResults_, subResults) };
    inline RecognizePublicFaceResponseBodyDataElementsResults& setSubResults(vector<Models::RecognizePublicFaceResponseBodyDataElementsResultsSubResults> && subResults) { DARABONBA_PTR_SET_RVALUE(subResults_, subResults) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline RecognizePublicFaceResponseBodyDataElementsResults& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<float> rate_ = nullptr;
    std::shared_ptr<vector<Models::RecognizePublicFaceResponseBodyDataElementsResultsSubResults>> subResults_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
