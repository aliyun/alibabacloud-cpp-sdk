// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListVirtualMFADevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualMFADevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualMFADevices, virtualMFADevices_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualMFADevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualMFADevices, virtualMFADevices_);
    };
    ListVirtualMFADevicesResponseBody() = default ;
    ListVirtualMFADevicesResponseBody(const ListVirtualMFADevicesResponseBody &) = default ;
    ListVirtualMFADevicesResponseBody(ListVirtualMFADevicesResponseBody &&) = default ;
    ListVirtualMFADevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualMFADevicesResponseBody() = default ;
    ListVirtualMFADevicesResponseBody& operator=(const ListVirtualMFADevicesResponseBody &) = default ;
    ListVirtualMFADevicesResponseBody& operator=(ListVirtualMFADevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualMFADevices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualMFADevices& obj) { 
        DARABONBA_PTR_TO_JSON(VirtualMFADevice, virtualMFADevice_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualMFADevices& obj) { 
        DARABONBA_PTR_FROM_JSON(VirtualMFADevice, virtualMFADevice_);
      };
      VirtualMFADevices() = default ;
      VirtualMFADevices(const VirtualMFADevices &) = default ;
      VirtualMFADevices(VirtualMFADevices &&) = default ;
      VirtualMFADevices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualMFADevices() = default ;
      VirtualMFADevices& operator=(const VirtualMFADevices &) = default ;
      VirtualMFADevices& operator=(VirtualMFADevices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VirtualMFADevice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirtualMFADevice& obj) { 
          DARABONBA_PTR_TO_JSON(ActivateDate, activateDate_);
          DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_TO_JSON(User, user_);
        };
        friend void from_json(const Darabonba::Json& j, VirtualMFADevice& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivateDate, activateDate_);
          DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_FROM_JSON(User, user_);
        };
        VirtualMFADevice() = default ;
        VirtualMFADevice(const VirtualMFADevice &) = default ;
        VirtualMFADevice(VirtualMFADevice &&) = default ;
        VirtualMFADevice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirtualMFADevice() = default ;
        VirtualMFADevice& operator=(const VirtualMFADevice &) = default ;
        VirtualMFADevice& operator=(VirtualMFADevice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class User : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const User& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
          };
          friend void from_json(const Darabonba::Json& j, User& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
          };
          User() = default ;
          User(const User &) = default ;
          User(User &&) = default ;
          User(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~User() = default ;
          User& operator=(const User &) = default ;
          User& operator=(User &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayName_ == nullptr
        && this->userId_ == nullptr && this->userPrincipalName_ == nullptr; };
          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline User& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userPrincipalName Field Functions 
          bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
          void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
          inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
          inline User& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


        protected:
          // The display name of the RAM user.
          shared_ptr<string> displayName_ {};
          // The ID of the RAM user.
          shared_ptr<string> userId_ {};
          // The logon name of the RAM user.
          shared_ptr<string> userPrincipalName_ {};
        };

        virtual bool empty() const override { return this->activateDate_ == nullptr
        && this->serialNumber_ == nullptr && this->user_ == nullptr; };
        // activateDate Field Functions 
        bool hasActivateDate() const { return this->activateDate_ != nullptr;};
        void deleteActivateDate() { this->activateDate_ = nullptr;};
        inline string getActivateDate() const { DARABONBA_PTR_GET_DEFAULT(activateDate_, "") };
        inline VirtualMFADevice& setActivateDate(string activateDate) { DARABONBA_PTR_SET_VALUE(activateDate_, activateDate) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline VirtualMFADevice& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline const VirtualMFADevice::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, VirtualMFADevice::User) };
        inline VirtualMFADevice::User getUser() { DARABONBA_PTR_GET(user_, VirtualMFADevice::User) };
        inline VirtualMFADevice& setUser(const VirtualMFADevice::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
        inline VirtualMFADevice& setUser(VirtualMFADevice::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


      protected:
        // The time when the MFA device was activated.
        shared_ptr<string> activateDate_ {};
        // The serial number of the MFA device.
        shared_ptr<string> serialNumber_ {};
        // The information of the RAM user that has an MFA device bound.
        shared_ptr<VirtualMFADevice::User> user_ {};
      };

      virtual bool empty() const override { return this->virtualMFADevice_ == nullptr; };
      // virtualMFADevice Field Functions 
      bool hasVirtualMFADevice() const { return this->virtualMFADevice_ != nullptr;};
      void deleteVirtualMFADevice() { this->virtualMFADevice_ = nullptr;};
      inline const vector<VirtualMFADevices::VirtualMFADevice> & getVirtualMFADevice() const { DARABONBA_PTR_GET_CONST(virtualMFADevice_, vector<VirtualMFADevices::VirtualMFADevice>) };
      inline vector<VirtualMFADevices::VirtualMFADevice> getVirtualMFADevice() { DARABONBA_PTR_GET(virtualMFADevice_, vector<VirtualMFADevices::VirtualMFADevice>) };
      inline VirtualMFADevices& setVirtualMFADevice(const vector<VirtualMFADevices::VirtualMFADevice> & virtualMFADevice) { DARABONBA_PTR_SET_VALUE(virtualMFADevice_, virtualMFADevice) };
      inline VirtualMFADevices& setVirtualMFADevice(vector<VirtualMFADevices::VirtualMFADevice> && virtualMFADevice) { DARABONBA_PTR_SET_RVALUE(virtualMFADevice_, virtualMFADevice) };


    protected:
      shared_ptr<vector<VirtualMFADevices::VirtualMFADevice>> virtualMFADevice_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->marker_ == nullptr && this->requestId_ == nullptr && this->virtualMFADevices_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListVirtualMFADevicesResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListVirtualMFADevicesResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirtualMFADevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualMFADevices Field Functions 
    bool hasVirtualMFADevices() const { return this->virtualMFADevices_ != nullptr;};
    void deleteVirtualMFADevices() { this->virtualMFADevices_ = nullptr;};
    inline const ListVirtualMFADevicesResponseBody::VirtualMFADevices & getVirtualMFADevices() const { DARABONBA_PTR_GET_CONST(virtualMFADevices_, ListVirtualMFADevicesResponseBody::VirtualMFADevices) };
    inline ListVirtualMFADevicesResponseBody::VirtualMFADevices getVirtualMFADevices() { DARABONBA_PTR_GET(virtualMFADevices_, ListVirtualMFADevicesResponseBody::VirtualMFADevices) };
    inline ListVirtualMFADevicesResponseBody& setVirtualMFADevices(const ListVirtualMFADevicesResponseBody::VirtualMFADevices & virtualMFADevices) { DARABONBA_PTR_SET_VALUE(virtualMFADevices_, virtualMFADevices) };
    inline ListVirtualMFADevicesResponseBody& setVirtualMFADevices(ListVirtualMFADevicesResponseBody::VirtualMFADevices && virtualMFADevices) { DARABONBA_PTR_SET_RVALUE(virtualMFADevices_, virtualMFADevices) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // >  This parameter is returned only when `IsTruncated` is `true`.
    shared_ptr<string> marker_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the MFA device.
    shared_ptr<ListVirtualMFADevicesResponseBody::VirtualMFADevices> virtualMFADevices_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
