// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITEBRIDGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITEBRIDGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOfficeSiteBridgeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSiteBridgeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bridge, bridge_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSiteBridgeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bridge, bridge_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOfficeSiteBridgeInfoResponseBody() = default ;
    DescribeOfficeSiteBridgeInfoResponseBody(const DescribeOfficeSiteBridgeInfoResponseBody &) = default ;
    DescribeOfficeSiteBridgeInfoResponseBody(DescribeOfficeSiteBridgeInfoResponseBody &&) = default ;
    DescribeOfficeSiteBridgeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSiteBridgeInfoResponseBody() = default ;
    DescribeOfficeSiteBridgeInfoResponseBody& operator=(const DescribeOfficeSiteBridgeInfoResponseBody &) = default ;
    DescribeOfficeSiteBridgeInfoResponseBody& operator=(DescribeOfficeSiteBridgeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bridge : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bridge& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(BridgeId, bridgeId_);
        DARABONBA_PTR_TO_JSON(BridgeLevel, bridgeLevel_);
        DARABONBA_PTR_TO_JSON(BridgeStatus, bridgeStatus_);
        DARABONBA_PTR_TO_JSON(BridgeType, bridgeType_);
        DARABONBA_PTR_TO_JSON(DefaultPassword, defaultPassword_);
        DARABONBA_PTR_TO_JSON(DefaultUser, defaultUser_);
        DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InternetUrl, internetUrl_);
        DARABONBA_PTR_TO_JSON(IntranetUrl, intranetUrl_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Bridge& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(BridgeId, bridgeId_);
        DARABONBA_PTR_FROM_JSON(BridgeLevel, bridgeLevel_);
        DARABONBA_PTR_FROM_JSON(BridgeStatus, bridgeStatus_);
        DARABONBA_PTR_FROM_JSON(BridgeType, bridgeType_);
        DARABONBA_PTR_FROM_JSON(DefaultPassword, defaultPassword_);
        DARABONBA_PTR_FROM_JSON(DefaultUser, defaultUser_);
        DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InternetUrl, internetUrl_);
        DARABONBA_PTR_FROM_JSON(IntranetUrl, intranetUrl_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Bridge() = default ;
      Bridge(const Bridge &) = default ;
      Bridge(Bridge &&) = default ;
      Bridge(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bridge() = default ;
      Bridge& operator=(const Bridge &) = default ;
      Bridge& operator=(Bridge &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->bridgeId_ == nullptr && this->bridgeLevel_ == nullptr && this->bridgeStatus_ == nullptr && this->bridgeType_ == nullptr && this->defaultPassword_ == nullptr
        && this->defaultUser_ == nullptr && this->deployTime_ == nullptr && this->expireTime_ == nullptr && this->internetUrl_ == nullptr && this->intranetUrl_ == nullptr
        && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->startTime_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline Bridge& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // bridgeId Field Functions 
      bool hasBridgeId() const { return this->bridgeId_ != nullptr;};
      void deleteBridgeId() { this->bridgeId_ = nullptr;};
      inline string getBridgeId() const { DARABONBA_PTR_GET_DEFAULT(bridgeId_, "") };
      inline Bridge& setBridgeId(string bridgeId) { DARABONBA_PTR_SET_VALUE(bridgeId_, bridgeId) };


      // bridgeLevel Field Functions 
      bool hasBridgeLevel() const { return this->bridgeLevel_ != nullptr;};
      void deleteBridgeLevel() { this->bridgeLevel_ = nullptr;};
      inline string getBridgeLevel() const { DARABONBA_PTR_GET_DEFAULT(bridgeLevel_, "") };
      inline Bridge& setBridgeLevel(string bridgeLevel) { DARABONBA_PTR_SET_VALUE(bridgeLevel_, bridgeLevel) };


      // bridgeStatus Field Functions 
      bool hasBridgeStatus() const { return this->bridgeStatus_ != nullptr;};
      void deleteBridgeStatus() { this->bridgeStatus_ = nullptr;};
      inline string getBridgeStatus() const { DARABONBA_PTR_GET_DEFAULT(bridgeStatus_, "") };
      inline Bridge& setBridgeStatus(string bridgeStatus) { DARABONBA_PTR_SET_VALUE(bridgeStatus_, bridgeStatus) };


      // bridgeType Field Functions 
      bool hasBridgeType() const { return this->bridgeType_ != nullptr;};
      void deleteBridgeType() { this->bridgeType_ = nullptr;};
      inline string getBridgeType() const { DARABONBA_PTR_GET_DEFAULT(bridgeType_, "") };
      inline Bridge& setBridgeType(string bridgeType) { DARABONBA_PTR_SET_VALUE(bridgeType_, bridgeType) };


      // defaultPassword Field Functions 
      bool hasDefaultPassword() const { return this->defaultPassword_ != nullptr;};
      void deleteDefaultPassword() { this->defaultPassword_ = nullptr;};
      inline string getDefaultPassword() const { DARABONBA_PTR_GET_DEFAULT(defaultPassword_, "") };
      inline Bridge& setDefaultPassword(string defaultPassword) { DARABONBA_PTR_SET_VALUE(defaultPassword_, defaultPassword) };


      // defaultUser Field Functions 
      bool hasDefaultUser() const { return this->defaultUser_ != nullptr;};
      void deleteDefaultUser() { this->defaultUser_ = nullptr;};
      inline string getDefaultUser() const { DARABONBA_PTR_GET_DEFAULT(defaultUser_, "") };
      inline Bridge& setDefaultUser(string defaultUser) { DARABONBA_PTR_SET_VALUE(defaultUser_, defaultUser) };


      // deployTime Field Functions 
      bool hasDeployTime() const { return this->deployTime_ != nullptr;};
      void deleteDeployTime() { this->deployTime_ = nullptr;};
      inline string getDeployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, "") };
      inline Bridge& setDeployTime(string deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Bridge& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // internetUrl Field Functions 
      bool hasInternetUrl() const { return this->internetUrl_ != nullptr;};
      void deleteInternetUrl() { this->internetUrl_ = nullptr;};
      inline string getInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(internetUrl_, "") };
      inline Bridge& setInternetUrl(string internetUrl) { DARABONBA_PTR_SET_VALUE(internetUrl_, internetUrl) };


      // intranetUrl Field Functions 
      bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
      void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
      inline string getIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
      inline Bridge& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Bridge& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline Bridge& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Bridge& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The access type of the management page.
      shared_ptr<string> accessType_ {};
      // The virtual bridge ID.
      shared_ptr<string> bridgeId_ {};
      // The virtual bridge specifications.
      shared_ptr<string> bridgeLevel_ {};
      // The virtual bridge status.
      shared_ptr<string> bridgeStatus_ {};
      // The third-party plugin type of the virtual bridge.
      shared_ptr<string> bridgeType_ {};
      // The default password for the administrator page.
      shared_ptr<string> defaultPassword_ {};
      // The default account for the administrator page.
      shared_ptr<string> defaultUser_ {};
      // The deployment time of the virtual bridge. The time is in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> deployTime_ {};
      // The expiration time of the virtual bridge. The time is in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> expireTime_ {};
      // The public network address.
      shared_ptr<string> internetUrl_ {};
      // The internal network address.
      shared_ptr<string> intranetUrl_ {};
      // The ID of the locked convenience office network.
      shared_ptr<string> officeSiteId_ {};
      // The office network name. The name must be 2 to 255 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). The name must start with a letter or Chinese character and cannot start with `http://` or `https://`.
      shared_ptr<string> officeSiteName_ {};
      // The start time of the virtual bridge. The time is in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->bridge_ == nullptr
        && this->requestId_ == nullptr; };
    // bridge Field Functions 
    bool hasBridge() const { return this->bridge_ != nullptr;};
    void deleteBridge() { this->bridge_ = nullptr;};
    inline const DescribeOfficeSiteBridgeInfoResponseBody::Bridge & getBridge() const { DARABONBA_PTR_GET_CONST(bridge_, DescribeOfficeSiteBridgeInfoResponseBody::Bridge) };
    inline DescribeOfficeSiteBridgeInfoResponseBody::Bridge getBridge() { DARABONBA_PTR_GET(bridge_, DescribeOfficeSiteBridgeInfoResponseBody::Bridge) };
    inline DescribeOfficeSiteBridgeInfoResponseBody& setBridge(const DescribeOfficeSiteBridgeInfoResponseBody::Bridge & bridge) { DARABONBA_PTR_SET_VALUE(bridge_, bridge) };
    inline DescribeOfficeSiteBridgeInfoResponseBody& setBridge(DescribeOfficeSiteBridgeInfoResponseBody::Bridge && bridge) { DARABONBA_PTR_SET_RVALUE(bridge_, bridge) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOfficeSiteBridgeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The virtual bridge information.
    shared_ptr<DescribeOfficeSiteBridgeInfoResponseBody::Bridge> bridge_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
