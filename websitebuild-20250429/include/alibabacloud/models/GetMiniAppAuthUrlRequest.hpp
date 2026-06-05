// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINIAPPAUTHURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMINIAPPAUTHURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetMiniAppAuthUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiniAppAuthUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(RedirectUri, redirectUri_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiniAppAuthUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(RedirectUri, redirectUri_);
    };
    GetMiniAppAuthUrlRequest() = default ;
    GetMiniAppAuthUrlRequest(const GetMiniAppAuthUrlRequest &) = default ;
    GetMiniAppAuthUrlRequest(GetMiniAppAuthUrlRequest &&) = default ;
    GetMiniAppAuthUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiniAppAuthUrlRequest() = default ;
    GetMiniAppAuthUrlRequest& operator=(const GetMiniAppAuthUrlRequest &) = default ;
    GetMiniAppAuthUrlRequest& operator=(GetMiniAppAuthUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->channel_ == nullptr && this->redirectUri_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetMiniAppAuthUrlRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetMiniAppAuthUrlRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline string getRedirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
    inline GetMiniAppAuthUrlRequest& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> channel_ {};
    shared_ptr<string> redirectUri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
