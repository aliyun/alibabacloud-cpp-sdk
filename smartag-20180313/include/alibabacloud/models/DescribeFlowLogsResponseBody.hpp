// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeFlowLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowLogs, flowLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowLogs, flowLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFlowLogsResponseBody() = default ;
    DescribeFlowLogsResponseBody(const DescribeFlowLogsResponseBody &) = default ;
    DescribeFlowLogsResponseBody(DescribeFlowLogsResponseBody &&) = default ;
    DescribeFlowLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogsResponseBody() = default ;
    DescribeFlowLogsResponseBody& operator=(const DescribeFlowLogsResponseBody &) = default ;
    DescribeFlowLogsResponseBody& operator=(DescribeFlowLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlowLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowLogs& obj) { 
        DARABONBA_PTR_TO_JSON(FlowLogSetType, flowLogSetType_);
      };
      friend void from_json(const Darabonba::Json& j, FlowLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowLogSetType, flowLogSetType_);
      };
      FlowLogs() = default ;
      FlowLogs(const FlowLogs &) = default ;
      FlowLogs(FlowLogs &&) = default ;
      FlowLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowLogs() = default ;
      FlowLogs& operator=(const FlowLogs &) = default ;
      FlowLogs& operator=(FlowLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FlowLogSetType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowLogSetType& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveAging, activeAging_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
          DARABONBA_PTR_TO_JSON(InactiveAging, inactiveAging_);
          DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NetflowServerIp, netflowServerIp_);
          DARABONBA_PTR_TO_JSON(NetflowServerPort, netflowServerPort_);
          DARABONBA_PTR_TO_JSON(NetflowVersion, netflowVersion_);
          DARABONBA_PTR_TO_JSON(OutputType, outputType_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TotalSagNum, totalSagNum_);
        };
        friend void from_json(const Darabonba::Json& j, FlowLogSetType& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveAging, activeAging_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
          DARABONBA_PTR_FROM_JSON(InactiveAging, inactiveAging_);
          DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NetflowServerIp, netflowServerIp_);
          DARABONBA_PTR_FROM_JSON(NetflowServerPort, netflowServerPort_);
          DARABONBA_PTR_FROM_JSON(NetflowVersion, netflowVersion_);
          DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TotalSagNum, totalSagNum_);
        };
        FlowLogSetType() = default ;
        FlowLogSetType(const FlowLogSetType &) = default ;
        FlowLogSetType(FlowLogSetType &&) = default ;
        FlowLogSetType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowLogSetType() = default ;
        FlowLogSetType& operator=(const FlowLogSetType &) = default ;
        FlowLogSetType& operator=(FlowLogSetType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeAging_ == nullptr
        && this->description_ == nullptr && this->flowLogId_ == nullptr && this->inactiveAging_ == nullptr && this->logstoreName_ == nullptr && this->name_ == nullptr
        && this->netflowServerIp_ == nullptr && this->netflowServerPort_ == nullptr && this->netflowVersion_ == nullptr && this->outputType_ == nullptr && this->projectName_ == nullptr
        && this->resourceGroupId_ == nullptr && this->slsRegionId_ == nullptr && this->status_ == nullptr && this->totalSagNum_ == nullptr; };
        // activeAging Field Functions 
        bool hasActiveAging() const { return this->activeAging_ != nullptr;};
        void deleteActiveAging() { this->activeAging_ = nullptr;};
        inline int32_t getActiveAging() const { DARABONBA_PTR_GET_DEFAULT(activeAging_, 0) };
        inline FlowLogSetType& setActiveAging(int32_t activeAging) { DARABONBA_PTR_SET_VALUE(activeAging_, activeAging) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FlowLogSetType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // flowLogId Field Functions 
        bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
        void deleteFlowLogId() { this->flowLogId_ = nullptr;};
        inline string getFlowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
        inline FlowLogSetType& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


        // inactiveAging Field Functions 
        bool hasInactiveAging() const { return this->inactiveAging_ != nullptr;};
        void deleteInactiveAging() { this->inactiveAging_ = nullptr;};
        inline int32_t getInactiveAging() const { DARABONBA_PTR_GET_DEFAULT(inactiveAging_, 0) };
        inline FlowLogSetType& setInactiveAging(int32_t inactiveAging) { DARABONBA_PTR_SET_VALUE(inactiveAging_, inactiveAging) };


        // logstoreName Field Functions 
        bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
        void deleteLogstoreName() { this->logstoreName_ = nullptr;};
        inline string getLogstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
        inline FlowLogSetType& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FlowLogSetType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // netflowServerIp Field Functions 
        bool hasNetflowServerIp() const { return this->netflowServerIp_ != nullptr;};
        void deleteNetflowServerIp() { this->netflowServerIp_ = nullptr;};
        inline string getNetflowServerIp() const { DARABONBA_PTR_GET_DEFAULT(netflowServerIp_, "") };
        inline FlowLogSetType& setNetflowServerIp(string netflowServerIp) { DARABONBA_PTR_SET_VALUE(netflowServerIp_, netflowServerIp) };


        // netflowServerPort Field Functions 
        bool hasNetflowServerPort() const { return this->netflowServerPort_ != nullptr;};
        void deleteNetflowServerPort() { this->netflowServerPort_ = nullptr;};
        inline string getNetflowServerPort() const { DARABONBA_PTR_GET_DEFAULT(netflowServerPort_, "") };
        inline FlowLogSetType& setNetflowServerPort(string netflowServerPort) { DARABONBA_PTR_SET_VALUE(netflowServerPort_, netflowServerPort) };


        // netflowVersion Field Functions 
        bool hasNetflowVersion() const { return this->netflowVersion_ != nullptr;};
        void deleteNetflowVersion() { this->netflowVersion_ = nullptr;};
        inline string getNetflowVersion() const { DARABONBA_PTR_GET_DEFAULT(netflowVersion_, "") };
        inline FlowLogSetType& setNetflowVersion(string netflowVersion) { DARABONBA_PTR_SET_VALUE(netflowVersion_, netflowVersion) };


        // outputType Field Functions 
        bool hasOutputType() const { return this->outputType_ != nullptr;};
        void deleteOutputType() { this->outputType_ = nullptr;};
        inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
        inline FlowLogSetType& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline FlowLogSetType& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline FlowLogSetType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // slsRegionId Field Functions 
        bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
        void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
        inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
        inline FlowLogSetType& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FlowLogSetType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalSagNum Field Functions 
        bool hasTotalSagNum() const { return this->totalSagNum_ != nullptr;};
        void deleteTotalSagNum() { this->totalSagNum_ = nullptr;};
        inline int32_t getTotalSagNum() const { DARABONBA_PTR_GET_DEFAULT(totalSagNum_, 0) };
        inline FlowLogSetType& setTotalSagNum(int32_t totalSagNum) { DARABONBA_PTR_SET_VALUE(totalSagNum_, totalSagNum) };


      protected:
        shared_ptr<int32_t> activeAging_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> flowLogId_ {};
        shared_ptr<int32_t> inactiveAging_ {};
        shared_ptr<string> logstoreName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> netflowServerIp_ {};
        shared_ptr<string> netflowServerPort_ {};
        shared_ptr<string> netflowVersion_ {};
        shared_ptr<string> outputType_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> slsRegionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int32_t> totalSagNum_ {};
      };

      virtual bool empty() const override { return this->flowLogSetType_ == nullptr; };
      // flowLogSetType Field Functions 
      bool hasFlowLogSetType() const { return this->flowLogSetType_ != nullptr;};
      void deleteFlowLogSetType() { this->flowLogSetType_ = nullptr;};
      inline const vector<FlowLogs::FlowLogSetType> & getFlowLogSetType() const { DARABONBA_PTR_GET_CONST(flowLogSetType_, vector<FlowLogs::FlowLogSetType>) };
      inline vector<FlowLogs::FlowLogSetType> getFlowLogSetType() { DARABONBA_PTR_GET(flowLogSetType_, vector<FlowLogs::FlowLogSetType>) };
      inline FlowLogs& setFlowLogSetType(const vector<FlowLogs::FlowLogSetType> & flowLogSetType) { DARABONBA_PTR_SET_VALUE(flowLogSetType_, flowLogSetType) };
      inline FlowLogs& setFlowLogSetType(vector<FlowLogs::FlowLogSetType> && flowLogSetType) { DARABONBA_PTR_SET_RVALUE(flowLogSetType_, flowLogSetType) };


    protected:
      shared_ptr<vector<FlowLogs::FlowLogSetType>> flowLogSetType_ {};
    };

    virtual bool empty() const override { return this->flowLogs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // flowLogs Field Functions 
    bool hasFlowLogs() const { return this->flowLogs_ != nullptr;};
    void deleteFlowLogs() { this->flowLogs_ = nullptr;};
    inline const DescribeFlowLogsResponseBody::FlowLogs & getFlowLogs() const { DARABONBA_PTR_GET_CONST(flowLogs_, DescribeFlowLogsResponseBody::FlowLogs) };
    inline DescribeFlowLogsResponseBody::FlowLogs getFlowLogs() { DARABONBA_PTR_GET(flowLogs_, DescribeFlowLogsResponseBody::FlowLogs) };
    inline DescribeFlowLogsResponseBody& setFlowLogs(const DescribeFlowLogsResponseBody::FlowLogs & flowLogs) { DARABONBA_PTR_SET_VALUE(flowLogs_, flowLogs) };
    inline DescribeFlowLogsResponseBody& setFlowLogs(DescribeFlowLogsResponseBody::FlowLogs && flowLogs) { DARABONBA_PTR_SET_RVALUE(flowLogs_, flowLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFlowLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFlowLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFlowLogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeFlowLogsResponseBody::FlowLogs> flowLogs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of flow logs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
