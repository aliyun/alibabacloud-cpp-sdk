// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIDCPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIDCPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyIdcProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIdcProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdcName, idcName_);
      DARABONBA_PTR_TO_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_TO_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_TO_JSON(LinuxPort, linuxPort_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(WinPort, winPort_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIdcProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdcName, idcName_);
      DARABONBA_PTR_FROM_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_FROM_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_FROM_JSON(LinuxPort, linuxPort_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(WinPort, winPort_);
    };
    ModifyIdcProbeRequest() = default ;
    ModifyIdcProbeRequest(const ModifyIdcProbeRequest &) = default ;
    ModifyIdcProbeRequest(ModifyIdcProbeRequest &&) = default ;
    ModifyIdcProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIdcProbeRequest() = default ;
    ModifyIdcProbeRequest& operator=(const ModifyIdcProbeRequest &) = default ;
    ModifyIdcProbeRequest& operator=(ModifyIdcProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idcName_ == nullptr
        && this->idcRegion_ == nullptr && this->intervalPeriod_ == nullptr && this->ipSegments_ == nullptr && this->linuxPort_ == nullptr && this->periodUnit_ == nullptr
        && this->status_ == nullptr && this->uuids_ == nullptr && this->winPort_ == nullptr; };
    // idcName Field Functions 
    bool hasIdcName() const { return this->idcName_ != nullptr;};
    void deleteIdcName() { this->idcName_ = nullptr;};
    inline string getIdcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
    inline ModifyIdcProbeRequest& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


    // idcRegion Field Functions 
    bool hasIdcRegion() const { return this->idcRegion_ != nullptr;};
    void deleteIdcRegion() { this->idcRegion_ = nullptr;};
    inline string getIdcRegion() const { DARABONBA_PTR_GET_DEFAULT(idcRegion_, "") };
    inline ModifyIdcProbeRequest& setIdcRegion(string idcRegion) { DARABONBA_PTR_SET_VALUE(idcRegion_, idcRegion) };


    // intervalPeriod Field Functions 
    bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
    void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
    inline int32_t getIntervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
    inline ModifyIdcProbeRequest& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


    // ipSegments Field Functions 
    bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
    void deleteIpSegments() { this->ipSegments_ = nullptr;};
    inline string getIpSegments() const { DARABONBA_PTR_GET_DEFAULT(ipSegments_, "") };
    inline ModifyIdcProbeRequest& setIpSegments(string ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };


    // linuxPort Field Functions 
    bool hasLinuxPort() const { return this->linuxPort_ != nullptr;};
    void deleteLinuxPort() { this->linuxPort_ = nullptr;};
    inline string getLinuxPort() const { DARABONBA_PTR_GET_DEFAULT(linuxPort_, "") };
    inline ModifyIdcProbeRequest& setLinuxPort(string linuxPort) { DARABONBA_PTR_SET_VALUE(linuxPort_, linuxPort) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyIdcProbeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyIdcProbeRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ModifyIdcProbeRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


    // winPort Field Functions 
    bool hasWinPort() const { return this->winPort_ != nullptr;};
    void deleteWinPort() { this->winPort_ = nullptr;};
    inline string getWinPort() const { DARABONBA_PTR_GET_DEFAULT(winPort_, "") };
    inline ModifyIdcProbeRequest& setWinPort(string winPort) { DARABONBA_PTR_SET_VALUE(winPort_, winPort) };


  protected:
    // The name of the data center.
    shared_ptr<string> idcName_ {};
    // The region ID of the data center.
    shared_ptr<string> idcRegion_ {};
    // The scan interval.
    shared_ptr<int32_t> intervalPeriod_ {};
    // The settings of the CIDR block.
    shared_ptr<string> ipSegments_ {};
    // The Linux port.
    shared_ptr<string> linuxPort_ {};
    // The unit of the scan interval. Valid values:
    // 
    // *   **day**
    // *   **hour**
    shared_ptr<string> periodUnit_ {};
    // The usage status. Valid values:
    // 
    // *   **0**: enabled.
    // *   **1**: disabled.
    shared_ptr<int32_t> status_ {};
    // The UUID of the server. Separate multiple UUIDs with commas (,).
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUID.
    // 
    // This parameter is required.
    shared_ptr<string> uuids_ {};
    // The Windows port.
    shared_ptr<string> winPort_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
