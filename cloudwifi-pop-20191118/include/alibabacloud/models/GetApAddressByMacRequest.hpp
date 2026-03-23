// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPADDRESSBYMACREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPADDRESSBYMACREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetApAddressByMacRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApAddressByMacRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
    };
    friend void from_json(const Darabonba::Json& j, GetApAddressByMacRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
    };
    GetApAddressByMacRequest() = default ;
    GetApAddressByMacRequest(const GetApAddressByMacRequest &) = default ;
    GetApAddressByMacRequest(GetApAddressByMacRequest &&) = default ;
    GetApAddressByMacRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApAddressByMacRequest() = default ;
    GetApAddressByMacRequest& operator=(const GetApAddressByMacRequest &) = default ;
    GetApAddressByMacRequest& operator=(GetApAddressByMacRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->language_ == nullptr && this->mac_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetApAddressByMacRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetApAddressByMacRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetApAddressByMacRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline GetApAddressByMacRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


  protected:
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<string> mac_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
