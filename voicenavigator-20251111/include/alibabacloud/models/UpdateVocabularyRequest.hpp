// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVOCABULARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVOCABULARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class UpdateVocabularyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVocabularyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
      DARABONBA_PTR_TO_JSON(Words, words_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVocabularyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
      DARABONBA_PTR_FROM_JSON(Words, words_);
    };
    UpdateVocabularyRequest() = default ;
    UpdateVocabularyRequest(const UpdateVocabularyRequest &) = default ;
    UpdateVocabularyRequest(UpdateVocabularyRequest &&) = default ;
    UpdateVocabularyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVocabularyRequest() = default ;
    UpdateVocabularyRequest& operator=(const UpdateVocabularyRequest &) = default ;
    UpdateVocabularyRequest& operator=(UpdateVocabularyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->vocabularyId_ == nullptr && this->words_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVocabularyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateVocabularyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateVocabularyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline UpdateVocabularyRequest& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline const map<string, string> & getWords() const { DARABONBA_PTR_GET_CONST(words_, map<string, string>) };
    inline map<string, string> getWords() { DARABONBA_PTR_GET(words_, map<string, string>) };
    inline UpdateVocabularyRequest& setWords(const map<string, string> & words) { DARABONBA_PTR_SET_VALUE(words_, words) };
    inline UpdateVocabularyRequest& setWords(map<string, string> && words) { DARABONBA_PTR_SET_RVALUE(words_, words) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> vocabularyId_ {};
    shared_ptr<map<string, string>> words_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
