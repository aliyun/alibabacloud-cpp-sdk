// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAIRAIGATEWAYINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETAIRAIGATEWAYINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class CreateTairAIGatewayInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTairAIGatewayInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceResults, instanceResults_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VClusterId, VClusterId_);
      DARABONBA_PTR_TO_JSON(VkName, vkName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTairAIGatewayInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceResults, instanceResults_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VClusterId, VClusterId_);
      DARABONBA_PTR_FROM_JSON(VkName, vkName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateTairAIGatewayInstanceResponseBody() = default ;
    CreateTairAIGatewayInstanceResponseBody(const CreateTairAIGatewayInstanceResponseBody &) = default ;
    CreateTairAIGatewayInstanceResponseBody(CreateTairAIGatewayInstanceResponseBody &&) = default ;
    CreateTairAIGatewayInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTairAIGatewayInstanceResponseBody() = default ;
    CreateTairAIGatewayInstanceResponseBody& operator=(const CreateTairAIGatewayInstanceResponseBody &) = default ;
    CreateTairAIGatewayInstanceResponseBody& operator=(CreateTairAIGatewayInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceResults& obj) { 
        DARABONBA_PTR_TO_JSON(instanceResults, instanceResults_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceResults& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceResults, instanceResults_);
      };
      InstanceResults() = default ;
      InstanceResults(const InstanceResults &) = default ;
      InstanceResults(InstanceResults &&) = default ;
      InstanceResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceResults() = default ;
      InstanceResults& operator=(const InstanceResults &) = default ;
      InstanceResults& operator=(InstanceResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceResultsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceResultsItem& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceResultsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        InstanceResultsItem() = default ;
        InstanceResultsItem(const InstanceResultsItem &) = default ;
        InstanceResultsItem(InstanceResultsItem &&) = default ;
        InstanceResultsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceResultsItem() = default ;
        InstanceResultsItem& operator=(const InstanceResultsItem &) = default ;
        InstanceResultsItem& operator=(InstanceResultsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->instanceId_ == nullptr && this->orderId_ == nullptr && this->success_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline InstanceResultsItem& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline InstanceResultsItem& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceResultsItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline InstanceResultsItem& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline InstanceResultsItem& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> orderId_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->instanceResults_ == nullptr; };
      // instanceResults Field Functions 
      bool hasInstanceResults() const { return this->instanceResults_ != nullptr;};
      void deleteInstanceResults() { this->instanceResults_ = nullptr;};
      inline const vector<InstanceResults::InstanceResultsItem> & getInstanceResults() const { DARABONBA_PTR_GET_CONST(instanceResults_, vector<InstanceResults::InstanceResultsItem>) };
      inline vector<InstanceResults::InstanceResultsItem> getInstanceResults() { DARABONBA_PTR_GET(instanceResults_, vector<InstanceResults::InstanceResultsItem>) };
      inline InstanceResults& setInstanceResults(const vector<InstanceResults::InstanceResultsItem> & instanceResults) { DARABONBA_PTR_SET_VALUE(instanceResults_, instanceResults) };
      inline InstanceResults& setInstanceResults(vector<InstanceResults::InstanceResultsItem> && instanceResults) { DARABONBA_PTR_SET_RVALUE(instanceResults_, instanceResults) };


    protected:
      shared_ptr<vector<InstanceResults::InstanceResultsItem>> instanceResults_ {};
    };

    virtual bool empty() const override { return this->failCount_ == nullptr
        && this->instanceId_ == nullptr && this->instanceResults_ == nullptr && this->nodeId_ == nullptr && this->orderId_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->successCount_ == nullptr && this->totalCount_ == nullptr && this->VClusterId_ == nullptr && this->vkName_ == nullptr
        && this->zoneId_ == nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline CreateTairAIGatewayInstanceResponseBody& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateTairAIGatewayInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceResults Field Functions 
    bool hasInstanceResults() const { return this->instanceResults_ != nullptr;};
    void deleteInstanceResults() { this->instanceResults_ = nullptr;};
    inline const CreateTairAIGatewayInstanceResponseBody::InstanceResults & getInstanceResults() const { DARABONBA_PTR_GET_CONST(instanceResults_, CreateTairAIGatewayInstanceResponseBody::InstanceResults) };
    inline CreateTairAIGatewayInstanceResponseBody::InstanceResults getInstanceResults() { DARABONBA_PTR_GET(instanceResults_, CreateTairAIGatewayInstanceResponseBody::InstanceResults) };
    inline CreateTairAIGatewayInstanceResponseBody& setInstanceResults(const CreateTairAIGatewayInstanceResponseBody::InstanceResults & instanceResults) { DARABONBA_PTR_SET_VALUE(instanceResults_, instanceResults) };
    inline CreateTairAIGatewayInstanceResponseBody& setInstanceResults(CreateTairAIGatewayInstanceResponseBody::InstanceResults && instanceResults) { DARABONBA_PTR_SET_RVALUE(instanceResults_, instanceResults) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateTairAIGatewayInstanceResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateTairAIGatewayInstanceResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTairAIGatewayInstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTairAIGatewayInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline CreateTairAIGatewayInstanceResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CreateTairAIGatewayInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // VClusterId Field Functions 
    bool hasVClusterId() const { return this->VClusterId_ != nullptr;};
    void deleteVClusterId() { this->VClusterId_ = nullptr;};
    inline string getVClusterId() const { DARABONBA_PTR_GET_DEFAULT(VClusterId_, "") };
    inline CreateTairAIGatewayInstanceResponseBody& setVClusterId(string VClusterId) { DARABONBA_PTR_SET_VALUE(VClusterId_, VClusterId) };


    // vkName Field Functions 
    bool hasVkName() const { return this->vkName_ != nullptr;};
    void deleteVkName() { this->vkName_ = nullptr;};
    inline string getVkName() const { DARABONBA_PTR_GET_DEFAULT(vkName_, "") };
    inline CreateTairAIGatewayInstanceResponseBody& setVkName(string vkName) { DARABONBA_PTR_SET_VALUE(vkName_, vkName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateTairAIGatewayInstanceResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of instances that failed to be created in a batch. This parameter is not returned when a single instance is created.
    shared_ptr<int32_t> failCount_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    shared_ptr<CreateTairAIGatewayInstanceResponseBody::InstanceResults> instanceResults_ {};
    // **[Deprecated]** This parameter is deprecated. The ID of the virtual node.
    shared_ptr<string> nodeId_ {};
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of instances successfully created in a batch. This parameter is not returned when a single instance is created.
    shared_ptr<int32_t> successCount_ {};
    // The total number of instances created in a batch. This parameter is not returned when a single instance is created.
    shared_ptr<int32_t> totalCount_ {};
    // **[Deprecated]** This parameter is deprecated. The ID of the virtual cluster.
    shared_ptr<string> VClusterId_ {};
    // **[Deprecated]** This parameter is deprecated. The instance ID of the VCluster virtual cluster where the VNode resides.
    shared_ptr<string> vkName_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
