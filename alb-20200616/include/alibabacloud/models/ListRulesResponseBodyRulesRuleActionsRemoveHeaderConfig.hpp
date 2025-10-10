// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSREMOVEHEADERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSREMOVEHEADERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig(const ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig(ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig &&) = default ;
    ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig& operator=(const ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig& operator=(ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListRulesResponseBodyRulesRuleActionsRemoveHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The key of the header to be removed. The header key must be 1 to 40 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The header keys specified in RemoveHeader must be unique.
    // 
    // *   If Direction is set to Request, the specified headers are removed from requests. The following header keys are not supported (not case-sensitive): `slb-id`, `slb-ip`, `x-forwarded-for`, `x-forwarded-proto`, `x-forwarded-eip`, `x-forwarded-port`, `x-forwarded-client-srcport`, `connection`, `upgrade`, `content-length`, `transfer-encoding`, `keep-alive`, `te`, `host`, `cookie`, `remoteip`, and `authority`.
    // *   If Direction is set to Response, the specified headers are removed from responses. The following header keys are not supported (not case-sensitive): `connection`, `upgrade`, `content-length`, and `transfer-encoding`.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
