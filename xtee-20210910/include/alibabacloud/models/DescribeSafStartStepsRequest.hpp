// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFSTARTSTEPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFSTARTSTEPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafStartStepsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafStartStepsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(aliyunServer, aliyunServer_);
      DARABONBA_PTR_TO_JSON(deviceTypesStr, deviceTypesStr_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(serverRegion, serverRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafStartStepsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(aliyunServer, aliyunServer_);
      DARABONBA_PTR_FROM_JSON(deviceTypesStr, deviceTypesStr_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(serverRegion, serverRegion_);
    };
    DescribeSafStartStepsRequest() = default ;
    DescribeSafStartStepsRequest(const DescribeSafStartStepsRequest &) = default ;
    DescribeSafStartStepsRequest(DescribeSafStartStepsRequest &&) = default ;
    DescribeSafStartStepsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafStartStepsRequest() = default ;
    DescribeSafStartStepsRequest& operator=(const DescribeSafStartStepsRequest &) = default ;
    DescribeSafStartStepsRequest& operator=(DescribeSafStartStepsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->aliyunServer_ == nullptr && this->deviceTypesStr_ == nullptr && this->eventCode_ == nullptr && this->language_ == nullptr && this->regId_ == nullptr
        && this->serverRegion_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSafStartStepsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // aliyunServer Field Functions 
    bool hasAliyunServer() const { return this->aliyunServer_ != nullptr;};
    void deleteAliyunServer() { this->aliyunServer_ = nullptr;};
    inline bool getAliyunServer() const { DARABONBA_PTR_GET_DEFAULT(aliyunServer_, false) };
    inline DescribeSafStartStepsRequest& setAliyunServer(bool aliyunServer) { DARABONBA_PTR_SET_VALUE(aliyunServer_, aliyunServer) };


    // deviceTypesStr Field Functions 
    bool hasDeviceTypesStr() const { return this->deviceTypesStr_ != nullptr;};
    void deleteDeviceTypesStr() { this->deviceTypesStr_ = nullptr;};
    inline string getDeviceTypesStr() const { DARABONBA_PTR_GET_DEFAULT(deviceTypesStr_, "") };
    inline DescribeSafStartStepsRequest& setDeviceTypesStr(string deviceTypesStr) { DARABONBA_PTR_SET_VALUE(deviceTypesStr_, deviceTypesStr) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeSafStartStepsRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeSafStartStepsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSafStartStepsRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // serverRegion Field Functions 
    bool hasServerRegion() const { return this->serverRegion_ != nullptr;};
    void deleteServerRegion() { this->serverRegion_ = nullptr;};
    inline string getServerRegion() const { DARABONBA_PTR_GET_DEFAULT(serverRegion_, "") };
    inline DescribeSafStartStepsRequest& setServerRegion(string serverRegion) { DARABONBA_PTR_SET_VALUE(serverRegion_, serverRegion) };


  protected:
    // The language of the request and response. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // Specifies whether the server is an Alibaba Cloud server. Valid values: true and false.
    shared_ptr<bool> aliyunServer_ {};
    // The string of device type collection passed from the frontend that cannot be received by POP.
    //      
    // The device type.
    shared_ptr<string> deviceTypesStr_ {};
    // The event code.
    shared_ptr<string> eventCode_ {};
    // The language. Valid values:
    // - zh-CN: Chinese (default)
    // - en-US: English.
    shared_ptr<string> language_ {};
    // The region code.
    shared_ptr<string> regId_ {};
    // The region where the server resides.
    shared_ptr<string> serverRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
