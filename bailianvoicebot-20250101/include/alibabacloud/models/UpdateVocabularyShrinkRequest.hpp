// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVOCABULARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVOCABULARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class UpdateVocabularyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVocabularyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
      DARABONBA_PTR_TO_JSON(Words, wordsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVocabularyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
      DARABONBA_PTR_FROM_JSON(Words, wordsShrink_);
    };
    UpdateVocabularyShrinkRequest() = default ;
    UpdateVocabularyShrinkRequest(const UpdateVocabularyShrinkRequest &) = default ;
    UpdateVocabularyShrinkRequest(UpdateVocabularyShrinkRequest &&) = default ;
    UpdateVocabularyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVocabularyShrinkRequest() = default ;
    UpdateVocabularyShrinkRequest& operator=(const UpdateVocabularyShrinkRequest &) = default ;
    UpdateVocabularyShrinkRequest& operator=(UpdateVocabularyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->vocabularyId_ == nullptr && this->wordsShrink_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline UpdateVocabularyShrinkRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVocabularyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateVocabularyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline UpdateVocabularyShrinkRequest& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // wordsShrink Field Functions 
    bool hasWordsShrink() const { return this->wordsShrink_ != nullptr;};
    void deleteWordsShrink() { this->wordsShrink_ = nullptr;};
    inline string getWordsShrink() const { DARABONBA_PTR_GET_DEFAULT(wordsShrink_, "") };
    inline UpdateVocabularyShrinkRequest& setWordsShrink(string wordsShrink) { DARABONBA_PTR_SET_VALUE(wordsShrink_, wordsShrink) };


  protected:
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> vocabularyId_ {};
    shared_ptr<string> wordsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
