// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERROUTEENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERROUTEENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErRouteEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetErRouteEntryResponseBody() = default ;
    GetErRouteEntryResponseBody(const GetErRouteEntryResponseBody &) = default ;
    GetErRouteEntryResponseBody(GetErRouteEntryResponseBody &&) = default ;
    GetErRouteEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErRouteEntryResponseBody() = default ;
    GetErRouteEntryResponseBody& operator=(const GetErRouteEntryResponseBody &) = default ;
    GetErRouteEntryResponseBody& operator=(GetErRouteEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(ErId, erId_);
        DARABONBA_PTR_TO_JSON(ErRouteEntryId, erRouteEntryId_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RouteType, routeType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(ErId, erId_);
        DARABONBA_PTR_FROM_JSON(ErRouteEntryId, erRouteEntryId_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
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
        && this->erId_ == nullptr && this->erRouteEntryId_ == nullptr && this->gmtModified_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeType_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr; };
      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline Content& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // erId Field Functions 
      bool hasErId() const { return this->erId_ != nullptr;};
      void deleteErId() { this->erId_ = nullptr;};
      inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
      inline Content& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


      // erRouteEntryId Field Functions 
      bool hasErRouteEntryId() const { return this->erRouteEntryId_ != nullptr;};
      void deleteErRouteEntryId() { this->erRouteEntryId_ = nullptr;};
      inline string getErRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(erRouteEntryId_, "") };
      inline Content& setErRouteEntryId(string erRouteEntryId) { DARABONBA_PTR_SET_VALUE(erRouteEntryId_, erRouteEntryId) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


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


    protected:
      // Destination CIDR Block
      shared_ptr<string> destinationCidrBlock_ {};
      // Lingjun HUB Instance ID
      shared_ptr<string> erId_ {};
      // The ID of the route entry.
      shared_ptr<string> erRouteEntryId_ {};
      // The time when the cluster was updated.
      shared_ptr<string> gmtModified_ {};
      // Next Hop Instance
      shared_ptr<string> nextHopId_ {};
      // Next Hop Instance Type
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
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetErRouteEntryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetErRouteEntryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetErRouteEntryResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetErRouteEntryResponseBody::Content) };
    inline GetErRouteEntryResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetErRouteEntryResponseBody::Content) };
    inline GetErRouteEntryResponseBody& setContent(const GetErRouteEntryResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetErRouteEntryResponseBody& setContent(GetErRouteEntryResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErRouteEntryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErRouteEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<GetErRouteEntryResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
