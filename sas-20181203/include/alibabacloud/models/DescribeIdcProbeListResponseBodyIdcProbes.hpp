// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDCPROBELISTRESPONSEBODYIDCPROBES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDCPROBELISTRESPONSEBODYIDCPROBES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeIdcProbeListResponseBodyIdcProbes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdcProbeListResponseBodyIdcProbes& obj) { 
      DARABONBA_PTR_TO_JSON(IdcName, idcName_);
      DARABONBA_PTR_TO_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_TO_JSON(LinuxPort, linuxPort_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(WinPort, winPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdcProbeListResponseBodyIdcProbes& obj) { 
      DARABONBA_PTR_FROM_JSON(IdcName, idcName_);
      DARABONBA_PTR_FROM_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_FROM_JSON(LinuxPort, linuxPort_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(WinPort, winPort_);
    };
    DescribeIdcProbeListResponseBodyIdcProbes() = default ;
    DescribeIdcProbeListResponseBodyIdcProbes(const DescribeIdcProbeListResponseBodyIdcProbes &) = default ;
    DescribeIdcProbeListResponseBodyIdcProbes(DescribeIdcProbeListResponseBodyIdcProbes &&) = default ;
    DescribeIdcProbeListResponseBodyIdcProbes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdcProbeListResponseBodyIdcProbes() = default ;
    DescribeIdcProbeListResponseBodyIdcProbes& operator=(const DescribeIdcProbeListResponseBodyIdcProbes &) = default ;
    DescribeIdcProbeListResponseBodyIdcProbes& operator=(DescribeIdcProbeListResponseBodyIdcProbes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idcName_ == nullptr
        && return this->idcRegion_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intervalPeriod_ == nullptr
        && return this->intranetIp_ == nullptr && return this->ipSegments_ == nullptr && return this->linuxPort_ == nullptr && return this->periodUnit_ == nullptr && return this->serviceStatus_ == nullptr
        && return this->status_ == nullptr && return this->uuid_ == nullptr && return this->winPort_ == nullptr; };
    // idcName Field Functions 
    bool hasIdcName() const { return this->idcName_ != nullptr;};
    void deleteIdcName() { this->idcName_ = nullptr;};
    inline string idcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


    // idcRegion Field Functions 
    bool hasIdcRegion() const { return this->idcRegion_ != nullptr;};
    void deleteIdcRegion() { this->idcRegion_ = nullptr;};
    inline string idcRegion() const { DARABONBA_PTR_GET_DEFAULT(idcRegion_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setIdcRegion(string idcRegion) { DARABONBA_PTR_SET_VALUE(idcRegion_, idcRegion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intervalPeriod Field Functions 
    bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
    void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
    inline int32_t intervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ipSegments Field Functions 
    bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
    void deleteIpSegments() { this->ipSegments_ = nullptr;};
    inline string ipSegments() const { DARABONBA_PTR_GET_DEFAULT(ipSegments_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setIpSegments(string ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };


    // linuxPort Field Functions 
    bool hasLinuxPort() const { return this->linuxPort_ != nullptr;};
    void deleteLinuxPort() { this->linuxPort_ = nullptr;};
    inline string linuxPort() const { DARABONBA_PTR_GET_DEFAULT(linuxPort_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setLinuxPort(string linuxPort) { DARABONBA_PTR_SET_VALUE(linuxPort_, linuxPort) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline int32_t serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // winPort Field Functions 
    bool hasWinPort() const { return this->winPort_ != nullptr;};
    void deleteWinPort() { this->winPort_ = nullptr;};
    inline string winPort() const { DARABONBA_PTR_GET_DEFAULT(winPort_, "") };
    inline DescribeIdcProbeListResponseBodyIdcProbes& setWinPort(string winPort) { DARABONBA_PTR_SET_VALUE(winPort_, winPort) };


  protected:
    // IDC data center name.
    std::shared_ptr<string> idcName_ = nullptr;
    // Region.
    std::shared_ptr<string> idcRegion_ = nullptr;
    // Instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Public IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // Scan period.
    std::shared_ptr<int32_t> intervalPeriod_ = nullptr;
    // Private IP of the instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // IP segment range.
    std::shared_ptr<string> ipSegments_ = nullptr;
    // Linux port.
    std::shared_ptr<string> linuxPort_ = nullptr;
    // The unit of the scan period, with values:
    // - **day**: day.
    // - **hour**: hour.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // Probe service status. Values:
    // 
    // - **0**: Active
    // - **1**: Inactive
    std::shared_ptr<int32_t> serviceStatus_ = nullptr;
    // Probe status. Values:
    // 
    // - **0**: Enabled
    // - **1**: Disabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // Server UUID.
    std::shared_ptr<string> uuid_ = nullptr;
    // Windows port.
    std::shared_ptr<string> winPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
