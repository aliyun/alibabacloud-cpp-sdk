// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCROUTEENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVCCROUTEENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccRouteEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVccRouteEntryResponseBody() = default ;
    GetVccRouteEntryResponseBody(const GetVccRouteEntryResponseBody &) = default ;
    GetVccRouteEntryResponseBody(GetVccRouteEntryResponseBody &&) = default ;
    GetVccRouteEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccRouteEntryResponseBody() = default ;
    GetVccRouteEntryResponseBody& operator=(const GetVccRouteEntryResponseBody &) = default ;
    GetVccRouteEntryResponseBody& operator=(GetVccRouteEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RouteType, routeType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(VccId, vccId_);
        DARABONBA_PTR_TO_JSON(VccRouteEntryId, vccRouteEntryId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(VccId, vccId_);
        DARABONBA_PTR_FROM_JSON(VccRouteEntryId, vccRouteEntryId_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->gmtModified_ == nullptr && this->message_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->routeType_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->vccId_ == nullptr
        && this->vccRouteEntryId_ == nullptr; };
      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline Content& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Content& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // nextHopId Field Functions 
      bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
      void deleteNextHopId() { this->nextHopId_ = nullptr;};
      inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
      inline Content& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


      // nextHopType Field Functions 
      bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
      void deleteNextHopType() { this->nextHopType_ = nullptr;};
      inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
      inline Content& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Content& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // routeType Field Functions 
      bool hasRouteType() const { return this->routeType_ != nullptr;};
      void deleteRouteType() { this->routeType_ = nullptr;};
      inline string getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
      inline Content& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Content& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // vccId Field Functions 
      bool hasVccId() const { return this->vccId_ != nullptr;};
      void deleteVccId() { this->vccId_ = nullptr;};
      inline string getVccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
      inline Content& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


      // vccRouteEntryId Field Functions 
      bool hasVccRouteEntryId() const { return this->vccRouteEntryId_ != nullptr;};
      void deleteVccRouteEntryId() { this->vccRouteEntryId_ = nullptr;};
      inline string getVccRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vccRouteEntryId_, "") };
      inline Content& setVccRouteEntryId(string vccRouteEntryId) { DARABONBA_PTR_SET_VALUE(vccRouteEntryId_, vccRouteEntryId) };


    protected:
      // Destination CIDR Block
      shared_ptr<string> destinationCidrBlock_ {};
      // The time when the agent was last modified.
      shared_ptr<string> gmtModified_ {};
      // The message that is returned.
      shared_ptr<string> message_ {};
      // Next Hop Instance
      shared_ptr<string> nextHopId_ {};
      // Next Hop Type
      shared_ptr<string> nextHopType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // Resource group instance ID
      shared_ptr<string> resourceGroupId_ {};
      // Route type
      shared_ptr<string> routeType_ {};
      // The status of the intervention entry. Valid value:
      shared_ptr<string> status_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
      // The ID of the Lingjun connection instance.
      shared_ptr<string> vccId_ {};
      // The ID of the route entry.
      shared_ptr<string> vccRouteEntryId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetVccRouteEntryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetVccRouteEntryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetVccRouteEntryResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetVccRouteEntryResponseBody::Content) };
    inline GetVccRouteEntryResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetVccRouteEntryResponseBody::Content) };
    inline GetVccRouteEntryResponseBody& setContent(const GetVccRouteEntryResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetVccRouteEntryResponseBody& setContent(GetVccRouteEntryResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVccRouteEntryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVccRouteEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetVccRouteEntryResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
