// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINIAPPBINDINGFORADMINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMINIAPPBINDINGFORADMINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetMiniAppBindingForAdminRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiniAppBindingForAdminRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(PlatformAppid, platformAppid_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiniAppBindingForAdminRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(PlatformAppid, platformAppid_);
    };
    GetMiniAppBindingForAdminRequest() = default ;
    GetMiniAppBindingForAdminRequest(const GetMiniAppBindingForAdminRequest &) = default ;
    GetMiniAppBindingForAdminRequest(GetMiniAppBindingForAdminRequest &&) = default ;
    GetMiniAppBindingForAdminRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiniAppBindingForAdminRequest() = default ;
    GetMiniAppBindingForAdminRequest& operator=(const GetMiniAppBindingForAdminRequest &) = default ;
    GetMiniAppBindingForAdminRequest& operator=(GetMiniAppBindingForAdminRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->channel_ == nullptr && this->platformAppid_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetMiniAppBindingForAdminRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetMiniAppBindingForAdminRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // platformAppid Field Functions 
    bool hasPlatformAppid() const { return this->platformAppid_ != nullptr;};
    void deletePlatformAppid() { this->platformAppid_ = nullptr;};
    inline string getPlatformAppid() const { DARABONBA_PTR_GET_DEFAULT(platformAppid_, "") };
    inline GetMiniAppBindingForAdminRequest& setPlatformAppid(string platformAppid) { DARABONBA_PTR_SET_VALUE(platformAppid_, platformAppid) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    // Channel
    shared_ptr<string> channel_ {};
    // Miniapp ID
    shared_ptr<string> platformAppid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
