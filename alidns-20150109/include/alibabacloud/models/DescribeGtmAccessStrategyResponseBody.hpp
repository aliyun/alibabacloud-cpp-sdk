// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYRESPONSEBODY_HPP_
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
  class DescribeGtmAccessStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolMonitorStatus, defaultAddrPoolMonitorStatus_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolName, defaultAddrPoolName_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolStatus, defaultAddrPoolStatus_);
      DARABONBA_PTR_TO_JSON(DefultAddrPoolId, defultAddrPoolId_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolMonitorStatus, failoverAddrPoolMonitorStatus_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolName, failoverAddrPoolName_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolStatus, failoverAddrPoolStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolMonitorStatus, defaultAddrPoolMonitorStatus_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolName, defaultAddrPoolName_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolStatus, defaultAddrPoolStatus_);
      DARABONBA_PTR_FROM_JSON(DefultAddrPoolId, defultAddrPoolId_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolMonitorStatus, failoverAddrPoolMonitorStatus_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolName, failoverAddrPoolName_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolStatus, failoverAddrPoolStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    DescribeGtmAccessStrategyResponseBody() = default ;
    DescribeGtmAccessStrategyResponseBody(const DescribeGtmAccessStrategyResponseBody &) = default ;
    DescribeGtmAccessStrategyResponseBody(DescribeGtmAccessStrategyResponseBody &&) = default ;
    DescribeGtmAccessStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategyResponseBody() = default ;
    DescribeGtmAccessStrategyResponseBody& operator=(const DescribeGtmAccessStrategyResponseBody &) = default ;
    DescribeGtmAccessStrategyResponseBody& operator=(DescribeGtmAccessStrategyResponseBody &&) = default ;
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
        && this->accessStatus_ == nullptr && this->defaultAddrPoolMonitorStatus_ == nullptr && this->defaultAddrPoolName_ == nullptr && this->defaultAddrPoolStatus_ == nullptr && this->defultAddrPoolId_ == nullptr
        && this->failoverAddrPoolId_ == nullptr && this->failoverAddrPoolMonitorStatus_ == nullptr && this->failoverAddrPoolName_ == nullptr && this->failoverAddrPoolStatus_ == nullptr && this->instanceId_ == nullptr
        && this->lines_ == nullptr && this->requestId_ == nullptr && this->strategyId_ == nullptr && this->strategyMode_ == nullptr && this->strategyName_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string getAccessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // accessStatus Field Functions 
    bool hasAccessStatus() const { return this->accessStatus_ != nullptr;};
    void deleteAccessStatus() { this->accessStatus_ = nullptr;};
    inline string getAccessStatus() const { DARABONBA_PTR_GET_DEFAULT(accessStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setAccessStatus(string accessStatus) { DARABONBA_PTR_SET_VALUE(accessStatus_, accessStatus) };


    // defaultAddrPoolMonitorStatus Field Functions 
    bool hasDefaultAddrPoolMonitorStatus() const { return this->defaultAddrPoolMonitorStatus_ != nullptr;};
    void deleteDefaultAddrPoolMonitorStatus() { this->defaultAddrPoolMonitorStatus_ = nullptr;};
    inline string getDefaultAddrPoolMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolMonitorStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setDefaultAddrPoolMonitorStatus(string defaultAddrPoolMonitorStatus) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolMonitorStatus_, defaultAddrPoolMonitorStatus) };


    // defaultAddrPoolName Field Functions 
    bool hasDefaultAddrPoolName() const { return this->defaultAddrPoolName_ != nullptr;};
    void deleteDefaultAddrPoolName() { this->defaultAddrPoolName_ = nullptr;};
    inline string getDefaultAddrPoolName() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolName_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setDefaultAddrPoolName(string defaultAddrPoolName) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolName_, defaultAddrPoolName) };


    // defaultAddrPoolStatus Field Functions 
    bool hasDefaultAddrPoolStatus() const { return this->defaultAddrPoolStatus_ != nullptr;};
    void deleteDefaultAddrPoolStatus() { this->defaultAddrPoolStatus_ = nullptr;};
    inline string getDefaultAddrPoolStatus() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setDefaultAddrPoolStatus(string defaultAddrPoolStatus) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolStatus_, defaultAddrPoolStatus) };


    // defultAddrPoolId Field Functions 
    bool hasDefultAddrPoolId() const { return this->defultAddrPoolId_ != nullptr;};
    void deleteDefultAddrPoolId() { this->defultAddrPoolId_ = nullptr;};
    inline string getDefultAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(defultAddrPoolId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setDefultAddrPoolId(string defultAddrPoolId) { DARABONBA_PTR_SET_VALUE(defultAddrPoolId_, defultAddrPoolId) };


    // failoverAddrPoolId Field Functions 
    bool hasFailoverAddrPoolId() const { return this->failoverAddrPoolId_ != nullptr;};
    void deleteFailoverAddrPoolId() { this->failoverAddrPoolId_ = nullptr;};
    inline string getFailoverAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setFailoverAddrPoolId(string failoverAddrPoolId) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolId_, failoverAddrPoolId) };


    // failoverAddrPoolMonitorStatus Field Functions 
    bool hasFailoverAddrPoolMonitorStatus() const { return this->failoverAddrPoolMonitorStatus_ != nullptr;};
    void deleteFailoverAddrPoolMonitorStatus() { this->failoverAddrPoolMonitorStatus_ = nullptr;};
    inline string getFailoverAddrPoolMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolMonitorStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setFailoverAddrPoolMonitorStatus(string failoverAddrPoolMonitorStatus) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolMonitorStatus_, failoverAddrPoolMonitorStatus) };


    // failoverAddrPoolName Field Functions 
    bool hasFailoverAddrPoolName() const { return this->failoverAddrPoolName_ != nullptr;};
    void deleteFailoverAddrPoolName() { this->failoverAddrPoolName_ = nullptr;};
    inline string getFailoverAddrPoolName() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolName_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setFailoverAddrPoolName(string failoverAddrPoolName) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolName_, failoverAddrPoolName) };


    // failoverAddrPoolStatus Field Functions 
    bool hasFailoverAddrPoolStatus() const { return this->failoverAddrPoolStatus_ != nullptr;};
    void deleteFailoverAddrPoolStatus() { this->failoverAddrPoolStatus_ = nullptr;};
    inline string getFailoverAddrPoolStatus() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setFailoverAddrPoolStatus(string failoverAddrPoolStatus) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolStatus_, failoverAddrPoolStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const DescribeGtmAccessStrategyResponseBody::Lines & getLines() const { DARABONBA_PTR_GET_CONST(lines_, DescribeGtmAccessStrategyResponseBody::Lines) };
    inline DescribeGtmAccessStrategyResponseBody::Lines getLines() { DARABONBA_PTR_GET(lines_, DescribeGtmAccessStrategyResponseBody::Lines) };
    inline DescribeGtmAccessStrategyResponseBody& setLines(const DescribeGtmAccessStrategyResponseBody::Lines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeGtmAccessStrategyResponseBody& setLines(DescribeGtmAccessStrategyResponseBody::Lines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string getStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The access policy.
    shared_ptr<string> accessMode_ {};
    // The access status. Valid values:
    // 
    // *   **DEFAULT**: Indicates normal when the default address pool is accessed.
    // *   **FAILOVER**: Indicates an exception when a failover address pool is accessed.
    shared_ptr<string> accessStatus_ {};
    // Indicates whether health check is enabled for the default address pool.
    shared_ptr<string> defaultAddrPoolMonitorStatus_ {};
    // The name of the default address pool.
    shared_ptr<string> defaultAddrPoolName_ {};
    // The availability status of the default address pool.
    shared_ptr<string> defaultAddrPoolStatus_ {};
    // The ID of the default address pool.
    shared_ptr<string> defultAddrPoolId_ {};
    // The ID of the failover address pool.
    shared_ptr<string> failoverAddrPoolId_ {};
    // Indicates whether health check is enabled for the failover address pool.
    shared_ptr<string> failoverAddrPoolMonitorStatus_ {};
    // The name of the failover address pool.
    shared_ptr<string> failoverAddrPoolName_ {};
    // The availability status of the failover address pool.
    shared_ptr<string> failoverAddrPoolStatus_ {};
    // The ID of the GTM instance whose access policy details you want to query.
    shared_ptr<string> instanceId_ {};
    // The returned lines of access regions.
    shared_ptr<DescribeGtmAccessStrategyResponseBody::Lines> lines_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the access policy queried.
    shared_ptr<string> strategyId_ {};
    // The mode of traffic scheduling.
    shared_ptr<string> strategyMode_ {};
    // The name of the access policy queried.
    shared_ptr<string> strategyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
