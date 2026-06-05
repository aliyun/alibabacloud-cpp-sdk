// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMINIAPPBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMINIAPPBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateMiniAppBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMiniAppBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(SettingKey, settingKey_);
      DARABONBA_PTR_TO_JSON(SettingValue, settingValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMiniAppBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(SettingKey, settingKey_);
      DARABONBA_PTR_FROM_JSON(SettingValue, settingValue_);
    };
    UpdateMiniAppBindingRequest() = default ;
    UpdateMiniAppBindingRequest(const UpdateMiniAppBindingRequest &) = default ;
    UpdateMiniAppBindingRequest(UpdateMiniAppBindingRequest &&) = default ;
    UpdateMiniAppBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMiniAppBindingRequest() = default ;
    UpdateMiniAppBindingRequest& operator=(const UpdateMiniAppBindingRequest &) = default ;
    UpdateMiniAppBindingRequest& operator=(UpdateMiniAppBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->channel_ == nullptr && this->settingKey_ == nullptr && this->settingValue_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UpdateMiniAppBindingRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline UpdateMiniAppBindingRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // settingKey Field Functions 
    bool hasSettingKey() const { return this->settingKey_ != nullptr;};
    void deleteSettingKey() { this->settingKey_ = nullptr;};
    inline string getSettingKey() const { DARABONBA_PTR_GET_DEFAULT(settingKey_, "") };
    inline UpdateMiniAppBindingRequest& setSettingKey(string settingKey) { DARABONBA_PTR_SET_VALUE(settingKey_, settingKey) };


    // settingValue Field Functions 
    bool hasSettingValue() const { return this->settingValue_ != nullptr;};
    void deleteSettingValue() { this->settingValue_ = nullptr;};
    inline string getSettingValue() const { DARABONBA_PTR_GET_DEFAULT(settingValue_, "") };
    inline UpdateMiniAppBindingRequest& setSettingValue(string settingValue) { DARABONBA_PTR_SET_VALUE(settingValue_, settingValue) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> channel_ {};
    shared_ptr<string> settingKey_ {};
    shared_ptr<string> settingValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
