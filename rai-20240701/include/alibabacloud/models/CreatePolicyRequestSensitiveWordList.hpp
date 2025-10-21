// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTSENSITIVEWORDLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTSENSITIVEWORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreatePolicyRequestSensitiveWordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequestSensitiveWordList& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequestSensitiveWordList& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    CreatePolicyRequestSensitiveWordList() = default ;
    CreatePolicyRequestSensitiveWordList(const CreatePolicyRequestSensitiveWordList &) = default ;
    CreatePolicyRequestSensitiveWordList(CreatePolicyRequestSensitiveWordList &&) = default ;
    CreatePolicyRequestSensitiveWordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequestSensitiveWordList() = default ;
    CreatePolicyRequestSensitiveWordList& operator=(const CreatePolicyRequestSensitiveWordList &) = default ;
    CreatePolicyRequestSensitiveWordList& operator=(CreatePolicyRequestSensitiveWordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->word_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline CreatePolicyRequestSensitiveWordList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline CreatePolicyRequestSensitiveWordList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
