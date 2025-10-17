// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESTEXTSLOTS_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESTEXTSLOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatResponseBodyMessagesTextSlots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBodyMessagesTextSlots& obj) { 
      DARABONBA_PTR_TO_JSON(Hit, hit_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBodyMessagesTextSlots& obj) { 
      DARABONBA_PTR_FROM_JSON(Hit, hit_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ChatResponseBodyMessagesTextSlots() = default ;
    ChatResponseBodyMessagesTextSlots(const ChatResponseBodyMessagesTextSlots &) = default ;
    ChatResponseBodyMessagesTextSlots(ChatResponseBodyMessagesTextSlots &&) = default ;
    ChatResponseBodyMessagesTextSlots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBodyMessagesTextSlots() = default ;
    ChatResponseBodyMessagesTextSlots& operator=(const ChatResponseBodyMessagesTextSlots &) = default ;
    ChatResponseBodyMessagesTextSlots& operator=(ChatResponseBodyMessagesTextSlots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hit_ == nullptr
        && return this->name_ == nullptr && return this->origin_ == nullptr && return this->value_ == nullptr; };
    // hit Field Functions 
    bool hasHit() const { return this->hit_ != nullptr;};
    void deleteHit() { this->hit_ = nullptr;};
    inline bool hit() const { DARABONBA_PTR_GET_DEFAULT(hit_, false) };
    inline ChatResponseBodyMessagesTextSlots& setHit(bool hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ChatResponseBodyMessagesTextSlots& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ChatResponseBodyMessagesTextSlots& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ChatResponseBodyMessagesTextSlots& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<bool> hit_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
