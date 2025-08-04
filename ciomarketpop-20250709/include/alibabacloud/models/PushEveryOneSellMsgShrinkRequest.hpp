// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHEVERYONESELLMSGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHEVERYONESELLMSGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CioMarketPop20250709
{
namespace Models
{
  class PushEveryOneSellMsgShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushEveryOneSellMsgShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DingIdList, dingIdListShrink_);
      DARABONBA_PTR_TO_JSON(PushMsg, pushMsg_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
    };
    friend void from_json(const Darabonba::Json& j, PushEveryOneSellMsgShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DingIdList, dingIdListShrink_);
      DARABONBA_PTR_FROM_JSON(PushMsg, pushMsg_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
    };
    PushEveryOneSellMsgShrinkRequest() = default ;
    PushEveryOneSellMsgShrinkRequest(const PushEveryOneSellMsgShrinkRequest &) = default ;
    PushEveryOneSellMsgShrinkRequest(PushEveryOneSellMsgShrinkRequest &&) = default ;
    PushEveryOneSellMsgShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushEveryOneSellMsgShrinkRequest() = default ;
    PushEveryOneSellMsgShrinkRequest& operator=(const PushEveryOneSellMsgShrinkRequest &) = default ;
    PushEveryOneSellMsgShrinkRequest& operator=(PushEveryOneSellMsgShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dingIdListShrink_ != nullptr
        && this->pushMsg_ != nullptr && this->pushType_ != nullptr; };
    // dingIdListShrink Field Functions 
    bool hasDingIdListShrink() const { return this->dingIdListShrink_ != nullptr;};
    void deleteDingIdListShrink() { this->dingIdListShrink_ = nullptr;};
    inline string dingIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(dingIdListShrink_, "") };
    inline PushEveryOneSellMsgShrinkRequest& setDingIdListShrink(string dingIdListShrink) { DARABONBA_PTR_SET_VALUE(dingIdListShrink_, dingIdListShrink) };


    // pushMsg Field Functions 
    bool hasPushMsg() const { return this->pushMsg_ != nullptr;};
    void deletePushMsg() { this->pushMsg_ = nullptr;};
    inline string pushMsg() const { DARABONBA_PTR_GET_DEFAULT(pushMsg_, "") };
    inline PushEveryOneSellMsgShrinkRequest& setPushMsg(string pushMsg) { DARABONBA_PTR_SET_VALUE(pushMsg_, pushMsg) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string pushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline PushEveryOneSellMsgShrinkRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


  protected:
    std::shared_ptr<string> dingIdListShrink_ = nullptr;
    std::shared_ptr<string> pushMsg_ = nullptr;
    std::shared_ptr<string> pushType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CioMarketPop20250709
#endif
