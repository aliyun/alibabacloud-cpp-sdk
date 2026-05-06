// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTVOCABULARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTVOCABULARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class ExportVocabularyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportVocabularyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(VocabularyIds, vocabularyIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ExportVocabularyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
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
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->vocabularyIdsShrink_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline ExportVocabularyShrinkRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // vocabularyIdsShrink Field Functions 
    bool hasVocabularyIdsShrink() const { return this->vocabularyIdsShrink_ != nullptr;};
    void deleteVocabularyIdsShrink() { this->vocabularyIdsShrink_ = nullptr;};
    inline string getVocabularyIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vocabularyIdsShrink_, "") };
    inline ExportVocabularyShrinkRequest& setVocabularyIdsShrink(string vocabularyIdsShrink) { DARABONBA_PTR_SET_VALUE(vocabularyIdsShrink_, vocabularyIdsShrink) };


  protected:
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> vocabularyIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
