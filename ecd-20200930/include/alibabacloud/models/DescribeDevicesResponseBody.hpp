// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDevicesResponseBody() = default ;
    DescribeDevicesResponseBody(const DescribeDevicesResponseBody &) = default ;
    DescribeDevicesResponseBody(DescribeDevicesResponseBody &&) = default ;
    DescribeDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDevicesResponseBody() = default ;
    DescribeDevicesResponseBody& operator=(const DescribeDevicesResponseBody &) = default ;
    DescribeDevicesResponseBody& operator=(DescribeDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Devices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Devices& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(EndUserList, endUserList_);
      };
      friend void from_json(const Darabonba::Json& j, Devices& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(EndUserList, endUserList_);
      };
      Devices() = default ;
      Devices(const Devices &) = default ;
      Devices(Devices &&) = default ;
      Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Devices() = default ;
      Devices& operator=(const Devices &) = default ;
      Devices& operator=(Devices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EndUserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndUserList& obj) { 
          DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
          DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(UserType, userType_);
        };
        friend void from_json(const Darabonba::Json& j, EndUserList& obj) { 
          DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
          DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(UserType, userType_);
        };
        EndUserList() = default ;
        EndUserList(const EndUserList &) = default ;
        EndUserList(EndUserList &&) = default ;
        EndUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndUserList() = default ;
        EndUserList& operator=(const EndUserList &) = default ;
        EndUserList& operator=(EndUserList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adDomain_ == nullptr
        && this->directoryId_ == nullptr && this->endUserId_ == nullptr && this->userType_ == nullptr; };
        // adDomain Field Functions 
        bool hasAdDomain() const { return this->adDomain_ != nullptr;};
        void deleteAdDomain() { this->adDomain_ = nullptr;};
        inline string getAdDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
        inline EndUserList& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


        // directoryId Field Functions 
        bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
        void deleteDirectoryId() { this->directoryId_ = nullptr;};
        inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
        inline EndUserList& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline EndUserList& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
        inline EndUserList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        // The address of the AD office network.
        shared_ptr<string> adDomain_ {};
        // The ID of the convenient office network.
        shared_ptr<string> directoryId_ {};
        // The ID of the user.
        shared_ptr<string> endUserId_ {};
        // The account type of the user.
        // 
        // Valid values:
        // 
        // *   AD: enterprise AD account.
        // *   SIMPLE: convenience account
        shared_ptr<string> userType_ {};
      };

      virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->endUserList_ == nullptr; };
      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Devices& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // endUserList Field Functions 
      bool hasEndUserList() const { return this->endUserList_ != nullptr;};
      void deleteEndUserList() { this->endUserList_ = nullptr;};
      inline const vector<Devices::EndUserList> & getEndUserList() const { DARABONBA_PTR_GET_CONST(endUserList_, vector<Devices::EndUserList>) };
      inline vector<Devices::EndUserList> getEndUserList() { DARABONBA_PTR_GET(endUserList_, vector<Devices::EndUserList>) };
      inline Devices& setEndUserList(const vector<Devices::EndUserList> & endUserList) { DARABONBA_PTR_SET_VALUE(endUserList_, endUserList) };
      inline Devices& setEndUserList(vector<Devices::EndUserList> && endUserList) { DARABONBA_PTR_SET_RVALUE(endUserList_, endUserList) };


    protected:
      // The ID of the device. The serial number (SN) of the hardware client or the UUID of the software client.
      shared_ptr<string> deviceId_ {};
      // The users who are bound to the device.
      shared_ptr<vector<Devices::EndUserList>> endUserList_ {};
    };

    virtual bool empty() const override { return this->devices_ == nullptr
        && this->requestId_ == nullptr; };
    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<DescribeDevicesResponseBody::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<DescribeDevicesResponseBody::Devices>) };
    inline vector<DescribeDevicesResponseBody::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<DescribeDevicesResponseBody::Devices>) };
    inline DescribeDevicesResponseBody& setDevices(const vector<DescribeDevicesResponseBody::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline DescribeDevicesResponseBody& setDevices(vector<DescribeDevicesResponseBody::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about devices that you queried.
    shared_ptr<vector<DescribeDevicesResponseBody::Devices>> devices_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
