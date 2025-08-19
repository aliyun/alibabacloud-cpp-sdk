// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSINTERCONNECTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSINTERCONNECTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& obj) { 
      DARABONBA_PTR_TO_JSON(bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ccn_id, ccnId_);
      DARABONBA_PTR_TO_JSON(ccn_region_id, ccnRegionId_);
      DARABONBA_PTR_TO_JSON(cen_id, cenId_);
      DARABONBA_PTR_TO_JSON(improved_period, improvedPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ccn_id, ccnId_);
      DARABONBA_PTR_FROM_JSON(ccn_region_id, ccnRegionId_);
      DARABONBA_PTR_FROM_JSON(cen_id, cenId_);
      DARABONBA_PTR_FROM_JSON(improved_period, improvedPeriod_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig(const DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig(DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->ccnId_ != nullptr && this->ccnRegionId_ != nullptr && this->cenId_ != nullptr && this->improvedPeriod_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // ccnId Field Functions 
    bool hasCcnId() const { return this->ccnId_ != nullptr;};
    void deleteCcnId() { this->ccnId_ = nullptr;};
    inline string ccnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


    // ccnRegionId Field Functions 
    bool hasCcnRegionId() const { return this->ccnRegionId_ != nullptr;};
    void deleteCcnRegionId() { this->ccnRegionId_ = nullptr;};
    inline string ccnRegionId() const { DARABONBA_PTR_GET_DEFAULT(ccnRegionId_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& setCcnRegionId(string ccnRegionId) { DARABONBA_PTR_SET_VALUE(ccnRegionId_, ccnRegionId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // improvedPeriod Field Functions 
    bool hasImprovedPeriod() const { return this->improvedPeriod_ != nullptr;};
    void deleteImprovedPeriod() { this->improvedPeriod_ = nullptr;};
    inline string improvedPeriod() const { DARABONBA_PTR_GET_DEFAULT(improvedPeriod_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig& setImprovedPeriod(string improvedPeriod) { DARABONBA_PTR_SET_VALUE(improvedPeriod_, improvedPeriod) };


  protected:
    // This parameter is discontinued.
    // 
    // The bandwidth of the enhanced edge node pool. Unit: Mbit/s.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // This parameter is discontinued.
    // 
    // The ID of the Cloud Connect Network (CCN) instance that is associated with the enhanced edge node pool.
    std::shared_ptr<string> ccnId_ = nullptr;
    // This parameter is discontinued.
    // 
    // The region in which the CCN instance that is with the enhanced edge node pool resides.
    std::shared_ptr<string> ccnRegionId_ = nullptr;
    // This parameter is discontinued.
    // 
    // The ID of the Cloud Enterprise Network (CEN) instance that is associated with the enhanced edge node pool.
    std::shared_ptr<string> cenId_ = nullptr;
    // This parameter is discontinued.
    // 
    // The subscription duration of the enhanced edge node pool. Unit: months.
    std::shared_ptr<string> improvedPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
