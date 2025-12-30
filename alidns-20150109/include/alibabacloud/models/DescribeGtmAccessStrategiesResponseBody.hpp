// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategies, strategies_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeGtmAccessStrategiesResponseBody() = default ;
    DescribeGtmAccessStrategiesResponseBody(const DescribeGtmAccessStrategiesResponseBody &) = default ;
    DescribeGtmAccessStrategiesResponseBody(DescribeGtmAccessStrategiesResponseBody &&) = default ;
    DescribeGtmAccessStrategiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategiesResponseBody() = default ;
    DescribeGtmAccessStrategiesResponseBody& operator=(const DescribeGtmAccessStrategiesResponseBody &) = default ;
    DescribeGtmAccessStrategiesResponseBody& operator=(DescribeGtmAccessStrategiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Strategies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Strategies& obj) { 
        DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      };
      friend void from_json(const Darabonba::Json& j, Strategies& obj) { 
        DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      };
      Strategies() = default ;
      Strategies(const Strategies &) = default ;
      Strategies(Strategies &&) = default ;
      Strategies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Strategies() = default ;
      Strategies& operator=(const Strategies &) = default ;
      Strategies& operator=(Strategies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Strategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
          DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
          DARABONBA_PTR_TO_JSON(AccessStatus, accessStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(DefaultAddrPoolId, defaultAddrPoolId_);
          DARABONBA_PTR_TO_JSON(DefaultAddrPoolMonitorStatus, defaultAddrPoolMonitorStatus_);
          DARABONBA_PTR_TO_JSON(DefaultAddrPoolName, defaultAddrPoolName_);
          DARABONBA_PTR_TO_JSON(DefaultAddrPoolStatus, defaultAddrPoolStatus_);
          DARABONBA_PTR_TO_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
          DARABONBA_PTR_TO_JSON(FailoverAddrPoolMonitorStatus, failoverAddrPoolMonitorStatus_);
          DARABONBA_PTR_TO_JSON(FailoverAddrPoolName, failoverAddrPoolName_);
          DARABONBA_PTR_TO_JSON(FailoverAddrPoolStatus, failoverAddrPoolStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Lines, lines_);
          DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
          DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        };
        friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
          DARABONBA_PTR_FROM_JSON(AccessStatus, accessStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(DefaultAddrPoolId, defaultAddrPoolId_);
          DARABONBA_PTR_FROM_JSON(DefaultAddrPoolMonitorStatus, defaultAddrPoolMonitorStatus_);
          DARABONBA_PTR_FROM_JSON(DefaultAddrPoolName, defaultAddrPoolName_);
          DARABONBA_PTR_FROM_JSON(DefaultAddrPoolStatus, defaultAddrPoolStatus_);
          DARABONBA_PTR_FROM_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
          DARABONBA_PTR_FROM_JSON(FailoverAddrPoolMonitorStatus, failoverAddrPoolMonitorStatus_);
          DARABONBA_PTR_FROM_JSON(FailoverAddrPoolName, failoverAddrPoolName_);
          DARABONBA_PTR_FROM_JSON(FailoverAddrPoolStatus, failoverAddrPoolStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Lines, lines_);
          DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
          DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        };
        Strategy() = default ;
        Strategy(const Strategy &) = default ;
        Strategy(Strategy &&) = default ;
        Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Strategy() = default ;
        Strategy& operator=(const Strategy &) = default ;
        Strategy& operator=(Strategy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Lines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Lines& obj) { 
            DARABONBA_PTR_TO_JSON(Line, line_);
          };
          friend void from_json(const Darabonba::Json& j, Lines& obj) { 
            DARABONBA_PTR_FROM_JSON(Line, line_);
          };
          Lines() = default ;
          Lines(const Lines &) = default ;
          Lines(Lines &&) = default ;
          Lines(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Lines() = default ;
          Lines& operator=(const Lines &) = default ;
          Lines& operator=(Lines &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Line : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Line& obj) { 
              DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
              DARABONBA_PTR_TO_JSON(GroupName, groupName_);
              DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
              DARABONBA_PTR_TO_JSON(LineName, lineName_);
            };
            friend void from_json(const Darabonba::Json& j, Line& obj) { 
              DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
              DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
              DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
              DARABONBA_PTR_FROM_JSON(LineName, lineName_);
            };
            Line() = default ;
            Line(const Line &) = default ;
            Line(Line &&) = default ;
            Line(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Line() = default ;
            Line& operator=(const Line &) = default ;
            Line& operator=(Line &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->groupCode_ == nullptr
        && this->groupName_ == nullptr && this->lineCode_ == nullptr && this->lineName_ == nullptr; };
            // groupCode Field Functions 
            bool hasGroupCode() const { return this->groupCode_ != nullptr;};
            void deleteGroupCode() { this->groupCode_ = nullptr;};
            inline string getGroupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
            inline Line& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


            // groupName Field Functions 
            bool hasGroupName() const { return this->groupName_ != nullptr;};
            void deleteGroupName() { this->groupName_ = nullptr;};
            inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
            inline Line& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


            // lineCode Field Functions 
            bool hasLineCode() const { return this->lineCode_ != nullptr;};
            void deleteLineCode() { this->lineCode_ = nullptr;};
            inline string getLineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
            inline Line& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


            // lineName Field Functions 
            bool hasLineName() const { return this->lineName_ != nullptr;};
            void deleteLineName() { this->lineName_ = nullptr;};
            inline string getLineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
            inline Line& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


          protected:
            // The code of the access region group.
            shared_ptr<string> groupCode_ {};
            // The name of the access region group.
            shared_ptr<string> groupName_ {};
            // The code for the line of the access region.
            shared_ptr<string> lineCode_ {};
            // The name for the line of the access region.
            shared_ptr<string> lineName_ {};
          };

          virtual bool empty() const override { return this->line_ == nullptr; };
          // line Field Functions 
          bool hasLine() const { return this->line_ != nullptr;};
          void deleteLine() { this->line_ = nullptr;};
          inline const vector<Lines::Line> & getLine() const { DARABONBA_PTR_GET_CONST(line_, vector<Lines::Line>) };
          inline vector<Lines::Line> getLine() { DARABONBA_PTR_GET(line_, vector<Lines::Line>) };
          inline Lines& setLine(const vector<Lines::Line> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
          inline Lines& setLine(vector<Lines::Line> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


        protected:
          shared_ptr<vector<Lines::Line>> line_ {};
        };

        virtual bool empty() const override { return this->accessMode_ == nullptr
        && this->accessStatus_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->defaultAddrPoolId_ == nullptr && this->defaultAddrPoolMonitorStatus_ == nullptr
        && this->defaultAddrPoolName_ == nullptr && this->defaultAddrPoolStatus_ == nullptr && this->failoverAddrPoolId_ == nullptr && this->failoverAddrPoolMonitorStatus_ == nullptr && this->failoverAddrPoolName_ == nullptr
        && this->failoverAddrPoolStatus_ == nullptr && this->instanceId_ == nullptr && this->lines_ == nullptr && this->strategyId_ == nullptr && this->strategyMode_ == nullptr
        && this->strategyName_ == nullptr; };
        // accessMode Field Functions 
        bool hasAccessMode() const { return this->accessMode_ != nullptr;};
        void deleteAccessMode() { this->accessMode_ = nullptr;};
        inline string getAccessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
        inline Strategy& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


        // accessStatus Field Functions 
        bool hasAccessStatus() const { return this->accessStatus_ != nullptr;};
        void deleteAccessStatus() { this->accessStatus_ = nullptr;};
        inline string getAccessStatus() const { DARABONBA_PTR_GET_DEFAULT(accessStatus_, "") };
        inline Strategy& setAccessStatus(string accessStatus) { DARABONBA_PTR_SET_VALUE(accessStatus_, accessStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Strategy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Strategy& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // defaultAddrPoolId Field Functions 
        bool hasDefaultAddrPoolId() const { return this->defaultAddrPoolId_ != nullptr;};
        void deleteDefaultAddrPoolId() { this->defaultAddrPoolId_ = nullptr;};
        inline string getDefaultAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolId_, "") };
        inline Strategy& setDefaultAddrPoolId(string defaultAddrPoolId) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolId_, defaultAddrPoolId) };


        // defaultAddrPoolMonitorStatus Field Functions 
        bool hasDefaultAddrPoolMonitorStatus() const { return this->defaultAddrPoolMonitorStatus_ != nullptr;};
        void deleteDefaultAddrPoolMonitorStatus() { this->defaultAddrPoolMonitorStatus_ = nullptr;};
        inline string getDefaultAddrPoolMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolMonitorStatus_, "") };
        inline Strategy& setDefaultAddrPoolMonitorStatus(string defaultAddrPoolMonitorStatus) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolMonitorStatus_, defaultAddrPoolMonitorStatus) };


        // defaultAddrPoolName Field Functions 
        bool hasDefaultAddrPoolName() const { return this->defaultAddrPoolName_ != nullptr;};
        void deleteDefaultAddrPoolName() { this->defaultAddrPoolName_ = nullptr;};
        inline string getDefaultAddrPoolName() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolName_, "") };
        inline Strategy& setDefaultAddrPoolName(string defaultAddrPoolName) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolName_, defaultAddrPoolName) };


        // defaultAddrPoolStatus Field Functions 
        bool hasDefaultAddrPoolStatus() const { return this->defaultAddrPoolStatus_ != nullptr;};
        void deleteDefaultAddrPoolStatus() { this->defaultAddrPoolStatus_ = nullptr;};
        inline string getDefaultAddrPoolStatus() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolStatus_, "") };
        inline Strategy& setDefaultAddrPoolStatus(string defaultAddrPoolStatus) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolStatus_, defaultAddrPoolStatus) };


        // failoverAddrPoolId Field Functions 
        bool hasFailoverAddrPoolId() const { return this->failoverAddrPoolId_ != nullptr;};
        void deleteFailoverAddrPoolId() { this->failoverAddrPoolId_ = nullptr;};
        inline string getFailoverAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolId_, "") };
        inline Strategy& setFailoverAddrPoolId(string failoverAddrPoolId) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolId_, failoverAddrPoolId) };


        // failoverAddrPoolMonitorStatus Field Functions 
        bool hasFailoverAddrPoolMonitorStatus() const { return this->failoverAddrPoolMonitorStatus_ != nullptr;};
        void deleteFailoverAddrPoolMonitorStatus() { this->failoverAddrPoolMonitorStatus_ = nullptr;};
        inline string getFailoverAddrPoolMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolMonitorStatus_, "") };
        inline Strategy& setFailoverAddrPoolMonitorStatus(string failoverAddrPoolMonitorStatus) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolMonitorStatus_, failoverAddrPoolMonitorStatus) };


        // failoverAddrPoolName Field Functions 
        bool hasFailoverAddrPoolName() const { return this->failoverAddrPoolName_ != nullptr;};
        void deleteFailoverAddrPoolName() { this->failoverAddrPoolName_ = nullptr;};
        inline string getFailoverAddrPoolName() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolName_, "") };
        inline Strategy& setFailoverAddrPoolName(string failoverAddrPoolName) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolName_, failoverAddrPoolName) };


        // failoverAddrPoolStatus Field Functions 
        bool hasFailoverAddrPoolStatus() const { return this->failoverAddrPoolStatus_ != nullptr;};
        void deleteFailoverAddrPoolStatus() { this->failoverAddrPoolStatus_ = nullptr;};
        inline string getFailoverAddrPoolStatus() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolStatus_, "") };
        inline Strategy& setFailoverAddrPoolStatus(string failoverAddrPoolStatus) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolStatus_, failoverAddrPoolStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Strategy& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // lines Field Functions 
        bool hasLines() const { return this->lines_ != nullptr;};
        void deleteLines() { this->lines_ = nullptr;};
        inline const Strategy::Lines & getLines() const { DARABONBA_PTR_GET_CONST(lines_, Strategy::Lines) };
        inline Strategy::Lines getLines() { DARABONBA_PTR_GET(lines_, Strategy::Lines) };
        inline Strategy& setLines(const Strategy::Lines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
        inline Strategy& setLines(Strategy::Lines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


        // strategyId Field Functions 
        bool hasStrategyId() const { return this->strategyId_ != nullptr;};
        void deleteStrategyId() { this->strategyId_ = nullptr;};
        inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
        inline Strategy& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


        // strategyMode Field Functions 
        bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
        void deleteStrategyMode() { this->strategyMode_ = nullptr;};
        inline string getStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
        inline Strategy& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


        // strategyName Field Functions 
        bool hasStrategyName() const { return this->strategyName_ != nullptr;};
        void deleteStrategyName() { this->strategyName_ = nullptr;};
        inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
        inline Strategy& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      protected:
        // The access policy. Valid values:
        // 
        // *   **AUTO**: Automatic switch
        // *   **DEFAULT**: Default address pool
        // *   **FAILOVER**: Failover address pool
        shared_ptr<string> accessMode_ {};
        // The access status. Valid values:
        // 
        // *   **DEFAULT**: The default address pool is currently accessed.
        // *   **FAILOVER**: The failover address pool is currently accessed.
        shared_ptr<string> accessStatus_ {};
        // The time when the access policy was created.
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimestamp_ {};
        // The ID of the default address pool.
        shared_ptr<string> defaultAddrPoolId_ {};
        // Indicates whether health check was enabled for the default address pool. Valid values:
        // 
        // *   **OPEN**: Enabled
        // *   **CLOSE**: Disabled
        // *   **UNCONFIGURED**: Not configured
        shared_ptr<string> defaultAddrPoolMonitorStatus_ {};
        // The name of the default address pool.
        shared_ptr<string> defaultAddrPoolName_ {};
        // The availability status of the default address pool. Valid values:
        // 
        // *   **AVAILABLE**: Available
        // *   **NOT_AVAILABLE**: Unavailable
        shared_ptr<string> defaultAddrPoolStatus_ {};
        // The ID of the failover address pool.
        shared_ptr<string> failoverAddrPoolId_ {};
        // Indicates whether health check was enabled for the failover address pool.
        shared_ptr<string> failoverAddrPoolMonitorStatus_ {};
        // The name of the failover address pool.
        shared_ptr<string> failoverAddrPoolName_ {};
        // The availability status of the failover address pool.
        shared_ptr<string> failoverAddrPoolStatus_ {};
        // The ID of the GTM instance whose access policies you want to query.
        shared_ptr<string> instanceId_ {};
        // The returned lines of access regions.
        shared_ptr<Strategy::Lines> lines_ {};
        // The ID of the access policy.
        shared_ptr<string> strategyId_ {};
        // The mode of the access policy. **SELF_DEFINED** indicates that the access policy is user-defined.
        shared_ptr<string> strategyMode_ {};
        // The name of the access policy.
        shared_ptr<string> strategyName_ {};
      };

      virtual bool empty() const override { return this->strategy_ == nullptr; };
      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline const vector<Strategies::Strategy> & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, vector<Strategies::Strategy>) };
      inline vector<Strategies::Strategy> getStrategy() { DARABONBA_PTR_GET(strategy_, vector<Strategies::Strategy>) };
      inline Strategies& setStrategy(const vector<Strategies::Strategy> & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
      inline Strategies& setStrategy(vector<Strategies::Strategy> && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


    protected:
      shared_ptr<vector<Strategies::Strategy>> strategy_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->strategies_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGtmAccessStrategiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGtmAccessStrategiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmAccessStrategiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategies Field Functions 
    bool hasStrategies() const { return this->strategies_ != nullptr;};
    void deleteStrategies() { this->strategies_ = nullptr;};
    inline const DescribeGtmAccessStrategiesResponseBody::Strategies & getStrategies() const { DARABONBA_PTR_GET_CONST(strategies_, DescribeGtmAccessStrategiesResponseBody::Strategies) };
    inline DescribeGtmAccessStrategiesResponseBody::Strategies getStrategies() { DARABONBA_PTR_GET(strategies_, DescribeGtmAccessStrategiesResponseBody::Strategies) };
    inline DescribeGtmAccessStrategiesResponseBody& setStrategies(const DescribeGtmAccessStrategiesResponseBody::Strategies & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
    inline DescribeGtmAccessStrategiesResponseBody& setStrategies(DescribeGtmAccessStrategiesResponseBody::Strategies && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeGtmAccessStrategiesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeGtmAccessStrategiesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned list of access policies of the GTM instance.
    shared_ptr<DescribeGtmAccessStrategiesResponseBody::Strategies> strategies_ {};
    // The total number of entries returned on all pages.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
