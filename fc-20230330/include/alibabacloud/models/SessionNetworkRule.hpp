// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SESSIONNETWORKRULE_HPP_
#define ALIBABACLOUD_MODELS_SESSIONNETWORKRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SessionNetworkRuleTransform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class SessionNetworkRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionNetworkRule& obj) { 
      DARABONBA_PTR_TO_JSON(transform, transform_);
    };
    friend void from_json(const Darabonba::Json& j, SessionNetworkRule& obj) { 
      DARABONBA_PTR_FROM_JSON(transform, transform_);
    };
    SessionNetworkRule() = default ;
    SessionNetworkRule(const SessionNetworkRule &) = default ;
    SessionNetworkRule(SessionNetworkRule &&) = default ;
    SessionNetworkRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionNetworkRule() = default ;
    SessionNetworkRule& operator=(const SessionNetworkRule &) = default ;
    SessionNetworkRule& operator=(SessionNetworkRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transform_ == nullptr; };
    // transform Field Functions 
    bool hasTransform() const { return this->transform_ != nullptr;};
    void deleteTransform() { this->transform_ = nullptr;};
    inline const SessionNetworkRuleTransform & getTransform() const { DARABONBA_PTR_GET_CONST(transform_, SessionNetworkRuleTransform) };
    inline SessionNetworkRuleTransform getTransform() { DARABONBA_PTR_GET(transform_, SessionNetworkRuleTransform) };
    inline SessionNetworkRule& setTransform(const SessionNetworkRuleTransform & transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };
    inline SessionNetworkRule& setTransform(SessionNetworkRuleTransform && transform) { DARABONBA_PTR_SET_RVALUE(transform_, transform) };


  protected:
    shared_ptr<SessionNetworkRuleTransform> transform_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
