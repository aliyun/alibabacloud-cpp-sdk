// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTrafficMirrorFilterRulesResponseBodyEgressRules.hpp>
#include <alibabacloud/models/CreateTrafficMirrorFilterRulesResponseBodyIngressRules.hpp>
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
    virtual bool empty() const override { return this->egressRules_ == nullptr
        && return this->ingressRules_ == nullptr && return this->requestId_ == nullptr; };
    // egressRules Field Functions 
    bool hasEgressRules() const { return this->egressRules_ != nullptr;};
    void deleteEgressRules() { this->egressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRulesResponseBodyEgressRules> & egressRules() const { DARABONBA_PTR_GET_CONST(egressRules_, vector<CreateTrafficMirrorFilterRulesResponseBodyEgressRules>) };
    inline vector<CreateTrafficMirrorFilterRulesResponseBodyEgressRules> egressRules() { DARABONBA_PTR_GET(egressRules_, vector<CreateTrafficMirrorFilterRulesResponseBodyEgressRules>) };
    inline CreateTrafficMirrorFilterRulesResponseBody& setEgressRules(const vector<CreateTrafficMirrorFilterRulesResponseBodyEgressRules> & egressRules) { DARABONBA_PTR_SET_VALUE(egressRules_, egressRules) };
    inline CreateTrafficMirrorFilterRulesResponseBody& setEgressRules(vector<CreateTrafficMirrorFilterRulesResponseBodyEgressRules> && egressRules) { DARABONBA_PTR_SET_RVALUE(egressRules_, egressRules) };


    // ingressRules Field Functions 
    bool hasIngressRules() const { return this->ingressRules_ != nullptr;};
    void deleteIngressRules() { this->ingressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRulesResponseBodyIngressRules> & ingressRules() const { DARABONBA_PTR_GET_CONST(ingressRules_, vector<CreateTrafficMirrorFilterRulesResponseBodyIngressRules>) };
    inline vector<CreateTrafficMirrorFilterRulesResponseBodyIngressRules> ingressRules() { DARABONBA_PTR_GET(ingressRules_, vector<CreateTrafficMirrorFilterRulesResponseBodyIngressRules>) };
    inline CreateTrafficMirrorFilterRulesResponseBody& setIngressRules(const vector<CreateTrafficMirrorFilterRulesResponseBodyIngressRules> & ingressRules) { DARABONBA_PTR_SET_VALUE(ingressRules_, ingressRules) };
    inline CreateTrafficMirrorFilterRulesResponseBody& setIngressRules(vector<CreateTrafficMirrorFilterRulesResponseBodyIngressRules> && ingressRules) { DARABONBA_PTR_SET_RVALUE(ingressRules_, ingressRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrafficMirrorFilterRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of outbound rules.
    std::shared_ptr<vector<CreateTrafficMirrorFilterRulesResponseBodyEgressRules>> egressRules_ = nullptr;
    // The list of inbound rules.
    std::shared_ptr<vector<CreateTrafficMirrorFilterRulesResponseBodyIngressRules>> ingressRules_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
