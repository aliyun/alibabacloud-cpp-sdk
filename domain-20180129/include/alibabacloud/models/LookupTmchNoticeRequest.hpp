// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClaimKey, claimKey_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClaimKey, claimKey_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    LookupTmchNoticeRequest() = default ;
    LookupTmchNoticeRequest(const LookupTmchNoticeRequest &) = default ;
    LookupTmchNoticeRequest(LookupTmchNoticeRequest &&) = default ;
    LookupTmchNoticeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeRequest() = default ;
    LookupTmchNoticeRequest& operator=(const LookupTmchNoticeRequest &) = default ;
    LookupTmchNoticeRequest& operator=(LookupTmchNoticeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->claimKey_ == nullptr
        && return this->lang_ == nullptr && return this->userClientIp_ == nullptr; };
    // claimKey Field Functions 
    bool hasClaimKey() const { return this->claimKey_ != nullptr;};
    void deleteClaimKey() { this->claimKey_ = nullptr;};
    inline string claimKey() const { DARABONBA_PTR_GET_DEFAULT(claimKey_, "") };
    inline LookupTmchNoticeRequest& setClaimKey(string claimKey) { DARABONBA_PTR_SET_VALUE(claimKey_, claimKey) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline LookupTmchNoticeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline LookupTmchNoticeRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> claimKey_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
