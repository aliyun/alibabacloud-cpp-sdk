// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticMonitorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticMonitorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticMonitorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetSyntheticMonitorsRequest() = default ;
    GetSyntheticMonitorsRequest(const GetSyntheticMonitorsRequest &) = default ;
    GetSyntheticMonitorsRequest(GetSyntheticMonitorsRequest &&) = default ;
    GetSyntheticMonitorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticMonitorsRequest() = default ;
    GetSyntheticMonitorsRequest& operator=(const GetSyntheticMonitorsRequest &) = default ;
    GetSyntheticMonitorsRequest& operator=(GetSyntheticMonitorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorCategory, monitorCategory_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorCategory, monitorCategory_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->monitorCategory_ == nullptr
        && this->network_ == nullptr && this->taskType_ == nullptr; };
      // monitorCategory Field Functions 
      bool hasMonitorCategory() const { return this->monitorCategory_ != nullptr;};
      void deleteMonitorCategory() { this->monitorCategory_ = nullptr;};
      inline int32_t getMonitorCategory() const { DARABONBA_PTR_GET_DEFAULT(monitorCategory_, 0) };
      inline Filter& setMonitorCategory(int32_t monitorCategory) { DARABONBA_PTR_SET_VALUE(monitorCategory_, monitorCategory) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline int32_t getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, 0) };
      inline Filter& setNetwork(int32_t network) { DARABONBA_PTR_SET_VALUE(network_, network) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
      inline Filter& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The type of the monitoring point. Valid values: 1: PC. 2: mobile device.
      // 
      // This parameter is required.
      shared_ptr<int32_t> monitorCategory_ {};
      // The network type. Valid values: 1: private network. 2: Internet.
      // 
      // This parameter is required.
      shared_ptr<int32_t> network_ {};
      // The type of the monitoring task. Valid values:
      // 
      // 1: ICMP. 2: TCP. 3: DNS. 4: HTTP. 5: website speed. 6: file download.
      // 
      // This parameter is required.
      shared_ptr<int32_t> taskType_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->regionId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetSyntheticMonitorsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, GetSyntheticMonitorsRequest::Filter) };
    inline GetSyntheticMonitorsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, GetSyntheticMonitorsRequest::Filter) };
    inline GetSyntheticMonitorsRequest& setFilter(const GetSyntheticMonitorsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetSyntheticMonitorsRequest& setFilter(GetSyntheticMonitorsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSyntheticMonitorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The query conditions.
    // 
    // This parameter is required.
    shared_ptr<GetSyntheticMonitorsRequest::Filter> filter_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
