// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDNOTEPHRASESREQUESTPHRASEWORDWEIGHTS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDNOTEPHRASESREQUESTPHRASEWORDWEIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyCloudNotePhrasesRequestPhraseWordWeights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudNotePhrasesRequestPhraseWordWeights& obj) { 
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudNotePhrasesRequestPhraseWordWeights& obj) { 
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    ModifyCloudNotePhrasesRequestPhraseWordWeights() = default ;
    ModifyCloudNotePhrasesRequestPhraseWordWeights(const ModifyCloudNotePhrasesRequestPhraseWordWeights &) = default ;
    ModifyCloudNotePhrasesRequestPhraseWordWeights(ModifyCloudNotePhrasesRequestPhraseWordWeights &&) = default ;
    ModifyCloudNotePhrasesRequestPhraseWordWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudNotePhrasesRequestPhraseWordWeights() = default ;
    ModifyCloudNotePhrasesRequestPhraseWordWeights& operator=(const ModifyCloudNotePhrasesRequestPhraseWordWeights &) = default ;
    ModifyCloudNotePhrasesRequestPhraseWordWeights& operator=(ModifyCloudNotePhrasesRequestPhraseWordWeights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->weight_ == nullptr
        && return this->word_ == nullptr; };
    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ModifyCloudNotePhrasesRequestPhraseWordWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline ModifyCloudNotePhrasesRequestPhraseWordWeights& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> weight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
