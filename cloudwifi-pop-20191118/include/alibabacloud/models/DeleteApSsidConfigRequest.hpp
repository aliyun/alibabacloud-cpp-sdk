// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPSSIDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPSSIDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class DeleteApSsidConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApSsidConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApMac, apMac_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(RadioIndex, radioIndex_);
      DARABONBA_PTR_TO_JSON(Ssid, ssid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApSsidConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApMac, apMac_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(RadioIndex, radioIndex_);
      DARABONBA_PTR_FROM_JSON(Ssid, ssid_);
    };
    DeleteApSsidConfigRequest() = default ;
    DeleteApSsidConfigRequest(const DeleteApSsidConfigRequest &) = default ;
    DeleteApSsidConfigRequest(DeleteApSsidConfigRequest &&) = default ;
    DeleteApSsidConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApSsidConfigRequest() = default ;
    DeleteApSsidConfigRequest& operator=(const DeleteApSsidConfigRequest &) = default ;
    DeleteApSsidConfigRequest& operator=(DeleteApSsidConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apMac_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr && this->radioIndex_ == nullptr && this->ssid_ == nullptr; };
    // apMac Field Functions 
    bool hasApMac() const { return this->apMac_ != nullptr;};
    void deleteApMac() { this->apMac_ = nullptr;};
    inline string getApMac() const { DARABONBA_PTR_GET_DEFAULT(apMac_, "") };
    inline DeleteApSsidConfigRequest& setApMac(string apMac) { DARABONBA_PTR_SET_VALUE(apMac_, apMac) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline DeleteApSsidConfigRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteApSsidConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // radioIndex Field Functions 
    bool hasRadioIndex() const { return this->radioIndex_ != nullptr;};
    void deleteRadioIndex() { this->radioIndex_ = nullptr;};
    inline string getRadioIndex() const { DARABONBA_PTR_GET_DEFAULT(radioIndex_, "") };
    inline DeleteApSsidConfigRequest& setRadioIndex(string radioIndex) { DARABONBA_PTR_SET_VALUE(radioIndex_, radioIndex) };


    // ssid Field Functions 
    bool hasSsid() const { return this->ssid_ != nullptr;};
    void deleteSsid() { this->ssid_ = nullptr;};
    inline string getSsid() const { DARABONBA_PTR_GET_DEFAULT(ssid_, "") };
    inline DeleteApSsidConfigRequest& setSsid(string ssid) { DARABONBA_PTR_SET_VALUE(ssid_, ssid) };


  protected:
    // This parameter is required.
    shared_ptr<string> apMac_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> radioIndex_ {};
    // This parameter is required.
    shared_ptr<string> ssid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
