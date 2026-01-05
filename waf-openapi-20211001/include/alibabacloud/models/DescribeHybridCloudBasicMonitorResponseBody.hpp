// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDBASICMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDBASICMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudBasicMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudBasicMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasicMonitors, basicMonitors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudBasicMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicMonitors, basicMonitors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudBasicMonitorResponseBody() = default ;
    DescribeHybridCloudBasicMonitorResponseBody(const DescribeHybridCloudBasicMonitorResponseBody &) = default ;
    DescribeHybridCloudBasicMonitorResponseBody(DescribeHybridCloudBasicMonitorResponseBody &&) = default ;
    DescribeHybridCloudBasicMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudBasicMonitorResponseBody() = default ;
    DescribeHybridCloudBasicMonitorResponseBody& operator=(const DescribeHybridCloudBasicMonitorResponseBody &) = default ;
    DescribeHybridCloudBasicMonitorResponseBody& operator=(DescribeHybridCloudBasicMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BasicMonitors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BasicMonitors& obj) { 
        DARABONBA_PTR_TO_JSON(Levle, levle_);
        DARABONBA_PTR_TO_JSON(MonitorName, monitorName_);
        DARABONBA_PTR_TO_JSON(UseRatio, useRatio_);
      };
      friend void from_json(const Darabonba::Json& j, BasicMonitors& obj) { 
        DARABONBA_PTR_FROM_JSON(Levle, levle_);
        DARABONBA_PTR_FROM_JSON(MonitorName, monitorName_);
        DARABONBA_PTR_FROM_JSON(UseRatio, useRatio_);
      };
      BasicMonitors() = default ;
      BasicMonitors(const BasicMonitors &) = default ;
      BasicMonitors(BasicMonitors &&) = default ;
      BasicMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BasicMonitors() = default ;
      BasicMonitors& operator=(const BasicMonitors &) = default ;
      BasicMonitors& operator=(BasicMonitors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->levle_ == nullptr
        && this->monitorName_ == nullptr && this->useRatio_ == nullptr; };
      // levle Field Functions 
      bool hasLevle() const { return this->levle_ != nullptr;};
      void deleteLevle() { this->levle_ = nullptr;};
      inline string getLevle() const { DARABONBA_PTR_GET_DEFAULT(levle_, "") };
      inline BasicMonitors& setLevle(string levle) { DARABONBA_PTR_SET_VALUE(levle_, levle) };


      // monitorName Field Functions 
      bool hasMonitorName() const { return this->monitorName_ != nullptr;};
      void deleteMonitorName() { this->monitorName_ = nullptr;};
      inline string getMonitorName() const { DARABONBA_PTR_GET_DEFAULT(monitorName_, "") };
      inline BasicMonitors& setMonitorName(string monitorName) { DARABONBA_PTR_SET_VALUE(monitorName_, monitorName) };


      // useRatio Field Functions 
      bool hasUseRatio() const { return this->useRatio_ != nullptr;};
      void deleteUseRatio() { this->useRatio_ = nullptr;};
      inline int64_t getUseRatio() const { DARABONBA_PTR_GET_DEFAULT(useRatio_, 0L) };
      inline BasicMonitors& setUseRatio(int64_t useRatio) { DARABONBA_PTR_SET_VALUE(useRatio_, useRatio) };


    protected:
      shared_ptr<string> levle_ {};
      // The metric. Valid values:
      // 
      // *   **basic_monitor_cpu_usage**: the CPU.
      // *   **basic_monitor_memory_usage**: the memory.
      // *   **basic_monitor_disk_usage**: the disk.
      shared_ptr<string> monitorName_ {};
      // The resource usage.
      shared_ptr<int64_t> useRatio_ {};
    };

    virtual bool empty() const override { return this->basicMonitors_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // basicMonitors Field Functions 
    bool hasBasicMonitors() const { return this->basicMonitors_ != nullptr;};
    void deleteBasicMonitors() { this->basicMonitors_ = nullptr;};
    inline const vector<DescribeHybridCloudBasicMonitorResponseBody::BasicMonitors> & getBasicMonitors() const { DARABONBA_PTR_GET_CONST(basicMonitors_, vector<DescribeHybridCloudBasicMonitorResponseBody::BasicMonitors>) };
    inline vector<DescribeHybridCloudBasicMonitorResponseBody::BasicMonitors> getBasicMonitors() { DARABONBA_PTR_GET(basicMonitors_, vector<DescribeHybridCloudBasicMonitorResponseBody::BasicMonitors>) };
    inline DescribeHybridCloudBasicMonitorResponseBody& setBasicMonitors(const vector<DescribeHybridCloudBasicMonitorResponseBody::BasicMonitors> & basicMonitors) { DARABONBA_PTR_SET_VALUE(basicMonitors_, basicMonitors) };
    inline DescribeHybridCloudBasicMonitorResponseBody& setBasicMonitors(vector<DescribeHybridCloudBasicMonitorResponseBody::BasicMonitors> && basicMonitors) { DARABONBA_PTR_SET_RVALUE(basicMonitors_, basicMonitors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudBasicMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudBasicMonitorResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The basic metrics.
    shared_ptr<vector<DescribeHybridCloudBasicMonitorResponseBody::BasicMonitors>> basicMonitors_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
