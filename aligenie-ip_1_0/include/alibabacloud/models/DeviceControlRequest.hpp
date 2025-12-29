// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEVICECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class DeviceControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeviceControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeviceControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
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
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
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
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // This parameter is required.
      shared_ptr<string> id_ {};
      // This parameter is required.
      shared_ptr<string> idType_ {};
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Cmd, cmd_);
        DARABONBA_PTR_TO_JSON(DeviceNumber, deviceNumber_);
        DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
        DARABONBA_PTR_FROM_JSON(DeviceNumber, deviceNumber_);
        DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->cmd_ == nullptr && this->deviceNumber_ == nullptr && this->extendInfo_ == nullptr && this->location_ == nullptr && this->properties_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Payload& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // cmd Field Functions 
      bool hasCmd() const { return this->cmd_ != nullptr;};
      void deleteCmd() { this->cmd_ = nullptr;};
      inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
      inline Payload& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


      // deviceNumber Field Functions 
      bool hasDeviceNumber() const { return this->deviceNumber_ != nullptr;};
      void deleteDeviceNumber() { this->deviceNumber_ = nullptr;};
      inline string getDeviceNumber() const { DARABONBA_PTR_GET_DEFAULT(deviceNumber_, "") };
      inline Payload& setDeviceNumber(string deviceNumber) { DARABONBA_PTR_SET_VALUE(deviceNumber_, deviceNumber) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline Payload& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Payload& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline const map<string, string> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, string>) };
      inline map<string, string> getProperties() { DARABONBA_PTR_GET(properties_, map<string, string>) };
      inline Payload& setProperties(const map<string, string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
      inline Payload& setProperties(map<string, string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    protected:
      // This parameter is required.
      shared_ptr<string> category_ {};
      // This parameter is required.
      shared_ptr<string> cmd_ {};
      // This parameter is required.
      shared_ptr<string> deviceNumber_ {};
      shared_ptr<string> extendInfo_ {};
      // This parameter is required.
      shared_ptr<string> location_ {};
      shared_ptr<map<string, string>> properties_ {};
    };

    virtual bool empty() const override { return this->payload_ == nullptr
        && this->userInfo_ == nullptr; };
    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const DeviceControlRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, DeviceControlRequest::Payload) };
    inline DeviceControlRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, DeviceControlRequest::Payload) };
    inline DeviceControlRequest& setPayload(const DeviceControlRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline DeviceControlRequest& setPayload(DeviceControlRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const DeviceControlRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, DeviceControlRequest::UserInfo) };
    inline DeviceControlRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, DeviceControlRequest::UserInfo) };
    inline DeviceControlRequest& setUserInfo(const DeviceControlRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline DeviceControlRequest& setUserInfo(DeviceControlRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    shared_ptr<DeviceControlRequest::Payload> payload_ {};
    shared_ptr<DeviceControlRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
