// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeMfaDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMfaDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MfaDevices, mfaDevices_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMfaDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MfaDevices, mfaDevices_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMfaDevicesResponseBody() = default ;
    DescribeMfaDevicesResponseBody(const DescribeMfaDevicesResponseBody &) = default ;
    DescribeMfaDevicesResponseBody(DescribeMfaDevicesResponseBody &&) = default ;
    DescribeMfaDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMfaDevicesResponseBody() = default ;
    DescribeMfaDevicesResponseBody& operator=(const DescribeMfaDevicesResponseBody &) = default ;
    DescribeMfaDevicesResponseBody& operator=(DescribeMfaDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MfaDevices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MfaDevices& obj) { 
        DARABONBA_PTR_TO_JSON(AdUser, adUser_);
        DARABONBA_PTR_TO_JSON(ConsecutiveFails, consecutiveFails_);
        DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(GmtEnabled, gmtEnabled_);
        DARABONBA_PTR_TO_JSON(GmtUnlock, gmtUnlock_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, MfaDevices& obj) { 
        DARABONBA_PTR_FROM_JSON(AdUser, adUser_);
        DARABONBA_PTR_FROM_JSON(ConsecutiveFails, consecutiveFails_);
        DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(GmtEnabled, gmtEnabled_);
        DARABONBA_PTR_FROM_JSON(GmtUnlock, gmtUnlock_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      MfaDevices() = default ;
      MfaDevices(const MfaDevices &) = default ;
      MfaDevices(MfaDevices &&) = default ;
      MfaDevices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MfaDevices() = default ;
      MfaDevices& operator=(const MfaDevices &) = default ;
      MfaDevices& operator=(MfaDevices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdUser : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdUser& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(DisplayNameNew, displayNameNew_);
          DARABONBA_PTR_TO_JSON(EndUser, endUser_);
          DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
        };
        friend void from_json(const Darabonba::Json& j, AdUser& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(DisplayNameNew, displayNameNew_);
          DARABONBA_PTR_FROM_JSON(EndUser, endUser_);
          DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
        };
        AdUser() = default ;
        AdUser(const AdUser &) = default ;
        AdUser(AdUser &&) = default ;
        AdUser(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdUser() = default ;
        AdUser& operator=(const AdUser &) = default ;
        AdUser& operator=(AdUser &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->displayNameNew_ == nullptr && this->endUser_ == nullptr && this->userPrincipalName_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline AdUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // displayNameNew Field Functions 
        bool hasDisplayNameNew() const { return this->displayNameNew_ != nullptr;};
        void deleteDisplayNameNew() { this->displayNameNew_ = nullptr;};
        inline string getDisplayNameNew() const { DARABONBA_PTR_GET_DEFAULT(displayNameNew_, "") };
        inline AdUser& setDisplayNameNew(string displayNameNew) { DARABONBA_PTR_SET_VALUE(displayNameNew_, displayNameNew) };


        // endUser Field Functions 
        bool hasEndUser() const { return this->endUser_ != nullptr;};
        void deleteEndUser() { this->endUser_ = nullptr;};
        inline string getEndUser() const { DARABONBA_PTR_GET_DEFAULT(endUser_, "") };
        inline AdUser& setEndUser(string endUser) { DARABONBA_PTR_SET_VALUE(endUser_, endUser) };


        // userPrincipalName Field Functions 
        bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
        void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
        inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
        inline AdUser& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> displayNameNew_ {};
        shared_ptr<string> endUser_ {};
        shared_ptr<string> userPrincipalName_ {};
      };

      virtual bool empty() const override { return this->adUser_ == nullptr
        && this->consecutiveFails_ == nullptr && this->deviceType_ == nullptr && this->email_ == nullptr && this->endUserId_ == nullptr && this->gmtEnabled_ == nullptr
        && this->gmtUnlock_ == nullptr && this->id_ == nullptr && this->serialNumber_ == nullptr && this->status_ == nullptr; };
      // adUser Field Functions 
      bool hasAdUser() const { return this->adUser_ != nullptr;};
      void deleteAdUser() { this->adUser_ = nullptr;};
      inline const MfaDevices::AdUser & getAdUser() const { DARABONBA_PTR_GET_CONST(adUser_, MfaDevices::AdUser) };
      inline MfaDevices::AdUser getAdUser() { DARABONBA_PTR_GET(adUser_, MfaDevices::AdUser) };
      inline MfaDevices& setAdUser(const MfaDevices::AdUser & adUser) { DARABONBA_PTR_SET_VALUE(adUser_, adUser) };
      inline MfaDevices& setAdUser(MfaDevices::AdUser && adUser) { DARABONBA_PTR_SET_RVALUE(adUser_, adUser) };


      // consecutiveFails Field Functions 
      bool hasConsecutiveFails() const { return this->consecutiveFails_ != nullptr;};
      void deleteConsecutiveFails() { this->consecutiveFails_ = nullptr;};
      inline int32_t getConsecutiveFails() const { DARABONBA_PTR_GET_DEFAULT(consecutiveFails_, 0) };
      inline MfaDevices& setConsecutiveFails(int32_t consecutiveFails) { DARABONBA_PTR_SET_VALUE(consecutiveFails_, consecutiveFails) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline MfaDevices& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline MfaDevices& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline MfaDevices& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // gmtEnabled Field Functions 
      bool hasGmtEnabled() const { return this->gmtEnabled_ != nullptr;};
      void deleteGmtEnabled() { this->gmtEnabled_ = nullptr;};
      inline string getGmtEnabled() const { DARABONBA_PTR_GET_DEFAULT(gmtEnabled_, "") };
      inline MfaDevices& setGmtEnabled(string gmtEnabled) { DARABONBA_PTR_SET_VALUE(gmtEnabled_, gmtEnabled) };


      // gmtUnlock Field Functions 
      bool hasGmtUnlock() const { return this->gmtUnlock_ != nullptr;};
      void deleteGmtUnlock() { this->gmtUnlock_ = nullptr;};
      inline string getGmtUnlock() const { DARABONBA_PTR_GET_DEFAULT(gmtUnlock_, "") };
      inline MfaDevices& setGmtUnlock(string gmtUnlock) { DARABONBA_PTR_SET_VALUE(gmtUnlock_, gmtUnlock) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline MfaDevices& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline MfaDevices& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MfaDevices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<MfaDevices::AdUser> adUser_ {};
      // The number of consecutive failures to bind the virtual MFA device, or the number of authentication failures based on the virtual MFA device.
      shared_ptr<int32_t> consecutiveFails_ {};
      // The type of the virtual MFA device. The value can only be `TOTP_VIRTUAL`. This value indicates that the virtual MFA device follows the Time-based One-time Password (TOTP) algorithm.
      shared_ptr<string> deviceType_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> email_ {};
      // The username of the convenience account that uses the virtual MFA device.
      shared_ptr<string> endUserId_ {};
      // The time when the virtual MFA device was enabled. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> gmtEnabled_ {};
      // The time when the locked virtual MFA device was automatically unlocked. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> gmtUnlock_ {};
      // The ID of the virtual MFA device.
      shared_ptr<int64_t> id_ {};
      // The serial number of the virtual MFA device.
      shared_ptr<string> serialNumber_ {};
      // The status of the virtual MFA device.
      // 
      // Valid values:
      // 
      // *   LOCKED
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   UNBOUND
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NORMAL
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->mfaDevices_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // mfaDevices Field Functions 
    bool hasMfaDevices() const { return this->mfaDevices_ != nullptr;};
    void deleteMfaDevices() { this->mfaDevices_ = nullptr;};
    inline const vector<DescribeMfaDevicesResponseBody::MfaDevices> & getMfaDevices() const { DARABONBA_PTR_GET_CONST(mfaDevices_, vector<DescribeMfaDevicesResponseBody::MfaDevices>) };
    inline vector<DescribeMfaDevicesResponseBody::MfaDevices> getMfaDevices() { DARABONBA_PTR_GET(mfaDevices_, vector<DescribeMfaDevicesResponseBody::MfaDevices>) };
    inline DescribeMfaDevicesResponseBody& setMfaDevices(const vector<DescribeMfaDevicesResponseBody::MfaDevices> & mfaDevices) { DARABONBA_PTR_SET_VALUE(mfaDevices_, mfaDevices) };
    inline DescribeMfaDevicesResponseBody& setMfaDevices(vector<DescribeMfaDevicesResponseBody::MfaDevices> && mfaDevices) { DARABONBA_PTR_SET_RVALUE(mfaDevices_, mfaDevices) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMfaDevicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMfaDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the virtual MFA devices.
    shared_ptr<vector<DescribeMfaDevicesResponseBody::MfaDevices>> mfaDevices_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
