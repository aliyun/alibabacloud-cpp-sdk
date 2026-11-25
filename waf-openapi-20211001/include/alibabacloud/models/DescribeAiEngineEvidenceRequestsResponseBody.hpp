// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVIDENCEREQUESTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVIDENCEREQUESTSRESPONSEBODY_HPP_
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
  class DescribeAiEngineEvidenceRequestsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEvidenceRequestsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEvidenceRequestsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAiEngineEvidenceRequestsResponseBody() = default ;
    DescribeAiEngineEvidenceRequestsResponseBody(const DescribeAiEngineEvidenceRequestsResponseBody &) = default ;
    DescribeAiEngineEvidenceRequestsResponseBody(DescribeAiEngineEvidenceRequestsResponseBody &&) = default ;
    DescribeAiEngineEvidenceRequestsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEvidenceRequestsResponseBody() = default ;
    DescribeAiEngineEvidenceRequestsResponseBody& operator=(const DescribeAiEngineEvidenceRequestsResponseBody &) = default ;
    DescribeAiEngineEvidenceRequestsResponseBody& operator=(DescribeAiEngineEvidenceRequestsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AttackSources, attackSources_);
        DARABONBA_PTR_TO_JSON(EvidenceId, evidenceId_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
        DARABONBA_PTR_TO_JSON(ImpactType, impactType_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(RequestPath, requestPath_);
        DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(SuspectedBypass, suspectedBypass_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackSources, attackSources_);
        DARABONBA_PTR_FROM_JSON(EvidenceId, evidenceId_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
        DARABONBA_PTR_FROM_JSON(ImpactType, impactType_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(RequestPath, requestPath_);
        DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(SuspectedBypass, suspectedBypass_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AttackSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttackSources& obj) { 
          DARABONBA_PTR_TO_JSON(Sources, sources_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AttackSources& obj) { 
          DARABONBA_PTR_FROM_JSON(Sources, sources_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AttackSources() = default ;
        AttackSources(const AttackSources &) = default ;
        AttackSources(AttackSources &&) = default ;
        AttackSources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttackSources() = default ;
        AttackSources& operator=(const AttackSources &) = default ;
        AttackSources& operator=(AttackSources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Sources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Sources& obj) { 
            DARABONBA_PTR_TO_JSON(Attribute, attribute_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Sources& obj) { 
            DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Sources() = default ;
          Sources(const Sources &) = default ;
          Sources(Sources &&) = default ;
          Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Sources() = default ;
          Sources& operator=(const Sources &) = default ;
          Sources& operator=(Sources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attribute_ == nullptr
        && this->value_ == nullptr; };
          // attribute Field Functions 
          bool hasAttribute() const { return this->attribute_ != nullptr;};
          void deleteAttribute() { this->attribute_ = nullptr;};
          inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
          inline Sources& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Sources& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The display attribute of the source, such as the region code.
          shared_ptr<string> attribute_ {};
          // The source value, such as an IP address.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->sources_ == nullptr
        && this->type_ == nullptr; };
        // sources Field Functions 
        bool hasSources() const { return this->sources_ != nullptr;};
        void deleteSources() { this->sources_ = nullptr;};
        inline const vector<AttackSources::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<AttackSources::Sources>) };
        inline vector<AttackSources::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<AttackSources::Sources>) };
        inline AttackSources& setSources(const vector<AttackSources::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
        inline AttackSources& setSources(vector<AttackSources::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AttackSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of sources of this type.
        shared_ptr<vector<AttackSources::Sources>> sources_ {};
        // The attack source type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->attackSources_ == nullptr
        && this->evidenceId_ == nullptr && this->host_ == nullptr && this->httpStatus_ == nullptr && this->impactType_ == nullptr && this->method_ == nullptr
        && this->nodeId_ == nullptr && this->requestPath_ == nullptr && this->requestTime_ == nullptr && this->resource_ == nullptr && this->suspectedBypass_ == nullptr
        && this->traceId_ == nullptr; };
      // attackSources Field Functions 
      bool hasAttackSources() const { return this->attackSources_ != nullptr;};
      void deleteAttackSources() { this->attackSources_ = nullptr;};
      inline const vector<Items::AttackSources> & getAttackSources() const { DARABONBA_PTR_GET_CONST(attackSources_, vector<Items::AttackSources>) };
      inline vector<Items::AttackSources> getAttackSources() { DARABONBA_PTR_GET(attackSources_, vector<Items::AttackSources>) };
      inline Items& setAttackSources(const vector<Items::AttackSources> & attackSources) { DARABONBA_PTR_SET_VALUE(attackSources_, attackSources) };
      inline Items& setAttackSources(vector<Items::AttackSources> && attackSources) { DARABONBA_PTR_SET_RVALUE(attackSources_, attackSources) };


      // evidenceId Field Functions 
      bool hasEvidenceId() const { return this->evidenceId_ != nullptr;};
      void deleteEvidenceId() { this->evidenceId_ = nullptr;};
      inline string getEvidenceId() const { DARABONBA_PTR_GET_DEFAULT(evidenceId_, "") };
      inline Items& setEvidenceId(string evidenceId) { DARABONBA_PTR_SET_VALUE(evidenceId_, evidenceId) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Items& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // httpStatus Field Functions 
      bool hasHttpStatus() const { return this->httpStatus_ != nullptr;};
      void deleteHttpStatus() { this->httpStatus_ = nullptr;};
      inline int32_t getHttpStatus() const { DARABONBA_PTR_GET_DEFAULT(httpStatus_, 0) };
      inline Items& setHttpStatus(int32_t httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


      // impactType Field Functions 
      bool hasImpactType() const { return this->impactType_ != nullptr;};
      void deleteImpactType() { this->impactType_ = nullptr;};
      inline string getImpactType() const { DARABONBA_PTR_GET_DEFAULT(impactType_, "") };
      inline Items& setImpactType(string impactType) { DARABONBA_PTR_SET_VALUE(impactType_, impactType) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Items& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Items& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // requestPath Field Functions 
      bool hasRequestPath() const { return this->requestPath_ != nullptr;};
      void deleteRequestPath() { this->requestPath_ = nullptr;};
      inline string getRequestPath() const { DARABONBA_PTR_GET_DEFAULT(requestPath_, "") };
      inline Items& setRequestPath(string requestPath) { DARABONBA_PTR_SET_VALUE(requestPath_, requestPath) };


      // requestTime Field Functions 
      bool hasRequestTime() const { return this->requestTime_ != nullptr;};
      void deleteRequestTime() { this->requestTime_ = nullptr;};
      inline int64_t getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
      inline Items& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Items& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // suspectedBypass Field Functions 
      bool hasSuspectedBypass() const { return this->suspectedBypass_ != nullptr;};
      void deleteSuspectedBypass() { this->suspectedBypass_ = nullptr;};
      inline int32_t getSuspectedBypass() const { DARABONBA_PTR_GET_DEFAULT(suspectedBypass_, 0) };
      inline Items& setSuspectedBypass(int32_t suspectedBypass) { DARABONBA_PTR_SET_VALUE(suspectedBypass_, suspectedBypass) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Items& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    protected:
      // The list of attack source groups for the request.
      shared_ptr<vector<Items::AttackSources>> attackSources_ {};
      // The evidence ID.
      shared_ptr<string> evidenceId_ {};
      // The host of the request.
      shared_ptr<string> host_ {};
      // The HTTP response status code.
      shared_ptr<int32_t> httpStatus_ {};
      // The evidence impact tag. Valid values:
      // 
      // - **block**: Indicates that the request is blocked.
      // 
      // - **challenge**: Indicates that the request is challenged.
      // 
      // - **monitor**: Indicates that the request is monitored.
      // 
      // - **bypass**: Indicates a suspected bypass.
      // 
      // - **attempt**: Indicates reconnaissance or probing.
      shared_ptr<string> impactType_ {};
      // The HTTP method.
      shared_ptr<string> method_ {};
      // The ID of the associated node. This corresponds to the NodeId in the node list.
      shared_ptr<string> nodeId_ {};
      // The masked path of the request.
      shared_ptr<string> requestPath_ {};
      // The time when the original request was made. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> requestTime_ {};
      // The protected object to which the request belongs.
      shared_ptr<string> resource_ {};
      // Specifies whether the request is a suspected bypass. Valid values:
      // 
      // - **1**: Indicates a suspected bypass.
      // - **0**: Indicates that the request is not a bypass.
      shared_ptr<int32_t> suspectedBypass_ {};
      // The trace ID of the original request.
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAiEngineEvidenceRequestsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAiEngineEvidenceRequestsResponseBody::Items>) };
    inline vector<DescribeAiEngineEvidenceRequestsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAiEngineEvidenceRequestsResponseBody::Items>) };
    inline DescribeAiEngineEvidenceRequestsResponseBody& setItems(const vector<DescribeAiEngineEvidenceRequestsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAiEngineEvidenceRequestsResponseBody& setItems(vector<DescribeAiEngineEvidenceRequestsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAiEngineEvidenceRequestsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAiEngineEvidenceRequestsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAiEngineEvidenceRequestsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAiEngineEvidenceRequestsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of evidence requests.
    shared_ptr<vector<DescribeAiEngineEvidenceRequestsResponseBody::Items>> items_ {};
    // The number of entries to return on each page in a paging query. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. If a next page exists, this field returns a value.
    // > If this parameter returns a value, a next page exists. You can use the returned **NextToken** as a request parameter to retrieve the next page. Repeat this process until no value is returned, which indicates that all data has been retrieved.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of evidence requests that meet the specified conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
