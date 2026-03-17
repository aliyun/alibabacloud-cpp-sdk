// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEDISTRIBUTIONSTRATEGIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEDISTRIBUTIONSTRATEGIESRESPONSEBODY_HPP_
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
  class DescribeRouteDistributionStrategiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteDistributionStrategiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategies, strategies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteDistributionStrategiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouteDistributionStrategiesResponseBody() = default ;
    DescribeRouteDistributionStrategiesResponseBody(const DescribeRouteDistributionStrategiesResponseBody &) = default ;
    DescribeRouteDistributionStrategiesResponseBody(DescribeRouteDistributionStrategiesResponseBody &&) = default ;
    DescribeRouteDistributionStrategiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteDistributionStrategiesResponseBody() = default ;
    DescribeRouteDistributionStrategiesResponseBody& operator=(const DescribeRouteDistributionStrategiesResponseBody &) = default ;
    DescribeRouteDistributionStrategiesResponseBody& operator=(DescribeRouteDistributionStrategiesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ConflictInfo, conflictInfo_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DestCidrBlock, destCidrBlock_);
          DARABONBA_PTR_TO_JSON(HcInstanceId, hcInstanceId_);
          DARABONBA_PTR_TO_JSON(IsConflict, isConflict_);
          DARABONBA_PTR_TO_JSON(RouteDistribution, routeDistribution_);
          DARABONBA_PTR_TO_JSON(RouteSource, routeSource_);
          DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StrategyPublishStatus, strategyPublishStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
          DARABONBA_PTR_FROM_JSON(ConflictInfo, conflictInfo_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DestCidrBlock, destCidrBlock_);
          DARABONBA_PTR_FROM_JSON(HcInstanceId, hcInstanceId_);
          DARABONBA_PTR_FROM_JSON(IsConflict, isConflict_);
          DARABONBA_PTR_FROM_JSON(RouteDistribution, routeDistribution_);
          DARABONBA_PTR_FROM_JSON(RouteSource, routeSource_);
          DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StrategyPublishStatus, strategyPublishStatus_);
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
        virtual bool empty() const override { return this->conflictInfo_ == nullptr
        && this->createTime_ == nullptr && this->destCidrBlock_ == nullptr && this->hcInstanceId_ == nullptr && this->isConflict_ == nullptr && this->routeDistribution_ == nullptr
        && this->routeSource_ == nullptr && this->smartAGId_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->strategyPublishStatus_ == nullptr; };
        // conflictInfo Field Functions 
        bool hasConflictInfo() const { return this->conflictInfo_ != nullptr;};
        void deleteConflictInfo() { this->conflictInfo_ = nullptr;};
        inline string getConflictInfo() const { DARABONBA_PTR_GET_DEFAULT(conflictInfo_, "") };
        inline Strategy& setConflictInfo(string conflictInfo) { DARABONBA_PTR_SET_VALUE(conflictInfo_, conflictInfo) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Strategy& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // destCidrBlock Field Functions 
        bool hasDestCidrBlock() const { return this->destCidrBlock_ != nullptr;};
        void deleteDestCidrBlock() { this->destCidrBlock_ = nullptr;};
        inline string getDestCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destCidrBlock_, "") };
        inline Strategy& setDestCidrBlock(string destCidrBlock) { DARABONBA_PTR_SET_VALUE(destCidrBlock_, destCidrBlock) };


        // hcInstanceId Field Functions 
        bool hasHcInstanceId() const { return this->hcInstanceId_ != nullptr;};
        void deleteHcInstanceId() { this->hcInstanceId_ = nullptr;};
        inline string getHcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(hcInstanceId_, "") };
        inline Strategy& setHcInstanceId(string hcInstanceId) { DARABONBA_PTR_SET_VALUE(hcInstanceId_, hcInstanceId) };


        // isConflict Field Functions 
        bool hasIsConflict() const { return this->isConflict_ != nullptr;};
        void deleteIsConflict() { this->isConflict_ = nullptr;};
        inline bool getIsConflict() const { DARABONBA_PTR_GET_DEFAULT(isConflict_, false) };
        inline Strategy& setIsConflict(bool isConflict) { DARABONBA_PTR_SET_VALUE(isConflict_, isConflict) };


        // routeDistribution Field Functions 
        bool hasRouteDistribution() const { return this->routeDistribution_ != nullptr;};
        void deleteRouteDistribution() { this->routeDistribution_ = nullptr;};
        inline string getRouteDistribution() const { DARABONBA_PTR_GET_DEFAULT(routeDistribution_, "") };
        inline Strategy& setRouteDistribution(string routeDistribution) { DARABONBA_PTR_SET_VALUE(routeDistribution_, routeDistribution) };


        // routeSource Field Functions 
        bool hasRouteSource() const { return this->routeSource_ != nullptr;};
        void deleteRouteSource() { this->routeSource_ = nullptr;};
        inline string getRouteSource() const { DARABONBA_PTR_GET_DEFAULT(routeSource_, "") };
        inline Strategy& setRouteSource(string routeSource) { DARABONBA_PTR_SET_VALUE(routeSource_, routeSource) };


        // smartAGId Field Functions 
        bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
        void deleteSmartAGId() { this->smartAGId_ = nullptr;};
        inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
        inline Strategy& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Strategy& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Strategy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // strategyPublishStatus Field Functions 
        bool hasStrategyPublishStatus() const { return this->strategyPublishStatus_ != nullptr;};
        void deleteStrategyPublishStatus() { this->strategyPublishStatus_ = nullptr;};
        inline string getStrategyPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(strategyPublishStatus_, "") };
        inline Strategy& setStrategyPublishStatus(string strategyPublishStatus) { DARABONBA_PTR_SET_VALUE(strategyPublishStatus_, strategyPublishStatus) };


      protected:
        shared_ptr<string> conflictInfo_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> destCidrBlock_ {};
        shared_ptr<string> hcInstanceId_ {};
        shared_ptr<bool> isConflict_ {};
        shared_ptr<string> routeDistribution_ {};
        shared_ptr<string> routeSource_ {};
        shared_ptr<string> smartAGId_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> strategyPublishStatus_ {};
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
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->strategies_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteDistributionStrategiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteDistributionStrategiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteDistributionStrategiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategies Field Functions 
    bool hasStrategies() const { return this->strategies_ != nullptr;};
    void deleteStrategies() { this->strategies_ = nullptr;};
    inline const DescribeRouteDistributionStrategiesResponseBody::Strategies & getStrategies() const { DARABONBA_PTR_GET_CONST(strategies_, DescribeRouteDistributionStrategiesResponseBody::Strategies) };
    inline DescribeRouteDistributionStrategiesResponseBody::Strategies getStrategies() { DARABONBA_PTR_GET(strategies_, DescribeRouteDistributionStrategiesResponseBody::Strategies) };
    inline DescribeRouteDistributionStrategiesResponseBody& setStrategies(const DescribeRouteDistributionStrategiesResponseBody::Strategies & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
    inline DescribeRouteDistributionStrategiesResponseBody& setStrategies(DescribeRouteDistributionStrategiesResponseBody::Strategies && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouteDistributionStrategiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRouteDistributionStrategiesResponseBody::Strategies> strategies_ {};
    // The total number of routes.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
