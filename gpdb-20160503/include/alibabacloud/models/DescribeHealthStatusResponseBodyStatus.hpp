// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusAdbpgStatus.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusNodeMasterStatus.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBodyStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyStatus& obj) { 
      DARABONBA_PTR_TO_JSON(adbgp_segment_disk_usage_percent_max, adbgpSegmentDiskUsagePercentMax_);
      DARABONBA_PTR_TO_JSON(adbpg_connection_status, adbpgConnectionStatus_);
      DARABONBA_PTR_TO_JSON(adbpg_disk_status, adbpgDiskStatus_);
      DARABONBA_PTR_TO_JSON(adbpg_disk_usage_percent, adbpgDiskUsagePercent_);
      DARABONBA_PTR_TO_JSON(adbpg_instance_cold_data_gb, adbpgInstanceColdDataGb_);
      DARABONBA_PTR_TO_JSON(adbpg_instance_hot_data_gb, adbpgInstanceHotDataGb_);
      DARABONBA_PTR_TO_JSON(adbpg_instance_total_data_gb, adbpgInstanceTotalDataGb_);
      DARABONBA_PTR_TO_JSON(adbpg_master_disk_usage_percent_max, adbpgMasterDiskUsagePercentMax_);
      DARABONBA_PTR_TO_JSON(adbpg_master_status, adbpgMasterStatus_);
      DARABONBA_PTR_TO_JSON(adbpg_segment_status, adbpgSegmentStatus_);
      DARABONBA_PTR_TO_JSON(adbpg_status, adbpgStatus_);
      DARABONBA_PTR_TO_JSON(node_master_connection_status, nodeMasterConnectionStatus_);
      DARABONBA_PTR_TO_JSON(node_master_status, nodeMasterStatus_);
      DARABONBA_PTR_TO_JSON(node_segment_connection_status, nodeSegmentConnectionStatus_);
      DARABONBA_PTR_TO_JSON(node_segment_disk_status, nodeSegmentDiskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(adbgp_segment_disk_usage_percent_max, adbgpSegmentDiskUsagePercentMax_);
      DARABONBA_PTR_FROM_JSON(adbpg_connection_status, adbpgConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(adbpg_disk_status, adbpgDiskStatus_);
      DARABONBA_PTR_FROM_JSON(adbpg_disk_usage_percent, adbpgDiskUsagePercent_);
      DARABONBA_PTR_FROM_JSON(adbpg_instance_cold_data_gb, adbpgInstanceColdDataGb_);
      DARABONBA_PTR_FROM_JSON(adbpg_instance_hot_data_gb, adbpgInstanceHotDataGb_);
      DARABONBA_PTR_FROM_JSON(adbpg_instance_total_data_gb, adbpgInstanceTotalDataGb_);
      DARABONBA_PTR_FROM_JSON(adbpg_master_disk_usage_percent_max, adbpgMasterDiskUsagePercentMax_);
      DARABONBA_PTR_FROM_JSON(adbpg_master_status, adbpgMasterStatus_);
      DARABONBA_PTR_FROM_JSON(adbpg_segment_status, adbpgSegmentStatus_);
      DARABONBA_PTR_FROM_JSON(adbpg_status, adbpgStatus_);
      DARABONBA_PTR_FROM_JSON(node_master_connection_status, nodeMasterConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(node_master_status, nodeMasterStatus_);
      DARABONBA_PTR_FROM_JSON(node_segment_connection_status, nodeSegmentConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(node_segment_disk_status, nodeSegmentDiskStatus_);
    };
    DescribeHealthStatusResponseBodyStatus() = default ;
    DescribeHealthStatusResponseBodyStatus(const DescribeHealthStatusResponseBodyStatus &) = default ;
    DescribeHealthStatusResponseBodyStatus(DescribeHealthStatusResponseBodyStatus &&) = default ;
    DescribeHealthStatusResponseBodyStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyStatus() = default ;
    DescribeHealthStatusResponseBodyStatus& operator=(const DescribeHealthStatusResponseBodyStatus &) = default ;
    DescribeHealthStatusResponseBodyStatus& operator=(DescribeHealthStatusResponseBodyStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adbgpSegmentDiskUsagePercentMax_ == nullptr
        && return this->adbpgConnectionStatus_ == nullptr && return this->adbpgDiskStatus_ == nullptr && return this->adbpgDiskUsagePercent_ == nullptr && return this->adbpgInstanceColdDataGb_ == nullptr && return this->adbpgInstanceHotDataGb_ == nullptr
        && return this->adbpgInstanceTotalDataGb_ == nullptr && return this->adbpgMasterDiskUsagePercentMax_ == nullptr && return this->adbpgMasterStatus_ == nullptr && return this->adbpgSegmentStatus_ == nullptr && return this->adbpgStatus_ == nullptr
        && return this->nodeMasterConnectionStatus_ == nullptr && return this->nodeMasterStatus_ == nullptr && return this->nodeSegmentConnectionStatus_ == nullptr && return this->nodeSegmentDiskStatus_ == nullptr; };
    // adbgpSegmentDiskUsagePercentMax Field Functions 
    bool hasAdbgpSegmentDiskUsagePercentMax() const { return this->adbgpSegmentDiskUsagePercentMax_ != nullptr;};
    void deleteAdbgpSegmentDiskUsagePercentMax() { this->adbgpSegmentDiskUsagePercentMax_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax & adbgpSegmentDiskUsagePercentMax() const { DARABONBA_PTR_GET_CONST(adbgpSegmentDiskUsagePercentMax_, Models::DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax adbgpSegmentDiskUsagePercentMax() { DARABONBA_PTR_GET(adbgpSegmentDiskUsagePercentMax_, Models::DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbgpSegmentDiskUsagePercentMax(const Models::DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax & adbgpSegmentDiskUsagePercentMax) { DARABONBA_PTR_SET_VALUE(adbgpSegmentDiskUsagePercentMax_, adbgpSegmentDiskUsagePercentMax) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbgpSegmentDiskUsagePercentMax(Models::DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax && adbgpSegmentDiskUsagePercentMax) { DARABONBA_PTR_SET_RVALUE(adbgpSegmentDiskUsagePercentMax_, adbgpSegmentDiskUsagePercentMax) };


    // adbpgConnectionStatus Field Functions 
    bool hasAdbpgConnectionStatus() const { return this->adbpgConnectionStatus_ != nullptr;};
    void deleteAdbpgConnectionStatus() { this->adbpgConnectionStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus & adbpgConnectionStatus() const { DARABONBA_PTR_GET_CONST(adbpgConnectionStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus adbpgConnectionStatus() { DARABONBA_PTR_GET(adbpgConnectionStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgConnectionStatus(const Models::DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus & adbpgConnectionStatus) { DARABONBA_PTR_SET_VALUE(adbpgConnectionStatus_, adbpgConnectionStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgConnectionStatus(Models::DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus && adbpgConnectionStatus) { DARABONBA_PTR_SET_RVALUE(adbpgConnectionStatus_, adbpgConnectionStatus) };


    // adbpgDiskStatus Field Functions 
    bool hasAdbpgDiskStatus() const { return this->adbpgDiskStatus_ != nullptr;};
    void deleteAdbpgDiskStatus() { this->adbpgDiskStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus & adbpgDiskStatus() const { DARABONBA_PTR_GET_CONST(adbpgDiskStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus adbpgDiskStatus() { DARABONBA_PTR_GET(adbpgDiskStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgDiskStatus(const Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus & adbpgDiskStatus) { DARABONBA_PTR_SET_VALUE(adbpgDiskStatus_, adbpgDiskStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgDiskStatus(Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus && adbpgDiskStatus) { DARABONBA_PTR_SET_RVALUE(adbpgDiskStatus_, adbpgDiskStatus) };


    // adbpgDiskUsagePercent Field Functions 
    bool hasAdbpgDiskUsagePercent() const { return this->adbpgDiskUsagePercent_ != nullptr;};
    void deleteAdbpgDiskUsagePercent() { this->adbpgDiskUsagePercent_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent & adbpgDiskUsagePercent() const { DARABONBA_PTR_GET_CONST(adbpgDiskUsagePercent_, Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent adbpgDiskUsagePercent() { DARABONBA_PTR_GET(adbpgDiskUsagePercent_, Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgDiskUsagePercent(const Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent & adbpgDiskUsagePercent) { DARABONBA_PTR_SET_VALUE(adbpgDiskUsagePercent_, adbpgDiskUsagePercent) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgDiskUsagePercent(Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent && adbpgDiskUsagePercent) { DARABONBA_PTR_SET_RVALUE(adbpgDiskUsagePercent_, adbpgDiskUsagePercent) };


    // adbpgInstanceColdDataGb Field Functions 
    bool hasAdbpgInstanceColdDataGb() const { return this->adbpgInstanceColdDataGb_ != nullptr;};
    void deleteAdbpgInstanceColdDataGb() { this->adbpgInstanceColdDataGb_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb & adbpgInstanceColdDataGb() const { DARABONBA_PTR_GET_CONST(adbpgInstanceColdDataGb_, Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb adbpgInstanceColdDataGb() { DARABONBA_PTR_GET(adbpgInstanceColdDataGb_, Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgInstanceColdDataGb(const Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb & adbpgInstanceColdDataGb) { DARABONBA_PTR_SET_VALUE(adbpgInstanceColdDataGb_, adbpgInstanceColdDataGb) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgInstanceColdDataGb(Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb && adbpgInstanceColdDataGb) { DARABONBA_PTR_SET_RVALUE(adbpgInstanceColdDataGb_, adbpgInstanceColdDataGb) };


    // adbpgInstanceHotDataGb Field Functions 
    bool hasAdbpgInstanceHotDataGb() const { return this->adbpgInstanceHotDataGb_ != nullptr;};
    void deleteAdbpgInstanceHotDataGb() { this->adbpgInstanceHotDataGb_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb & adbpgInstanceHotDataGb() const { DARABONBA_PTR_GET_CONST(adbpgInstanceHotDataGb_, Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb adbpgInstanceHotDataGb() { DARABONBA_PTR_GET(adbpgInstanceHotDataGb_, Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgInstanceHotDataGb(const Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb & adbpgInstanceHotDataGb) { DARABONBA_PTR_SET_VALUE(adbpgInstanceHotDataGb_, adbpgInstanceHotDataGb) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgInstanceHotDataGb(Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb && adbpgInstanceHotDataGb) { DARABONBA_PTR_SET_RVALUE(adbpgInstanceHotDataGb_, adbpgInstanceHotDataGb) };


    // adbpgInstanceTotalDataGb Field Functions 
    bool hasAdbpgInstanceTotalDataGb() const { return this->adbpgInstanceTotalDataGb_ != nullptr;};
    void deleteAdbpgInstanceTotalDataGb() { this->adbpgInstanceTotalDataGb_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb & adbpgInstanceTotalDataGb() const { DARABONBA_PTR_GET_CONST(adbpgInstanceTotalDataGb_, Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb adbpgInstanceTotalDataGb() { DARABONBA_PTR_GET(adbpgInstanceTotalDataGb_, Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgInstanceTotalDataGb(const Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb & adbpgInstanceTotalDataGb) { DARABONBA_PTR_SET_VALUE(adbpgInstanceTotalDataGb_, adbpgInstanceTotalDataGb) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgInstanceTotalDataGb(Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb && adbpgInstanceTotalDataGb) { DARABONBA_PTR_SET_RVALUE(adbpgInstanceTotalDataGb_, adbpgInstanceTotalDataGb) };


    // adbpgMasterDiskUsagePercentMax Field Functions 
    bool hasAdbpgMasterDiskUsagePercentMax() const { return this->adbpgMasterDiskUsagePercentMax_ != nullptr;};
    void deleteAdbpgMasterDiskUsagePercentMax() { this->adbpgMasterDiskUsagePercentMax_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax & adbpgMasterDiskUsagePercentMax() const { DARABONBA_PTR_GET_CONST(adbpgMasterDiskUsagePercentMax_, Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax adbpgMasterDiskUsagePercentMax() { DARABONBA_PTR_GET(adbpgMasterDiskUsagePercentMax_, Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgMasterDiskUsagePercentMax(const Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax & adbpgMasterDiskUsagePercentMax) { DARABONBA_PTR_SET_VALUE(adbpgMasterDiskUsagePercentMax_, adbpgMasterDiskUsagePercentMax) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgMasterDiskUsagePercentMax(Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax && adbpgMasterDiskUsagePercentMax) { DARABONBA_PTR_SET_RVALUE(adbpgMasterDiskUsagePercentMax_, adbpgMasterDiskUsagePercentMax) };


    // adbpgMasterStatus Field Functions 
    bool hasAdbpgMasterStatus() const { return this->adbpgMasterStatus_ != nullptr;};
    void deleteAdbpgMasterStatus() { this->adbpgMasterStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus & adbpgMasterStatus() const { DARABONBA_PTR_GET_CONST(adbpgMasterStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus adbpgMasterStatus() { DARABONBA_PTR_GET(adbpgMasterStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgMasterStatus(const Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus & adbpgMasterStatus) { DARABONBA_PTR_SET_VALUE(adbpgMasterStatus_, adbpgMasterStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgMasterStatus(Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus && adbpgMasterStatus) { DARABONBA_PTR_SET_RVALUE(adbpgMasterStatus_, adbpgMasterStatus) };


    // adbpgSegmentStatus Field Functions 
    bool hasAdbpgSegmentStatus() const { return this->adbpgSegmentStatus_ != nullptr;};
    void deleteAdbpgSegmentStatus() { this->adbpgSegmentStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus & adbpgSegmentStatus() const { DARABONBA_PTR_GET_CONST(adbpgSegmentStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus adbpgSegmentStatus() { DARABONBA_PTR_GET(adbpgSegmentStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgSegmentStatus(const Models::DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus & adbpgSegmentStatus) { DARABONBA_PTR_SET_VALUE(adbpgSegmentStatus_, adbpgSegmentStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgSegmentStatus(Models::DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus && adbpgSegmentStatus) { DARABONBA_PTR_SET_RVALUE(adbpgSegmentStatus_, adbpgSegmentStatus) };


    // adbpgStatus Field Functions 
    bool hasAdbpgStatus() const { return this->adbpgStatus_ != nullptr;};
    void deleteAdbpgStatus() { this->adbpgStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusAdbpgStatus & adbpgStatus() const { DARABONBA_PTR_GET_CONST(adbpgStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusAdbpgStatus adbpgStatus() { DARABONBA_PTR_GET(adbpgStatus_, Models::DescribeHealthStatusResponseBodyStatusAdbpgStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgStatus(const Models::DescribeHealthStatusResponseBodyStatusAdbpgStatus & adbpgStatus) { DARABONBA_PTR_SET_VALUE(adbpgStatus_, adbpgStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setAdbpgStatus(Models::DescribeHealthStatusResponseBodyStatusAdbpgStatus && adbpgStatus) { DARABONBA_PTR_SET_RVALUE(adbpgStatus_, adbpgStatus) };


    // nodeMasterConnectionStatus Field Functions 
    bool hasNodeMasterConnectionStatus() const { return this->nodeMasterConnectionStatus_ != nullptr;};
    void deleteNodeMasterConnectionStatus() { this->nodeMasterConnectionStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus & nodeMasterConnectionStatus() const { DARABONBA_PTR_GET_CONST(nodeMasterConnectionStatus_, Models::DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus nodeMasterConnectionStatus() { DARABONBA_PTR_GET(nodeMasterConnectionStatus_, Models::DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setNodeMasterConnectionStatus(const Models::DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus & nodeMasterConnectionStatus) { DARABONBA_PTR_SET_VALUE(nodeMasterConnectionStatus_, nodeMasterConnectionStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setNodeMasterConnectionStatus(Models::DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus && nodeMasterConnectionStatus) { DARABONBA_PTR_SET_RVALUE(nodeMasterConnectionStatus_, nodeMasterConnectionStatus) };


    // nodeMasterStatus Field Functions 
    bool hasNodeMasterStatus() const { return this->nodeMasterStatus_ != nullptr;};
    void deleteNodeMasterStatus() { this->nodeMasterStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusNodeMasterStatus & nodeMasterStatus() const { DARABONBA_PTR_GET_CONST(nodeMasterStatus_, Models::DescribeHealthStatusResponseBodyStatusNodeMasterStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusNodeMasterStatus nodeMasterStatus() { DARABONBA_PTR_GET(nodeMasterStatus_, Models::DescribeHealthStatusResponseBodyStatusNodeMasterStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setNodeMasterStatus(const Models::DescribeHealthStatusResponseBodyStatusNodeMasterStatus & nodeMasterStatus) { DARABONBA_PTR_SET_VALUE(nodeMasterStatus_, nodeMasterStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setNodeMasterStatus(Models::DescribeHealthStatusResponseBodyStatusNodeMasterStatus && nodeMasterStatus) { DARABONBA_PTR_SET_RVALUE(nodeMasterStatus_, nodeMasterStatus) };


    // nodeSegmentConnectionStatus Field Functions 
    bool hasNodeSegmentConnectionStatus() const { return this->nodeSegmentConnectionStatus_ != nullptr;};
    void deleteNodeSegmentConnectionStatus() { this->nodeSegmentConnectionStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus & nodeSegmentConnectionStatus() const { DARABONBA_PTR_GET_CONST(nodeSegmentConnectionStatus_, Models::DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus nodeSegmentConnectionStatus() { DARABONBA_PTR_GET(nodeSegmentConnectionStatus_, Models::DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setNodeSegmentConnectionStatus(const Models::DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus & nodeSegmentConnectionStatus) { DARABONBA_PTR_SET_VALUE(nodeSegmentConnectionStatus_, nodeSegmentConnectionStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setNodeSegmentConnectionStatus(Models::DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus && nodeSegmentConnectionStatus) { DARABONBA_PTR_SET_RVALUE(nodeSegmentConnectionStatus_, nodeSegmentConnectionStatus) };


    // nodeSegmentDiskStatus Field Functions 
    bool hasNodeSegmentDiskStatus() const { return this->nodeSegmentDiskStatus_ != nullptr;};
    void deleteNodeSegmentDiskStatus() { this->nodeSegmentDiskStatus_ = nullptr;};
    inline const Models::DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus & nodeSegmentDiskStatus() const { DARABONBA_PTR_GET_CONST(nodeSegmentDiskStatus_, Models::DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus) };
    inline Models::DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus nodeSegmentDiskStatus() { DARABONBA_PTR_GET(nodeSegmentDiskStatus_, Models::DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setNodeSegmentDiskStatus(const Models::DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus & nodeSegmentDiskStatus) { DARABONBA_PTR_SET_VALUE(nodeSegmentDiskStatus_, nodeSegmentDiskStatus) };
    inline DescribeHealthStatusResponseBodyStatus& setNodeSegmentDiskStatus(Models::DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus && nodeSegmentDiskStatus) { DARABONBA_PTR_SET_RVALUE(nodeSegmentDiskStatus_, nodeSegmentDiskStatus) };


  protected:
    // The information of maximum compute node storage usage.
    // 
    // >  This parameter value is returned only for instances in elastic storage mode.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax> adbgpSegmentDiskUsagePercentMax_ = nullptr;
    // The information of instance connection health status.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus> adbpgConnectionStatus_ = nullptr;
    // The information of instance storage status.
    // 
    // >  This parameter value is returned only for instances in elastic storage mode.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus> adbpgDiskStatus_ = nullptr;
    // The information of instance storage usage.
    // 
    // >  This parameter value is returned only for instances in elastic storage mode.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent> adbpgDiskUsagePercent_ = nullptr;
    // The total amount of cold data storage.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb> adbpgInstanceColdDataGb_ = nullptr;
    // The total amount of hot data storage.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb> adbpgInstanceHotDataGb_ = nullptr;
    // The total amount of data storage of the instance.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb> adbpgInstanceTotalDataGb_ = nullptr;
    // The information of maximum coordinator node storage usage.
    // 
    // >  This parameter value is returned only for instances in elastic storage mode.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax> adbpgMasterDiskUsagePercentMax_ = nullptr;
    // The information of coordinator node availability status.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus> adbpgMasterStatus_ = nullptr;
    // The information of compute node availability status.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus> adbpgSegmentStatus_ = nullptr;
    // The information of instance health status.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusAdbpgStatus> adbpgStatus_ = nullptr;
    // The information of coordinator node connection health status.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus> nodeMasterConnectionStatus_ = nullptr;
    // The information of coordinator node health status.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusNodeMasterStatus> nodeMasterStatus_ = nullptr;
    // The information of compute node connection health status.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus> nodeSegmentConnectionStatus_ = nullptr;
    // The information of compute node storage status.
    // 
    // >  This parameter value is returned only for instances in elastic storage mode.
    std::shared_ptr<Models::DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus> nodeSegmentDiskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
