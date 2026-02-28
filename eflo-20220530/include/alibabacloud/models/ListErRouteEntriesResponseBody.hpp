// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTERROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTERROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListErRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListErRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListErRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListErRouteEntriesResponseBody() = default ;
    ListErRouteEntriesResponseBody(const ListErRouteEntriesResponseBody &) = default ;
    ListErRouteEntriesResponseBody(ListErRouteEntriesResponseBody &&) = default ;
    ListErRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListErRouteEntriesResponseBody() = default ;
    ListErRouteEntriesResponseBody& operator=(const ListErRouteEntriesResponseBody &) = default ;
    ListErRouteEntriesResponseBody& operator=(ListErRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(ErId, erId_);
          DARABONBA_PTR_TO_JSON(ErRouteEntryId, erRouteEntryId_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceTenantId, resourceTenantId_);
          DARABONBA_PTR_TO_JSON(RouteType, routeType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(ErId, erId_);
          DARABONBA_PTR_FROM_JSON(ErRouteEntryId, erRouteEntryId_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceTenantId, resourceTenantId_);
          DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->erId_ == nullptr && this->erRouteEntryId_ == nullptr && this->gmtModified_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceTenantId_ == nullptr && this->routeType_ == nullptr && this->status_ == nullptr
        && this->tenantId_ == nullptr; };
        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline Data& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // erId Field Functions 
        bool hasErId() const { return this->erId_ != nullptr;};
        void deleteErId() { this->erId_ = nullptr;};
        inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
        inline Data& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


        // erRouteEntryId Field Functions 
        bool hasErRouteEntryId() const { return this->erRouteEntryId_ != nullptr;};
        void deleteErRouteEntryId() { this->erRouteEntryId_ = nullptr;};
        inline string getErRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(erRouteEntryId_, "") };
        inline Data& setErRouteEntryId(string erRouteEntryId) { DARABONBA_PTR_SET_VALUE(erRouteEntryId_, erRouteEntryId) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // nextHopId Field Functions 
        bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
        void deleteNextHopId() { this->nextHopId_ = nullptr;};
        inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
        inline Data& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


        // nextHopType Field Functions 
        bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
        void deleteNextHopType() { this->nextHopType_ = nullptr;};
        inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
        inline Data& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceTenantId Field Functions 
        bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
        void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
        inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
        inline Data& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


        // routeType Field Functions 
        bool hasRouteType() const { return this->routeType_ != nullptr;};
        void deleteRouteType() { this->routeType_ = nullptr;};
        inline string getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
        inline Data& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


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
        // The ID of the tenant to which the resource belongs.
        shared_ptr<string> resourceTenantId_ {};
        // Route type
        shared_ptr<string> routeType_ {};
        // The task status. Valid values:
        // 
        // *   Synchronizing
        // *   Available
        shared_ptr<string> status_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->total_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Content::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Content::Data>) };
      inline vector<Content::Data> getData() { DARABONBA_PTR_GET(data_, vector<Content::Data>) };
      inline Content& setData(const vector<Content::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Content& setData(vector<Content::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Content& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Lingjun HUB Route Entry Information List
      shared_ptr<vector<Content::Data>> data_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListErRouteEntriesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListErRouteEntriesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListErRouteEntriesResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListErRouteEntriesResponseBody::Content) };
    inline ListErRouteEntriesResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListErRouteEntriesResponseBody::Content) };
    inline ListErRouteEntriesResponseBody& setContent(const ListErRouteEntriesResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListErRouteEntriesResponseBody& setContent(ListErRouteEntriesResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListErRouteEntriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListErRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<ListErRouteEntriesResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
