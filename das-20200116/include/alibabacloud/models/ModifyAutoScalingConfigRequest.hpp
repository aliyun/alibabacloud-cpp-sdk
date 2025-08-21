// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAutoScalingConfigRequestBandwidth.hpp>
#include <alibabacloud/models/ModifyAutoScalingConfigRequestResource.hpp>
#include <alibabacloud/models/ModifyAutoScalingConfigRequestShard.hpp>
#include <alibabacloud/models/ModifyAutoScalingConfigRequestSpec.hpp>
#include <alibabacloud/models/ModifyAutoScalingConfigRequestStorage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyAutoScalingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Shard, shard_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Shard, shard_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    ModifyAutoScalingConfigRequest() = default ;
    ModifyAutoScalingConfigRequest(const ModifyAutoScalingConfigRequest &) = default ;
    ModifyAutoScalingConfigRequest(ModifyAutoScalingConfigRequest &&) = default ;
    ModifyAutoScalingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingConfigRequest() = default ;
    ModifyAutoScalingConfigRequest& operator=(const ModifyAutoScalingConfigRequest &) = default ;
    ModifyAutoScalingConfigRequest& operator=(ModifyAutoScalingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->instanceId_ != nullptr && this->resource_ != nullptr && this->shard_ != nullptr && this->spec_ != nullptr && this->storage_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline const ModifyAutoScalingConfigRequestBandwidth & bandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, ModifyAutoScalingConfigRequestBandwidth) };
    inline ModifyAutoScalingConfigRequestBandwidth bandwidth() { DARABONBA_PTR_GET(bandwidth_, ModifyAutoScalingConfigRequestBandwidth) };
    inline ModifyAutoScalingConfigRequest& setBandwidth(const ModifyAutoScalingConfigRequestBandwidth & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
    inline ModifyAutoScalingConfigRequest& setBandwidth(ModifyAutoScalingConfigRequestBandwidth && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAutoScalingConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const ModifyAutoScalingConfigRequestResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, ModifyAutoScalingConfigRequestResource) };
    inline ModifyAutoScalingConfigRequestResource resource() { DARABONBA_PTR_GET(resource_, ModifyAutoScalingConfigRequestResource) };
    inline ModifyAutoScalingConfigRequest& setResource(const ModifyAutoScalingConfigRequestResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline ModifyAutoScalingConfigRequest& setResource(ModifyAutoScalingConfigRequestResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // shard Field Functions 
    bool hasShard() const { return this->shard_ != nullptr;};
    void deleteShard() { this->shard_ = nullptr;};
    inline const ModifyAutoScalingConfigRequestShard & shard() const { DARABONBA_PTR_GET_CONST(shard_, ModifyAutoScalingConfigRequestShard) };
    inline ModifyAutoScalingConfigRequestShard shard() { DARABONBA_PTR_GET(shard_, ModifyAutoScalingConfigRequestShard) };
    inline ModifyAutoScalingConfigRequest& setShard(const ModifyAutoScalingConfigRequestShard & shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };
    inline ModifyAutoScalingConfigRequest& setShard(ModifyAutoScalingConfigRequestShard && shard) { DARABONBA_PTR_SET_RVALUE(shard_, shard) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const ModifyAutoScalingConfigRequestSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, ModifyAutoScalingConfigRequestSpec) };
    inline ModifyAutoScalingConfigRequestSpec spec() { DARABONBA_PTR_GET(spec_, ModifyAutoScalingConfigRequestSpec) };
    inline ModifyAutoScalingConfigRequest& setSpec(const ModifyAutoScalingConfigRequestSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline ModifyAutoScalingConfigRequest& setSpec(ModifyAutoScalingConfigRequestSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const ModifyAutoScalingConfigRequestStorage & storage() const { DARABONBA_PTR_GET_CONST(storage_, ModifyAutoScalingConfigRequestStorage) };
    inline ModifyAutoScalingConfigRequestStorage storage() { DARABONBA_PTR_GET(storage_, ModifyAutoScalingConfigRequestStorage) };
    inline ModifyAutoScalingConfigRequest& setStorage(const ModifyAutoScalingConfigRequestStorage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline ModifyAutoScalingConfigRequest& setStorage(ModifyAutoScalingConfigRequestStorage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


  protected:
    // The configuration item of the bandwidth auto scaling feature.
    std::shared_ptr<ModifyAutoScalingConfigRequestBandwidth> bandwidth_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The configuration item of the resource auto scaling feature.
    std::shared_ptr<ModifyAutoScalingConfigRequestResource> resource_ = nullptr;
    // The configuration item of the shard auto scaling feature.
    std::shared_ptr<ModifyAutoScalingConfigRequestShard> shard_ = nullptr;
    // The configuration item of the specification auto scaling feature.
    std::shared_ptr<ModifyAutoScalingConfigRequestSpec> spec_ = nullptr;
    // The configuration item of the automatic storage expansion feature.
    std::shared_ptr<ModifyAutoScalingConfigRequestStorage> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
