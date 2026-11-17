// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVIDENCEREQUESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVIDENCEREQUESTRESPONSEBODY_HPP_
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
  class DescribeAiEngineEvidenceRequestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEvidenceRequestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiInterpretation, aiInterpretation_);
      DARABONBA_PTR_TO_JSON(AttackSources, attackSources_);
      DARABONBA_PTR_TO_JSON(EvidenceId, evidenceId_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_TO_JSON(ImpactType, impactType_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestPath, requestPath_);
      DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(SuspectedBypass, suspectedBypass_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEvidenceRequestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiInterpretation, aiInterpretation_);
      DARABONBA_PTR_FROM_JSON(AttackSources, attackSources_);
      DARABONBA_PTR_FROM_JSON(EvidenceId, evidenceId_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_FROM_JSON(ImpactType, impactType_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestPath, requestPath_);
      DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(SuspectedBypass, suspectedBypass_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeAiEngineEvidenceRequestResponseBody() = default ;
    DescribeAiEngineEvidenceRequestResponseBody(const DescribeAiEngineEvidenceRequestResponseBody &) = default ;
    DescribeAiEngineEvidenceRequestResponseBody(DescribeAiEngineEvidenceRequestResponseBody &&) = default ;
    DescribeAiEngineEvidenceRequestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEvidenceRequestResponseBody() = default ;
    DescribeAiEngineEvidenceRequestResponseBody& operator=(const DescribeAiEngineEvidenceRequestResponseBody &) = default ;
    DescribeAiEngineEvidenceRequestResponseBody& operator=(DescribeAiEngineEvidenceRequestResponseBody &&) = default ;
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
        // The value of the source, such as an IP address.
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
      // The type of the attack source.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->aiInterpretation_ == nullptr
        && this->attackSources_ == nullptr && this->evidenceId_ == nullptr && this->host_ == nullptr && this->httpStatus_ == nullptr && this->impactType_ == nullptr
        && this->method_ == nullptr && this->nodeId_ == nullptr && this->request_ == nullptr && this->requestId_ == nullptr && this->requestPath_ == nullptr
        && this->requestTime_ == nullptr && this->resource_ == nullptr && this->response_ == nullptr && this->suspectedBypass_ == nullptr && this->traceId_ == nullptr; };
    // aiInterpretation Field Functions 
    bool hasAiInterpretation() const { return this->aiInterpretation_ != nullptr;};
    void deleteAiInterpretation() { this->aiInterpretation_ = nullptr;};
    inline string getAiInterpretation() const { DARABONBA_PTR_GET_DEFAULT(aiInterpretation_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setAiInterpretation(string aiInterpretation) { DARABONBA_PTR_SET_VALUE(aiInterpretation_, aiInterpretation) };


    // attackSources Field Functions 
    bool hasAttackSources() const { return this->attackSources_ != nullptr;};
    void deleteAttackSources() { this->attackSources_ = nullptr;};
    inline const vector<DescribeAiEngineEvidenceRequestResponseBody::AttackSources> & getAttackSources() const { DARABONBA_PTR_GET_CONST(attackSources_, vector<DescribeAiEngineEvidenceRequestResponseBody::AttackSources>) };
    inline vector<DescribeAiEngineEvidenceRequestResponseBody::AttackSources> getAttackSources() { DARABONBA_PTR_GET(attackSources_, vector<DescribeAiEngineEvidenceRequestResponseBody::AttackSources>) };
    inline DescribeAiEngineEvidenceRequestResponseBody& setAttackSources(const vector<DescribeAiEngineEvidenceRequestResponseBody::AttackSources> & attackSources) { DARABONBA_PTR_SET_VALUE(attackSources_, attackSources) };
    inline DescribeAiEngineEvidenceRequestResponseBody& setAttackSources(vector<DescribeAiEngineEvidenceRequestResponseBody::AttackSources> && attackSources) { DARABONBA_PTR_SET_RVALUE(attackSources_, attackSources) };


    // evidenceId Field Functions 
    bool hasEvidenceId() const { return this->evidenceId_ != nullptr;};
    void deleteEvidenceId() { this->evidenceId_ = nullptr;};
    inline string getEvidenceId() const { DARABONBA_PTR_GET_DEFAULT(evidenceId_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setEvidenceId(string evidenceId) { DARABONBA_PTR_SET_VALUE(evidenceId_, evidenceId) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpStatus Field Functions 
    bool hasHttpStatus() const { return this->httpStatus_ != nullptr;};
    void deleteHttpStatus() { this->httpStatus_ = nullptr;};
    inline int32_t getHttpStatus() const { DARABONBA_PTR_GET_DEFAULT(httpStatus_, 0) };
    inline DescribeAiEngineEvidenceRequestResponseBody& setHttpStatus(int32_t httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


    // impactType Field Functions 
    bool hasImpactType() const { return this->impactType_ != nullptr;};
    void deleteImpactType() { this->impactType_ = nullptr;};
    inline string getImpactType() const { DARABONBA_PTR_GET_DEFAULT(impactType_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setImpactType(string impactType) { DARABONBA_PTR_SET_VALUE(impactType_, impactType) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline string getRequest() const { DARABONBA_PTR_GET_DEFAULT(request_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setRequest(string request) { DARABONBA_PTR_SET_VALUE(request_, request) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestPath Field Functions 
    bool hasRequestPath() const { return this->requestPath_ != nullptr;};
    void deleteRequestPath() { this->requestPath_ = nullptr;};
    inline string getRequestPath() const { DARABONBA_PTR_GET_DEFAULT(requestPath_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setRequestPath(string requestPath) { DARABONBA_PTR_SET_VALUE(requestPath_, requestPath) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline int64_t getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
    inline DescribeAiEngineEvidenceRequestResponseBody& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline string getResponse() const { DARABONBA_PTR_GET_DEFAULT(response_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setResponse(string response) { DARABONBA_PTR_SET_VALUE(response_, response) };


    // suspectedBypass Field Functions 
    bool hasSuspectedBypass() const { return this->suspectedBypass_ != nullptr;};
    void deleteSuspectedBypass() { this->suspectedBypass_ = nullptr;};
    inline int32_t getSuspectedBypass() const { DARABONBA_PTR_GET_DEFAULT(suspectedBypass_, 0) };
    inline DescribeAiEngineEvidenceRequestResponseBody& setSuspectedBypass(int32_t suspectedBypass) { DARABONBA_PTR_SET_VALUE(suspectedBypass_, suspectedBypass) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeAiEngineEvidenceRequestResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The AI interpretation result in the specified language, in Markdown format.
    shared_ptr<string> aiInterpretation_ {};
    // The list of attack source groups for the request.
    shared_ptr<vector<DescribeAiEngineEvidenceRequestResponseBody::AttackSources>> attackSources_ {};
    // The evidence ID.
    shared_ptr<string> evidenceId_ {};
    // The host of the request.
    shared_ptr<string> host_ {};
    // The HTTP response status code.
    shared_ptr<int32_t> httpStatus_ {};
    // The impact tag of the evidence. Valid values:
    // 
    // - **block**: The request is blocked.
    // 
    // - **challenge**: The request triggers a challenge.
    // 
    // - **monitor**: The request is monitored.
    // 
    // - **bypass**: The request is suspected to be a bypass.
    // 
    // - **attempt**: The request is a reconnaissance probe.
    shared_ptr<string> impactType_ {};
    // The HTTP method.
    shared_ptr<string> method_ {};
    // The ID of the associated node, which corresponds to the NodeId in the node list.
    shared_ptr<string> nodeId_ {};
    // The request content.
    shared_ptr<string> request_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The masked request path.
    shared_ptr<string> requestPath_ {};
    // The time when the original request was made. The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> requestTime_ {};
    // The ID of the protected object to which the request belongs.
    shared_ptr<string> resource_ {};
    // The response content.
    shared_ptr<string> response_ {};
    // Specifies whether the request is suspected to be a bypass. Valid values:
    // 
    // - **1**: The request is suspected to be a bypass.
    // - **0**: The request is not a bypass.
    shared_ptr<int32_t> suspectedBypass_ {};
    // The trace ID of the original request, which can be up to 128 ASCII characters in length.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
