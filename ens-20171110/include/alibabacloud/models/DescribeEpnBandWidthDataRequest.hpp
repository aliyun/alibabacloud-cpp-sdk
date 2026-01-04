// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnBandWidthDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnBandWidthDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(NetworkingModel, networkingModel_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnBandWidthDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(NetworkingModel, networkingModel_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeEpnBandWidthDataRequest() = default ;
    DescribeEpnBandWidthDataRequest(const DescribeEpnBandWidthDataRequest &) = default ;
    DescribeEpnBandWidthDataRequest(DescribeEpnBandWidthDataRequest &&) = default ;
    DescribeEpnBandWidthDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnBandWidthDataRequest() = default ;
    DescribeEpnBandWidthDataRequest& operator=(const DescribeEpnBandWidthDataRequest &) = default ;
    DescribeEpnBandWidthDataRequest& operator=(DescribeEpnBandWidthDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->EPNInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->ensRegionId_ == nullptr && this->instanceId_ == nullptr && this->isp_ == nullptr && this->networkingModel_ == nullptr
        && this->period_ == nullptr && this->startTime_ == nullptr; };
    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string getEPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline DescribeEpnBandWidthDataRequest& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeEpnBandWidthDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEpnBandWidthDataRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeEpnBandWidthDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeEpnBandWidthDataRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // networkingModel Field Functions 
    bool hasNetworkingModel() const { return this->networkingModel_ != nullptr;};
    void deleteNetworkingModel() { this->networkingModel_ = nullptr;};
    inline string getNetworkingModel() const { DARABONBA_PTR_GET_DEFAULT(networkingModel_, "") };
    inline DescribeEpnBandWidthDataRequest& setNetworkingModel(string networkingModel) { DARABONBA_PTR_SET_VALUE(networkingModel_, networkingModel) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeEpnBandWidthDataRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEpnBandWidthDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the EPN instance.
    shared_ptr<string> EPNInstanceId_ {};
    // The end of the time range to query.
    // 
    // *   Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // *   If the value of the seconds place is not 00, the start time is automatically set to the next minute.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The ID of the Edge Node Service (ENS) node.
    shared_ptr<string> ensRegionId_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The Internet service provider (ISP). Valid values:
    // 
    // *   cmcc: China Mobile
    // *   telecom: China Telecom
    // *   unicom: China Unicom
    // *   multiCarrier: multi-line ISP
    shared_ptr<string> isp_ {};
    // The networking mode. Valid values:
    // 
    // *   **SpeedUp**: intelligent acceleration network (Internet)
    // *   **Connection**: internal network
    // *   **SpeedUpAndConnection**: intelligent acceleration network and internal network
    shared_ptr<string> networkingModel_ {};
    // The precision of the monitoring data that you want to obtain. Valid values: 300, 1200, 3600, and 14400. Default value: 300. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> period_ {};
    // The beginning of the time range to query.
    // 
    // *   Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // *   If the value of the seconds place is not 00, the start time is automatically set to the next minute.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
