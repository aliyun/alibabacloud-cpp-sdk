// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSTHROUGHAUTHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPASSTHROUGHAUTHINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class GetPassThroughAuthInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPassThroughAuthInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPassThroughAuthInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
    };
    GetPassThroughAuthInfoRequest() = default ;
    GetPassThroughAuthInfoRequest(const GetPassThroughAuthInfoRequest &) = default ;
    GetPassThroughAuthInfoRequest(GetPassThroughAuthInfoRequest &&) = default ;
    GetPassThroughAuthInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPassThroughAuthInfoRequest() = default ;
    GetPassThroughAuthInfoRequest& operator=(const GetPassThroughAuthInfoRequest &) = default ;
    GetPassThroughAuthInfoRequest& operator=(GetPassThroughAuthInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->deviceName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetPassThroughAuthInfoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline GetPassThroughAuthInfoRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
