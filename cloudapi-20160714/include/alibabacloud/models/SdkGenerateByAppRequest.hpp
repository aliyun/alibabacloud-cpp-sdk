// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDKGENERATEBYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SDKGENERATEBYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SdkGenerateByAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdkGenerateByAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SdkGenerateByAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SdkGenerateByAppRequest() = default ;
    SdkGenerateByAppRequest(const SdkGenerateByAppRequest &) = default ;
    SdkGenerateByAppRequest(SdkGenerateByAppRequest &&) = default ;
    SdkGenerateByAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdkGenerateByAppRequest() = default ;
    SdkGenerateByAppRequest& operator=(const SdkGenerateByAppRequest &) = default ;
    SdkGenerateByAppRequest& operator=(SdkGenerateByAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->language_ == nullptr && this->securityToken_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline SdkGenerateByAppRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SdkGenerateByAppRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SdkGenerateByAppRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    // This parameter is required.
    shared_ptr<string> language_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
