// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFORWARDINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEFORWARDINGRULESRESPONSEBODY_HPP_
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
  class DeleteForwardingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteForwardingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardingRules, forwardingRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteForwardingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardingRules, forwardingRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteForwardingRulesResponseBody() = default ;
    DeleteForwardingRulesResponseBody(const DeleteForwardingRulesResponseBody &) = default ;
    DeleteForwardingRulesResponseBody(DeleteForwardingRulesResponseBody &&) = default ;
    DeleteForwardingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteForwardingRulesResponseBody() = default ;
    DeleteForwardingRulesResponseBody& operator=(const DeleteForwardingRulesResponseBody &) = default ;
    DeleteForwardingRulesResponseBody& operator=(DeleteForwardingRulesResponseBody &&) = default ;
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
    inline const vector<DeleteForwardingRulesResponseBody::ForwardingRules> & getForwardingRules() const { DARABONBA_PTR_GET_CONST(forwardingRules_, vector<DeleteForwardingRulesResponseBody::ForwardingRules>) };
    inline vector<DeleteForwardingRulesResponseBody::ForwardingRules> getForwardingRules() { DARABONBA_PTR_GET(forwardingRules_, vector<DeleteForwardingRulesResponseBody::ForwardingRules>) };
    inline DeleteForwardingRulesResponseBody& setForwardingRules(const vector<DeleteForwardingRulesResponseBody::ForwardingRules> & forwardingRules) { DARABONBA_PTR_SET_VALUE(forwardingRules_, forwardingRules) };
    inline DeleteForwardingRulesResponseBody& setForwardingRules(vector<DeleteForwardingRulesResponseBody::ForwardingRules> && forwardingRules) { DARABONBA_PTR_SET_RVALUE(forwardingRules_, forwardingRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteForwardingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The forwarding rules.
    shared_ptr<vector<DeleteForwardingRulesResponseBody::ForwardingRules>> forwardingRules_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
