// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCRIPTIONPHRASESRESPONSEBODYDATAPHRASES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCRIPTIONPHRASESRESPONSEBODYDATAPHRASES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class ListTranscriptionPhrasesResponseBodyDataPhrases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscriptionPhrasesResponseBodyDataPhrases& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PhraseId, phraseId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscriptionPhrasesResponseBodyDataPhrases& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PhraseId, phraseId_);
    };
    ListTranscriptionPhrasesResponseBodyDataPhrases() = default ;
    ListTranscriptionPhrasesResponseBodyDataPhrases(const ListTranscriptionPhrasesResponseBodyDataPhrases &) = default ;
    ListTranscriptionPhrasesResponseBodyDataPhrases(ListTranscriptionPhrasesResponseBodyDataPhrases &&) = default ;
    ListTranscriptionPhrasesResponseBodyDataPhrases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscriptionPhrasesResponseBodyDataPhrases() = default ;
    ListTranscriptionPhrasesResponseBodyDataPhrases& operator=(const ListTranscriptionPhrasesResponseBodyDataPhrases &) = default ;
    ListTranscriptionPhrasesResponseBodyDataPhrases& operator=(ListTranscriptionPhrasesResponseBodyDataPhrases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->phraseId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTranscriptionPhrasesResponseBodyDataPhrases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTranscriptionPhrasesResponseBodyDataPhrases& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phraseId Field Functions 
    bool hasPhraseId() const { return this->phraseId_ != nullptr;};
    void deletePhraseId() { this->phraseId_ = nullptr;};
    inline string phraseId() const { DARABONBA_PTR_GET_DEFAULT(phraseId_, "") };
    inline ListTranscriptionPhrasesResponseBodyDataPhrases& setPhraseId(string phraseId) { DARABONBA_PTR_SET_VALUE(phraseId_, phraseId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phraseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
