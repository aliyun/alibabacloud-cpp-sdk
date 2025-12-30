// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODY_HPP_
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
  class DescribeDnsGtmAccessStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolGroupStatus, defaultAddrPoolGroupStatus_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolType, defaultAddrPoolType_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPools, defaultAddrPools_);
      DARABONBA_PTR_TO_JSON(DefaultAvailableAddrNum, defaultAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(DefaultLatencyOptimization, defaultLatencyOptimization_);
      DARABONBA_PTR_TO_JSON(DefaultLbaStrategy, defaultLbaStrategy_);
      DARABONBA_PTR_TO_JSON(DefaultMaxReturnAddrNum, defaultMaxReturnAddrNum_);
      DARABONBA_PTR_TO_JSON(DefaultMinAvailableAddrNum, defaultMinAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(EffectiveAddrPoolGroupType, effectiveAddrPoolGroupType_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolGroupStatus, failoverAddrPoolGroupStatus_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolType, failoverAddrPoolType_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPools, failoverAddrPools_);
      DARABONBA_PTR_TO_JSON(FailoverAvailableAddrNum, failoverAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(FailoverLatencyOptimization, failoverLatencyOptimization_);
      DARABONBA_PTR_TO_JSON(FailoverLbaStrategy, failoverLbaStrategy_);
      DARABONBA_PTR_TO_JSON(FailoverMaxReturnAddrNum, failoverMaxReturnAddrNum_);
      DARABONBA_PTR_TO_JSON(FailoverMinAvailableAddrNum, failoverMinAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolGroupStatus, defaultAddrPoolGroupStatus_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolType, defaultAddrPoolType_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPools, defaultAddrPools_);
      DARABONBA_PTR_FROM_JSON(DefaultAvailableAddrNum, defaultAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(DefaultLatencyOptimization, defaultLatencyOptimization_);
      DARABONBA_PTR_FROM_JSON(DefaultLbaStrategy, defaultLbaStrategy_);
      DARABONBA_PTR_FROM_JSON(DefaultMaxReturnAddrNum, defaultMaxReturnAddrNum_);
      DARABONBA_PTR_FROM_JSON(DefaultMinAvailableAddrNum, defaultMinAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(EffectiveAddrPoolGroupType, effectiveAddrPoolGroupType_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolGroupStatus, failoverAddrPoolGroupStatus_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolType, failoverAddrPoolType_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPools, failoverAddrPools_);
      DARABONBA_PTR_FROM_JSON(FailoverAvailableAddrNum, failoverAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(FailoverLatencyOptimization, failoverLatencyOptimization_);
      DARABONBA_PTR_FROM_JSON(FailoverLbaStrategy, failoverLbaStrategy_);
      DARABONBA_PTR_FROM_JSON(FailoverMaxReturnAddrNum, failoverMaxReturnAddrNum_);
      DARABONBA_PTR_FROM_JSON(FailoverMinAvailableAddrNum, failoverMinAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    DescribeDnsGtmAccessStrategyResponseBody() = default ;
    DescribeDnsGtmAccessStrategyResponseBody(const DescribeDnsGtmAccessStrategyResponseBody &) = default ;
    DescribeDnsGtmAccessStrategyResponseBody(DescribeDnsGtmAccessStrategyResponseBody &&) = default ;
    DescribeDnsGtmAccessStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyResponseBody() = default ;
    DescribeDnsGtmAccessStrategyResponseBody& operator=(const DescribeDnsGtmAccessStrategyResponseBody &) = default ;
    DescribeDnsGtmAccessStrategyResponseBody& operator=(DescribeDnsGtmAccessStrategyResponseBody &&) = default ;
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
        // The code of the source region group.
        shared_ptr<string> groupCode_ {};
        // The name of the source region group.
        shared_ptr<string> groupName_ {};
        // The line code of the source region.
        shared_ptr<string> lineCode_ {};
        // The line name of the source region.
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

    class FailoverAddrPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailoverAddrPools& obj) { 
        DARABONBA_PTR_TO_JSON(FailoverAddrPool, failoverAddrPool_);
      };
      friend void from_json(const Darabonba::Json& j, FailoverAddrPools& obj) { 
        DARABONBA_PTR_FROM_JSON(FailoverAddrPool, failoverAddrPool_);
      };
      FailoverAddrPools() = default ;
      FailoverAddrPools(const FailoverAddrPools &) = default ;
      FailoverAddrPools(FailoverAddrPools &&) = default ;
      FailoverAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailoverAddrPools() = default ;
      FailoverAddrPools& operator=(const FailoverAddrPools &) = default ;
      FailoverAddrPools& operator=(FailoverAddrPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailoverAddrPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailoverAddrPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, FailoverAddrPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        FailoverAddrPool() = default ;
        FailoverAddrPool(const FailoverAddrPool &) = default ;
        FailoverAddrPool(FailoverAddrPool &&) = default ;
        FailoverAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailoverAddrPool() = default ;
        FailoverAddrPool& operator=(const FailoverAddrPool &) = default ;
        FailoverAddrPool& operator=(FailoverAddrPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addrCount_ == nullptr
        && this->id_ == nullptr && this->lbaWeight_ == nullptr && this->name_ == nullptr; };
        // addrCount Field Functions 
        bool hasAddrCount() const { return this->addrCount_ != nullptr;};
        void deleteAddrCount() { this->addrCount_ = nullptr;};
        inline int32_t getAddrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
        inline FailoverAddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline FailoverAddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lbaWeight Field Functions 
        bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
        void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
        inline int32_t getLbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
        inline FailoverAddrPool& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FailoverAddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The number of addresses in the address pool.
        shared_ptr<int32_t> addrCount_ {};
        // The ID of the address pool.
        shared_ptr<string> id_ {};
        // The weight of the address pool.
        shared_ptr<int32_t> lbaWeight_ {};
        // The name of the address pool.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->failoverAddrPool_ == nullptr; };
      // failoverAddrPool Field Functions 
      bool hasFailoverAddrPool() const { return this->failoverAddrPool_ != nullptr;};
      void deleteFailoverAddrPool() { this->failoverAddrPool_ = nullptr;};
      inline const vector<FailoverAddrPools::FailoverAddrPool> & getFailoverAddrPool() const { DARABONBA_PTR_GET_CONST(failoverAddrPool_, vector<FailoverAddrPools::FailoverAddrPool>) };
      inline vector<FailoverAddrPools::FailoverAddrPool> getFailoverAddrPool() { DARABONBA_PTR_GET(failoverAddrPool_, vector<FailoverAddrPools::FailoverAddrPool>) };
      inline FailoverAddrPools& setFailoverAddrPool(const vector<FailoverAddrPools::FailoverAddrPool> & failoverAddrPool) { DARABONBA_PTR_SET_VALUE(failoverAddrPool_, failoverAddrPool) };
      inline FailoverAddrPools& setFailoverAddrPool(vector<FailoverAddrPools::FailoverAddrPool> && failoverAddrPool) { DARABONBA_PTR_SET_RVALUE(failoverAddrPool_, failoverAddrPool) };


    protected:
      shared_ptr<vector<FailoverAddrPools::FailoverAddrPool>> failoverAddrPool_ {};
    };

    class DefaultAddrPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultAddrPools& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultAddrPool, defaultAddrPool_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultAddrPools& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultAddrPool, defaultAddrPool_);
      };
      DefaultAddrPools() = default ;
      DefaultAddrPools(const DefaultAddrPools &) = default ;
      DefaultAddrPools(DefaultAddrPools &&) = default ;
      DefaultAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultAddrPools() = default ;
      DefaultAddrPools& operator=(const DefaultAddrPools &) = default ;
      DefaultAddrPools& operator=(DefaultAddrPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DefaultAddrPool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DefaultAddrPool& obj) { 
          DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DefaultAddrPool& obj) { 
          DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        DefaultAddrPool() = default ;
        DefaultAddrPool(const DefaultAddrPool &) = default ;
        DefaultAddrPool(DefaultAddrPool &&) = default ;
        DefaultAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DefaultAddrPool() = default ;
        DefaultAddrPool& operator=(const DefaultAddrPool &) = default ;
        DefaultAddrPool& operator=(DefaultAddrPool &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addrCount_ == nullptr
        && this->id_ == nullptr && this->lbaWeight_ == nullptr && this->name_ == nullptr; };
        // addrCount Field Functions 
        bool hasAddrCount() const { return this->addrCount_ != nullptr;};
        void deleteAddrCount() { this->addrCount_ = nullptr;};
        inline int32_t getAddrCount() const { DARABONBA_PTR_GET_DEFAULT(addrCount_, 0) };
        inline DefaultAddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DefaultAddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lbaWeight Field Functions 
        bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
        void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
        inline int32_t getLbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
        inline DefaultAddrPool& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DefaultAddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The number of addresses in the address pool.
        shared_ptr<int32_t> addrCount_ {};
        // The ID of the address pool.
        shared_ptr<string> id_ {};
        // The weight of the address pool.
        shared_ptr<int32_t> lbaWeight_ {};
        // The name of the address pool.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->defaultAddrPool_ == nullptr; };
      // defaultAddrPool Field Functions 
      bool hasDefaultAddrPool() const { return this->defaultAddrPool_ != nullptr;};
      void deleteDefaultAddrPool() { this->defaultAddrPool_ = nullptr;};
      inline const vector<DefaultAddrPools::DefaultAddrPool> & getDefaultAddrPool() const { DARABONBA_PTR_GET_CONST(defaultAddrPool_, vector<DefaultAddrPools::DefaultAddrPool>) };
      inline vector<DefaultAddrPools::DefaultAddrPool> getDefaultAddrPool() { DARABONBA_PTR_GET(defaultAddrPool_, vector<DefaultAddrPools::DefaultAddrPool>) };
      inline DefaultAddrPools& setDefaultAddrPool(const vector<DefaultAddrPools::DefaultAddrPool> & defaultAddrPool) { DARABONBA_PTR_SET_VALUE(defaultAddrPool_, defaultAddrPool) };
      inline DefaultAddrPools& setDefaultAddrPool(vector<DefaultAddrPools::DefaultAddrPool> && defaultAddrPool) { DARABONBA_PTR_SET_RVALUE(defaultAddrPool_, defaultAddrPool) };


    protected:
      shared_ptr<vector<DefaultAddrPools::DefaultAddrPool>> defaultAddrPool_ {};
    };

    virtual bool empty() const override { return this->accessMode_ == nullptr
        && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->defaultAddrPoolGroupStatus_ == nullptr && this->defaultAddrPoolType_ == nullptr && this->defaultAddrPools_ == nullptr
        && this->defaultAvailableAddrNum_ == nullptr && this->defaultLatencyOptimization_ == nullptr && this->defaultLbaStrategy_ == nullptr && this->defaultMaxReturnAddrNum_ == nullptr && this->defaultMinAvailableAddrNum_ == nullptr
        && this->effectiveAddrPoolGroupType_ == nullptr && this->failoverAddrPoolGroupStatus_ == nullptr && this->failoverAddrPoolType_ == nullptr && this->failoverAddrPools_ == nullptr && this->failoverAvailableAddrNum_ == nullptr
        && this->failoverLatencyOptimization_ == nullptr && this->failoverLbaStrategy_ == nullptr && this->failoverMaxReturnAddrNum_ == nullptr && this->failoverMinAvailableAddrNum_ == nullptr && this->instanceId_ == nullptr
        && this->lines_ == nullptr && this->requestId_ == nullptr && this->strategyId_ == nullptr && this->strategyMode_ == nullptr && this->strategyName_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string getAccessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // defaultAddrPoolGroupStatus Field Functions 
    bool hasDefaultAddrPoolGroupStatus() const { return this->defaultAddrPoolGroupStatus_ != nullptr;};
    void deleteDefaultAddrPoolGroupStatus() { this->defaultAddrPoolGroupStatus_ = nullptr;};
    inline string getDefaultAddrPoolGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolGroupStatus_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAddrPoolGroupStatus(string defaultAddrPoolGroupStatus) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolGroupStatus_, defaultAddrPoolGroupStatus) };


    // defaultAddrPoolType Field Functions 
    bool hasDefaultAddrPoolType() const { return this->defaultAddrPoolType_ != nullptr;};
    void deleteDefaultAddrPoolType() { this->defaultAddrPoolType_ = nullptr;};
    inline string getDefaultAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolType_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAddrPoolType(string defaultAddrPoolType) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolType_, defaultAddrPoolType) };


    // defaultAddrPools Field Functions 
    bool hasDefaultAddrPools() const { return this->defaultAddrPools_ != nullptr;};
    void deleteDefaultAddrPools() { this->defaultAddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyResponseBody::DefaultAddrPools & getDefaultAddrPools() const { DARABONBA_PTR_GET_CONST(defaultAddrPools_, DescribeDnsGtmAccessStrategyResponseBody::DefaultAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody::DefaultAddrPools getDefaultAddrPools() { DARABONBA_PTR_GET(defaultAddrPools_, DescribeDnsGtmAccessStrategyResponseBody::DefaultAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAddrPools(const DescribeDnsGtmAccessStrategyResponseBody::DefaultAddrPools & defaultAddrPools) { DARABONBA_PTR_SET_VALUE(defaultAddrPools_, defaultAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAddrPools(DescribeDnsGtmAccessStrategyResponseBody::DefaultAddrPools && defaultAddrPools) { DARABONBA_PTR_SET_RVALUE(defaultAddrPools_, defaultAddrPools) };


    // defaultAvailableAddrNum Field Functions 
    bool hasDefaultAvailableAddrNum() const { return this->defaultAvailableAddrNum_ != nullptr;};
    void deleteDefaultAvailableAddrNum() { this->defaultAvailableAddrNum_ = nullptr;};
    inline int32_t getDefaultAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultAvailableAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAvailableAddrNum(int32_t defaultAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(defaultAvailableAddrNum_, defaultAvailableAddrNum) };


    // defaultLatencyOptimization Field Functions 
    bool hasDefaultLatencyOptimization() const { return this->defaultLatencyOptimization_ != nullptr;};
    void deleteDefaultLatencyOptimization() { this->defaultLatencyOptimization_ = nullptr;};
    inline string getDefaultLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(defaultLatencyOptimization_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultLatencyOptimization(string defaultLatencyOptimization) { DARABONBA_PTR_SET_VALUE(defaultLatencyOptimization_, defaultLatencyOptimization) };


    // defaultLbaStrategy Field Functions 
    bool hasDefaultLbaStrategy() const { return this->defaultLbaStrategy_ != nullptr;};
    void deleteDefaultLbaStrategy() { this->defaultLbaStrategy_ = nullptr;};
    inline string getDefaultLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(defaultLbaStrategy_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultLbaStrategy(string defaultLbaStrategy) { DARABONBA_PTR_SET_VALUE(defaultLbaStrategy_, defaultLbaStrategy) };


    // defaultMaxReturnAddrNum Field Functions 
    bool hasDefaultMaxReturnAddrNum() const { return this->defaultMaxReturnAddrNum_ != nullptr;};
    void deleteDefaultMaxReturnAddrNum() { this->defaultMaxReturnAddrNum_ = nullptr;};
    inline int32_t getDefaultMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMaxReturnAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultMaxReturnAddrNum(int32_t defaultMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMaxReturnAddrNum_, defaultMaxReturnAddrNum) };


    // defaultMinAvailableAddrNum Field Functions 
    bool hasDefaultMinAvailableAddrNum() const { return this->defaultMinAvailableAddrNum_ != nullptr;};
    void deleteDefaultMinAvailableAddrNum() { this->defaultMinAvailableAddrNum_ = nullptr;};
    inline int32_t getDefaultMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMinAvailableAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultMinAvailableAddrNum(int32_t defaultMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMinAvailableAddrNum_, defaultMinAvailableAddrNum) };


    // effectiveAddrPoolGroupType Field Functions 
    bool hasEffectiveAddrPoolGroupType() const { return this->effectiveAddrPoolGroupType_ != nullptr;};
    void deleteEffectiveAddrPoolGroupType() { this->effectiveAddrPoolGroupType_ = nullptr;};
    inline string getEffectiveAddrPoolGroupType() const { DARABONBA_PTR_GET_DEFAULT(effectiveAddrPoolGroupType_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setEffectiveAddrPoolGroupType(string effectiveAddrPoolGroupType) { DARABONBA_PTR_SET_VALUE(effectiveAddrPoolGroupType_, effectiveAddrPoolGroupType) };


    // failoverAddrPoolGroupStatus Field Functions 
    bool hasFailoverAddrPoolGroupStatus() const { return this->failoverAddrPoolGroupStatus_ != nullptr;};
    void deleteFailoverAddrPoolGroupStatus() { this->failoverAddrPoolGroupStatus_ = nullptr;};
    inline string getFailoverAddrPoolGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolGroupStatus_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAddrPoolGroupStatus(string failoverAddrPoolGroupStatus) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolGroupStatus_, failoverAddrPoolGroupStatus) };


    // failoverAddrPoolType Field Functions 
    bool hasFailoverAddrPoolType() const { return this->failoverAddrPoolType_ != nullptr;};
    void deleteFailoverAddrPoolType() { this->failoverAddrPoolType_ = nullptr;};
    inline string getFailoverAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolType_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAddrPoolType(string failoverAddrPoolType) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolType_, failoverAddrPoolType) };


    // failoverAddrPools Field Functions 
    bool hasFailoverAddrPools() const { return this->failoverAddrPools_ != nullptr;};
    void deleteFailoverAddrPools() { this->failoverAddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyResponseBody::FailoverAddrPools & getFailoverAddrPools() const { DARABONBA_PTR_GET_CONST(failoverAddrPools_, DescribeDnsGtmAccessStrategyResponseBody::FailoverAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody::FailoverAddrPools getFailoverAddrPools() { DARABONBA_PTR_GET(failoverAddrPools_, DescribeDnsGtmAccessStrategyResponseBody::FailoverAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAddrPools(const DescribeDnsGtmAccessStrategyResponseBody::FailoverAddrPools & failoverAddrPools) { DARABONBA_PTR_SET_VALUE(failoverAddrPools_, failoverAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAddrPools(DescribeDnsGtmAccessStrategyResponseBody::FailoverAddrPools && failoverAddrPools) { DARABONBA_PTR_SET_RVALUE(failoverAddrPools_, failoverAddrPools) };


    // failoverAvailableAddrNum Field Functions 
    bool hasFailoverAvailableAddrNum() const { return this->failoverAvailableAddrNum_ != nullptr;};
    void deleteFailoverAvailableAddrNum() { this->failoverAvailableAddrNum_ = nullptr;};
    inline int32_t getFailoverAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverAvailableAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAvailableAddrNum(int32_t failoverAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(failoverAvailableAddrNum_, failoverAvailableAddrNum) };


    // failoverLatencyOptimization Field Functions 
    bool hasFailoverLatencyOptimization() const { return this->failoverLatencyOptimization_ != nullptr;};
    void deleteFailoverLatencyOptimization() { this->failoverLatencyOptimization_ = nullptr;};
    inline string getFailoverLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(failoverLatencyOptimization_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverLatencyOptimization(string failoverLatencyOptimization) { DARABONBA_PTR_SET_VALUE(failoverLatencyOptimization_, failoverLatencyOptimization) };


    // failoverLbaStrategy Field Functions 
    bool hasFailoverLbaStrategy() const { return this->failoverLbaStrategy_ != nullptr;};
    void deleteFailoverLbaStrategy() { this->failoverLbaStrategy_ = nullptr;};
    inline string getFailoverLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(failoverLbaStrategy_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverLbaStrategy(string failoverLbaStrategy) { DARABONBA_PTR_SET_VALUE(failoverLbaStrategy_, failoverLbaStrategy) };


    // failoverMaxReturnAddrNum Field Functions 
    bool hasFailoverMaxReturnAddrNum() const { return this->failoverMaxReturnAddrNum_ != nullptr;};
    void deleteFailoverMaxReturnAddrNum() { this->failoverMaxReturnAddrNum_ = nullptr;};
    inline int32_t getFailoverMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMaxReturnAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverMaxReturnAddrNum(int32_t failoverMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMaxReturnAddrNum_, failoverMaxReturnAddrNum) };


    // failoverMinAvailableAddrNum Field Functions 
    bool hasFailoverMinAvailableAddrNum() const { return this->failoverMinAvailableAddrNum_ != nullptr;};
    void deleteFailoverMinAvailableAddrNum() { this->failoverMinAvailableAddrNum_ = nullptr;};
    inline int32_t getFailoverMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMinAvailableAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverMinAvailableAddrNum(int32_t failoverMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMinAvailableAddrNum_, failoverMinAvailableAddrNum) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyResponseBody::Lines & getLines() const { DARABONBA_PTR_GET_CONST(lines_, DescribeDnsGtmAccessStrategyResponseBody::Lines) };
    inline DescribeDnsGtmAccessStrategyResponseBody::Lines getLines() { DARABONBA_PTR_GET(lines_, DescribeDnsGtmAccessStrategyResponseBody::Lines) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setLines(const DescribeDnsGtmAccessStrategyResponseBody::Lines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setLines(DescribeDnsGtmAccessStrategyResponseBody::Lines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string getStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The primary/secondary switchover policy for address pool groups. Valid values:
    // 
    // *   AUTO: performs automatic switchover between the primary and secondary address pool groups upon failures.
    // *   DEFAULT: uses the primary address pool group.
    // *   FAILOVER: uses the secondary address pool group.
    shared_ptr<string> accessMode_ {};
    // The time when the access policy was created.
    shared_ptr<string> createTime_ {};
    // The timestamp that indicates when the access policy was created.
    shared_ptr<int64_t> createTimestamp_ {};
    // The status of the primary address pool group. Valid values:
    // 
    // *   AVAILABLE: available
    // *   NOT_AVAILABLE: unavailable
    shared_ptr<string> defaultAddrPoolGroupStatus_ {};
    // The type of the primary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    shared_ptr<string> defaultAddrPoolType_ {};
    // The address pools in the primary address pool group.
    shared_ptr<DescribeDnsGtmAccessStrategyResponseBody::DefaultAddrPools> defaultAddrPools_ {};
    // The number of available addresses in the primary address pool.
    shared_ptr<int32_t> defaultAvailableAddrNum_ {};
    // Indicates whether scheduling optimization for latency resolution was enabled for the primary address pool group. Valid values:
    // 
    // *   OPEN: enabled
    // *   CLOSE: disabled
    shared_ptr<string> defaultLatencyOptimization_ {};
    // The load balancing policy of the primary address pool group. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    shared_ptr<string> defaultLbaStrategy_ {};
    // The maximum number of addresses returned from the primary address pool group.
    shared_ptr<int32_t> defaultMaxReturnAddrNum_ {};
    // The minimum number of available addresses in the primary address pool group.
    shared_ptr<int32_t> defaultMinAvailableAddrNum_ {};
    // The type of the active address pool group. Valid values:
    // 
    // *   DEFAULT: the primary address pool group
    // *   FAILOVER: the secondary address pool group
    shared_ptr<string> effectiveAddrPoolGroupType_ {};
    // The status of the secondary address pool group. Valid values:
    // 
    // *   AVAILABLE: available
    // *   NOT_AVAILABLE: unavailable
    shared_ptr<string> failoverAddrPoolGroupStatus_ {};
    // The type of the secondary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    shared_ptr<string> failoverAddrPoolType_ {};
    // The address pools in the secondary address pool group.
    shared_ptr<DescribeDnsGtmAccessStrategyResponseBody::FailoverAddrPools> failoverAddrPools_ {};
    // The number of available addresses in the secondary address pool.
    shared_ptr<int32_t> failoverAvailableAddrNum_ {};
    // Indicates whether scheduling optimization for latency resolution was enabled for the secondary address pool group. Valid values:
    // 
    // *   OPEN: enabled
    // *   CLOSE: disabled
    shared_ptr<string> failoverLatencyOptimization_ {};
    // The load balancing policy of the secondary address pool group. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    shared_ptr<string> failoverLbaStrategy_ {};
    // The maximum number of addresses returned from the secondary address pool group.
    shared_ptr<int32_t> failoverMaxReturnAddrNum_ {};
    // The minimum number of available addresses in the secondary address pool group.
    shared_ptr<int32_t> failoverMinAvailableAddrNum_ {};
    // The ID of the associated instance.
    shared_ptr<string> instanceId_ {};
    // The source regions.
    shared_ptr<DescribeDnsGtmAccessStrategyResponseBody::Lines> lines_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the access policy.
    shared_ptr<string> strategyId_ {};
    // The type of the access policy. Valid values:
    // 
    // *   GEO: geographical location-based
    // *   LATENCY: latency-based
    shared_ptr<string> strategyMode_ {};
    // The name of the access policy.
    shared_ptr<string> strategyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
