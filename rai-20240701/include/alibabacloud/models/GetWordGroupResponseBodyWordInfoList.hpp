// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORDGROUPRESPONSEBODYWORDINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETWORDGROUPRESPONSEBODYWORDINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetWordGroupResponseBodyWordInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWordGroupResponseBodyWordInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Word, word_);
      DARABONBA_PTR_TO_JSON(WordId, wordId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWordGroupResponseBodyWordInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
      DARABONBA_PTR_FROM_JSON(WordId, wordId_);
    };
    GetWordGroupResponseBodyWordInfoList() = default ;
    GetWordGroupResponseBodyWordInfoList(const GetWordGroupResponseBodyWordInfoList &) = default ;
    GetWordGroupResponseBodyWordInfoList(GetWordGroupResponseBodyWordInfoList &&) = default ;
    GetWordGroupResponseBodyWordInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWordGroupResponseBodyWordInfoList() = default ;
    GetWordGroupResponseBodyWordInfoList& operator=(const GetWordGroupResponseBodyWordInfoList &) = default ;
    GetWordGroupResponseBodyWordInfoList& operator=(GetWordGroupResponseBodyWordInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->word_ == nullptr && return this->wordId_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetWordGroupResponseBodyWordInfoList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline GetWordGroupResponseBodyWordInfoList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


    // wordId Field Functions 
    bool hasWordId() const { return this->wordId_ != nullptr;};
    void deleteWordId() { this->wordId_ = nullptr;};
    inline int64_t wordId() const { DARABONBA_PTR_GET_DEFAULT(wordId_, 0L) };
    inline GetWordGroupResponseBodyWordInfoList& setWordId(int64_t wordId) { DARABONBA_PTR_SET_VALUE(wordId_, wordId) };


  protected:
    // Label.
    std::shared_ptr<string> label_ = nullptr;
    // Keyword.
    std::shared_ptr<string> word_ = nullptr;
    // ID of the successfully added word.
    std::shared_ptr<int64_t> wordId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
