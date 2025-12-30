// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODY_HPP_
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
  class DescribeDnsGtmAccessStrategiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategies, strategies_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeDnsGtmAccessStrategiesResponseBody() = default ;
    DescribeDnsGtmAccessStrategiesResponseBody(const DescribeDnsGtmAccessStrategiesResponseBody &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBody(DescribeDnsGtmAccessStrategiesResponseBody &&) = default ;
    DescribeDnsGtmAccessStrategiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategiesResponseBody() = default ;
    DescribeDnsGtmAccessStrategiesResponseBody& operator=(const DescribeDnsGtmAccessStrategiesResponseBody &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBody& operator=(DescribeDnsGtmAccessStrategiesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(EffectiveAddrPoolGroupType, effectiveAddrPoolGroupType_);
          DARABONBA_PTR_TO_JSON(EffectiveAddrPoolType, effectiveAddrPoolType_);
          DARABONBA_PTR_TO_JSON(EffectiveAddrPools, effectiveAddrPools_);
          DARABONBA_PTR_TO_JSON(EffectiveLbaStrategy, effectiveLbaStrategy_);
          DARABONBA_PTR_TO_JSON(Lines, lines_);
          DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        };
        friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(EffectiveAddrPoolGroupType, effectiveAddrPoolGroupType_);
          DARABONBA_PTR_FROM_JSON(EffectiveAddrPoolType, effectiveAddrPoolType_);
          DARABONBA_PTR_FROM_JSON(EffectiveAddrPools, effectiveAddrPools_);
          DARABONBA_PTR_FROM_JSON(EffectiveLbaStrategy, effectiveLbaStrategy_);
          DARABONBA_PTR_FROM_JSON(Lines, lines_);
          DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
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

        class EffectiveAddrPools : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EffectiveAddrPools& obj) { 
            DARABONBA_PTR_TO_JSON(EffectiveAddrPool, effectiveAddrPool_);
          };
          friend void from_json(const Darabonba::Json& j, EffectiveAddrPools& obj) { 
            DARABONBA_PTR_FROM_JSON(EffectiveAddrPool, effectiveAddrPool_);
          };
          EffectiveAddrPools() = default ;
          EffectiveAddrPools(const EffectiveAddrPools &) = default ;
          EffectiveAddrPools(EffectiveAddrPools &&) = default ;
          EffectiveAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EffectiveAddrPools() = default ;
          EffectiveAddrPools& operator=(const EffectiveAddrPools &) = default ;
          EffectiveAddrPools& operator=(EffectiveAddrPools &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class EffectiveAddrPool : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EffectiveAddrPool& obj) { 
              DARABONBA_PTR_TO_JSON(AddrCount, addrCount_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, EffectiveAddrPool& obj) { 
              DARABONBA_PTR_FROM_JSON(AddrCount, addrCount_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            EffectiveAddrPool() = default ;
            EffectiveAddrPool(const EffectiveAddrPool &) = default ;
            EffectiveAddrPool(EffectiveAddrPool &&) = default ;
            EffectiveAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EffectiveAddrPool() = default ;
            EffectiveAddrPool& operator=(const EffectiveAddrPool &) = default ;
            EffectiveAddrPool& operator=(EffectiveAddrPool &&) = default ;
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
            inline EffectiveAddrPool& setAddrCount(int32_t addrCount) { DARABONBA_PTR_SET_VALUE(addrCount_, addrCount) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline EffectiveAddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // lbaWeight Field Functions 
            bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
            void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
            inline int32_t getLbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
            inline EffectiveAddrPool& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline EffectiveAddrPool& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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

          virtual bool empty() const override { return this->effectiveAddrPool_ == nullptr; };
          // effectiveAddrPool Field Functions 
          bool hasEffectiveAddrPool() const { return this->effectiveAddrPool_ != nullptr;};
          void deleteEffectiveAddrPool() { this->effectiveAddrPool_ = nullptr;};
          inline const vector<EffectiveAddrPools::EffectiveAddrPool> & getEffectiveAddrPool() const { DARABONBA_PTR_GET_CONST(effectiveAddrPool_, vector<EffectiveAddrPools::EffectiveAddrPool>) };
          inline vector<EffectiveAddrPools::EffectiveAddrPool> getEffectiveAddrPool() { DARABONBA_PTR_GET(effectiveAddrPool_, vector<EffectiveAddrPools::EffectiveAddrPool>) };
          inline EffectiveAddrPools& setEffectiveAddrPool(const vector<EffectiveAddrPools::EffectiveAddrPool> & effectiveAddrPool) { DARABONBA_PTR_SET_VALUE(effectiveAddrPool_, effectiveAddrPool) };
          inline EffectiveAddrPools& setEffectiveAddrPool(vector<EffectiveAddrPools::EffectiveAddrPool> && effectiveAddrPool) { DARABONBA_PTR_SET_RVALUE(effectiveAddrPool_, effectiveAddrPool) };


        protected:
          shared_ptr<vector<EffectiveAddrPools::EffectiveAddrPool>> effectiveAddrPool_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->effectiveAddrPoolGroupType_ == nullptr && this->effectiveAddrPoolType_ == nullptr && this->effectiveAddrPools_ == nullptr && this->effectiveLbaStrategy_ == nullptr
        && this->lines_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr; };
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


        // effectiveAddrPoolGroupType Field Functions 
        bool hasEffectiveAddrPoolGroupType() const { return this->effectiveAddrPoolGroupType_ != nullptr;};
        void deleteEffectiveAddrPoolGroupType() { this->effectiveAddrPoolGroupType_ = nullptr;};
        inline string getEffectiveAddrPoolGroupType() const { DARABONBA_PTR_GET_DEFAULT(effectiveAddrPoolGroupType_, "") };
        inline Strategy& setEffectiveAddrPoolGroupType(string effectiveAddrPoolGroupType) { DARABONBA_PTR_SET_VALUE(effectiveAddrPoolGroupType_, effectiveAddrPoolGroupType) };


        // effectiveAddrPoolType Field Functions 
        bool hasEffectiveAddrPoolType() const { return this->effectiveAddrPoolType_ != nullptr;};
        void deleteEffectiveAddrPoolType() { this->effectiveAddrPoolType_ = nullptr;};
        inline string getEffectiveAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(effectiveAddrPoolType_, "") };
        inline Strategy& setEffectiveAddrPoolType(string effectiveAddrPoolType) { DARABONBA_PTR_SET_VALUE(effectiveAddrPoolType_, effectiveAddrPoolType) };


        // effectiveAddrPools Field Functions 
        bool hasEffectiveAddrPools() const { return this->effectiveAddrPools_ != nullptr;};
        void deleteEffectiveAddrPools() { this->effectiveAddrPools_ = nullptr;};
        inline const Strategy::EffectiveAddrPools & getEffectiveAddrPools() const { DARABONBA_PTR_GET_CONST(effectiveAddrPools_, Strategy::EffectiveAddrPools) };
        inline Strategy::EffectiveAddrPools getEffectiveAddrPools() { DARABONBA_PTR_GET(effectiveAddrPools_, Strategy::EffectiveAddrPools) };
        inline Strategy& setEffectiveAddrPools(const Strategy::EffectiveAddrPools & effectiveAddrPools) { DARABONBA_PTR_SET_VALUE(effectiveAddrPools_, effectiveAddrPools) };
        inline Strategy& setEffectiveAddrPools(Strategy::EffectiveAddrPools && effectiveAddrPools) { DARABONBA_PTR_SET_RVALUE(effectiveAddrPools_, effectiveAddrPools) };


        // effectiveLbaStrategy Field Functions 
        bool hasEffectiveLbaStrategy() const { return this->effectiveLbaStrategy_ != nullptr;};
        void deleteEffectiveLbaStrategy() { this->effectiveLbaStrategy_ = nullptr;};
        inline string getEffectiveLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(effectiveLbaStrategy_, "") };
        inline Strategy& setEffectiveLbaStrategy(string effectiveLbaStrategy) { DARABONBA_PTR_SET_VALUE(effectiveLbaStrategy_, effectiveLbaStrategy) };


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


        // strategyName Field Functions 
        bool hasStrategyName() const { return this->strategyName_ != nullptr;};
        void deleteStrategyName() { this->strategyName_ = nullptr;};
        inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
        inline Strategy& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      protected:
        // The time when the access policy was created.
        shared_ptr<string> createTime_ {};
        // The timestamp that indicates when the access policy was created.
        shared_ptr<int64_t> createTimestamp_ {};
        // The type of the active address pool group. Valid values:
        // 
        // *   DEFAULT: the primary address pool group
        // *   FAILOVER: the secondary address pool group
        shared_ptr<string> effectiveAddrPoolGroupType_ {};
        // The type of the active address pools. Valid values:
        // 
        // *   IPV4
        // *   IPV6
        // *   DOMAIN
        shared_ptr<string> effectiveAddrPoolType_ {};
        // The active address pool groups.
        shared_ptr<Strategy::EffectiveAddrPools> effectiveAddrPools_ {};
        // The load balancing policy of the active address pool group. Data is returned when StrategyMode is set to GEO. Valid values: 
        // 
        // - ALL_RR: returns all addresses.
        // - RATIO: returns addresses by weight.
        shared_ptr<string> effectiveLbaStrategy_ {};
        // The source regions. Data is returned when StrategyMode is set to GEO. Valid values:
        shared_ptr<Strategy::Lines> lines_ {};
        // The ID of the access policy.
        shared_ptr<string> strategyId_ {};
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
    inline DescribeDnsGtmAccessStrategiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDnsGtmAccessStrategiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategies Field Functions 
    bool hasStrategies() const { return this->strategies_ != nullptr;};
    void deleteStrategies() { this->strategies_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategiesResponseBody::Strategies & getStrategies() const { DARABONBA_PTR_GET_CONST(strategies_, DescribeDnsGtmAccessStrategiesResponseBody::Strategies) };
    inline DescribeDnsGtmAccessStrategiesResponseBody::Strategies getStrategies() { DARABONBA_PTR_GET(strategies_, DescribeDnsGtmAccessStrategiesResponseBody::Strategies) };
    inline DescribeDnsGtmAccessStrategiesResponseBody& setStrategies(const DescribeDnsGtmAccessStrategiesResponseBody::Strategies & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
    inline DescribeDnsGtmAccessStrategiesResponseBody& setStrategies(DescribeDnsGtmAccessStrategiesResponseBody::Strategies && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeDnsGtmAccessStrategiesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeDnsGtmAccessStrategiesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The access policies.
    shared_ptr<DescribeDnsGtmAccessStrategiesResponseBody::Strategies> strategies_ {};
    // The total number of entries returned on all pages.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
