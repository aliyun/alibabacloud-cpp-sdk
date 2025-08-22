// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticMonitorsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticMonitorsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorCategory, monitorCategory_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticMonitorsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorCategory, monitorCategory_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetSyntheticMonitorsRequestFilter() = default ;
    GetSyntheticMonitorsRequestFilter(const GetSyntheticMonitorsRequestFilter &) = default ;
    GetSyntheticMonitorsRequestFilter(GetSyntheticMonitorsRequestFilter &&) = default ;
    GetSyntheticMonitorsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticMonitorsRequestFilter() = default ;
    GetSyntheticMonitorsRequestFilter& operator=(const GetSyntheticMonitorsRequestFilter &) = default ;
    GetSyntheticMonitorsRequestFilter& operator=(GetSyntheticMonitorsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->monitorCategory_ != nullptr
        && this->network_ != nullptr && this->taskType_ != nullptr; };
    // monitorCategory Field Functions 
    bool hasMonitorCategory() const { return this->monitorCategory_ != nullptr;};
    void deleteMonitorCategory() { this->monitorCategory_ = nullptr;};
    inline int32_t monitorCategory() const { DARABONBA_PTR_GET_DEFAULT(monitorCategory_, 0) };
    inline GetSyntheticMonitorsRequestFilter& setMonitorCategory(int32_t monitorCategory) { DARABONBA_PTR_SET_VALUE(monitorCategory_, monitorCategory) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline int32_t network() const { DARABONBA_PTR_GET_DEFAULT(network_, 0) };
    inline GetSyntheticMonitorsRequestFilter& setNetwork(int32_t network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline GetSyntheticMonitorsRequestFilter& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The type of the monitoring point. Valid values: 1: PC. 2: mobile device.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> monitorCategory_ = nullptr;
    // The network type. Valid values: 1: private network. 2: Internet.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> network_ = nullptr;
    // The type of the monitoring task. Valid values:
    // 
    // 1: ICMP. 2: TCP. 3: DNS. 4: HTTP. 5: website speed. 6: file download.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
