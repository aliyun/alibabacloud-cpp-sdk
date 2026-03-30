// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOCABULARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOCABULARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class CreateVocabularyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVocabularyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Words, wordsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVocabularyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Words, wordsShrink_);
    };
    CreateVocabularyShrinkRequest() = default ;
    CreateVocabularyShrinkRequest(const CreateVocabularyShrinkRequest &) = default ;
    CreateVocabularyShrinkRequest(CreateVocabularyShrinkRequest &&) = default ;
    CreateVocabularyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVocabularyShrinkRequest() = default ;
    CreateVocabularyShrinkRequest& operator=(const CreateVocabularyShrinkRequest &) = default ;
    CreateVocabularyShrinkRequest& operator=(CreateVocabularyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->wordsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVocabularyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateVocabularyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVocabularyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // wordsShrink Field Functions 
    bool hasWordsShrink() const { return this->wordsShrink_ != nullptr;};
    void deleteWordsShrink() { this->wordsShrink_ = nullptr;};
    inline string getWordsShrink() const { DARABONBA_PTR_GET_DEFAULT(wordsShrink_, "") };
    inline CreateVocabularyShrinkRequest& setWordsShrink(string wordsShrink) { DARABONBA_PTR_SET_VALUE(wordsShrink_, wordsShrink) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> wordsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
