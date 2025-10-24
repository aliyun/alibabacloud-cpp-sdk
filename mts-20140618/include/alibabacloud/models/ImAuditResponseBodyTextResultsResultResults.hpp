// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTSRESULTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYTEXTRESULTSRESULTRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImAuditResponseBodyTextResultsResultResultsDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyTextResultsResultResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyTextResultsResultResults& obj) { 
      DARABONBA_PTR_TO_JSON(details, details_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(rate, rate_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyTextResultsResultResults& obj) { 
      DARABONBA_PTR_FROM_JSON(details, details_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(rate, rate_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(suggestion, suggestion_);
    };
    ImAuditResponseBodyTextResultsResultResults() = default ;
    ImAuditResponseBodyTextResultsResultResults(const ImAuditResponseBodyTextResultsResultResults &) = default ;
    ImAuditResponseBodyTextResultsResultResults(ImAuditResponseBodyTextResultsResultResults &&) = default ;
    ImAuditResponseBodyTextResultsResultResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyTextResultsResultResults() = default ;
    ImAuditResponseBodyTextResultsResultResults& operator=(const ImAuditResponseBodyTextResultsResultResults &) = default ;
    ImAuditResponseBodyTextResultsResultResults& operator=(ImAuditResponseBodyTextResultsResultResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && return this->label_ == nullptr && return this->rate_ == nullptr && return this->scene_ == nullptr && return this->suggestion_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::ImAuditResponseBodyTextResultsResultResultsDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::ImAuditResponseBodyTextResultsResultResultsDetails>) };
    inline vector<Models::ImAuditResponseBodyTextResultsResultResultsDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::ImAuditResponseBodyTextResultsResultResultsDetails>) };
    inline ImAuditResponseBodyTextResultsResultResults& setDetails(const vector<Models::ImAuditResponseBodyTextResultsResultResultsDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline ImAuditResponseBodyTextResultsResultResults& setDetails(vector<Models::ImAuditResponseBodyTextResultsResultResultsDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ImAuditResponseBodyTextResultsResultResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ImAuditResponseBodyTextResultsResultResults& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ImAuditResponseBodyTextResultsResultResults& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline ImAuditResponseBodyTextResultsResultResults& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The risky content that the moderated text hits. A text entry can hit multiple pieces of risky content.
    std::shared_ptr<vector<Models::ImAuditResponseBodyTextResultsResultResultsDetails>> details_ = nullptr;
    // The category of the moderation result for the moderated text. Valid values:
    // 
    // *   normal: normal content
    // *   spam: spam
    // *   ad: ad
    // *   politics: political content
    // *   terrorism: terrorist content
    // *   abuse: abuse
    // *   porn: pornographic content
    // *   flood: excessive junk content
    // *   contraband: prohibited content
    // *   meaningless: meaningless content
    // *   customized: custom content, such as a custom keyword
    std::shared_ptr<string> label_ = nullptr;
    // The score of the confidence level. Valid values: 0 to 100. A greater value indicates a higher confidence level. If a value of pass is returned for the suggestion parameter, a higher confidence level indicates a higher probability that the content is normal. If a value of review or block is returned for the suggestion parameter, a higher confidence level indicates a higher probability that the content contains violations.
    // 
    // >  This score is for reference only. We strongly recommend that you do not use this score in your business. We recommend that you use the values that are returned for the suggestion, label, and sublabel parameters to determine whether the content contains violations. The sublabel parameter is returned by some operations.
    std::shared_ptr<double> rate_ = nullptr;
    // The moderation scenario.
    std::shared_ptr<string> scene_ = nullptr;
    // The recommended subsequent operation. Valid values:
    // 
    // *   pass: The content passes the moderation.
    // *   review: The content needs to be manually reviewed again.
    // *   block: The content contains violations. We recommend that you delete or block the content.
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
