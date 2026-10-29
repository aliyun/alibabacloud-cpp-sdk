// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingInstancesResponseBody() = default ;
    ListRenderingInstancesResponseBody(const ListRenderingInstancesResponseBody &) = default ;
    ListRenderingInstancesResponseBody(ListRenderingInstancesResponseBody &&) = default ;
    ListRenderingInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingInstancesResponseBody() = default ;
    ListRenderingInstancesResponseBody& operator=(const ListRenderingInstancesResponseBody &) = default ;
    ListRenderingInstancesResponseBody& operator=(ListRenderingInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RenderingInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RenderingInstances& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(MaxEgressBandwidth, maxEgressBandwidth_);
        DARABONBA_PTR_TO_JSON(MaxIngressBandwidth, maxIngressBandwidth_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
        DARABONBA_PTR_TO_JSON(ServerStatus, serverStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      };
      friend void from_json(const Darabonba::Json& j, RenderingInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(MaxEgressBandwidth, maxEgressBandwidth_);
        DARABONBA_PTR_FROM_JSON(MaxIngressBandwidth, maxIngressBandwidth_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
        DARABONBA_PTR_FROM_JSON(ServerStatus, serverStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      };
      RenderingInstances() = default ;
      RenderingInstances(const RenderingInstances &) = default ;
      RenderingInstances(RenderingInstances &&) = default ;
      RenderingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RenderingInstances() = default ;
      RenderingInstances& operator=(const RenderingInstances &) = default ;
      RenderingInstances& operator=(RenderingInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->creationTime_ == nullptr && this->expireTime_ == nullptr && this->instanceName_ == nullptr && this->maxEgressBandwidth_ == nullptr && this->maxIngressBandwidth_ == nullptr
        && this->renderingInstanceId_ == nullptr && this->renderingSpec_ == nullptr && this->serverStatus_ == nullptr && this->status_ == nullptr && this->storageSize_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline RenderingInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline RenderingInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline RenderingInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline RenderingInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // maxEgressBandwidth Field Functions 
      bool hasMaxEgressBandwidth() const { return this->maxEgressBandwidth_ != nullptr;};
      void deleteMaxEgressBandwidth() { this->maxEgressBandwidth_ = nullptr;};
      inline string getMaxEgressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxEgressBandwidth_, "") };
      inline RenderingInstances& setMaxEgressBandwidth(string maxEgressBandwidth) { DARABONBA_PTR_SET_VALUE(maxEgressBandwidth_, maxEgressBandwidth) };


      // maxIngressBandwidth Field Functions 
      bool hasMaxIngressBandwidth() const { return this->maxIngressBandwidth_ != nullptr;};
      void deleteMaxIngressBandwidth() { this->maxIngressBandwidth_ = nullptr;};
      inline string getMaxIngressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxIngressBandwidth_, "") };
      inline RenderingInstances& setMaxIngressBandwidth(string maxIngressBandwidth) { DARABONBA_PTR_SET_VALUE(maxIngressBandwidth_, maxIngressBandwidth) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline RenderingInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


      // renderingSpec Field Functions 
      bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
      void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
      inline string getRenderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
      inline RenderingInstances& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


      // serverStatus Field Functions 
      bool hasServerStatus() const { return this->serverStatus_ != nullptr;};
      void deleteServerStatus() { this->serverStatus_ = nullptr;};
      inline string getServerStatus() const { DARABONBA_PTR_GET_DEFAULT(serverStatus_, "") };
      inline RenderingInstances& setServerStatus(string serverStatus) { DARABONBA_PTR_SET_VALUE(serverStatus_, serverStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RenderingInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline RenderingInstances& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    protected:
      // The billing method.
      shared_ptr<string> chargeType_ {};
      // The time when the cloud application service instance was created. The time is in UTC and follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format.
      shared_ptr<string> creationTime_ {};
      // The expiration time.
      shared_ptr<string> expireTime_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The maximum outbound bandwidth limit. Unit: Mbit/s. A value of 0 indicates that no bandwidth limit is configured.
      shared_ptr<string> maxEgressBandwidth_ {};
      // The maximum inbound bandwidth limit. Unit: Mbit/s. A value of 0 indicates that no bandwidth limit is configured.
      shared_ptr<string> maxIngressBandwidth_ {};
      // The instance ID of the cloud application service.
      shared_ptr<string> renderingInstanceId_ {};
      // The instance type of the cloud application service instance.
      shared_ptr<string> renderingSpec_ {};
      // The status of the service host.
      shared_ptr<string> serverStatus_ {};
      // The instance status.
      shared_ptr<string> status_ {};
      // The cloud storage capacity. Unit: GB.
      shared_ptr<int32_t> storageSize_ {};
    };

    virtual bool empty() const override { return this->renderingInstances_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // renderingInstances Field Functions 
    bool hasRenderingInstances() const { return this->renderingInstances_ != nullptr;};
    void deleteRenderingInstances() { this->renderingInstances_ = nullptr;};
    inline const vector<ListRenderingInstancesResponseBody::RenderingInstances> & getRenderingInstances() const { DARABONBA_PTR_GET_CONST(renderingInstances_, vector<ListRenderingInstancesResponseBody::RenderingInstances>) };
    inline vector<ListRenderingInstancesResponseBody::RenderingInstances> getRenderingInstances() { DARABONBA_PTR_GET(renderingInstances_, vector<ListRenderingInstancesResponseBody::RenderingInstances>) };
    inline ListRenderingInstancesResponseBody& setRenderingInstances(const vector<ListRenderingInstancesResponseBody::RenderingInstances> & renderingInstances) { DARABONBA_PTR_SET_VALUE(renderingInstances_, renderingInstances) };
    inline ListRenderingInstancesResponseBody& setRenderingInstances(vector<ListRenderingInstancesResponseBody::RenderingInstances> && renderingInstances) { DARABONBA_PTR_SET_RVALUE(renderingInstances_, renderingInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of cloud application service instances.
    shared_ptr<vector<ListRenderingInstancesResponseBody::RenderingInstances>> renderingInstances_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of cloud application service instances.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
