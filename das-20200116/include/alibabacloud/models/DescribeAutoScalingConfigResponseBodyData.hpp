// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAutoScalingConfigResponseBodyDataBandwidth.hpp>
#include <alibabacloud/models/DescribeAutoScalingConfigResponseBodyDataResource.hpp>
#include <alibabacloud/models/DescribeAutoScalingConfigResponseBodyDataShard.hpp>
#include <alibabacloud/models/DescribeAutoScalingConfigResponseBodyDataSpec.hpp>
#include <alibabacloud/models/DescribeAutoScalingConfigResponseBodyDataStorage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Shard, shard_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Shard, shard_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    DescribeAutoScalingConfigResponseBodyData() = default ;
    DescribeAutoScalingConfigResponseBodyData(const DescribeAutoScalingConfigResponseBodyData &) = default ;
    DescribeAutoScalingConfigResponseBodyData(DescribeAutoScalingConfigResponseBodyData &&) = default ;
    DescribeAutoScalingConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingConfigResponseBodyData() = default ;
    DescribeAutoScalingConfigResponseBodyData& operator=(const DescribeAutoScalingConfigResponseBodyData &) = default ;
    DescribeAutoScalingConfigResponseBodyData& operator=(DescribeAutoScalingConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->resource_ != nullptr && this->shard_ != nullptr && this->spec_ != nullptr && this->storage_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline const Models::DescribeAutoScalingConfigResponseBodyDataBandwidth & bandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, Models::DescribeAutoScalingConfigResponseBodyDataBandwidth) };
    inline Models::DescribeAutoScalingConfigResponseBodyDataBandwidth bandwidth() { DARABONBA_PTR_GET(bandwidth_, Models::DescribeAutoScalingConfigResponseBodyDataBandwidth) };
    inline DescribeAutoScalingConfigResponseBodyData& setBandwidth(const Models::DescribeAutoScalingConfigResponseBodyDataBandwidth & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
    inline DescribeAutoScalingConfigResponseBodyData& setBandwidth(Models::DescribeAutoScalingConfigResponseBodyDataBandwidth && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const Models::DescribeAutoScalingConfigResponseBodyDataResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, Models::DescribeAutoScalingConfigResponseBodyDataResource) };
    inline Models::DescribeAutoScalingConfigResponseBodyDataResource resource() { DARABONBA_PTR_GET(resource_, Models::DescribeAutoScalingConfigResponseBodyDataResource) };
    inline DescribeAutoScalingConfigResponseBodyData& setResource(const Models::DescribeAutoScalingConfigResponseBodyDataResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeAutoScalingConfigResponseBodyData& setResource(Models::DescribeAutoScalingConfigResponseBodyDataResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // shard Field Functions 
    bool hasShard() const { return this->shard_ != nullptr;};
    void deleteShard() { this->shard_ = nullptr;};
    inline const Models::DescribeAutoScalingConfigResponseBodyDataShard & shard() const { DARABONBA_PTR_GET_CONST(shard_, Models::DescribeAutoScalingConfigResponseBodyDataShard) };
    inline Models::DescribeAutoScalingConfigResponseBodyDataShard shard() { DARABONBA_PTR_GET(shard_, Models::DescribeAutoScalingConfigResponseBodyDataShard) };
    inline DescribeAutoScalingConfigResponseBodyData& setShard(const Models::DescribeAutoScalingConfigResponseBodyDataShard & shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };
    inline DescribeAutoScalingConfigResponseBodyData& setShard(Models::DescribeAutoScalingConfigResponseBodyDataShard && shard) { DARABONBA_PTR_SET_RVALUE(shard_, shard) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const Models::DescribeAutoScalingConfigResponseBodyDataSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, Models::DescribeAutoScalingConfigResponseBodyDataSpec) };
    inline Models::DescribeAutoScalingConfigResponseBodyDataSpec spec() { DARABONBA_PTR_GET(spec_, Models::DescribeAutoScalingConfigResponseBodyDataSpec) };
    inline DescribeAutoScalingConfigResponseBodyData& setSpec(const Models::DescribeAutoScalingConfigResponseBodyDataSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline DescribeAutoScalingConfigResponseBodyData& setSpec(Models::DescribeAutoScalingConfigResponseBodyDataSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const Models::DescribeAutoScalingConfigResponseBodyDataStorage & storage() const { DARABONBA_PTR_GET_CONST(storage_, Models::DescribeAutoScalingConfigResponseBodyDataStorage) };
    inline Models::DescribeAutoScalingConfigResponseBodyDataStorage storage() { DARABONBA_PTR_GET(storage_, Models::DescribeAutoScalingConfigResponseBodyDataStorage) };
    inline DescribeAutoScalingConfigResponseBodyData& setStorage(const Models::DescribeAutoScalingConfigResponseBodyDataStorage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline DescribeAutoScalingConfigResponseBodyData& setStorage(Models::DescribeAutoScalingConfigResponseBodyDataStorage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


  protected:
    // The configurations of the automatic bandwidth adjustment feature.
    std::shared_ptr<Models::DescribeAutoScalingConfigResponseBodyDataBandwidth> bandwidth_ = nullptr;
    // The configurations of the auto scaling feature for local resources.
    std::shared_ptr<Models::DescribeAutoScalingConfigResponseBodyDataResource> resource_ = nullptr;
    // The configurations of the auto scaling feature for shards.
    std::shared_ptr<Models::DescribeAutoScalingConfigResponseBodyDataShard> shard_ = nullptr;
    // The configurations of the auto scaling feature for specifications.
    std::shared_ptr<Models::DescribeAutoScalingConfigResponseBodyDataSpec> spec_ = nullptr;
    // The configurations of the automatic storage expansion feature.
    std::shared_ptr<Models::DescribeAutoScalingConfigResponseBodyDataStorage> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
