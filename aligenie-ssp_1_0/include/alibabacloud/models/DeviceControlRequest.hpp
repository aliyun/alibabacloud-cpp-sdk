// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEVICECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeviceControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeviceControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlRequest, controlRequest_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeviceControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlRequest, controlRequest_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
    };
    DeviceControlRequest() = default ;
    DeviceControlRequest(const DeviceControlRequest &) = default ;
    DeviceControlRequest(DeviceControlRequest &&) = default ;
    DeviceControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeviceControlRequest() = default ;
    DeviceControlRequest& operator=(const DeviceControlRequest &) = default ;
    DeviceControlRequest& operator=(DeviceControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      DeviceInfo() = default ;
      DeviceInfo(const DeviceInfo &) = default ;
      DeviceInfo(DeviceInfo &&) = default ;
      DeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfo() = default ;
      DeviceInfo& operator=(const DeviceInfo &) = default ;
      DeviceInfo& operator=(DeviceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline DeviceInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline DeviceInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DeviceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline DeviceInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline DeviceInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // Value corresponding to the encoding type. Enter the Project ID of the project where the product resides. You can View this in the Tmall Genie AI platform console.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding Type. Enter PROJECT_ID here.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID. Enter the value of deviceOpenId or deviceUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The type of Device ID:  
      // OPEN_ID: The default Device ID identity.  
      // UNION_ID: The organization-dimension Device ID identity. You must request an organization in advance on the Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID of the device. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class ControlRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlRequest& obj) { 
        DARABONBA_PTR_TO_JSON(Muted, muted_);
        DARABONBA_PTR_TO_JSON(Volume, volume_);
      };
      friend void from_json(const Darabonba::Json& j, ControlRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(Muted, muted_);
        DARABONBA_PTR_FROM_JSON(Volume, volume_);
      };
      ControlRequest() = default ;
      ControlRequest(const ControlRequest &) = default ;
      ControlRequest(ControlRequest &&) = default ;
      ControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlRequest() = default ;
      ControlRequest& operator=(const ControlRequest &) = default ;
      ControlRequest& operator=(ControlRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->muted_ == nullptr
        && this->volume_ == nullptr; };
      // muted Field Functions 
      bool hasMuted() const { return this->muted_ != nullptr;};
      void deleteMuted() { this->muted_ = nullptr;};
      inline bool getMuted() const { DARABONBA_PTR_GET_DEFAULT(muted_, false) };
      inline ControlRequest& setMuted(bool muted) { DARABONBA_PTR_SET_VALUE(muted_, muted) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
      inline ControlRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    protected:
      // Indicates whether mute is enabled. If this field is set to true, you must also specify the volume value as 0.
      shared_ptr<bool> muted_ {};
      // Target volume value
      shared_ptr<int32_t> volume_ {};
    };

    virtual bool empty() const override { return this->controlRequest_ == nullptr
        && this->deviceInfo_ == nullptr; };
    // controlRequest Field Functions 
    bool hasControlRequest() const { return this->controlRequest_ != nullptr;};
    void deleteControlRequest() { this->controlRequest_ = nullptr;};
    inline const DeviceControlRequest::ControlRequest & getControlRequest() const { DARABONBA_PTR_GET_CONST(controlRequest_, DeviceControlRequest::ControlRequest) };
    inline DeviceControlRequest::ControlRequest getControlRequest() { DARABONBA_PTR_GET(controlRequest_, DeviceControlRequest::ControlRequest) };
    inline DeviceControlRequest& setControlRequest(const DeviceControlRequest::ControlRequest & controlRequest) { DARABONBA_PTR_SET_VALUE(controlRequest_, controlRequest) };
    inline DeviceControlRequest& setControlRequest(DeviceControlRequest::ControlRequest && controlRequest) { DARABONBA_PTR_SET_RVALUE(controlRequest_, controlRequest) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const DeviceControlRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, DeviceControlRequest::DeviceInfo) };
    inline DeviceControlRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, DeviceControlRequest::DeviceInfo) };
    inline DeviceControlRequest& setDeviceInfo(const DeviceControlRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline DeviceControlRequest& setDeviceInfo(DeviceControlRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


  protected:
    // Input parameters for volume control
    shared_ptr<DeviceControlRequest::ControlRequest> controlRequest_ {};
    // List of device ID information.
    // 
    // This parameter is required.
    shared_ptr<DeviceControlRequest::DeviceInfo> deviceInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
