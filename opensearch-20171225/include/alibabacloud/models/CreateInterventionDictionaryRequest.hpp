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
        && this->name_ == nullptr && this->type_ == nullptr && this->dryRun_ == nullptr; };
    // analyzerType Field Functions 
    bool hasAnalyzerType() const { return this->analyzerType_ != nullptr;};
    void deleteAnalyzerType() { this->analyzerType_ = nullptr;};
    inline string getAnalyzerType() const { DARABONBA_PTR_GET_DEFAULT(analyzerType_, "") };
    inline CreateInterventionDictionaryRequest& setAnalyzerType(string analyzerType) { DARABONBA_PTR_SET_VALUE(analyzerType_, analyzerType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateInterventionDictionaryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateInterventionDictionaryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateInterventionDictionaryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The type of the analyzer. Valid values:
    // 
    // - MODEL: a model-based custom analyzer.
    // 
    // - SYSTEM: a system analyzer.
    // 
    // - USER: a custom analyzer.
    shared_ptr<string> analyzerType_ {};
    // The name of the intervention dictionary.
    shared_ptr<string> name_ {};
    // The type of the intervention dictionary. Valid values:
    // 
    // - stopword: an intervention dictionary for stop word filtering.
    // 
    // - synonym: an intervention dictionary for synonym configuration.
    // 
    // - correction: an intervention dictionary for spelling correction.
    // 
    // - category_prediction: an intervention dictionary for category prediction.
    // 
    // - ner: an intervention dictionary for Named Entity Recognition (NER).
    // 
    // - term_weighting: an intervention dictionary for term weight analysis.
    // 
    // - suggest_allowlist: a drop-down suggestion whitelist.
    // 
    // - suggest_denylist: a drop-down suggestion blacklist.
    // 
    // - hot_allowlist: a top search whitelist.
    // 
    // - hot_denylist: a top search blacklist.
    // 
    // - hint_allowlist: a hint whitelist.
    // 
    // - hint_denylist: a hint blacklist.
    shared_ptr<string> type_ {};
    // Specifies whether to perform a dry run. The default value is false.
    // 
    // Valid values:
    // 
    // - **true**: Validates the request parameters but does not create the intervention dictionary.
    // 
    // - **false**: Validates the request parameters and creates the intervention dictionary.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
