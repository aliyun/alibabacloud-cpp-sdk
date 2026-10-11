// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEGRESSPROXYRULEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEGRESSPROXYRULEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class CreateEgressProxyRuleGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEgressProxyRuleGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRules, egressProxyRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEgressProxyRuleGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRules, egressProxyRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEgressProxyRuleGroupResponseBody() = default ;
    CreateEgressProxyRuleGroupResponseBody(const CreateEgressProxyRuleGroupResponseBody &) = default ;
    CreateEgressProxyRuleGroupResponseBody(CreateEgressProxyRuleGroupResponseBody &&) = default ;
    CreateEgressProxyRuleGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEgressProxyRuleGroupResponseBody() = default ;
    CreateEgressProxyRuleGroupResponseBody& operator=(const CreateEgressProxyRuleGroupResponseBody &) = default ;
    CreateEgressProxyRuleGroupResponseBody& operator=(CreateEgressProxyRuleGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EgressProxyRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressProxyRules& obj) { 
        DARABONBA_PTR_TO_JSON(PostResponse, postResponse_);
        DARABONBA_PTR_TO_JSON(PreDns, preDns_);
        DARABONBA_PTR_TO_JSON(PreRequest, preRequest_);
      };
      friend void from_json(const Darabonba::Json& j, EgressProxyRules& obj) { 
        DARABONBA_PTR_FROM_JSON(PostResponse, postResponse_);
        DARABONBA_PTR_FROM_JSON(PreDns, preDns_);
        DARABONBA_PTR_FROM_JSON(PreRequest, preRequest_);
      };
      EgressProxyRules() = default ;
      EgressProxyRules(const EgressProxyRules &) = default ;
      EgressProxyRules(EgressProxyRules &&) = default ;
      EgressProxyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressProxyRules() = default ;
      EgressProxyRules& operator=(const EgressProxyRules &) = default ;
      EgressProxyRules& operator=(EgressProxyRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreRequest : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreRequest& obj) { 
          DARABONBA_PTR_TO_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PreRequest& obj) { 
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
        };
        PreRequest() = default ;
        PreRequest(const PreRequest &) = default ;
        PreRequest(PreRequest &&) = default ;
        PreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreRequest() = default ;
        PreRequest& operator=(const PreRequest &) = default ;
        PreRequest& operator=(PreRequest &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->egressProxyRuleId_ == nullptr
        && this->priority_ == nullptr; };
        // egressProxyRuleId Field Functions 
        bool hasEgressProxyRuleId() const { return this->egressProxyRuleId_ != nullptr;};
        void deleteEgressProxyRuleId() { this->egressProxyRuleId_ = nullptr;};
        inline string getEgressProxyRuleId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleId_, "") };
        inline PreRequest& setEgressProxyRuleId(string egressProxyRuleId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleId_, egressProxyRuleId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline PreRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      protected:
        // The ID of the egress proxy rule.
        shared_ptr<string> egressProxyRuleId_ {};
        // The priority of the egress proxy rule in the stage to which it belongs. Valid values: 1 to 1000. A smaller value indicates a higher priority.
        shared_ptr<int32_t> priority_ {};
      };

      class PreDns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreDns& obj) { 
          DARABONBA_PTR_TO_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PreDns& obj) { 
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
        };
        PreDns() = default ;
        PreDns(const PreDns &) = default ;
        PreDns(PreDns &&) = default ;
        PreDns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreDns() = default ;
        PreDns& operator=(const PreDns &) = default ;
        PreDns& operator=(PreDns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->egressProxyRuleId_ == nullptr
        && this->priority_ == nullptr; };
        // egressProxyRuleId Field Functions 
        bool hasEgressProxyRuleId() const { return this->egressProxyRuleId_ != nullptr;};
        void deleteEgressProxyRuleId() { this->egressProxyRuleId_ = nullptr;};
        inline string getEgressProxyRuleId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleId_, "") };
        inline PreDns& setEgressProxyRuleId(string egressProxyRuleId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleId_, egressProxyRuleId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline PreDns& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      protected:
        // The ID of the egress proxy rule.
        shared_ptr<string> egressProxyRuleId_ {};
        // The priority of the egress proxy rule in the stage to which it belongs. Valid values: 1 to 1000. A smaller value indicates a higher priority.
        shared_ptr<int32_t> priority_ {};
      };

      class PostResponse : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PostResponse& obj) { 
          DARABONBA_PTR_TO_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PostResponse& obj) { 
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
        };
        PostResponse() = default ;
        PostResponse(const PostResponse &) = default ;
        PostResponse(PostResponse &&) = default ;
        PostResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PostResponse() = default ;
        PostResponse& operator=(const PostResponse &) = default ;
        PostResponse& operator=(PostResponse &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->egressProxyRuleId_ == nullptr
        && this->priority_ == nullptr; };
        // egressProxyRuleId Field Functions 
        bool hasEgressProxyRuleId() const { return this->egressProxyRuleId_ != nullptr;};
        void deleteEgressProxyRuleId() { this->egressProxyRuleId_ = nullptr;};
        inline string getEgressProxyRuleId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleId_, "") };
        inline PostResponse& setEgressProxyRuleId(string egressProxyRuleId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleId_, egressProxyRuleId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline PostResponse& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      protected:
        // The ID of the egress proxy rule.
        shared_ptr<string> egressProxyRuleId_ {};
        // The priority of the egress proxy rule in the stage to which it belongs. Valid values: 1 to 1000. A smaller value indicates a higher priority.
        shared_ptr<int32_t> priority_ {};
      };

      virtual bool empty() const override { return this->postResponse_ == nullptr
        && this->preDns_ == nullptr && this->preRequest_ == nullptr; };
      // postResponse Field Functions 
      bool hasPostResponse() const { return this->postResponse_ != nullptr;};
      void deletePostResponse() { this->postResponse_ = nullptr;};
      inline const vector<EgressProxyRules::PostResponse> & getPostResponse() const { DARABONBA_PTR_GET_CONST(postResponse_, vector<EgressProxyRules::PostResponse>) };
      inline vector<EgressProxyRules::PostResponse> getPostResponse() { DARABONBA_PTR_GET(postResponse_, vector<EgressProxyRules::PostResponse>) };
      inline EgressProxyRules& setPostResponse(const vector<EgressProxyRules::PostResponse> & postResponse) { DARABONBA_PTR_SET_VALUE(postResponse_, postResponse) };
      inline EgressProxyRules& setPostResponse(vector<EgressProxyRules::PostResponse> && postResponse) { DARABONBA_PTR_SET_RVALUE(postResponse_, postResponse) };


      // preDns Field Functions 
      bool hasPreDns() const { return this->preDns_ != nullptr;};
      void deletePreDns() { this->preDns_ = nullptr;};
      inline const vector<EgressProxyRules::PreDns> & getPreDns() const { DARABONBA_PTR_GET_CONST(preDns_, vector<EgressProxyRules::PreDns>) };
      inline vector<EgressProxyRules::PreDns> getPreDns() { DARABONBA_PTR_GET(preDns_, vector<EgressProxyRules::PreDns>) };
      inline EgressProxyRules& setPreDns(const vector<EgressProxyRules::PreDns> & preDns) { DARABONBA_PTR_SET_VALUE(preDns_, preDns) };
      inline EgressProxyRules& setPreDns(vector<EgressProxyRules::PreDns> && preDns) { DARABONBA_PTR_SET_RVALUE(preDns_, preDns) };


      // preRequest Field Functions 
      bool hasPreRequest() const { return this->preRequest_ != nullptr;};
      void deletePreRequest() { this->preRequest_ = nullptr;};
      inline const vector<EgressProxyRules::PreRequest> & getPreRequest() const { DARABONBA_PTR_GET_CONST(preRequest_, vector<EgressProxyRules::PreRequest>) };
      inline vector<EgressProxyRules::PreRequest> getPreRequest() { DARABONBA_PTR_GET(preRequest_, vector<EgressProxyRules::PreRequest>) };
      inline EgressProxyRules& setPreRequest(const vector<EgressProxyRules::PreRequest> & preRequest) { DARABONBA_PTR_SET_VALUE(preRequest_, preRequest) };
      inline EgressProxyRules& setPreRequest(vector<EgressProxyRules::PreRequest> && preRequest) { DARABONBA_PTR_SET_RVALUE(preRequest_, preRequest) };


    protected:
      // The list of rules in the PostResponse stage, which is executed after the response is returned.
      shared_ptr<vector<EgressProxyRules::PostResponse>> postResponse_ {};
      // The list of rules in the PreDns stage, which is executed before DNS resolution.
      shared_ptr<vector<EgressProxyRules::PreDns>> preDns_ {};
      // The list of rules in the PreRequest stage, which is executed before the request is forwarded.
      shared_ptr<vector<EgressProxyRules::PreRequest>> preRequest_ {};
    };

    virtual bool empty() const override { return this->egressProxyRuleGroupId_ == nullptr
        && this->egressProxyRules_ == nullptr && this->requestId_ == nullptr; };
    // egressProxyRuleGroupId Field Functions 
    bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
    void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
    inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
    inline CreateEgressProxyRuleGroupResponseBody& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


    // egressProxyRules Field Functions 
    bool hasEgressProxyRules() const { return this->egressProxyRules_ != nullptr;};
    void deleteEgressProxyRules() { this->egressProxyRules_ = nullptr;};
    inline const CreateEgressProxyRuleGroupResponseBody::EgressProxyRules & getEgressProxyRules() const { DARABONBA_PTR_GET_CONST(egressProxyRules_, CreateEgressProxyRuleGroupResponseBody::EgressProxyRules) };
    inline CreateEgressProxyRuleGroupResponseBody::EgressProxyRules getEgressProxyRules() { DARABONBA_PTR_GET(egressProxyRules_, CreateEgressProxyRuleGroupResponseBody::EgressProxyRules) };
    inline CreateEgressProxyRuleGroupResponseBody& setEgressProxyRules(const CreateEgressProxyRuleGroupResponseBody::EgressProxyRules & egressProxyRules) { DARABONBA_PTR_SET_VALUE(egressProxyRules_, egressProxyRules) };
    inline CreateEgressProxyRuleGroupResponseBody& setEgressProxyRules(CreateEgressProxyRuleGroupResponseBody::EgressProxyRules && egressProxyRules) { DARABONBA_PTR_SET_RVALUE(egressProxyRules_, egressProxyRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEgressProxyRuleGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the egress proxy rule group.
    shared_ptr<string> egressProxyRuleGroupId_ {};
    // The list of egress rules grouped by phase (PreDns, PreRequest, and PostResponse).
    shared_ptr<CreateEgressProxyRuleGroupResponseBody::EgressProxyRules> egressProxyRules_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
