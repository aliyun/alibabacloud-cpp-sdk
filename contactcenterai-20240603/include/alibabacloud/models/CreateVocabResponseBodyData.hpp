// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOCABRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOCABRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateVocabResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVocabResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(vocabularyId, vocabularyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVocabResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(vocabularyId, vocabularyId_);
    };
    CreateVocabResponseBodyData() = default ;
    CreateVocabResponseBodyData(const CreateVocabResponseBodyData &) = default ;
    CreateVocabResponseBodyData(CreateVocabResponseBodyData &&) = default ;
    CreateVocabResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVocabResponseBodyData() = default ;
    CreateVocabResponseBodyData& operator=(const CreateVocabResponseBodyData &) = default ;
    CreateVocabResponseBodyData& operator=(CreateVocabResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vocabularyId_ != nullptr; };
    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline CreateVocabResponseBodyData& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


  protected:
    std::shared_ptr<string> vocabularyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
