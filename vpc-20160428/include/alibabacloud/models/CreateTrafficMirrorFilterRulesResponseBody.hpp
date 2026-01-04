// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorFilterRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorFilterRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_TO_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorFilterRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_FROM_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateTrafficMirrorFilterRulesResponseBody() = default ;
    CreateTrafficMirrorFilterRulesResponseBody(const CreateTrafficMirrorFilterRulesResponseBody &) = default ;
    CreateTrafficMirrorFilterRulesResponseBody(CreateTrafficMirrorFilterRulesResponseBody &&) = default ;
    CreateTrafficMirrorFilterRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorFilterRulesResponseBody() = default ;
    CreateTrafficMirrorFilterRulesResponseBody& operator=(const CreateTrafficMirrorFilterRulesResponseBody &) = default ;
    CreateTrafficMirrorFilterRulesResponseBody& operator=(CreateTrafficMirrorFilterRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IngressRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IngressRules& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, IngressRules& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      IngressRules() = default ;
      IngressRules(const IngressRules &) = default ;
      IngressRules(IngressRules &&) = default ;
      IngressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IngressRules() = default ;
      IngressRules& operator=(const IngressRules &) = default ;
      IngressRules& operator=(IngressRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IngressRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The ID of the inbound rule.
      shared_ptr<string> instanceId_ {};
    };

    class EgressRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressRules& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, EgressRules& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      EgressRules() = default ;
      EgressRules(const EgressRules &) = default ;
      EgressRules(EgressRules &&) = default ;
      EgressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressRules() = default ;
      EgressRules& operator=(const EgressRules &) = default ;
      EgressRules& operator=(EgressRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline EgressRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The ID of the outbound rule.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->egressRules_ == nullptr
        && this->ingressRules_ == nullptr && this->requestId_ == nullptr; };
    // egressRules Field Functions 
    bool hasEgressRules() const { return this->egressRules_ != nullptr;};
    void deleteEgressRules() { this->egressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRulesResponseBody::EgressRules> & getEgressRules() const { DARABONBA_PTR_GET_CONST(egressRules_, vector<CreateTrafficMirrorFilterRulesResponseBody::EgressRules>) };
    inline vector<CreateTrafficMirrorFilterRulesResponseBody::EgressRules> getEgressRules() { DARABONBA_PTR_GET(egressRules_, vector<CreateTrafficMirrorFilterRulesResponseBody::EgressRules>) };
    inline CreateTrafficMirrorFilterRulesResponseBody& setEgressRules(const vector<CreateTrafficMirrorFilterRulesResponseBody::EgressRules> & egressRules) { DARABONBA_PTR_SET_VALUE(egressRules_, egressRules) };
    inline CreateTrafficMirrorFilterRulesResponseBody& setEgressRules(vector<CreateTrafficMirrorFilterRulesResponseBody::EgressRules> && egressRules) { DARABONBA_PTR_SET_RVALUE(egressRules_, egressRules) };


    // ingressRules Field Functions 
    bool hasIngressRules() const { return this->ingressRules_ != nullptr;};
    void deleteIngressRules() { this->ingressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRulesResponseBody::IngressRules> & getIngressRules() const { DARABONBA_PTR_GET_CONST(ingressRules_, vector<CreateTrafficMirrorFilterRulesResponseBody::IngressRules>) };
    inline vector<CreateTrafficMirrorFilterRulesResponseBody::IngressRules> getIngressRules() { DARABONBA_PTR_GET(ingressRules_, vector<CreateTrafficMirrorFilterRulesResponseBody::IngressRules>) };
    inline CreateTrafficMirrorFilterRulesResponseBody& setIngressRules(const vector<CreateTrafficMirrorFilterRulesResponseBody::IngressRules> & ingressRules) { DARABONBA_PTR_SET_VALUE(ingressRules_, ingressRules) };
    inline CreateTrafficMirrorFilterRulesResponseBody& setIngressRules(vector<CreateTrafficMirrorFilterRulesResponseBody::IngressRules> && ingressRules) { DARABONBA_PTR_SET_RVALUE(ingressRules_, ingressRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrafficMirrorFilterRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of outbound rules.
    shared_ptr<vector<CreateTrafficMirrorFilterRulesResponseBody::EgressRules>> egressRules_ {};
    // The list of inbound rules.
    shared_ptr<vector<CreateTrafficMirrorFilterRulesResponseBody::IngressRules>> ingressRules_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
