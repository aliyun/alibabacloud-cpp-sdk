// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CheckDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceCheckInfos, deviceCheckInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceCheckInfos, deviceCheckInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckDevicesResponseBody() = default ;
    CheckDevicesResponseBody(const CheckDevicesResponseBody &) = default ;
    CheckDevicesResponseBody(CheckDevicesResponseBody &&) = default ;
    CheckDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDevicesResponseBody() = default ;
    CheckDevicesResponseBody& operator=(const CheckDevicesResponseBody &) = default ;
    CheckDevicesResponseBody& operator=(CheckDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceCheckInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceCheckInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceCheckInfo, deviceCheckInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceCheckInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceCheckInfo, deviceCheckInfo_);
      };
      DeviceCheckInfos() = default ;
      DeviceCheckInfos(const DeviceCheckInfos &) = default ;
      DeviceCheckInfos(DeviceCheckInfos &&) = default ;
      DeviceCheckInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceCheckInfos() = default ;
      DeviceCheckInfos& operator=(const DeviceCheckInfos &) = default ;
      DeviceCheckInfos& operator=(DeviceCheckInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeviceCheckInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceCheckInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Available, available_);
          DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceCheckInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Available, available_);
          DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        };
        DeviceCheckInfo() = default ;
        DeviceCheckInfo(const DeviceCheckInfo &) = default ;
        DeviceCheckInfo(DeviceCheckInfo &&) = default ;
        DeviceCheckInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceCheckInfo() = default ;
        DeviceCheckInfo& operator=(const DeviceCheckInfo &) = default ;
        DeviceCheckInfo& operator=(DeviceCheckInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->available_ == nullptr
        && this->deviceId_ == nullptr; };
        // available Field Functions 
        bool hasAvailable() const { return this->available_ != nullptr;};
        void deleteAvailable() { this->available_ = nullptr;};
        inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
        inline DeviceCheckInfo& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


        // deviceId Field Functions 
        bool hasDeviceId() const { return this->deviceId_ != nullptr;};
        void deleteDeviceId() { this->deviceId_ = nullptr;};
        inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
        inline DeviceCheckInfo& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      protected:
        shared_ptr<bool> available_ {};
        shared_ptr<string> deviceId_ {};
      };

      virtual bool empty() const override { return this->deviceCheckInfo_ == nullptr; };
      // deviceCheckInfo Field Functions 
      bool hasDeviceCheckInfo() const { return this->deviceCheckInfo_ != nullptr;};
      void deleteDeviceCheckInfo() { this->deviceCheckInfo_ = nullptr;};
      inline const vector<DeviceCheckInfos::DeviceCheckInfo> & getDeviceCheckInfo() const { DARABONBA_PTR_GET_CONST(deviceCheckInfo_, vector<DeviceCheckInfos::DeviceCheckInfo>) };
      inline vector<DeviceCheckInfos::DeviceCheckInfo> getDeviceCheckInfo() { DARABONBA_PTR_GET(deviceCheckInfo_, vector<DeviceCheckInfos::DeviceCheckInfo>) };
      inline DeviceCheckInfos& setDeviceCheckInfo(const vector<DeviceCheckInfos::DeviceCheckInfo> & deviceCheckInfo) { DARABONBA_PTR_SET_VALUE(deviceCheckInfo_, deviceCheckInfo) };
      inline DeviceCheckInfos& setDeviceCheckInfo(vector<DeviceCheckInfos::DeviceCheckInfo> && deviceCheckInfo) { DARABONBA_PTR_SET_RVALUE(deviceCheckInfo_, deviceCheckInfo) };


    protected:
      shared_ptr<vector<DeviceCheckInfos::DeviceCheckInfo>> deviceCheckInfo_ {};
    };

    virtual bool empty() const override { return this->deviceCheckInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // deviceCheckInfos Field Functions 
    bool hasDeviceCheckInfos() const { return this->deviceCheckInfos_ != nullptr;};
    void deleteDeviceCheckInfos() { this->deviceCheckInfos_ = nullptr;};
    inline const CheckDevicesResponseBody::DeviceCheckInfos & getDeviceCheckInfos() const { DARABONBA_PTR_GET_CONST(deviceCheckInfos_, CheckDevicesResponseBody::DeviceCheckInfos) };
    inline CheckDevicesResponseBody::DeviceCheckInfos getDeviceCheckInfos() { DARABONBA_PTR_GET(deviceCheckInfos_, CheckDevicesResponseBody::DeviceCheckInfos) };
    inline CheckDevicesResponseBody& setDeviceCheckInfos(const CheckDevicesResponseBody::DeviceCheckInfos & deviceCheckInfos) { DARABONBA_PTR_SET_VALUE(deviceCheckInfos_, deviceCheckInfos) };
    inline CheckDevicesResponseBody& setDeviceCheckInfos(CheckDevicesResponseBody::DeviceCheckInfos && deviceCheckInfos) { DARABONBA_PTR_SET_RVALUE(deviceCheckInfos_, deviceCheckInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckDevicesResponseBody::DeviceCheckInfos> deviceCheckInfos_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
