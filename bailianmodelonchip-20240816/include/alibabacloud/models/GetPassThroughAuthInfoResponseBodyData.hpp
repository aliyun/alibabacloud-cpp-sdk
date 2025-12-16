// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSTHROUGHAUTHINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPASSTHROUGHAUTHINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class GetPassThroughAuthInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPassThroughAuthInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
      DARABONBA_ANY_TO_JSON(passThroughParams, passThroughParams_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPassThroughAuthInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
      DARABONBA_ANY_FROM_JSON(passThroughParams, passThroughParams_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetPassThroughAuthInfoResponseBodyData() = default ;
    GetPassThroughAuthInfoResponseBodyData(const GetPassThroughAuthInfoResponseBodyData &) = default ;
    GetPassThroughAuthInfoResponseBodyData(GetPassThroughAuthInfoResponseBodyData &&) = default ;
    GetPassThroughAuthInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPassThroughAuthInfoResponseBodyData() = default ;
    GetPassThroughAuthInfoResponseBodyData& operator=(const GetPassThroughAuthInfoResponseBodyData &) = default ;
    GetPassThroughAuthInfoResponseBodyData& operator=(GetPassThroughAuthInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->deviceName_ == nullptr && return this->passThroughParams_ == nullptr && return this->taskId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetPassThroughAuthInfoResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline GetPassThroughAuthInfoResponseBodyData& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // passThroughParams Field Functions 
    bool hasPassThroughParams() const { return this->passThroughParams_ != nullptr;};
    void deletePassThroughParams() { this->passThroughParams_ = nullptr;};
    inline     const Darabonba::Json & passThroughParams() const { DARABONBA_GET(passThroughParams_) };
    Darabonba::Json & passThroughParams() { DARABONBA_GET(passThroughParams_) };
    inline GetPassThroughAuthInfoResponseBodyData& setPassThroughParams(const Darabonba::Json & passThroughParams) { DARABONBA_SET_VALUE(passThroughParams_, passThroughParams) };
    inline GetPassThroughAuthInfoResponseBodyData& setPassThroughParams(Darabonba::Json & passThroughParams) { DARABONBA_SET_RVALUE(passThroughParams_, passThroughParams) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetPassThroughAuthInfoResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
    Darabonba::Json passThroughParams_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
