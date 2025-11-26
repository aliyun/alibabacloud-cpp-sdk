// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTSLOTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTSLOTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBodyDataIntentListSlotTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBodyDataIntentListSlotTags& obj) { 
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBodyDataIntentListSlotTags& obj) { 
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListIntentionsResponseBodyDataIntentListSlotTags() = default ;
    ListIntentionsResponseBodyDataIntentListSlotTags(const ListIntentionsResponseBodyDataIntentListSlotTags &) = default ;
    ListIntentionsResponseBodyDataIntentListSlotTags(ListIntentionsResponseBodyDataIntentListSlotTags &&) = default ;
    ListIntentionsResponseBodyDataIntentListSlotTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBodyDataIntentListSlotTags() = default ;
    ListIntentionsResponseBodyDataIntentListSlotTags& operator=(const ListIntentionsResponseBodyDataIntentListSlotTags &) = default ;
    ListIntentionsResponseBodyDataIntentListSlotTags& operator=(ListIntentionsResponseBodyDataIntentListSlotTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userSayId_ == nullptr
        && return this->value_ == nullptr; };
    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline string userSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotTags& setUserSayId(string userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> userSayId_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
