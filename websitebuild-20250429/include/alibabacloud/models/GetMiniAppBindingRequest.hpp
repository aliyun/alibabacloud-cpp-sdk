// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINIAPPBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMINIAPPBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetMiniAppBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiniAppBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(SettingKeys, settingKeys_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiniAppBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(SettingKeys, settingKeys_);
    };
    GetMiniAppBindingRequest() = default ;
    GetMiniAppBindingRequest(const GetMiniAppBindingRequest &) = default ;
    GetMiniAppBindingRequest(GetMiniAppBindingRequest &&) = default ;
    GetMiniAppBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiniAppBindingRequest() = default ;
    GetMiniAppBindingRequest& operator=(const GetMiniAppBindingRequest &) = default ;
    GetMiniAppBindingRequest& operator=(GetMiniAppBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->channel_ == nullptr && this->settingKeys_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetMiniAppBindingRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetMiniAppBindingRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // settingKeys Field Functions 
    bool hasSettingKeys() const { return this->settingKeys_ != nullptr;};
    void deleteSettingKeys() { this->settingKeys_ = nullptr;};
    inline const vector<string> & getSettingKeys() const { DARABONBA_PTR_GET_CONST(settingKeys_, vector<string>) };
    inline vector<string> getSettingKeys() { DARABONBA_PTR_GET(settingKeys_, vector<string>) };
    inline GetMiniAppBindingRequest& setSettingKeys(const vector<string> & settingKeys) { DARABONBA_PTR_SET_VALUE(settingKeys_, settingKeys) };
    inline GetMiniAppBindingRequest& setSettingKeys(vector<string> && settingKeys) { DARABONBA_PTR_SET_RVALUE(settingKeys_, settingKeys) };


  protected:
    // The site ID.
    shared_ptr<string> bizId_ {};
    // The channel.
    shared_ptr<string> channel_ {};
    // The list of extension information keys.
    shared_ptr<vector<string>> settingKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
