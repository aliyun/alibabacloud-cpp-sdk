// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAppKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAppKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKeyId, appKeyId_);
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAppKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKeyId, appKeyId_);
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribePdnsAppKeyRequest() = default ;
    DescribePdnsAppKeyRequest(const DescribePdnsAppKeyRequest &) = default ;
    DescribePdnsAppKeyRequest(DescribePdnsAppKeyRequest &&) = default ;
    DescribePdnsAppKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAppKeyRequest() = default ;
    DescribePdnsAppKeyRequest& operator=(const DescribePdnsAppKeyRequest &) = default ;
    DescribePdnsAppKeyRequest& operator=(DescribePdnsAppKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKeyId_ != nullptr
        && this->authCode_ != nullptr && this->lang_ != nullptr; };
    // appKeyId Field Functions 
    bool hasAppKeyId() const { return this->appKeyId_ != nullptr;};
    void deleteAppKeyId() { this->appKeyId_ = nullptr;};
    inline string appKeyId() const { DARABONBA_PTR_GET_DEFAULT(appKeyId_, "") };
    inline DescribePdnsAppKeyRequest& setAppKeyId(string appKeyId) { DARABONBA_PTR_SET_VALUE(appKeyId_, appKeyId) };


    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string authCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline DescribePdnsAppKeyRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePdnsAppKeyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    std::shared_ptr<string> appKeyId_ = nullptr;
    std::shared_ptr<string> authCode_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
