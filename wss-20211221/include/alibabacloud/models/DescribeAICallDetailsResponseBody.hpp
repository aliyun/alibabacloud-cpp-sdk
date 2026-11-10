// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAICALLDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAICALLDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeAICallDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAICallDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallDetails, callDetails_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryEndTime, queryEndTime_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAICallDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDetails, callDetails_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryEndTime, queryEndTime_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAICallDetailsResponseBody() = default ;
    DescribeAICallDetailsResponseBody(const DescribeAICallDetailsResponseBody &) = default ;
    DescribeAICallDetailsResponseBody(DescribeAICallDetailsResponseBody &&) = default ;
    DescribeAICallDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAICallDetailsResponseBody() = default ;
    DescribeAICallDetailsResponseBody& operator=(const DescribeAICallDetailsResponseBody &) = default ;
    DescribeAICallDetailsResponseBody& operator=(DescribeAICallDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CallDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallDetails& obj) { 
        DARABONBA_PTR_TO_JSON(AgentType, agentType_);
        DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
        DARABONBA_PTR_TO_JSON(CallTime, callTime_);
        DARABONBA_PTR_TO_JSON(FirstTokenLatencyMs, firstTokenLatencyMs_);
        DARABONBA_PTR_TO_JSON(GatewayRegion, gatewayRegion_);
        DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
        DARABONBA_PTR_TO_JSON(InputToken, inputToken_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Points, points_);
        DARABONBA_PTR_TO_JSON(PointsBreakdown, pointsBreakdown_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(WyId, wyId_);
      };
      friend void from_json(const Darabonba::Json& j, CallDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
        DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
        DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
        DARABONBA_PTR_FROM_JSON(FirstTokenLatencyMs, firstTokenLatencyMs_);
        DARABONBA_PTR_FROM_JSON(GatewayRegion, gatewayRegion_);
        DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
        DARABONBA_PTR_FROM_JSON(InputToken, inputToken_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Points, points_);
        DARABONBA_PTR_FROM_JSON(PointsBreakdown, pointsBreakdown_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(WyId, wyId_);
      };
      CallDetails() = default ;
      CallDetails(const CallDetails &) = default ;
      CallDetails(CallDetails &&) = default ;
      CallDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallDetails() = default ;
      CallDetails& operator=(const CallDetails &) = default ;
      CallDetails& operator=(CallDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PointsBreakdown : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PointsBreakdown& obj) { 
          DARABONBA_PTR_TO_JSON(ExplicitCacheCreation, explicitCacheCreation_);
          DARABONBA_PTR_TO_JSON(ExplicitCacheHit, explicitCacheHit_);
          DARABONBA_PTR_TO_JSON(ImplicitCacheHit, implicitCacheHit_);
          DARABONBA_PTR_TO_JSON(NormalInput, normalInput_);
          DARABONBA_PTR_TO_JSON(Output, output_);
        };
        friend void from_json(const Darabonba::Json& j, PointsBreakdown& obj) { 
          DARABONBA_PTR_FROM_JSON(ExplicitCacheCreation, explicitCacheCreation_);
          DARABONBA_PTR_FROM_JSON(ExplicitCacheHit, explicitCacheHit_);
          DARABONBA_PTR_FROM_JSON(ImplicitCacheHit, implicitCacheHit_);
          DARABONBA_PTR_FROM_JSON(NormalInput, normalInput_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
        };
        PointsBreakdown() = default ;
        PointsBreakdown(const PointsBreakdown &) = default ;
        PointsBreakdown(PointsBreakdown &&) = default ;
        PointsBreakdown(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PointsBreakdown() = default ;
        PointsBreakdown& operator=(const PointsBreakdown &) = default ;
        PointsBreakdown& operator=(PointsBreakdown &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->explicitCacheCreation_ == nullptr
        && this->explicitCacheHit_ == nullptr && this->implicitCacheHit_ == nullptr && this->normalInput_ == nullptr && this->output_ == nullptr; };
        // explicitCacheCreation Field Functions 
        bool hasExplicitCacheCreation() const { return this->explicitCacheCreation_ != nullptr;};
        void deleteExplicitCacheCreation() { this->explicitCacheCreation_ = nullptr;};
        inline string getExplicitCacheCreation() const { DARABONBA_PTR_GET_DEFAULT(explicitCacheCreation_, "") };
        inline PointsBreakdown& setExplicitCacheCreation(string explicitCacheCreation) { DARABONBA_PTR_SET_VALUE(explicitCacheCreation_, explicitCacheCreation) };


        // explicitCacheHit Field Functions 
        bool hasExplicitCacheHit() const { return this->explicitCacheHit_ != nullptr;};
        void deleteExplicitCacheHit() { this->explicitCacheHit_ = nullptr;};
        inline string getExplicitCacheHit() const { DARABONBA_PTR_GET_DEFAULT(explicitCacheHit_, "") };
        inline PointsBreakdown& setExplicitCacheHit(string explicitCacheHit) { DARABONBA_PTR_SET_VALUE(explicitCacheHit_, explicitCacheHit) };


        // implicitCacheHit Field Functions 
        bool hasImplicitCacheHit() const { return this->implicitCacheHit_ != nullptr;};
        void deleteImplicitCacheHit() { this->implicitCacheHit_ = nullptr;};
        inline string getImplicitCacheHit() const { DARABONBA_PTR_GET_DEFAULT(implicitCacheHit_, "") };
        inline PointsBreakdown& setImplicitCacheHit(string implicitCacheHit) { DARABONBA_PTR_SET_VALUE(implicitCacheHit_, implicitCacheHit) };


        // normalInput Field Functions 
        bool hasNormalInput() const { return this->normalInput_ != nullptr;};
        void deleteNormalInput() { this->normalInput_ = nullptr;};
        inline string getNormalInput() const { DARABONBA_PTR_GET_DEFAULT(normalInput_, "") };
        inline PointsBreakdown& setNormalInput(string normalInput) { DARABONBA_PTR_SET_VALUE(normalInput_, normalInput) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
        inline PointsBreakdown& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      protected:
        // 显式缓存创建积分，单位为积分，使用十进制字符串表示；真实零值为 0。
        shared_ptr<string> explicitCacheCreation_ {};
        // 显式缓存命中积分，单位为积分，使用十进制字符串表示；真实零值为 0。
        shared_ptr<string> explicitCacheHit_ {};
        // 隐式缓存命中积分，单位为积分，使用十进制字符串表示；真实零值为 0。
        shared_ptr<string> implicitCacheHit_ {};
        // 普通输入积分，单位为积分，使用十进制字符串表示；真实零值为 0。
        shared_ptr<string> normalInput_ {};
        // 输出积分，单位为积分，使用十进制字符串表示；真实零值为 0。
        shared_ptr<string> output_ {};
      };

      virtual bool empty() const override { return this->agentType_ == nullptr
        && this->callStatus_ == nullptr && this->callTime_ == nullptr && this->firstTokenLatencyMs_ == nullptr && this->gatewayRegion_ == nullptr && this->httpStatusCode_ == nullptr
        && this->inputToken_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr && this->points_ == nullptr && this->pointsBreakdown_ == nullptr
        && this->requestId_ == nullptr && this->wyId_ == nullptr; };
      // agentType Field Functions 
      bool hasAgentType() const { return this->agentType_ != nullptr;};
      void deleteAgentType() { this->agentType_ = nullptr;};
      inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
      inline CallDetails& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


      // callStatus Field Functions 
      bool hasCallStatus() const { return this->callStatus_ != nullptr;};
      void deleteCallStatus() { this->callStatus_ = nullptr;};
      inline string getCallStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
      inline CallDetails& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


      // callTime Field Functions 
      bool hasCallTime() const { return this->callTime_ != nullptr;};
      void deleteCallTime() { this->callTime_ = nullptr;};
      inline string getCallTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
      inline CallDetails& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


      // firstTokenLatencyMs Field Functions 
      bool hasFirstTokenLatencyMs() const { return this->firstTokenLatencyMs_ != nullptr;};
      void deleteFirstTokenLatencyMs() { this->firstTokenLatencyMs_ = nullptr;};
      inline int64_t getFirstTokenLatencyMs() const { DARABONBA_PTR_GET_DEFAULT(firstTokenLatencyMs_, 0L) };
      inline CallDetails& setFirstTokenLatencyMs(int64_t firstTokenLatencyMs) { DARABONBA_PTR_SET_VALUE(firstTokenLatencyMs_, firstTokenLatencyMs) };


      // gatewayRegion Field Functions 
      bool hasGatewayRegion() const { return this->gatewayRegion_ != nullptr;};
      void deleteGatewayRegion() { this->gatewayRegion_ = nullptr;};
      inline string getGatewayRegion() const { DARABONBA_PTR_GET_DEFAULT(gatewayRegion_, "") };
      inline CallDetails& setGatewayRegion(string gatewayRegion) { DARABONBA_PTR_SET_VALUE(gatewayRegion_, gatewayRegion) };


      // httpStatusCode Field Functions 
      bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
      void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
      inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
      inline CallDetails& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


      // inputToken Field Functions 
      bool hasInputToken() const { return this->inputToken_ != nullptr;};
      void deleteInputToken() { this->inputToken_ = nullptr;};
      inline int64_t getInputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0L) };
      inline CallDetails& setInputToken(int64_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CallDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline CallDetails& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // points Field Functions 
      bool hasPoints() const { return this->points_ != nullptr;};
      void deletePoints() { this->points_ = nullptr;};
      inline string getPoints() const { DARABONBA_PTR_GET_DEFAULT(points_, "") };
      inline CallDetails& setPoints(string points) { DARABONBA_PTR_SET_VALUE(points_, points) };


      // pointsBreakdown Field Functions 
      bool hasPointsBreakdown() const { return this->pointsBreakdown_ != nullptr;};
      void deletePointsBreakdown() { this->pointsBreakdown_ = nullptr;};
      inline const CallDetails::PointsBreakdown & getPointsBreakdown() const { DARABONBA_PTR_GET_CONST(pointsBreakdown_, CallDetails::PointsBreakdown) };
      inline CallDetails::PointsBreakdown getPointsBreakdown() { DARABONBA_PTR_GET(pointsBreakdown_, CallDetails::PointsBreakdown) };
      inline CallDetails& setPointsBreakdown(const CallDetails::PointsBreakdown & pointsBreakdown) { DARABONBA_PTR_SET_VALUE(pointsBreakdown_, pointsBreakdown) };
      inline CallDetails& setPointsBreakdown(CallDetails::PointsBreakdown && pointsBreakdown) { DARABONBA_PTR_SET_RVALUE(pointsBreakdown_, pointsBreakdown) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline CallDetails& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // wyId Field Functions 
      bool hasWyId() const { return this->wyId_ != nullptr;};
      void deleteWyId() { this->wyId_ = nullptr;};
      inline string getWyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
      inline CallDetails& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


    protected:
      // 售卖 deduction 记录中的原始 agent_type；未匹配或 ADB 查询失败时不返回。
      shared_ptr<string> agentType_ {};
      // 调用状态：SUCCESS、RATE_LIMITED、TIMEOUT 或 FAILED。
      shared_ptr<string> callStatus_ {};
      // 日志时间，ISO 8601。
      shared_ptr<string> callTime_ {};
      // 首包时延，单位毫秒；失败或无首包数据时为空。
      shared_ptr<int64_t> firstTokenLatencyMs_ {};
      // 本条调用日志的实际数据地域，取值为 cn-shanghai、cn-hangzhou、cn-hongkong、ap-southeast-1 或 us-east-1；杭州预发返回 cn-hangzhou。
      shared_ptr<string> gatewayRegion_ {};
      // AI 网关返回的 HTTP 状态码。
      shared_ptr<int32_t> httpStatusCode_ {};
      // 原始输入 token 数，前端据此转换上下文规模。
      shared_ptr<int64_t> inputToken_ {};
      // 产品实例 ID。
      shared_ptr<string> instanceId_ {};
      // 实际调用模型。
      shared_ptr<string> model_ {};
      // 按请求 ID 和输入输出 token 匹配的实际抵扣积分，十进制字符串；积分查询失败或超时时为空。
      shared_ptr<string> points_ {};
      // 本条调用已匹配抵扣记录的积分构成，与 Points 来自同一条记录。缺少有效明细时不返回此对象；对象存在时完整返回五项积分，五项之和等于 Points，真实零值返回字符串 0。
      shared_ptr<CallDetails::PointsBreakdown> pointsBreakdown_ {};
      // AI 网关请求 ID，与外层 POP 请求 ID 不同。
      shared_ptr<string> requestId_ {};
      // 用户 WyId，用户名由前端组装。
      shared_ptr<string> wyId_ {};
    };

    virtual bool empty() const override { return this->callDetails_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryEndTime_ == nullptr && this->queryStartTime_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // callDetails Field Functions 
    bool hasCallDetails() const { return this->callDetails_ != nullptr;};
    void deleteCallDetails() { this->callDetails_ = nullptr;};
    inline const vector<DescribeAICallDetailsResponseBody::CallDetails> & getCallDetails() const { DARABONBA_PTR_GET_CONST(callDetails_, vector<DescribeAICallDetailsResponseBody::CallDetails>) };
    inline vector<DescribeAICallDetailsResponseBody::CallDetails> getCallDetails() { DARABONBA_PTR_GET(callDetails_, vector<DescribeAICallDetailsResponseBody::CallDetails>) };
    inline DescribeAICallDetailsResponseBody& setCallDetails(const vector<DescribeAICallDetailsResponseBody::CallDetails> & callDetails) { DARABONBA_PTR_SET_VALUE(callDetails_, callDetails) };
    inline DescribeAICallDetailsResponseBody& setCallDetails(vector<DescribeAICallDetailsResponseBody::CallDetails> && callDetails) { DARABONBA_PTR_SET_RVALUE(callDetails_, callDetails) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAICallDetailsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAICallDetailsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryEndTime Field Functions 
    bool hasQueryEndTime() const { return this->queryEndTime_ != nullptr;};
    void deleteQueryEndTime() { this->queryEndTime_ = nullptr;};
    inline string getQueryEndTime() const { DARABONBA_PTR_GET_DEFAULT(queryEndTime_, "") };
    inline DescribeAICallDetailsResponseBody& setQueryEndTime(string queryEndTime) { DARABONBA_PTR_SET_VALUE(queryEndTime_, queryEndTime) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeAICallDetailsResponseBody& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAICallDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAICallDetailsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 调用明细列表。
    shared_ptr<vector<DescribeAICallDetailsResponseBody::CallDetails>> callDetails_ {};
    // 当前页码。
    shared_ptr<int32_t> pageNumber_ {};
    // 当前页大小。
    shared_ptr<int32_t> pageSize_ {};
    // 实际查询终点。翻页时应复用此值。
    shared_ptr<string> queryEndTime_ {};
    // 实际查询起点。翻页时应复用此值。
    shared_ptr<string> queryStartTime_ {};
    // POP 请求 ID。
    shared_ptr<string> requestId_ {};
    // 满足条件的总记录数。
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
