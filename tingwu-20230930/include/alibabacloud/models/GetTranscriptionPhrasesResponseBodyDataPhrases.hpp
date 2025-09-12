// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCRIPTIONPHRASESRESPONSEBODYDATAPHRASES_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCRIPTIONPHRASESRESPONSEBODYDATAPHRASES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class GetTranscriptionPhrasesResponseBodyDataPhrases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscriptionPhrasesResponseBodyDataPhrases& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PhraseId, phraseId_);
      DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscriptionPhrasesResponseBodyDataPhrases& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PhraseId, phraseId_);
      DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
    };
    GetTranscriptionPhrasesResponseBodyDataPhrases() = default ;
    GetTranscriptionPhrasesResponseBodyDataPhrases(const GetTranscriptionPhrasesResponseBodyDataPhrases &) = default ;
    GetTranscriptionPhrasesResponseBodyDataPhrases(GetTranscriptionPhrasesResponseBodyDataPhrases &&) = default ;
    GetTranscriptionPhrasesResponseBodyDataPhrases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscriptionPhrasesResponseBodyDataPhrases() = default ;
    GetTranscriptionPhrasesResponseBodyDataPhrases& operator=(const GetTranscriptionPhrasesResponseBodyDataPhrases &) = default ;
    GetTranscriptionPhrasesResponseBodyDataPhrases& operator=(GetTranscriptionPhrasesResponseBodyDataPhrases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->phraseId_ != nullptr && this->wordWeights_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTranscriptionPhrasesResponseBodyDataPhrases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTranscriptionPhrasesResponseBodyDataPhrases& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phraseId Field Functions 
    bool hasPhraseId() const { return this->phraseId_ != nullptr;};
    void deletePhraseId() { this->phraseId_ = nullptr;};
    inline string phraseId() const { DARABONBA_PTR_GET_DEFAULT(phraseId_, "") };
    inline GetTranscriptionPhrasesResponseBodyDataPhrases& setPhraseId(string phraseId) { DARABONBA_PTR_SET_VALUE(phraseId_, phraseId) };


    // wordWeights Field Functions 
    bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
    void deleteWordWeights() { this->wordWeights_ = nullptr;};
    inline string wordWeights() const { DARABONBA_PTR_GET_DEFAULT(wordWeights_, "") };
    inline GetTranscriptionPhrasesResponseBodyDataPhrases& setWordWeights(string wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phraseId_ = nullptr;
    std::shared_ptr<string> wordWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
