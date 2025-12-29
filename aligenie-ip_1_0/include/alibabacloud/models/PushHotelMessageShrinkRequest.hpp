// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHHOTELMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHHOTELMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class PushHotelMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushHotelMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PushHotelMessageReq, pushHotelMessageReqShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PushHotelMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PushHotelMessageReq, pushHotelMessageReqShrink_);
    };
    PushHotelMessageShrinkRequest() = default ;
    PushHotelMessageShrinkRequest(const PushHotelMessageShrinkRequest &) = default ;
    PushHotelMessageShrinkRequest(PushHotelMessageShrinkRequest &&) = default ;
    PushHotelMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushHotelMessageShrinkRequest() = default ;
    PushHotelMessageShrinkRequest& operator=(const PushHotelMessageShrinkRequest &) = default ;
    PushHotelMessageShrinkRequest& operator=(PushHotelMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushHotelMessageReqShrink_ == nullptr; };
    // pushHotelMessageReqShrink Field Functions 
    bool hasPushHotelMessageReqShrink() const { return this->pushHotelMessageReqShrink_ != nullptr;};
    void deletePushHotelMessageReqShrink() { this->pushHotelMessageReqShrink_ = nullptr;};
    inline string getPushHotelMessageReqShrink() const { DARABONBA_PTR_GET_DEFAULT(pushHotelMessageReqShrink_, "") };
    inline PushHotelMessageShrinkRequest& setPushHotelMessageReqShrink(string pushHotelMessageReqShrink) { DARABONBA_PTR_SET_VALUE(pushHotelMessageReqShrink_, pushHotelMessageReqShrink) };


  protected:
    // pushHotelMessageReq
    // 
    // This parameter is required.
    shared_ptr<string> pushHotelMessageReqShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
