// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALBRIDGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALBRIDGESRESPONSEBODY_HPP_
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
  class ListVirtualBridgesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualBridgesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bridges, bridges_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualBridgesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bridges, bridges_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVirtualBridgesResponseBody() = default ;
    ListVirtualBridgesResponseBody(const ListVirtualBridgesResponseBody &) = default ;
    ListVirtualBridgesResponseBody(ListVirtualBridgesResponseBody &&) = default ;
    ListVirtualBridgesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualBridgesResponseBody() = default ;
    ListVirtualBridgesResponseBody& operator=(const ListVirtualBridgesResponseBody &) = default ;
    ListVirtualBridgesResponseBody& operator=(ListVirtualBridgesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bridges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bridges& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(BridgeId, bridgeId_);
        DARABONBA_PTR_TO_JSON(BridgeLevel, bridgeLevel_);
        DARABONBA_PTR_TO_JSON(BridgeStatus, bridgeStatus_);
        DARABONBA_PTR_TO_JSON(BridgeType, bridgeType_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(IntranetUrl, intranetUrl_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      };
      friend void from_json(const Darabonba::Json& j, Bridges& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(BridgeId, bridgeId_);
        DARABONBA_PTR_FROM_JSON(BridgeLevel, bridgeLevel_);
        DARABONBA_PTR_FROM_JSON(BridgeStatus, bridgeStatus_);
        DARABONBA_PTR_FROM_JSON(BridgeType, bridgeType_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(IntranetUrl, intranetUrl_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      };
      Bridges() = default ;
      Bridges(const Bridges &) = default ;
      Bridges(Bridges &&) = default ;
      Bridges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bridges() = default ;
      Bridges& operator=(const Bridges &) = default ;
      Bridges& operator=(Bridges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->bridgeId_ == nullptr && this->bridgeLevel_ == nullptr && this->bridgeStatus_ == nullptr && this->bridgeType_ == nullptr && this->expireTime_ == nullptr
        && this->intranetUrl_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline Bridges& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // bridgeId Field Functions 
      bool hasBridgeId() const { return this->bridgeId_ != nullptr;};
      void deleteBridgeId() { this->bridgeId_ = nullptr;};
      inline string getBridgeId() const { DARABONBA_PTR_GET_DEFAULT(bridgeId_, "") };
      inline Bridges& setBridgeId(string bridgeId) { DARABONBA_PTR_SET_VALUE(bridgeId_, bridgeId) };


      // bridgeLevel Field Functions 
      bool hasBridgeLevel() const { return this->bridgeLevel_ != nullptr;};
      void deleteBridgeLevel() { this->bridgeLevel_ = nullptr;};
      inline string getBridgeLevel() const { DARABONBA_PTR_GET_DEFAULT(bridgeLevel_, "") };
      inline Bridges& setBridgeLevel(string bridgeLevel) { DARABONBA_PTR_SET_VALUE(bridgeLevel_, bridgeLevel) };


      // bridgeStatus Field Functions 
      bool hasBridgeStatus() const { return this->bridgeStatus_ != nullptr;};
      void deleteBridgeStatus() { this->bridgeStatus_ = nullptr;};
      inline string getBridgeStatus() const { DARABONBA_PTR_GET_DEFAULT(bridgeStatus_, "") };
      inline Bridges& setBridgeStatus(string bridgeStatus) { DARABONBA_PTR_SET_VALUE(bridgeStatus_, bridgeStatus) };


      // bridgeType Field Functions 
      bool hasBridgeType() const { return this->bridgeType_ != nullptr;};
      void deleteBridgeType() { this->bridgeType_ = nullptr;};
      inline string getBridgeType() const { DARABONBA_PTR_GET_DEFAULT(bridgeType_, "") };
      inline Bridges& setBridgeType(string bridgeType) { DARABONBA_PTR_SET_VALUE(bridgeType_, bridgeType) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Bridges& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // intranetUrl Field Functions 
      bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
      void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
      inline string getIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
      inline Bridges& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Bridges& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline Bridges& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


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
      // The expiration time. The time is in the ISO 8601 standard in the UTC format: yyyy-MM-ddTHH:mm:ssZ.
      shared_ptr<string> expireTime_ {};
      // The internal network address.
      shared_ptr<string> intranetUrl_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The office network name.
      shared_ptr<string> officeSiteName_ {};
    };

    virtual bool empty() const override { return this->bridges_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // bridges Field Functions 
    bool hasBridges() const { return this->bridges_ != nullptr;};
    void deleteBridges() { this->bridges_ = nullptr;};
    inline const vector<ListVirtualBridgesResponseBody::Bridges> & getBridges() const { DARABONBA_PTR_GET_CONST(bridges_, vector<ListVirtualBridgesResponseBody::Bridges>) };
    inline vector<ListVirtualBridgesResponseBody::Bridges> getBridges() { DARABONBA_PTR_GET(bridges_, vector<ListVirtualBridgesResponseBody::Bridges>) };
    inline ListVirtualBridgesResponseBody& setBridges(const vector<ListVirtualBridgesResponseBody::Bridges> & bridges) { DARABONBA_PTR_SET_VALUE(bridges_, bridges) };
    inline ListVirtualBridgesResponseBody& setBridges(vector<ListVirtualBridgesResponseBody::Bridges> && bridges) { DARABONBA_PTR_SET_RVALUE(bridges_, bridges) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVirtualBridgesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVirtualBridgesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirtualBridgesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The virtual bridge information.
    shared_ptr<vector<ListVirtualBridgesResponseBody::Bridges>> bridges_ {};
    // The maximum number of entries returned. Valid values: 1 to 100. If this parameter is not specified, the default value 100 is used. The number of returned entries can be less than but cannot be greater than the specified number.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
