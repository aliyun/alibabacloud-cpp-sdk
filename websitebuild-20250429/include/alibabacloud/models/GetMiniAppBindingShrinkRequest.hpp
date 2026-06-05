// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINIAPPBINDINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMINIAPPBINDINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetMiniAppBindingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiniAppBindingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(SettingKeys, settingKeysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiniAppBindingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(SettingKeys, settingKeysShrink_);
    };
    GetMiniAppBindingShrinkRequest() = default ;
    GetMiniAppBindingShrinkRequest(const GetMiniAppBindingShrinkRequest &) = default ;
    GetMiniAppBindingShrinkRequest(GetMiniAppBindingShrinkRequest &&) = default ;
    GetMiniAppBindingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiniAppBindingShrinkRequest() = default ;
    GetMiniAppBindingShrinkRequest& operator=(const GetMiniAppBindingShrinkRequest &) = default ;
    GetMiniAppBindingShrinkRequest& operator=(GetMiniAppBindingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->channel_ == nullptr && this->settingKeysShrink_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetMiniAppBindingShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetMiniAppBindingShrinkRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // settingKeysShrink Field Functions 
    bool hasSettingKeysShrink() const { return this->settingKeysShrink_ != nullptr;};
    void deleteSettingKeysShrink() { this->settingKeysShrink_ = nullptr;};
    inline string getSettingKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(settingKeysShrink_, "") };
    inline GetMiniAppBindingShrinkRequest& setSettingKeysShrink(string settingKeysShrink) { DARABONBA_PTR_SET_VALUE(settingKeysShrink_, settingKeysShrink) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> channel_ {};
    shared_ptr<string> settingKeysShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
