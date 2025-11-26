// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTSLOTFEEDBACKFUNCTIONSSWITCH_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTSLOTFEEDBACKFUNCTIONSSWITCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch() = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch(const ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch &) = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch(ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch &&) = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch() = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& operator=(const ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch &) = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& operator=(ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->label_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
