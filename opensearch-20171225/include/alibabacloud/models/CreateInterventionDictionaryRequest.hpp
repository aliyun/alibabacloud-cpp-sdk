// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTERVENTIONDICTIONARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTERVENTIONDICTIONARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateInterventionDictionaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInterventionDictionaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analyzerType, analyzerType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInterventionDictionaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analyzerType, analyzerType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateInterventionDictionaryRequest() = default ;
    CreateInterventionDictionaryRequest(const CreateInterventionDictionaryRequest &) = default ;
    CreateInterventionDictionaryRequest(CreateInterventionDictionaryRequest &&) = default ;
    CreateInterventionDictionaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInterventionDictionaryRequest() = default ;
    CreateInterventionDictionaryRequest& operator=(const CreateInterventionDictionaryRequest &) = default ;
    CreateInterventionDictionaryRequest& operator=(CreateInterventionDictionaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyzerType_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr && return this->dryRun_ == nullptr; };
    // analyzerType Field Functions 
    bool hasAnalyzerType() const { return this->analyzerType_ != nullptr;};
    void deleteAnalyzerType() { this->analyzerType_ = nullptr;};
    inline string analyzerType() const { DARABONBA_PTR_GET_DEFAULT(analyzerType_, "") };
    inline CreateInterventionDictionaryRequest& setAnalyzerType(string analyzerType) { DARABONBA_PTR_SET_VALUE(analyzerType_, analyzerType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateInterventionDictionaryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateInterventionDictionaryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateInterventionDictionaryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The type of the analyzer. Valid values:
    // 
    // *   MODEL: model-based custom analyzer.
    // *   SYSTEM: system analyzer.
    // *   USER: custom analyzer.
    std::shared_ptr<string> analyzerType_ = nullptr;
    // The name of the intervention dictionary.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the intervention dictionary. Valid values:
    // 
    // *   stopword: an intervention dictionary for stop word filtering.
    // *   synonym: an intervention dictionary for synonym configuration.
    // *   correction: an intervention dictionary for spelling correction.
    // *   category_prediction: an intervention dictionary for category prediction.
    // *   ner: an intervention dictionary for named entity recognition (NER).
    // *   term_weighting: an intervention dictionary for term weight analysis.
    // *   suggest_allowlist: a drop-down suggestion whitelist.
    // *   suggest_denylist: a drop-down suggestion blacklist.
    // *   hot_allowlist: a top search whitelist.
    // *   hot_denylist: a top search blacklist.
    // *   hint_allowlist: a hint whitelist.
    // *   hint_denylist: a hint blacklist.
    std::shared_ptr<string> type_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Default value: false.
    // 
    // Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
