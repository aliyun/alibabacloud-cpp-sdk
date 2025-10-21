// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORDGROUPREQUESTBODYDATAWORDINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORDGROUPREQUESTBODYDATAWORDINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreateWordGroupRequestBodyDataWordInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWordGroupRequestBodyDataWordInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWordGroupRequestBodyDataWordInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    CreateWordGroupRequestBodyDataWordInfoList() = default ;
    CreateWordGroupRequestBodyDataWordInfoList(const CreateWordGroupRequestBodyDataWordInfoList &) = default ;
    CreateWordGroupRequestBodyDataWordInfoList(CreateWordGroupRequestBodyDataWordInfoList &&) = default ;
    CreateWordGroupRequestBodyDataWordInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWordGroupRequestBodyDataWordInfoList() = default ;
    CreateWordGroupRequestBodyDataWordInfoList& operator=(const CreateWordGroupRequestBodyDataWordInfoList &) = default ;
    CreateWordGroupRequestBodyDataWordInfoList& operator=(CreateWordGroupRequestBodyDataWordInfoList &&) = default ;
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
    inline CreateWordGroupRequestBodyDataWordInfoList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline CreateWordGroupRequestBodyDataWordInfoList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // Label
    std::shared_ptr<string> label_ = nullptr;
    // Keyword
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
