// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHBINDPARENTPLATFORMDEVICESRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHBINDPARENTPLATFORMDEVICESRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchBindParentPlatformDevicesResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchBindParentPlatformDevicesResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(ParentPlatformId, parentPlatformId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchBindParentPlatformDevicesResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(ParentPlatformId, parentPlatformId_);
    };
    BatchBindParentPlatformDevicesResponseBodyResults() = default ;
    BatchBindParentPlatformDevicesResponseBodyResults(const BatchBindParentPlatformDevicesResponseBodyResults &) = default ;
    BatchBindParentPlatformDevicesResponseBodyResults(BatchBindParentPlatformDevicesResponseBodyResults &&) = default ;
    BatchBindParentPlatformDevicesResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchBindParentPlatformDevicesResponseBodyResults() = default ;
    BatchBindParentPlatformDevicesResponseBodyResults& operator=(const BatchBindParentPlatformDevicesResponseBodyResults &) = default ;
    BatchBindParentPlatformDevicesResponseBodyResults& operator=(BatchBindParentPlatformDevicesResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && return this->error_ == nullptr && return this->parentPlatformId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BatchBindParentPlatformDevicesResponseBodyResults& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline BatchBindParentPlatformDevicesResponseBodyResults& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // parentPlatformId Field Functions 
    bool hasParentPlatformId() const { return this->parentPlatformId_ != nullptr;};
    void deleteParentPlatformId() { this->parentPlatformId_ = nullptr;};
    inline string parentPlatformId() const { DARABONBA_PTR_GET_DEFAULT(parentPlatformId_, "") };
    inline BatchBindParentPlatformDevicesResponseBodyResults& setParentPlatformId(string parentPlatformId) { DARABONBA_PTR_SET_VALUE(parentPlatformId_, parentPlatformId) };


  protected:
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> parentPlatformId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
