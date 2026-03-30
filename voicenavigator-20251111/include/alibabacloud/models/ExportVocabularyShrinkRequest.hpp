// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTVOCABULARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTVOCABULARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ExportVocabularyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportVocabularyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VocabularyIds, vocabularyIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ExportVocabularyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VocabularyIds, vocabularyIdsShrink_);
    };
    ExportVocabularyShrinkRequest() = default ;
    ExportVocabularyShrinkRequest(const ExportVocabularyShrinkRequest &) = default ;
    ExportVocabularyShrinkRequest(ExportVocabularyShrinkRequest &&) = default ;
    ExportVocabularyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportVocabularyShrinkRequest() = default ;
    ExportVocabularyShrinkRequest& operator=(const ExportVocabularyShrinkRequest &) = default ;
    ExportVocabularyShrinkRequest& operator=(ExportVocabularyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->vocabularyIdsShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExportVocabularyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vocabularyIdsShrink Field Functions 
    bool hasVocabularyIdsShrink() const { return this->vocabularyIdsShrink_ != nullptr;};
    void deleteVocabularyIdsShrink() { this->vocabularyIdsShrink_ = nullptr;};
    inline string getVocabularyIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vocabularyIdsShrink_, "") };
    inline ExportVocabularyShrinkRequest& setVocabularyIdsShrink(string vocabularyIdsShrink) { DARABONBA_PTR_SET_VALUE(vocabularyIdsShrink_, vocabularyIdsShrink) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> vocabularyIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
