// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEGRESSPROXYRULEGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEGRESSPROXYRULEGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class GetEgressProxyRuleGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEgressProxyRuleGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEgressProxyRuleGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
    };
    GetEgressProxyRuleGroupAttributeRequest() = default ;
    GetEgressProxyRuleGroupAttributeRequest(const GetEgressProxyRuleGroupAttributeRequest &) = default ;
    GetEgressProxyRuleGroupAttributeRequest(GetEgressProxyRuleGroupAttributeRequest &&) = default ;
    GetEgressProxyRuleGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEgressProxyRuleGroupAttributeRequest() = default ;
    GetEgressProxyRuleGroupAttributeRequest& operator=(const GetEgressProxyRuleGroupAttributeRequest &) = default ;
    GetEgressProxyRuleGroupAttributeRequest& operator=(GetEgressProxyRuleGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressProxyRuleGroupId_ == nullptr; };
    // egressProxyRuleGroupId Field Functions 
    bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
    void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
    inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
    inline GetEgressProxyRuleGroupAttributeRequest& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<string> egressProxyRuleGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
