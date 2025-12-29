// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSCENEITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSCENEITEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelSceneItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelSceneItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelSceneItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ListHotelSceneItemShrinkRequest() = default ;
    ListHotelSceneItemShrinkRequest(const ListHotelSceneItemShrinkRequest &) = default ;
    ListHotelSceneItemShrinkRequest(ListHotelSceneItemShrinkRequest &&) = default ;
    ListHotelSceneItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelSceneItemShrinkRequest() = default ;
    ListHotelSceneItemShrinkRequest& operator=(const ListHotelSceneItemShrinkRequest &) = default ;
    ListHotelSceneItemShrinkRequest& operator=(ListHotelSceneItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->payloadShrink_ == nullptr
        && this->userInfoShrink_ == nullptr; };
    // payloadShrink Field Functions 
    bool hasPayloadShrink() const { return this->payloadShrink_ != nullptr;};
    void deletePayloadShrink() { this->payloadShrink_ = nullptr;};
    inline string getPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(payloadShrink_, "") };
    inline ListHotelSceneItemShrinkRequest& setPayloadShrink(string payloadShrink) { DARABONBA_PTR_SET_VALUE(payloadShrink_, payloadShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ListHotelSceneItemShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> payloadShrink_ {};
    // This parameter is required.
    shared_ptr<string> userInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
