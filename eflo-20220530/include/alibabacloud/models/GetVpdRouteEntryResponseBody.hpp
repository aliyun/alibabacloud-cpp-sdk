// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPDROUTEENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPDROUTEENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVpdRouteEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpdRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpdRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVpdRouteEntryResponseBody() = default ;
    GetVpdRouteEntryResponseBody(const GetVpdRouteEntryResponseBody &) = default ;
    GetVpdRouteEntryResponseBody(GetVpdRouteEntryResponseBody &&) = default ;
    GetVpdRouteEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpdRouteEntryResponseBody() = default ;
    GetVpdRouteEntryResponseBody& operator=(const GetVpdRouteEntryResponseBody &) = default ;
    GetVpdRouteEntryResponseBody& operator=(GetVpdRouteEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RouteType, routeType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
        DARABONBA_PTR_TO_JSON(VpdRouteEntryId, vpdRouteEntryId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
        DARABONBA_PTR_FROM_JSON(VpdRouteEntryId, vpdRouteEntryId_);
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
        && this->gmtModified_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->routeType_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->vpdId_ == nullptr && this->vpdRouteEntryId_ == nullptr; };
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


      // vpdId Field Functions 
      bool hasVpdId() const { return this->vpdId_ != nullptr;};
      void deleteVpdId() { this->vpdId_ = nullptr;};
      inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
      inline Content& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


      // vpdRouteEntryId Field Functions 
      bool hasVpdRouteEntryId() const { return this->vpdRouteEntryId_ != nullptr;};
      void deleteVpdRouteEntryId() { this->vpdRouteEntryId_ = nullptr;};
      inline string getVpdRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(vpdRouteEntryId_, "") };
      inline Content& setVpdRouteEntryId(string vpdRouteEntryId) { DARABONBA_PTR_SET_VALUE(vpdRouteEntryId_, vpdRouteEntryId) };


    protected:
      // Destination CIDR block
      shared_ptr<string> destinationCidrBlock_ {};
      // The time when the agent was last modified.
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
      // Lingjun CIDR block instance ID
      shared_ptr<string> vpdId_ {};
      // Lingjun CIDR block route entry ID
      shared_ptr<string> vpdRouteEntryId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetVpdRouteEntryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetVpdRouteEntryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetVpdRouteEntryResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetVpdRouteEntryResponseBody::Content) };
    inline GetVpdRouteEntryResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetVpdRouteEntryResponseBody::Content) };
    inline GetVpdRouteEntryResponseBody& setContent(const GetVpdRouteEntryResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetVpdRouteEntryResponseBody& setContent(GetVpdRouteEntryResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVpdRouteEntryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpdRouteEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetVpdRouteEntryResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
