// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCESRESPONSEBODYEPNINSTANCESEPNINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCESRESPONSEBODYEPNINSTANCESEPNINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_TO_JSON(EPNInstanceType, EPNInstanceType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NetworkingModel, networkingModel_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceType, EPNInstanceType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NetworkingModel, networkingModel_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance() = default ;
    DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance(const DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance &) = default ;
    DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance(DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance &&) = default ;
    DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance() = default ;
    DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& operator=(const DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance &) = default ;
    DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& operator=(DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->EPNInstanceId_ != nullptr && this->EPNInstanceName_ != nullptr && this->EPNInstanceType_ != nullptr && this->endTime_ != nullptr && this->internetMaxBandwidthOut_ != nullptr
        && this->modifyTime_ != nullptr && this->networkingModel_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string EPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // EPNInstanceName Field Functions 
    bool hasEPNInstanceName() const { return this->EPNInstanceName_ != nullptr;};
    void deleteEPNInstanceName() { this->EPNInstanceName_ = nullptr;};
    inline string EPNInstanceName() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceName_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setEPNInstanceName(string EPNInstanceName) { DARABONBA_PTR_SET_VALUE(EPNInstanceName_, EPNInstanceName) };


    // EPNInstanceType Field Functions 
    bool hasEPNInstanceType() const { return this->EPNInstanceType_ != nullptr;};
    void deleteEPNInstanceType() { this->EPNInstanceType_ = nullptr;};
    inline string EPNInstanceType() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceType_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setEPNInstanceType(string EPNInstanceType) { DARABONBA_PTR_SET_VALUE(EPNInstanceType_, EPNInstanceType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // networkingModel Field Functions 
    bool hasNetworkingModel() const { return this->networkingModel_ != nullptr;};
    void deleteNetworkingModel() { this->networkingModel_ = nullptr;};
    inline string networkingModel() const { DARABONBA_PTR_GET_DEFAULT(networkingModel_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setNetworkingModel(string networkingModel) { DARABONBA_PTR_SET_VALUE(networkingModel_, networkingModel) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEpnInstancesResponseBodyEPNInstancesEPNInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the instance was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the EPN instance.
    std::shared_ptr<string> EPNInstanceId_ = nullptr;
    // The name of the EPN instance.
    std::shared_ptr<string> EPNInstanceName_ = nullptr;
    // Set the value to EdgeToEdge.
    std::shared_ptr<string> EPNInstanceType_ = nullptr;
    // The end of the time range during which the data was queried. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The inbound bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // The time when the instance was last modified. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The networking mode. Valid values:
    // 
    // *   SpeedUp: intelligent acceleration network (Internet)
    // *   Connection: internal network
    // *   SpeedUpAndConnection: intelligent acceleration network and internal network
    std::shared_ptr<string> networkingModel_ = nullptr;
    // The beginning of the time range during which the data was queried. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   Running
    // *   Excuting
    // *   Stopped
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
