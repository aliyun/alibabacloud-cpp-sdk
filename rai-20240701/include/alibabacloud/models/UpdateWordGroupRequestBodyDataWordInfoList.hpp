// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORDGROUPREQUESTBODYDATAWORDINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORDGROUPREQUESTBODYDATAWORDINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateWordGroupRequestBodyDataWordInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWordGroupRequestBodyDataWordInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWordGroupRequestBodyDataWordInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    UpdateWordGroupRequestBodyDataWordInfoList() = default ;
    UpdateWordGroupRequestBodyDataWordInfoList(const UpdateWordGroupRequestBodyDataWordInfoList &) = default ;
    UpdateWordGroupRequestBodyDataWordInfoList(UpdateWordGroupRequestBodyDataWordInfoList &&) = default ;
    UpdateWordGroupRequestBodyDataWordInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWordGroupRequestBodyDataWordInfoList() = default ;
    UpdateWordGroupRequestBodyDataWordInfoList& operator=(const UpdateWordGroupRequestBodyDataWordInfoList &) = default ;
    UpdateWordGroupRequestBodyDataWordInfoList& operator=(UpdateWordGroupRequestBodyDataWordInfoList &&) = default ;
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
    inline UpdateWordGroupRequestBodyDataWordInfoList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline UpdateWordGroupRequestBodyDataWordInfoList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // Label.
    std::shared_ptr<string> label_ = nullptr;
    // Keyword.
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
