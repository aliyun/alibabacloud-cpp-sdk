// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESRESPONSEBODY_HPP_
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
  class DescribeVirtualMFADevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualMFADevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualMFADevices, virtualMFADevices_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualMFADevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualMFADevices, virtualMFADevices_);
    };
    DescribeVirtualMFADevicesResponseBody() = default ;
    DescribeVirtualMFADevicesResponseBody(const DescribeVirtualMFADevicesResponseBody &) = default ;
    DescribeVirtualMFADevicesResponseBody(DescribeVirtualMFADevicesResponseBody &&) = default ;
    DescribeVirtualMFADevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualMFADevicesResponseBody() = default ;
    DescribeVirtualMFADevicesResponseBody& operator=(const DescribeVirtualMFADevicesResponseBody &) = default ;
    DescribeVirtualMFADevicesResponseBody& operator=(DescribeVirtualMFADevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualMFADevices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualMFADevices& obj) { 
        DARABONBA_PTR_TO_JSON(AdUser, adUser_);
        DARABONBA_PTR_TO_JSON(ConsecutiveFails, consecutiveFails_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(GmtEnabled, gmtEnabled_);
        DARABONBA_PTR_TO_JSON(GmtUnlock, gmtUnlock_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualMFADevices& obj) { 
        DARABONBA_PTR_FROM_JSON(AdUser, adUser_);
        DARABONBA_PTR_FROM_JSON(ConsecutiveFails, consecutiveFails_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(GmtEnabled, gmtEnabled_);
        DARABONBA_PTR_FROM_JSON(GmtUnlock, gmtUnlock_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
        && this->consecutiveFails_ == nullptr && this->directoryId_ == nullptr && this->endUserId_ == nullptr && this->gmtEnabled_ == nullptr && this->gmtUnlock_ == nullptr
        && this->officeSiteId_ == nullptr && this->serialNumber_ == nullptr && this->status_ == nullptr; };
      // adUser Field Functions 
      bool hasAdUser() const { return this->adUser_ != nullptr;};
      void deleteAdUser() { this->adUser_ = nullptr;};
      inline const VirtualMFADevices::AdUser & getAdUser() const { DARABONBA_PTR_GET_CONST(adUser_, VirtualMFADevices::AdUser) };
      inline VirtualMFADevices::AdUser getAdUser() { DARABONBA_PTR_GET(adUser_, VirtualMFADevices::AdUser) };
      inline VirtualMFADevices& setAdUser(const VirtualMFADevices::AdUser & adUser) { DARABONBA_PTR_SET_VALUE(adUser_, adUser) };
      inline VirtualMFADevices& setAdUser(VirtualMFADevices::AdUser && adUser) { DARABONBA_PTR_SET_RVALUE(adUser_, adUser) };


      // consecutiveFails Field Functions 
      bool hasConsecutiveFails() const { return this->consecutiveFails_ != nullptr;};
      void deleteConsecutiveFails() { this->consecutiveFails_ = nullptr;};
      inline int32_t getConsecutiveFails() const { DARABONBA_PTR_GET_DEFAULT(consecutiveFails_, 0) };
      inline VirtualMFADevices& setConsecutiveFails(int32_t consecutiveFails) { DARABONBA_PTR_SET_VALUE(consecutiveFails_, consecutiveFails) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline VirtualMFADevices& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline VirtualMFADevices& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // gmtEnabled Field Functions 
      bool hasGmtEnabled() const { return this->gmtEnabled_ != nullptr;};
      void deleteGmtEnabled() { this->gmtEnabled_ = nullptr;};
      inline string getGmtEnabled() const { DARABONBA_PTR_GET_DEFAULT(gmtEnabled_, "") };
      inline VirtualMFADevices& setGmtEnabled(string gmtEnabled) { DARABONBA_PTR_SET_VALUE(gmtEnabled_, gmtEnabled) };


      // gmtUnlock Field Functions 
      bool hasGmtUnlock() const { return this->gmtUnlock_ != nullptr;};
      void deleteGmtUnlock() { this->gmtUnlock_ = nullptr;};
      inline string getGmtUnlock() const { DARABONBA_PTR_GET_DEFAULT(gmtUnlock_, "") };
      inline VirtualMFADevices& setGmtUnlock(string gmtUnlock) { DARABONBA_PTR_SET_VALUE(gmtUnlock_, gmtUnlock) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline VirtualMFADevices& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline VirtualMFADevices& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VirtualMFADevices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<VirtualMFADevices::AdUser> adUser_ {};
      // The number of consecutive failures to bind the virtual MFA device, or the number of failures on the verification of the virtual MFA device.
      shared_ptr<int32_t> consecutiveFails_ {};
      // > This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> directoryId_ {};
      // The name of the AD user who uses the virtual MFA device.
      shared_ptr<string> endUserId_ {};
      // The time when the virtual MFA device was started. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtEnabled_ {};
      // The time when a locked virtual MFA device was automatically unlocked. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtUnlock_ {};
      // The ID of the workspace.
      shared_ptr<string> officeSiteId_ {};
      // The serial number of the virtual MFA device, which is a unique identifier.
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

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->virtualMFADevices_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVirtualMFADevicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualMFADevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualMFADevices Field Functions 
    bool hasVirtualMFADevices() const { return this->virtualMFADevices_ != nullptr;};
    void deleteVirtualMFADevices() { this->virtualMFADevices_ = nullptr;};
    inline const vector<DescribeVirtualMFADevicesResponseBody::VirtualMFADevices> & getVirtualMFADevices() const { DARABONBA_PTR_GET_CONST(virtualMFADevices_, vector<DescribeVirtualMFADevicesResponseBody::VirtualMFADevices>) };
    inline vector<DescribeVirtualMFADevicesResponseBody::VirtualMFADevices> getVirtualMFADevices() { DARABONBA_PTR_GET(virtualMFADevices_, vector<DescribeVirtualMFADevicesResponseBody::VirtualMFADevices>) };
    inline DescribeVirtualMFADevicesResponseBody& setVirtualMFADevices(const vector<DescribeVirtualMFADevicesResponseBody::VirtualMFADevices> & virtualMFADevices) { DARABONBA_PTR_SET_VALUE(virtualMFADevices_, virtualMFADevices) };
    inline DescribeVirtualMFADevicesResponseBody& setVirtualMFADevices(vector<DescribeVirtualMFADevicesResponseBody::VirtualMFADevices> && virtualMFADevices) { DARABONBA_PTR_SET_RVALUE(virtualMFADevices_, virtualMFADevices) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details of the virtual MFA devices.
    shared_ptr<vector<DescribeVirtualMFADevicesResponseBody::VirtualMFADevices>> virtualMFADevices_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
