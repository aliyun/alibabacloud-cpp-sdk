// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGHISTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGHISTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoScalingHistoryResponseBodyDataSpecHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingHistoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Shard, shard_);
      DARABONBA_PTR_TO_JSON(SpecHistory, specHistory_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Shard, shard_);
      DARABONBA_PTR_FROM_JSON(SpecHistory, specHistory_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    DescribeAutoScalingHistoryResponseBodyData() = default ;
    DescribeAutoScalingHistoryResponseBodyData(const DescribeAutoScalingHistoryResponseBodyData &) = default ;
    DescribeAutoScalingHistoryResponseBodyData(DescribeAutoScalingHistoryResponseBodyData &&) = default ;
    DescribeAutoScalingHistoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingHistoryResponseBodyData() = default ;
    DescribeAutoScalingHistoryResponseBodyData& operator=(const DescribeAutoScalingHistoryResponseBodyData &) = default ;
    DescribeAutoScalingHistoryResponseBodyData& operator=(DescribeAutoScalingHistoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->instanceId_ != nullptr && this->resource_ != nullptr && this->shard_ != nullptr && this->specHistory_ != nullptr && this->storage_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline const vector<Darabonba::Json> & bandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> bandwidth() { DARABONBA_PTR_GET(bandwidth_, vector<Darabonba::Json>) };
    inline DescribeAutoScalingHistoryResponseBodyData& setBandwidth(const vector<Darabonba::Json> & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
    inline DescribeAutoScalingHistoryResponseBodyData& setBandwidth(vector<Darabonba::Json> && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAutoScalingHistoryResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Darabonba::Json> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> resource() { DARABONBA_PTR_GET(resource_, vector<Darabonba::Json>) };
    inline DescribeAutoScalingHistoryResponseBodyData& setResource(const vector<Darabonba::Json> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeAutoScalingHistoryResponseBodyData& setResource(vector<Darabonba::Json> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // shard Field Functions 
    bool hasShard() const { return this->shard_ != nullptr;};
    void deleteShard() { this->shard_ = nullptr;};
    inline const vector<Darabonba::Json> & shard() const { DARABONBA_PTR_GET_CONST(shard_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> shard() { DARABONBA_PTR_GET(shard_, vector<Darabonba::Json>) };
    inline DescribeAutoScalingHistoryResponseBodyData& setShard(const vector<Darabonba::Json> & shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };
    inline DescribeAutoScalingHistoryResponseBodyData& setShard(vector<Darabonba::Json> && shard) { DARABONBA_PTR_SET_RVALUE(shard_, shard) };


    // specHistory Field Functions 
    bool hasSpecHistory() const { return this->specHistory_ != nullptr;};
    void deleteSpecHistory() { this->specHistory_ = nullptr;};
    inline const vector<Models::DescribeAutoScalingHistoryResponseBodyDataSpecHistory> & specHistory() const { DARABONBA_PTR_GET_CONST(specHistory_, vector<Models::DescribeAutoScalingHistoryResponseBodyDataSpecHistory>) };
    inline vector<Models::DescribeAutoScalingHistoryResponseBodyDataSpecHistory> specHistory() { DARABONBA_PTR_GET(specHistory_, vector<Models::DescribeAutoScalingHistoryResponseBodyDataSpecHistory>) };
    inline DescribeAutoScalingHistoryResponseBodyData& setSpecHistory(const vector<Models::DescribeAutoScalingHistoryResponseBodyDataSpecHistory> & specHistory) { DARABONBA_PTR_SET_VALUE(specHistory_, specHistory) };
    inline DescribeAutoScalingHistoryResponseBodyData& setSpecHistory(vector<Models::DescribeAutoScalingHistoryResponseBodyDataSpecHistory> && specHistory) { DARABONBA_PTR_SET_RVALUE(specHistory_, specHistory) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const vector<Darabonba::Json> & storage() const { DARABONBA_PTR_GET_CONST(storage_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> storage() { DARABONBA_PTR_GET(storage_, vector<Darabonba::Json>) };
    inline DescribeAutoScalingHistoryResponseBodyData& setStorage(const vector<Darabonba::Json> & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline DescribeAutoScalingHistoryResponseBodyData& setStorage(vector<Darabonba::Json> && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


  protected:
    // The history of automatic bandwidth scaling of ApsaraDB for Redis instances. This feature is not supported.
    std::shared_ptr<vector<Darabonba::Json>> bandwidth_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The history of resource scale-out of ApsaraDB for Redis instances. This feature is not supported.
    std::shared_ptr<vector<Darabonba::Json>> resource_ = nullptr;
    // The history of automatic shard scale-out of ApsaraDB for Redis instances. This feature is not supported.
    std::shared_ptr<vector<Darabonba::Json>> shard_ = nullptr;
    // The history of automatic performance scaling.
    std::shared_ptr<vector<Models::DescribeAutoScalingHistoryResponseBodyDataSpecHistory>> specHistory_ = nullptr;
    // The history of storage expansion. This feature is not supported.
    std::shared_ptr<vector<Darabonba::Json>> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
