// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTERROUTEMAPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTERROUTEMAPSRESPONSEBODY_HPP_
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
  class ListErRouteMapsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListErRouteMapsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListErRouteMapsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListErRouteMapsResponseBody() = default ;
    ListErRouteMapsResponseBody(const ListErRouteMapsResponseBody &) = default ;
    ListErRouteMapsResponseBody(ListErRouteMapsResponseBody &&) = default ;
    ListErRouteMapsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListErRouteMapsResponseBody() = default ;
    ListErRouteMapsResponseBody& operator=(const ListErRouteMapsResponseBody &) = default ;
    ListErRouteMapsResponseBody& operator=(ListErRouteMapsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(ErId, erId_);
          DARABONBA_PTR_TO_JSON(ErRouteMapId, erRouteMapId_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(ReceptionInstanceId, receptionInstanceId_);
          DARABONBA_PTR_TO_JSON(ReceptionInstanceName, receptionInstanceName_);
          DARABONBA_PTR_TO_JSON(ReceptionInstanceOwner, receptionInstanceOwner_);
          DARABONBA_PTR_TO_JSON(ReceptionInstanceType, receptionInstanceType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RouteMapNum, routeMapNum_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(TransmissionInstanceId, transmissionInstanceId_);
          DARABONBA_PTR_TO_JSON(TransmissionInstanceName, transmissionInstanceName_);
          DARABONBA_PTR_TO_JSON(TransmissionInstanceOwner, transmissionInstanceOwner_);
          DARABONBA_PTR_TO_JSON(TransmissionInstanceType, transmissionInstanceType_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(ErId, erId_);
          DARABONBA_PTR_FROM_JSON(ErRouteMapId, erRouteMapId_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(ReceptionInstanceId, receptionInstanceId_);
          DARABONBA_PTR_FROM_JSON(ReceptionInstanceName, receptionInstanceName_);
          DARABONBA_PTR_FROM_JSON(ReceptionInstanceOwner, receptionInstanceOwner_);
          DARABONBA_PTR_FROM_JSON(ReceptionInstanceType, receptionInstanceType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RouteMapNum, routeMapNum_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(TransmissionInstanceId, transmissionInstanceId_);
          DARABONBA_PTR_FROM_JSON(TransmissionInstanceName, transmissionInstanceName_);
          DARABONBA_PTR_FROM_JSON(TransmissionInstanceOwner, transmissionInstanceOwner_);
          DARABONBA_PTR_FROM_JSON(TransmissionInstanceType, transmissionInstanceType_);
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
        virtual bool empty() const override { return this->action_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->destinationCidrBlock_ == nullptr && this->erId_ == nullptr && this->erRouteMapId_ == nullptr
        && this->gmtModified_ == nullptr && this->message_ == nullptr && this->receptionInstanceId_ == nullptr && this->receptionInstanceName_ == nullptr && this->receptionInstanceOwner_ == nullptr
        && this->receptionInstanceType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeMapNum_ == nullptr && this->status_ == nullptr
        && this->tenantId_ == nullptr && this->transmissionInstanceId_ == nullptr && this->transmissionInstanceName_ == nullptr && this->transmissionInstanceOwner_ == nullptr && this->transmissionInstanceType_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Data& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


        // erRouteMapId Field Functions 
        bool hasErRouteMapId() const { return this->erRouteMapId_ != nullptr;};
        void deleteErRouteMapId() { this->erRouteMapId_ = nullptr;};
        inline string getErRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapId_, "") };
        inline Data& setErRouteMapId(string erRouteMapId) { DARABONBA_PTR_SET_VALUE(erRouteMapId_, erRouteMapId) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // receptionInstanceId Field Functions 
        bool hasReceptionInstanceId() const { return this->receptionInstanceId_ != nullptr;};
        void deleteReceptionInstanceId() { this->receptionInstanceId_ = nullptr;};
        inline string getReceptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceId_, "") };
        inline Data& setReceptionInstanceId(string receptionInstanceId) { DARABONBA_PTR_SET_VALUE(receptionInstanceId_, receptionInstanceId) };


        // receptionInstanceName Field Functions 
        bool hasReceptionInstanceName() const { return this->receptionInstanceName_ != nullptr;};
        void deleteReceptionInstanceName() { this->receptionInstanceName_ = nullptr;};
        inline string getReceptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceName_, "") };
        inline Data& setReceptionInstanceName(string receptionInstanceName) { DARABONBA_PTR_SET_VALUE(receptionInstanceName_, receptionInstanceName) };


        // receptionInstanceOwner Field Functions 
        bool hasReceptionInstanceOwner() const { return this->receptionInstanceOwner_ != nullptr;};
        void deleteReceptionInstanceOwner() { this->receptionInstanceOwner_ = nullptr;};
        inline string getReceptionInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceOwner_, "") };
        inline Data& setReceptionInstanceOwner(string receptionInstanceOwner) { DARABONBA_PTR_SET_VALUE(receptionInstanceOwner_, receptionInstanceOwner) };


        // receptionInstanceType Field Functions 
        bool hasReceptionInstanceType() const { return this->receptionInstanceType_ != nullptr;};
        void deleteReceptionInstanceType() { this->receptionInstanceType_ = nullptr;};
        inline string getReceptionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceType_, "") };
        inline Data& setReceptionInstanceType(string receptionInstanceType) { DARABONBA_PTR_SET_VALUE(receptionInstanceType_, receptionInstanceType) };


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


        // routeMapNum Field Functions 
        bool hasRouteMapNum() const { return this->routeMapNum_ != nullptr;};
        void deleteRouteMapNum() { this->routeMapNum_ = nullptr;};
        inline int32_t getRouteMapNum() const { DARABONBA_PTR_GET_DEFAULT(routeMapNum_, 0) };
        inline Data& setRouteMapNum(int32_t routeMapNum) { DARABONBA_PTR_SET_VALUE(routeMapNum_, routeMapNum) };


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


        // transmissionInstanceId Field Functions 
        bool hasTransmissionInstanceId() const { return this->transmissionInstanceId_ != nullptr;};
        void deleteTransmissionInstanceId() { this->transmissionInstanceId_ = nullptr;};
        inline string getTransmissionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceId_, "") };
        inline Data& setTransmissionInstanceId(string transmissionInstanceId) { DARABONBA_PTR_SET_VALUE(transmissionInstanceId_, transmissionInstanceId) };


        // transmissionInstanceName Field Functions 
        bool hasTransmissionInstanceName() const { return this->transmissionInstanceName_ != nullptr;};
        void deleteTransmissionInstanceName() { this->transmissionInstanceName_ = nullptr;};
        inline string getTransmissionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceName_, "") };
        inline Data& setTransmissionInstanceName(string transmissionInstanceName) { DARABONBA_PTR_SET_VALUE(transmissionInstanceName_, transmissionInstanceName) };


        // transmissionInstanceOwner Field Functions 
        bool hasTransmissionInstanceOwner() const { return this->transmissionInstanceOwner_ != nullptr;};
        void deleteTransmissionInstanceOwner() { this->transmissionInstanceOwner_ = nullptr;};
        inline string getTransmissionInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceOwner_, "") };
        inline Data& setTransmissionInstanceOwner(string transmissionInstanceOwner) { DARABONBA_PTR_SET_VALUE(transmissionInstanceOwner_, transmissionInstanceOwner) };


        // transmissionInstanceType Field Functions 
        bool hasTransmissionInstanceType() const { return this->transmissionInstanceType_ != nullptr;};
        void deleteTransmissionInstanceType() { this->transmissionInstanceType_ = nullptr;};
        inline string getTransmissionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceType_, "") };
        inline Data& setTransmissionInstanceType(string transmissionInstanceType) { DARABONBA_PTR_SET_VALUE(transmissionInstanceType_, transmissionInstanceType) };


      protected:
        // Policy behavior; optional values:
        // 
        // *   **permit**: Allow
        // *   **deny**: Prohibited
        shared_ptr<string> action_ {};
        // The time when the data address was created.
        shared_ptr<string> createTime_ {};
        // Policy description
        shared_ptr<string> description_ {};
        // Destination CIDR Block
        shared_ptr<string> destinationCidrBlock_ {};
        // Lingjun HUB ID
        shared_ptr<string> erId_ {};
        // routing policy ID
        shared_ptr<string> erRouteMapId_ {};
        // The time when the agent was last modified.
        shared_ptr<string> gmtModified_ {};
        // The message that is returned.
        shared_ptr<string> message_ {};
        // Receive Instance ID
        shared_ptr<string> receptionInstanceId_ {};
        // Receive Instance Name
        shared_ptr<string> receptionInstanceName_ {};
        // The tenant to which the receiving instance belongs
        shared_ptr<string> receptionInstanceOwner_ {};
        // The type of the received instance. Possible values:
        // 
        // *   **VPD**: Lingjun network segment.
        // *   **VCC**: Lingjun Connection.
        shared_ptr<string> receptionInstanceType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // Resource group instance ID
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the policy.
        // 
        // A smaller sequence number indicates a lower priority. When a route is matched, a policy with a higher priority is preferentially matched.
        // 
        // **Valid values: 1001 to 2000**
        shared_ptr<int32_t> routeMapNum_ {};
        // Status The status of the instance. Valid values:
        // 
        // *   **Available**
        // *   **Not Available**: Unavailable
        // *   **Executing**: Executing
        // *   **Deleting**: The node is being deleted.
        shared_ptr<string> status_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // Release Instance ID
        shared_ptr<string> transmissionInstanceId_ {};
        // Release Instance Name
        shared_ptr<string> transmissionInstanceName_ {};
        // The tenant to which the published instance belongs
        shared_ptr<string> transmissionInstanceOwner_ {};
        // The type of the published instance. Possible values:
        // 
        // *   **VPD**: Lingjun network segment.
        // *   **VCC**: Lingjun Connection.
        shared_ptr<string> transmissionInstanceType_ {};
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
      // routing policy information list
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
    inline ListErRouteMapsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListErRouteMapsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListErRouteMapsResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListErRouteMapsResponseBody::Content) };
    inline ListErRouteMapsResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListErRouteMapsResponseBody::Content) };
    inline ListErRouteMapsResponseBody& setContent(const ListErRouteMapsResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListErRouteMapsResponseBody& setContent(ListErRouteMapsResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListErRouteMapsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListErRouteMapsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<ListErRouteMapsResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
