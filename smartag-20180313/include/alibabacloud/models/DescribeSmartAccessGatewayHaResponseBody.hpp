// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYHARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYHARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSmartAccessGatewayHaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmartAccessGatewayHaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDeviceId, backupDeviceId_);
      DARABONBA_PTR_TO_JSON(DeviceLevelBackupState, deviceLevelBackupState_);
      DARABONBA_PTR_TO_JSON(DeviceLevelBackupType, deviceLevelBackupType_);
      DARABONBA_PTR_TO_JSON(LinkBackupInfoList, linkBackupInfoList_);
      DARABONBA_PTR_TO_JSON(MainDeviceId, mainDeviceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmartAccessGatewayHaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDeviceId, backupDeviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceLevelBackupState, deviceLevelBackupState_);
      DARABONBA_PTR_FROM_JSON(DeviceLevelBackupType, deviceLevelBackupType_);
      DARABONBA_PTR_FROM_JSON(LinkBackupInfoList, linkBackupInfoList_);
      DARABONBA_PTR_FROM_JSON(MainDeviceId, mainDeviceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
    };
    DescribeSmartAccessGatewayHaResponseBody() = default ;
    DescribeSmartAccessGatewayHaResponseBody(const DescribeSmartAccessGatewayHaResponseBody &) = default ;
    DescribeSmartAccessGatewayHaResponseBody(DescribeSmartAccessGatewayHaResponseBody &&) = default ;
    DescribeSmartAccessGatewayHaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmartAccessGatewayHaResponseBody() = default ;
    DescribeSmartAccessGatewayHaResponseBody& operator=(const DescribeSmartAccessGatewayHaResponseBody &) = default ;
    DescribeSmartAccessGatewayHaResponseBody& operator=(DescribeSmartAccessGatewayHaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LinkBackupInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LinkBackupInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(LinkBackupInfoList, linkBackupInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, LinkBackupInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(LinkBackupInfoList, linkBackupInfoList_);
      };
      LinkBackupInfoList() = default ;
      LinkBackupInfoList(const LinkBackupInfoList &) = default ;
      LinkBackupInfoList(LinkBackupInfoList &&) = default ;
      LinkBackupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LinkBackupInfoList() = default ;
      LinkBackupInfoList& operator=(const LinkBackupInfoList &) = default ;
      LinkBackupInfoList& operator=(LinkBackupInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LinkBackupInfoListItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LinkBackupInfoListItem& obj) { 
          DARABONBA_PTR_TO_JSON(BackupLinkId, backupLinkId_);
          DARABONBA_PTR_TO_JSON(BackupLinkState, backupLinkState_);
          DARABONBA_PTR_TO_JSON(LinkLevelBackupState, linkLevelBackupState_);
          DARABONBA_PTR_TO_JSON(LinkLevelBackupType, linkLevelBackupType_);
          DARABONBA_PTR_TO_JSON(MainLinkId, mainLinkId_);
          DARABONBA_PTR_TO_JSON(MainLinkState, mainLinkState_);
        };
        friend void from_json(const Darabonba::Json& j, LinkBackupInfoListItem& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupLinkId, backupLinkId_);
          DARABONBA_PTR_FROM_JSON(BackupLinkState, backupLinkState_);
          DARABONBA_PTR_FROM_JSON(LinkLevelBackupState, linkLevelBackupState_);
          DARABONBA_PTR_FROM_JSON(LinkLevelBackupType, linkLevelBackupType_);
          DARABONBA_PTR_FROM_JSON(MainLinkId, mainLinkId_);
          DARABONBA_PTR_FROM_JSON(MainLinkState, mainLinkState_);
        };
        LinkBackupInfoListItem() = default ;
        LinkBackupInfoListItem(const LinkBackupInfoListItem &) = default ;
        LinkBackupInfoListItem(LinkBackupInfoListItem &&) = default ;
        LinkBackupInfoListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LinkBackupInfoListItem() = default ;
        LinkBackupInfoListItem& operator=(const LinkBackupInfoListItem &) = default ;
        LinkBackupInfoListItem& operator=(LinkBackupInfoListItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupLinkId_ == nullptr
        && this->backupLinkState_ == nullptr && this->linkLevelBackupState_ == nullptr && this->linkLevelBackupType_ == nullptr && this->mainLinkId_ == nullptr && this->mainLinkState_ == nullptr; };
        // backupLinkId Field Functions 
        bool hasBackupLinkId() const { return this->backupLinkId_ != nullptr;};
        void deleteBackupLinkId() { this->backupLinkId_ = nullptr;};
        inline string getBackupLinkId() const { DARABONBA_PTR_GET_DEFAULT(backupLinkId_, "") };
        inline LinkBackupInfoListItem& setBackupLinkId(string backupLinkId) { DARABONBA_PTR_SET_VALUE(backupLinkId_, backupLinkId) };


        // backupLinkState Field Functions 
        bool hasBackupLinkState() const { return this->backupLinkState_ != nullptr;};
        void deleteBackupLinkState() { this->backupLinkState_ = nullptr;};
        inline string getBackupLinkState() const { DARABONBA_PTR_GET_DEFAULT(backupLinkState_, "") };
        inline LinkBackupInfoListItem& setBackupLinkState(string backupLinkState) { DARABONBA_PTR_SET_VALUE(backupLinkState_, backupLinkState) };


        // linkLevelBackupState Field Functions 
        bool hasLinkLevelBackupState() const { return this->linkLevelBackupState_ != nullptr;};
        void deleteLinkLevelBackupState() { this->linkLevelBackupState_ = nullptr;};
        inline string getLinkLevelBackupState() const { DARABONBA_PTR_GET_DEFAULT(linkLevelBackupState_, "") };
        inline LinkBackupInfoListItem& setLinkLevelBackupState(string linkLevelBackupState) { DARABONBA_PTR_SET_VALUE(linkLevelBackupState_, linkLevelBackupState) };


        // linkLevelBackupType Field Functions 
        bool hasLinkLevelBackupType() const { return this->linkLevelBackupType_ != nullptr;};
        void deleteLinkLevelBackupType() { this->linkLevelBackupType_ = nullptr;};
        inline string getLinkLevelBackupType() const { DARABONBA_PTR_GET_DEFAULT(linkLevelBackupType_, "") };
        inline LinkBackupInfoListItem& setLinkLevelBackupType(string linkLevelBackupType) { DARABONBA_PTR_SET_VALUE(linkLevelBackupType_, linkLevelBackupType) };


        // mainLinkId Field Functions 
        bool hasMainLinkId() const { return this->mainLinkId_ != nullptr;};
        void deleteMainLinkId() { this->mainLinkId_ = nullptr;};
        inline string getMainLinkId() const { DARABONBA_PTR_GET_DEFAULT(mainLinkId_, "") };
        inline LinkBackupInfoListItem& setMainLinkId(string mainLinkId) { DARABONBA_PTR_SET_VALUE(mainLinkId_, mainLinkId) };


        // mainLinkState Field Functions 
        bool hasMainLinkState() const { return this->mainLinkState_ != nullptr;};
        void deleteMainLinkState() { this->mainLinkState_ = nullptr;};
        inline string getMainLinkState() const { DARABONBA_PTR_GET_DEFAULT(mainLinkState_, "") };
        inline LinkBackupInfoListItem& setMainLinkState(string mainLinkState) { DARABONBA_PTR_SET_VALUE(mainLinkState_, mainLinkState) };


      protected:
        shared_ptr<string> backupLinkId_ {};
        shared_ptr<string> backupLinkState_ {};
        shared_ptr<string> linkLevelBackupState_ {};
        shared_ptr<string> linkLevelBackupType_ {};
        shared_ptr<string> mainLinkId_ {};
        shared_ptr<string> mainLinkState_ {};
      };

      virtual bool empty() const override { return this->linkBackupInfoList_ == nullptr; };
      // linkBackupInfoList Field Functions 
      bool hasLinkBackupInfoList() const { return this->linkBackupInfoList_ != nullptr;};
      void deleteLinkBackupInfoList() { this->linkBackupInfoList_ = nullptr;};
      inline const vector<LinkBackupInfoList::LinkBackupInfoListItem> & getLinkBackupInfoList() const { DARABONBA_PTR_GET_CONST(linkBackupInfoList_, vector<LinkBackupInfoList::LinkBackupInfoListItem>) };
      inline vector<LinkBackupInfoList::LinkBackupInfoListItem> getLinkBackupInfoList() { DARABONBA_PTR_GET(linkBackupInfoList_, vector<LinkBackupInfoList::LinkBackupInfoListItem>) };
      inline LinkBackupInfoList& setLinkBackupInfoList(const vector<LinkBackupInfoList::LinkBackupInfoListItem> & linkBackupInfoList) { DARABONBA_PTR_SET_VALUE(linkBackupInfoList_, linkBackupInfoList) };
      inline LinkBackupInfoList& setLinkBackupInfoList(vector<LinkBackupInfoList::LinkBackupInfoListItem> && linkBackupInfoList) { DARABONBA_PTR_SET_RVALUE(linkBackupInfoList_, linkBackupInfoList) };


    protected:
      shared_ptr<vector<LinkBackupInfoList::LinkBackupInfoListItem>> linkBackupInfoList_ {};
    };

    virtual bool empty() const override { return this->backupDeviceId_ == nullptr
        && this->deviceLevelBackupState_ == nullptr && this->deviceLevelBackupType_ == nullptr && this->linkBackupInfoList_ == nullptr && this->mainDeviceId_ == nullptr && this->requestId_ == nullptr
        && this->smartAGId_ == nullptr; };
    // backupDeviceId Field Functions 
    bool hasBackupDeviceId() const { return this->backupDeviceId_ != nullptr;};
    void deleteBackupDeviceId() { this->backupDeviceId_ = nullptr;};
    inline string getBackupDeviceId() const { DARABONBA_PTR_GET_DEFAULT(backupDeviceId_, "") };
    inline DescribeSmartAccessGatewayHaResponseBody& setBackupDeviceId(string backupDeviceId) { DARABONBA_PTR_SET_VALUE(backupDeviceId_, backupDeviceId) };


    // deviceLevelBackupState Field Functions 
    bool hasDeviceLevelBackupState() const { return this->deviceLevelBackupState_ != nullptr;};
    void deleteDeviceLevelBackupState() { this->deviceLevelBackupState_ = nullptr;};
    inline string getDeviceLevelBackupState() const { DARABONBA_PTR_GET_DEFAULT(deviceLevelBackupState_, "") };
    inline DescribeSmartAccessGatewayHaResponseBody& setDeviceLevelBackupState(string deviceLevelBackupState) { DARABONBA_PTR_SET_VALUE(deviceLevelBackupState_, deviceLevelBackupState) };


    // deviceLevelBackupType Field Functions 
    bool hasDeviceLevelBackupType() const { return this->deviceLevelBackupType_ != nullptr;};
    void deleteDeviceLevelBackupType() { this->deviceLevelBackupType_ = nullptr;};
    inline string getDeviceLevelBackupType() const { DARABONBA_PTR_GET_DEFAULT(deviceLevelBackupType_, "") };
    inline DescribeSmartAccessGatewayHaResponseBody& setDeviceLevelBackupType(string deviceLevelBackupType) { DARABONBA_PTR_SET_VALUE(deviceLevelBackupType_, deviceLevelBackupType) };


    // linkBackupInfoList Field Functions 
    bool hasLinkBackupInfoList() const { return this->linkBackupInfoList_ != nullptr;};
    void deleteLinkBackupInfoList() { this->linkBackupInfoList_ = nullptr;};
    inline const DescribeSmartAccessGatewayHaResponseBody::LinkBackupInfoList & getLinkBackupInfoList() const { DARABONBA_PTR_GET_CONST(linkBackupInfoList_, DescribeSmartAccessGatewayHaResponseBody::LinkBackupInfoList) };
    inline DescribeSmartAccessGatewayHaResponseBody::LinkBackupInfoList getLinkBackupInfoList() { DARABONBA_PTR_GET(linkBackupInfoList_, DescribeSmartAccessGatewayHaResponseBody::LinkBackupInfoList) };
    inline DescribeSmartAccessGatewayHaResponseBody& setLinkBackupInfoList(const DescribeSmartAccessGatewayHaResponseBody::LinkBackupInfoList & linkBackupInfoList) { DARABONBA_PTR_SET_VALUE(linkBackupInfoList_, linkBackupInfoList) };
    inline DescribeSmartAccessGatewayHaResponseBody& setLinkBackupInfoList(DescribeSmartAccessGatewayHaResponseBody::LinkBackupInfoList && linkBackupInfoList) { DARABONBA_PTR_SET_RVALUE(linkBackupInfoList_, linkBackupInfoList) };


    // mainDeviceId Field Functions 
    bool hasMainDeviceId() const { return this->mainDeviceId_ != nullptr;};
    void deleteMainDeviceId() { this->mainDeviceId_ = nullptr;};
    inline string getMainDeviceId() const { DARABONBA_PTR_GET_DEFAULT(mainDeviceId_, "") };
    inline DescribeSmartAccessGatewayHaResponseBody& setMainDeviceId(string mainDeviceId) { DARABONBA_PTR_SET_VALUE(mainDeviceId_, mainDeviceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSmartAccessGatewayHaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DescribeSmartAccessGatewayHaResponseBody& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


  protected:
    // The serial number of the standby SAG device.
    shared_ptr<string> backupDeviceId_ {};
    // Indicates whether device-based HA is enabled. Valid values:
    // 
    // *   **ON**: enabled
    // *   **OFF**: disabled
    shared_ptr<string> deviceLevelBackupState_ {};
    // The deployment mode of the SAG devices that have HA enabled. Valid values:
    // 
    // *   **warm_backup**: active-active mode.
    // *   **cold_backup**: active-standby mode.
    // *   **no_backup**: HA is disabled.
    shared_ptr<string> deviceLevelBackupType_ {};
    shared_ptr<DescribeSmartAccessGatewayHaResponseBody::LinkBackupInfoList> linkBackupInfoList_ {};
    // The serial number of the active SAG device.
    shared_ptr<string> mainDeviceId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the SAG instance.
    shared_ptr<string> smartAGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
