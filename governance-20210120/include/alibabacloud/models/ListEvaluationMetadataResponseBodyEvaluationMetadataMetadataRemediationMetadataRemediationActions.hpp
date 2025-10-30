// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATAREMEDIATIONMETADATAREMEDIATIONACTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATAREMEDIATIONMETADATAREMEDIATIONACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& obj) { 
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(CostDescription, costDescription_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Guidance, guidance_);
      DARABONBA_PTR_TO_JSON(Notice, notice_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& obj) { 
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(CostDescription, costDescription_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Guidance, guidance_);
      DARABONBA_PTR_FROM_JSON(Notice, notice_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions &&) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& operator=(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& operator=(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classification_ == nullptr
        && return this->costDescription_ == nullptr && return this->description_ == nullptr && return this->guidance_ == nullptr && return this->notice_ == nullptr && return this->suggestion_ == nullptr; };
    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // costDescription Field Functions 
    bool hasCostDescription() const { return this->costDescription_ != nullptr;};
    void deleteCostDescription() { this->costDescription_ = nullptr;};
    inline string costDescription() const { DARABONBA_PTR_GET_DEFAULT(costDescription_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& setCostDescription(string costDescription) { DARABONBA_PTR_SET_VALUE(costDescription_, costDescription) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // guidance Field Functions 
    bool hasGuidance() const { return this->guidance_ != nullptr;};
    void deleteGuidance() { this->guidance_ = nullptr;};
    inline const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance> & guidance() const { DARABONBA_PTR_GET_CONST(guidance_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance>) };
    inline vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance> guidance() { DARABONBA_PTR_GET(guidance_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance>) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& setGuidance(const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance> & guidance) { DARABONBA_PTR_SET_VALUE(guidance_, guidance) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& setGuidance(vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance> && guidance) { DARABONBA_PTR_SET_RVALUE(guidance_, guidance) };


    // notice Field Functions 
    bool hasNotice() const { return this->notice_ != nullptr;};
    void deleteNotice() { this->notice_ = nullptr;};
    inline string notice() const { DARABONBA_PTR_GET_DEFAULT(notice_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& setNotice(string notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The fixing method.
    // 
    // >  This parameter is returned only if the value of `RemediationType` is `Analysis`.
    std::shared_ptr<string> classification_ = nullptr;
    // The fixing cost.
    std::shared_ptr<string> costDescription_ = nullptr;
    // The description of the fixing item.
    // 
    // >  This parameter is returned only if the value of `RemediationType` is `Analysis`.
    std::shared_ptr<string> description_ = nullptr;
    // The content of the fixing items.
    std::shared_ptr<vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance>> guidance_ = nullptr;
    // The usage notes of the fixing item.
    std::shared_ptr<string> notice_ = nullptr;
    // The fixing suggestion.
    // 
    // >  This parameter is returned only if the value of `RemediationType` is `Analysis`.
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
