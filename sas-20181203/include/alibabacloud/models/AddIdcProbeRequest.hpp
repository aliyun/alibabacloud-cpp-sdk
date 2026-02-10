// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIDCPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIDCPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddIdcProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIdcProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdcName, idcName_);
      DARABONBA_PTR_TO_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_TO_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_TO_JSON(LinuxPort, linuxPort_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(WinPort, winPort_);
    };
    friend void from_json(const Darabonba::Json& j, AddIdcProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdcName, idcName_);
      DARABONBA_PTR_FROM_JSON(IdcRegion, idcRegion_);
      DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_FROM_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_FROM_JSON(LinuxPort, linuxPort_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(WinPort, winPort_);
    };
    AddIdcProbeRequest() = default ;
    AddIdcProbeRequest(const AddIdcProbeRequest &) = default ;
    AddIdcProbeRequest(AddIdcProbeRequest &&) = default ;
    AddIdcProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIdcProbeRequest() = default ;
    AddIdcProbeRequest& operator=(const AddIdcProbeRequest &) = default ;
    AddIdcProbeRequest& operator=(AddIdcProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idcName_ == nullptr
        && this->idcRegion_ == nullptr && this->intervalPeriod_ == nullptr && this->ipSegments_ == nullptr && this->linuxPort_ == nullptr && this->periodUnit_ == nullptr
        && this->uuids_ == nullptr && this->winPort_ == nullptr; };
    // idcName Field Functions 
    bool hasIdcName() const { return this->idcName_ != nullptr;};
    void deleteIdcName() { this->idcName_ = nullptr;};
    inline string getIdcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
    inline AddIdcProbeRequest& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


    // idcRegion Field Functions 
    bool hasIdcRegion() const { return this->idcRegion_ != nullptr;};
    void deleteIdcRegion() { this->idcRegion_ = nullptr;};
    inline string getIdcRegion() const { DARABONBA_PTR_GET_DEFAULT(idcRegion_, "") };
    inline AddIdcProbeRequest& setIdcRegion(string idcRegion) { DARABONBA_PTR_SET_VALUE(idcRegion_, idcRegion) };


    // intervalPeriod Field Functions 
    bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
    void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
    inline int32_t getIntervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
    inline AddIdcProbeRequest& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


    // ipSegments Field Functions 
    bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
    void deleteIpSegments() { this->ipSegments_ = nullptr;};
    inline string getIpSegments() const { DARABONBA_PTR_GET_DEFAULT(ipSegments_, "") };
    inline AddIdcProbeRequest& setIpSegments(string ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };


    // linuxPort Field Functions 
    bool hasLinuxPort() const { return this->linuxPort_ != nullptr;};
    void deleteLinuxPort() { this->linuxPort_ = nullptr;};
    inline string getLinuxPort() const { DARABONBA_PTR_GET_DEFAULT(linuxPort_, "") };
    inline AddIdcProbeRequest& setLinuxPort(string linuxPort) { DARABONBA_PTR_SET_VALUE(linuxPort_, linuxPort) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline AddIdcProbeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline AddIdcProbeRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


    // winPort Field Functions 
    bool hasWinPort() const { return this->winPort_ != nullptr;};
    void deleteWinPort() { this->winPort_ = nullptr;};
    inline string getWinPort() const { DARABONBA_PTR_GET_DEFAULT(winPort_, "") };
    inline AddIdcProbeRequest& setWinPort(string winPort) { DARABONBA_PTR_SET_VALUE(winPort_, winPort) };


  protected:
    // The name of the data center.
    // 
    // This parameter is required.
    shared_ptr<string> idcName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> idcRegion_ {};
    // The scan interval.
    // 
    // This parameter is required.
    shared_ptr<int32_t> intervalPeriod_ {};
    // The settings of the CIDR block.
    // 
    // This parameter is required.
    shared_ptr<string> ipSegments_ {};
    // The Linux port.
    // 
    // This parameter is required.
    shared_ptr<string> linuxPort_ {};
    // The unit of the scan interval. Valid values:
    // 
    // *   **day**
    // *   **hour**
    // 
    // This parameter is required.
    shared_ptr<string> periodUnit_ {};
    // The UUID of the server. Separate multiple UUIDs with commas (,).
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUID.
    // 
    // This parameter is required.
    shared_ptr<string> uuids_ {};
    // The Windows port.
    // 
    // This parameter is required.
    shared_ptr<string> winPort_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
