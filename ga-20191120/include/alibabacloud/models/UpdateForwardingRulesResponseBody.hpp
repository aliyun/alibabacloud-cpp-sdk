// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFORWARDINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFORWARDINGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateForwardingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateForwardingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardingRules, forwardingRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateForwardingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardingRules, forwardingRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateForwardingRulesResponseBody() = default ;
    UpdateForwardingRulesResponseBody(const UpdateForwardingRulesResponseBody &) = default ;
    UpdateForwardingRulesResponseBody(UpdateForwardingRulesResponseBody &&) = default ;
    UpdateForwardingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateForwardingRulesResponseBody() = default ;
    UpdateForwardingRulesResponseBody& operator=(const UpdateForwardingRulesResponseBody &) = default ;
    UpdateForwardingRulesResponseBody& operator=(UpdateForwardingRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardingRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardingRules& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardingRuleId, forwardingRuleId_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardingRules& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardingRuleId, forwardingRuleId_);
      };
      ForwardingRules() = default ;
      ForwardingRules(const ForwardingRules &) = default ;
      ForwardingRules(ForwardingRules &&) = default ;
      ForwardingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardingRules() = default ;
      ForwardingRules& operator=(const ForwardingRules &) = default ;
      ForwardingRules& operator=(ForwardingRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->forwardingRuleId_ == nullptr; };
      // forwardingRuleId Field Functions 
      bool hasForwardingRuleId() const { return this->forwardingRuleId_ != nullptr;};
      void deleteForwardingRuleId() { this->forwardingRuleId_ = nullptr;};
      inline string getForwardingRuleId() const { DARABONBA_PTR_GET_DEFAULT(forwardingRuleId_, "") };
      inline ForwardingRules& setForwardingRuleId(string forwardingRuleId) { DARABONBA_PTR_SET_VALUE(forwardingRuleId_, forwardingRuleId) };


    protected:
      // The forwarding rule ID.
      shared_ptr<string> forwardingRuleId_ {};
    };

    virtual bool empty() const override { return this->forwardingRules_ == nullptr
        && this->requestId_ == nullptr; };
    // forwardingRules Field Functions 
    bool hasForwardingRules() const { return this->forwardingRules_ != nullptr;};
    void deleteForwardingRules() { this->forwardingRules_ = nullptr;};
    inline const vector<UpdateForwardingRulesResponseBody::ForwardingRules> & getForwardingRules() const { DARABONBA_PTR_GET_CONST(forwardingRules_, vector<UpdateForwardingRulesResponseBody::ForwardingRules>) };
    inline vector<UpdateForwardingRulesResponseBody::ForwardingRules> getForwardingRules() { DARABONBA_PTR_GET(forwardingRules_, vector<UpdateForwardingRulesResponseBody::ForwardingRules>) };
    inline UpdateForwardingRulesResponseBody& setForwardingRules(const vector<UpdateForwardingRulesResponseBody::ForwardingRules> & forwardingRules) { DARABONBA_PTR_SET_VALUE(forwardingRules_, forwardingRules) };
    inline UpdateForwardingRulesResponseBody& setForwardingRules(vector<UpdateForwardingRulesResponseBody::ForwardingRules> && forwardingRules) { DARABONBA_PTR_SET_RVALUE(forwardingRules_, forwardingRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateForwardingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the forwarding rules.
    shared_ptr<vector<UpdateForwardingRulesResponseBody::ForwardingRules>> forwardingRules_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
