// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDeviceListResponseBody() = default ;
    GetDeviceListResponseBody(const GetDeviceListResponseBody &) = default ;
    GetDeviceListResponseBody(GetDeviceListResponseBody &&) = default ;
    GetDeviceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceListResponseBody() = default ;
    GetDeviceListResponseBody& operator=(const GetDeviceListResponseBody &) = default ;
    GetDeviceListResponseBody& operator=(GetDeviceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(deviceList, deviceList_);
        DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
        DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
        DARABONBA_PTR_TO_JSON(success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(deviceList, deviceList_);
        DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
        DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
        DARABONBA_PTR_FROM_JSON(success, success_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeviceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceList& obj) { 
          DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
          DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
          DARABONBA_PTR_TO_JSON(firstTypeName, firstTypeName_);
          DARABONBA_PTR_TO_JSON(info, info_);
          DARABONBA_PTR_TO_JSON(parentDevice, parentDevice_);
          DARABONBA_PTR_TO_JSON(secondTypeName, secondTypeName_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceList& obj) { 
          DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
          DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(firstTypeName, firstTypeName_);
          DARABONBA_PTR_FROM_JSON(info, info_);
          DARABONBA_PTR_FROM_JSON(parentDevice, parentDevice_);
          DARABONBA_PTR_FROM_JSON(secondTypeName, secondTypeName_);
        };
        DeviceList() = default ;
        DeviceList(const DeviceList &) = default ;
        DeviceList(DeviceList &&) = default ;
        DeviceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceList() = default ;
        DeviceList& operator=(const DeviceList &) = default ;
        DeviceList& operator=(DeviceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Info : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Info& obj) { 
            DARABONBA_PTR_TO_JSON(constKva, constKva_);
            DARABONBA_PTR_TO_JSON(ct, ct_);
            DARABONBA_PTR_TO_JSON(magnification, magnification_);
            DARABONBA_PTR_TO_JSON(pressure, pressure_);
            DARABONBA_PTR_TO_JSON(pt, pt_);
          };
          friend void from_json(const Darabonba::Json& j, Info& obj) { 
            DARABONBA_PTR_FROM_JSON(constKva, constKva_);
            DARABONBA_PTR_FROM_JSON(ct, ct_);
            DARABONBA_PTR_FROM_JSON(magnification, magnification_);
            DARABONBA_PTR_FROM_JSON(pressure, pressure_);
            DARABONBA_PTR_FROM_JSON(pt, pt_);
          };
          Info() = default ;
          Info(const Info &) = default ;
          Info(Info &&) = default ;
          Info(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Info() = default ;
          Info& operator=(const Info &) = default ;
          Info& operator=(Info &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->constKva_ == nullptr
        && this->ct_ == nullptr && this->magnification_ == nullptr && this->pressure_ == nullptr && this->pt_ == nullptr; };
          // constKva Field Functions 
          bool hasConstKva() const { return this->constKva_ != nullptr;};
          void deleteConstKva() { this->constKva_ = nullptr;};
          inline int32_t getConstKva() const { DARABONBA_PTR_GET_DEFAULT(constKva_, 0) };
          inline Info& setConstKva(int32_t constKva) { DARABONBA_PTR_SET_VALUE(constKva_, constKva) };


          // ct Field Functions 
          bool hasCt() const { return this->ct_ != nullptr;};
          void deleteCt() { this->ct_ = nullptr;};
          inline int32_t getCt() const { DARABONBA_PTR_GET_DEFAULT(ct_, 0) };
          inline Info& setCt(int32_t ct) { DARABONBA_PTR_SET_VALUE(ct_, ct) };


          // magnification Field Functions 
          bool hasMagnification() const { return this->magnification_ != nullptr;};
          void deleteMagnification() { this->magnification_ = nullptr;};
          inline int32_t getMagnification() const { DARABONBA_PTR_GET_DEFAULT(magnification_, 0) };
          inline Info& setMagnification(int32_t magnification) { DARABONBA_PTR_SET_VALUE(magnification_, magnification) };


          // pressure Field Functions 
          bool hasPressure() const { return this->pressure_ != nullptr;};
          void deletePressure() { this->pressure_ = nullptr;};
          inline int32_t getPressure() const { DARABONBA_PTR_GET_DEFAULT(pressure_, 0) };
          inline Info& setPressure(int32_t pressure) { DARABONBA_PTR_SET_VALUE(pressure_, pressure) };


          // pt Field Functions 
          bool hasPt() const { return this->pt_ != nullptr;};
          void deletePt() { this->pt_ = nullptr;};
          inline int32_t getPt() const { DARABONBA_PTR_GET_DEFAULT(pt_, 0) };
          inline Info& setPt(int32_t pt) { DARABONBA_PTR_SET_VALUE(pt_, pt) };


        protected:
          // The rated capacity.
          // Unit is kVA.
          shared_ptr<int32_t> constKva_ {};
          // The transformation ratio of current.
          shared_ptr<int32_t> ct_ {};
          // The magnification ratio.
          shared_ptr<int32_t> magnification_ {};
          // The high and low voltage.
          shared_ptr<int32_t> pressure_ {};
          // The transformation ratio of voltage.
          shared_ptr<int32_t> pt_ {};
        };

        virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->deviceName_ == nullptr && this->firstTypeName_ == nullptr && this->info_ == nullptr && this->parentDevice_ == nullptr && this->secondTypeName_ == nullptr; };
        // deviceId Field Functions 
        bool hasDeviceId() const { return this->deviceId_ != nullptr;};
        void deleteDeviceId() { this->deviceId_ = nullptr;};
        inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
        inline DeviceList& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


        // deviceName Field Functions 
        bool hasDeviceName() const { return this->deviceName_ != nullptr;};
        void deleteDeviceName() { this->deviceName_ = nullptr;};
        inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
        inline DeviceList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


        // firstTypeName Field Functions 
        bool hasFirstTypeName() const { return this->firstTypeName_ != nullptr;};
        void deleteFirstTypeName() { this->firstTypeName_ = nullptr;};
        inline string getFirstTypeName() const { DARABONBA_PTR_GET_DEFAULT(firstTypeName_, "") };
        inline DeviceList& setFirstTypeName(string firstTypeName) { DARABONBA_PTR_SET_VALUE(firstTypeName_, firstTypeName) };


        // info Field Functions 
        bool hasInfo() const { return this->info_ != nullptr;};
        void deleteInfo() { this->info_ = nullptr;};
        inline const DeviceList::Info & getInfo() const { DARABONBA_PTR_GET_CONST(info_, DeviceList::Info) };
        inline DeviceList::Info getInfo() { DARABONBA_PTR_GET(info_, DeviceList::Info) };
        inline DeviceList& setInfo(const DeviceList::Info & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
        inline DeviceList& setInfo(DeviceList::Info && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


        // parentDevice Field Functions 
        bool hasParentDevice() const { return this->parentDevice_ != nullptr;};
        void deleteParentDevice() { this->parentDevice_ = nullptr;};
        inline string getParentDevice() const { DARABONBA_PTR_GET_DEFAULT(parentDevice_, "") };
        inline DeviceList& setParentDevice(string parentDevice) { DARABONBA_PTR_SET_VALUE(parentDevice_, parentDevice) };


        // secondTypeName Field Functions 
        bool hasSecondTypeName() const { return this->secondTypeName_ != nullptr;};
        void deleteSecondTypeName() { this->secondTypeName_ = nullptr;};
        inline string getSecondTypeName() const { DARABONBA_PTR_GET_DEFAULT(secondTypeName_, "") };
        inline DeviceList& setSecondTypeName(string secondTypeName) { DARABONBA_PTR_SET_VALUE(secondTypeName_, secondTypeName) };


      protected:
        // The device ID.
        shared_ptr<string> deviceId_ {};
        // The device name.
        shared_ptr<string> deviceName_ {};
        // The level 1 meter type.
        shared_ptr<string> firstTypeName_ {};
        // The device information.
        shared_ptr<DeviceList::Info> info_ {};
        // The ID of the parent device.
        shared_ptr<string> parentDevice_ {};
        // The level 2 meter type.
        shared_ptr<string> secondTypeName_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->deviceList_ == nullptr && this->factoryId_ == nullptr && this->httpCode_ == nullptr && this->success_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // deviceList Field Functions 
      bool hasDeviceList() const { return this->deviceList_ != nullptr;};
      void deleteDeviceList() { this->deviceList_ = nullptr;};
      inline const vector<Data::DeviceList> & getDeviceList() const { DARABONBA_PTR_GET_CONST(deviceList_, vector<Data::DeviceList>) };
      inline vector<Data::DeviceList> getDeviceList() { DARABONBA_PTR_GET(deviceList_, vector<Data::DeviceList>) };
      inline Data& setDeviceList(const vector<Data::DeviceList> & deviceList) { DARABONBA_PTR_SET_VALUE(deviceList_, deviceList) };
      inline Data& setDeviceList(vector<Data::DeviceList> && deviceList) { DARABONBA_PTR_SET_RVALUE(deviceList_, deviceList) };


      // factoryId Field Functions 
      bool hasFactoryId() const { return this->factoryId_ != nullptr;};
      void deleteFactoryId() { this->factoryId_ = nullptr;};
      inline string getFactoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
      inline Data& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


      // httpCode Field Functions 
      bool hasHttpCode() const { return this->httpCode_ != nullptr;};
      void deleteHttpCode() { this->httpCode_ = nullptr;};
      inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
      inline Data& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The code returned for the request.
      shared_ptr<string> code_ {};
      // The devices.
      shared_ptr<vector<Data::DeviceList>> deviceList_ {};
      // The ID of the site.
      shared_ptr<string> factoryId_ {};
      // The HTTP status code.
      shared_ptr<int32_t> httpCode_ {};
      // Indicates whether the request was successful.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDeviceListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDeviceListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDeviceListResponseBody::Data) };
    inline GetDeviceListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDeviceListResponseBody::Data) };
    inline GetDeviceListResponseBody& setData(const GetDeviceListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDeviceListResponseBody& setData(GetDeviceListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetDeviceListResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDeviceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetDeviceListResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
