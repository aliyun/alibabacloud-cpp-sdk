// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARPAIRDRILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEARPAIRDRILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ClearPairDrillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearPairDrillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrillId, drillId_);
      DARABONBA_PTR_TO_JSON(PairId, pairId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearPairDrillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrillId, drillId_);
      DARABONBA_PTR_FROM_JSON(PairId, pairId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ClearPairDrillRequest() = default ;
    ClearPairDrillRequest(const ClearPairDrillRequest &) = default ;
    ClearPairDrillRequest(ClearPairDrillRequest &&) = default ;
    ClearPairDrillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearPairDrillRequest() = default ;
    ClearPairDrillRequest& operator=(const ClearPairDrillRequest &) = default ;
    ClearPairDrillRequest& operator=(ClearPairDrillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drillId_ == nullptr
        && return this->pairId_ == nullptr && return this->regionId_ == nullptr; };
    // drillId Field Functions 
    bool hasDrillId() const { return this->drillId_ != nullptr;};
    void deleteDrillId() { this->drillId_ = nullptr;};
    inline string drillId() const { DARABONBA_PTR_GET_DEFAULT(drillId_, "") };
    inline ClearPairDrillRequest& setDrillId(string drillId) { DARABONBA_PTR_SET_VALUE(drillId_, drillId) };


    // pairId Field Functions 
    bool hasPairId() const { return this->pairId_ != nullptr;};
    void deletePairId() { this->pairId_ = nullptr;};
    inline string pairId() const { DARABONBA_PTR_GET_DEFAULT(pairId_, "") };
    inline ClearPairDrillRequest& setPairId(string pairId) { DARABONBA_PTR_SET_VALUE(pairId_, pairId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ClearPairDrillRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the drill. You can call the [DescribePairDrills](https://help.aliyun.com/document_detail/2584480.html) operation to query the disaster recovery drills that were performed on replication pairs in a specific region.
    // 
    // This parameter is required.
    std::shared_ptr<string> drillId_ = nullptr;
    // The ID of the replication pair. You can call the [DescribeDiskReplicaPairs](https://help.aliyun.com/document_detail/354206.html) operation to query the most recent list of replication pairs, including replication pair IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> pairId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which async replication is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
