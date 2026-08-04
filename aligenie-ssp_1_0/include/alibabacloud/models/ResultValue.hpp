// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESULTVALUE_HPP_
#define ALIBABACLOUD_MODELS_RESULTVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ResultValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResultValue& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_TO_JSON(DeviceUnionIds, deviceUnionIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(FirmwareVersion, firmwareVersion_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, ResultValue& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_FROM_JSON(DeviceUnionIds, deviceUnionIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(FirmwareVersion, firmwareVersion_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    ResultValue() = default ;
    ResultValue(const ResultValue &) = default ;
    ResultValue(ResultValue &&) = default ;
    ResultValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResultValue() = default ;
    ResultValue& operator=(const ResultValue &) = default ;
    ResultValue& operator=(ResultValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceUnionIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceUnionIds& obj) { 
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(DeviceUnionId, deviceUnionId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceUnionIds& obj) { 
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(DeviceUnionId, deviceUnionId_);
      };
      DeviceUnionIds() = default ;
      DeviceUnionIds(const DeviceUnionIds &) = default ;
      DeviceUnionIds(DeviceUnionIds &&) = default ;
      DeviceUnionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceUnionIds() = default ;
      DeviceUnionIds& operator=(const DeviceUnionIds &) = default ;
      DeviceUnionIds& operator=(DeviceUnionIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->organizationId_ == nullptr
        && this->deviceUnionId_ == nullptr; };
      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline DeviceUnionIds& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // deviceUnionId Field Functions 
      bool hasDeviceUnionId() const { return this->deviceUnionId_ != nullptr;};
      void deleteDeviceUnionId() { this->deviceUnionId_ = nullptr;};
      inline string getDeviceUnionId() const { DARABONBA_PTR_GET_DEFAULT(deviceUnionId_, "") };
      inline DeviceUnionIds& setDeviceUnionId(string deviceUnionId) { DARABONBA_PTR_SET_VALUE(deviceUnionId_, deviceUnionId) };


    protected:
      // The organization ID.
      shared_ptr<string> organizationId_ {};
      // The UnionId of the device.
      shared_ptr<string> deviceUnionId_ {};
    };

    virtual bool empty() const override { return this->deviceOpenId_ == nullptr
        && this->deviceUnionIds_ == nullptr && this->name_ == nullptr && this->firmwareVersion_ == nullptr && this->mac_ == nullptr && this->sn_ == nullptr; };
    // deviceOpenId Field Functions 
    bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
    void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
    inline string getDeviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
    inline ResultValue& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


    // deviceUnionIds Field Functions 
    bool hasDeviceUnionIds() const { return this->deviceUnionIds_ != nullptr;};
    void deleteDeviceUnionIds() { this->deviceUnionIds_ = nullptr;};
    inline const vector<ResultValue::DeviceUnionIds> & getDeviceUnionIds() const { DARABONBA_PTR_GET_CONST(deviceUnionIds_, vector<ResultValue::DeviceUnionIds>) };
    inline vector<ResultValue::DeviceUnionIds> getDeviceUnionIds() { DARABONBA_PTR_GET(deviceUnionIds_, vector<ResultValue::DeviceUnionIds>) };
    inline ResultValue& setDeviceUnionIds(const vector<ResultValue::DeviceUnionIds> & deviceUnionIds) { DARABONBA_PTR_SET_VALUE(deviceUnionIds_, deviceUnionIds) };
    inline ResultValue& setDeviceUnionIds(vector<ResultValue::DeviceUnionIds> && deviceUnionIds) { DARABONBA_PTR_SET_RVALUE(deviceUnionIds_, deviceUnionIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ResultValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // firmwareVersion Field Functions 
    bool hasFirmwareVersion() const { return this->firmwareVersion_ != nullptr;};
    void deleteFirmwareVersion() { this->firmwareVersion_ = nullptr;};
    inline string getFirmwareVersion() const { DARABONBA_PTR_GET_DEFAULT(firmwareVersion_, "") };
    inline ResultValue& setFirmwareVersion(string firmwareVersion) { DARABONBA_PTR_SET_VALUE(firmwareVersion_, firmwareVersion) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline ResultValue& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ResultValue& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The openId corresponding to the device.
    shared_ptr<string> deviceOpenId_ {};
    // The organization ID and UnionId information corresponding to the device.
    shared_ptr<vector<ResultValue::DeviceUnionIds>> deviceUnionIds_ {};
    // The name of the device.
    shared_ptr<string> name_ {};
    // The firmware version of the device.
    shared_ptr<string> firmwareVersion_ {};
    // The MAC address of the device.
    shared_ptr<string> mac_ {};
    // The SN information of the device.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
