// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlayerConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayerConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(AuthTimestamp, authTimestamp_);
      DARABONBA_PTR_TO_JSON(DeviceBrand, deviceBrand_);
      DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_TO_JSON(OsName, osName_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayerConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(AuthTimestamp, authTimestamp_);
      DARABONBA_PTR_FROM_JSON(DeviceBrand, deviceBrand_);
      DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_FROM_JSON(OsName, osName_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    GetPlayerConfigRequest() = default ;
    GetPlayerConfigRequest(const GetPlayerConfigRequest &) = default ;
    GetPlayerConfigRequest(GetPlayerConfigRequest &&) = default ;
    GetPlayerConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayerConfigRequest() = default ;
    GetPlayerConfigRequest& operator=(const GetPlayerConfigRequest &) = default ;
    GetPlayerConfigRequest& operator=(GetPlayerConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiVersion_ != nullptr
        && this->authInfo_ != nullptr && this->authTimestamp_ != nullptr && this->deviceBrand_ != nullptr && this->deviceModel_ != nullptr && this->osName_ != nullptr
        && this->reserved_ != nullptr && this->rule_ != nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GetPlayerConfigRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline string authInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
    inline GetPlayerConfigRequest& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


    // authTimestamp Field Functions 
    bool hasAuthTimestamp() const { return this->authTimestamp_ != nullptr;};
    void deleteAuthTimestamp() { this->authTimestamp_ = nullptr;};
    inline int64_t authTimestamp() const { DARABONBA_PTR_GET_DEFAULT(authTimestamp_, 0L) };
    inline GetPlayerConfigRequest& setAuthTimestamp(int64_t authTimestamp) { DARABONBA_PTR_SET_VALUE(authTimestamp_, authTimestamp) };


    // deviceBrand Field Functions 
    bool hasDeviceBrand() const { return this->deviceBrand_ != nullptr;};
    void deleteDeviceBrand() { this->deviceBrand_ = nullptr;};
    inline string deviceBrand() const { DARABONBA_PTR_GET_DEFAULT(deviceBrand_, "") };
    inline GetPlayerConfigRequest& setDeviceBrand(string deviceBrand) { DARABONBA_PTR_SET_VALUE(deviceBrand_, deviceBrand) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline GetPlayerConfigRequest& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline GetPlayerConfigRequest& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline GetPlayerConfigRequest& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetPlayerConfigRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


  protected:
    std::shared_ptr<string> apiVersion_ = nullptr;
    std::shared_ptr<string> authInfo_ = nullptr;
    std::shared_ptr<int64_t> authTimestamp_ = nullptr;
    std::shared_ptr<string> deviceBrand_ = nullptr;
    std::shared_ptr<string> deviceModel_ = nullptr;
    std::shared_ptr<string> osName_ = nullptr;
    std::shared_ptr<string> reserved_ = nullptr;
    std::shared_ptr<string> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
