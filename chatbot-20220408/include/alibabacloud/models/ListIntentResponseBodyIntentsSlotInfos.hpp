// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTRESPONSEBODYINTENTSSLOTINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTRESPONSEBODYINTENTSSLOTINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListIntentResponseBodyIntentsSlotInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentResponseBodyIntentsSlotInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Array, array_);
      DARABONBA_PTR_TO_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_TO_JSON(Interactive, interactive_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SlotId, slotId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentResponseBodyIntentsSlotInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Array, array_);
      DARABONBA_PTR_FROM_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_FROM_JSON(Interactive, interactive_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SlotId, slotId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListIntentResponseBodyIntentsSlotInfos() = default ;
    ListIntentResponseBodyIntentsSlotInfos(const ListIntentResponseBodyIntentsSlotInfos &) = default ;
    ListIntentResponseBodyIntentsSlotInfos(ListIntentResponseBodyIntentsSlotInfos &&) = default ;
    ListIntentResponseBodyIntentsSlotInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentResponseBodyIntentsSlotInfos() = default ;
    ListIntentResponseBodyIntentsSlotInfos& operator=(const ListIntentResponseBodyIntentsSlotInfos &) = default ;
    ListIntentResponseBodyIntentsSlotInfos& operator=(ListIntentResponseBodyIntentsSlotInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->array_ == nullptr
        && return this->encrypt_ == nullptr && return this->interactive_ == nullptr && return this->name_ == nullptr && return this->slotId_ == nullptr && return this->value_ == nullptr; };
    // array Field Functions 
    bool hasArray() const { return this->array_ != nullptr;};
    void deleteArray() { this->array_ = nullptr;};
    inline bool array() const { DARABONBA_PTR_GET_DEFAULT(array_, false) };
    inline ListIntentResponseBodyIntentsSlotInfos& setArray(bool array) { DARABONBA_PTR_SET_VALUE(array_, array) };


    // encrypt Field Functions 
    bool hasEncrypt() const { return this->encrypt_ != nullptr;};
    void deleteEncrypt() { this->encrypt_ = nullptr;};
    inline bool encrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, false) };
    inline ListIntentResponseBodyIntentsSlotInfos& setEncrypt(bool encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


    // interactive Field Functions 
    bool hasInteractive() const { return this->interactive_ != nullptr;};
    void deleteInteractive() { this->interactive_ = nullptr;};
    inline bool interactive() const { DARABONBA_PTR_GET_DEFAULT(interactive_, false) };
    inline ListIntentResponseBodyIntentsSlotInfos& setInteractive(bool interactive) { DARABONBA_PTR_SET_VALUE(interactive_, interactive) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntentResponseBodyIntentsSlotInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // slotId Field Functions 
    bool hasSlotId() const { return this->slotId_ != nullptr;};
    void deleteSlotId() { this->slotId_ = nullptr;};
    inline string slotId() const { DARABONBA_PTR_GET_DEFAULT(slotId_, "") };
    inline ListIntentResponseBodyIntentsSlotInfos& setSlotId(string slotId) { DARABONBA_PTR_SET_VALUE(slotId_, slotId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListIntentResponseBodyIntentsSlotInfos& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<bool> array_ = nullptr;
    std::shared_ptr<bool> encrypt_ = nullptr;
    std::shared_ptr<bool> interactive_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> slotId_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
