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
        // The explicit cache creation points, in points, represented as a decimal string. A true zero value is 0.
        shared_ptr<string> explicitCacheCreation_ {};
        // The explicit cache hit points, in points, represented as a decimal string. A true zero value is 0.
        shared_ptr<string> explicitCacheHit_ {};
        // The implicit cache hit points, in points, represented as a decimal string. A true zero value is 0.
        shared_ptr<string> implicitCacheHit_ {};
        // The normal input points, in points, represented as a decimal string. A true zero value is 0.
        shared_ptr<string> normalInput_ {};
        // The output points, in points, represented as a decimal string. A true zero value is 0.
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
      // The product or agent type associated with the invocation, which retains the original value from the deduction record. If no match is found or the query fails, this parameter is not returned.
      shared_ptr<string> agentType_ {};
      // The invocation status. Valid values: SUCCESS (successful, HTTP 2xx), RATE_LIMITED (throttled, HTTP 429), TIMEOUT (timed out, HTTP 504), and FAILED (other failure statuses).
      shared_ptr<string> callStatus_ {};
      // The time of the model invocation log, in ISO 8601 format and UTC+08:00 time zone.
      shared_ptr<string> callTime_ {};
      // The latency of the first token, in milliseconds. If the invocation fails or no first token data exists, this parameter is empty.
      shared_ptr<int64_t> firstTokenLatencyMs_ {};
      // The actual data region of the invocation log.
      shared_ptr<string> gatewayRegion_ {};
      // The HTTP status code returned by the AI gateway.
      shared_ptr<int32_t> httpStatusCode_ {};
      // The number of original input tokens. If no valid data exists, this parameter is empty.
      shared_ptr<int64_t> inputToken_ {};
      // The instance ID of the product associated with the model invocation.
      shared_ptr<string> instanceId_ {};
      // The ID of the actually invoked model. If the actual model is missing, the requested model is used as a fallback.
      shared_ptr<string> model_ {};
      // The actual deducted points matched, returned as a decimal string. A true zero value is returned as 0. If no match is found or the query fails, this parameter is not returned. Do not treat a missing value as zero.
      shared_ptr<string> points_ {};
      // The point breakdown of the matched deduction record for this invocation, which comes from the same record as Points. If valid details are missing, this object is not returned. If the object exists, all five point types are returned. The sum of the five point types equals Points, and a true zero value is returned as the string 0.
      shared_ptr<CallDetails::PointsBreakdown> pointsBreakdown_ {};
      // The request ID of the AI gateway invocation, which is different from the request ID of the outer API operation.
      shared_ptr<string> requestId_ {};
      // The ID of the user who initiated the model invocation. If no valid data exists, this parameter is empty.
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
    // The list of AI invocation details on the current page. If no records exist, an empty array is returned.
    shared_ptr<vector<DescribeAICallDetailsResponseBody::CallDetails>> callDetails_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The actual end time of the query, in ISO 8601 format and UTC+08:00 time zone. Reuse this value when you turn pages.
    shared_ptr<string> queryEndTime_ {};
    // The actual start time of the query, in ISO 8601 format and UTC+08:00 time zone. Reuse this value when you turn pages.
    shared_ptr<string> queryStartTime_ {};
    // The request ID of the current API operation, which is used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of invocation records that meet the query conditions, including records that do not match any deducted points.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
