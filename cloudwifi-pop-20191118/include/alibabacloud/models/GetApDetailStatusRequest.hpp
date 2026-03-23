// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPDETAILSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPDETAILSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetApDetailStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApDetailStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(NeedApgroupInfo, needApgroupInfo_);
      DARABONBA_PTR_TO_JSON(NeedRadioStatus, needRadioStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetApDetailStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(NeedApgroupInfo, needApgroupInfo_);
      DARABONBA_PTR_FROM_JSON(NeedRadioStatus, needRadioStatus_);
    };
    GetApDetailStatusRequest() = default ;
    GetApDetailStatusRequest(const GetApDetailStatusRequest &) = default ;
    GetApDetailStatusRequest(GetApDetailStatusRequest &&) = default ;
    GetApDetailStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApDetailStatusRequest() = default ;
    GetApDetailStatusRequest& operator=(const GetApDetailStatusRequest &) = default ;
    GetApDetailStatusRequest& operator=(GetApDetailStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->mac_ == nullptr && this->needApgroupInfo_ == nullptr && this->needRadioStatus_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetApDetailStatusRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetApDetailStatusRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline GetApDetailStatusRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // needApgroupInfo Field Functions 
    bool hasNeedApgroupInfo() const { return this->needApgroupInfo_ != nullptr;};
    void deleteNeedApgroupInfo() { this->needApgroupInfo_ = nullptr;};
    inline bool getNeedApgroupInfo() const { DARABONBA_PTR_GET_DEFAULT(needApgroupInfo_, false) };
    inline GetApDetailStatusRequest& setNeedApgroupInfo(bool needApgroupInfo) { DARABONBA_PTR_SET_VALUE(needApgroupInfo_, needApgroupInfo) };


    // needRadioStatus Field Functions 
    bool hasNeedRadioStatus() const { return this->needRadioStatus_ != nullptr;};
    void deleteNeedRadioStatus() { this->needRadioStatus_ = nullptr;};
    inline bool getNeedRadioStatus() const { DARABONBA_PTR_GET_DEFAULT(needRadioStatus_, false) };
    inline GetApDetailStatusRequest& setNeedRadioStatus(bool needRadioStatus) { DARABONBA_PTR_SET_VALUE(needRadioStatus_, needRadioStatus) };


  protected:
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> mac_ {};
    // This parameter is required.
    shared_ptr<bool> needApgroupInfo_ {};
    // This parameter is required.
    shared_ptr<bool> needRadioStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
