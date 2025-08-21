// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTILMPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTILMPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListILMPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListILMPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, ListILMPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
    };
    ListILMPoliciesRequest() = default ;
    ListILMPoliciesRequest(const ListILMPoliciesRequest &) = default ;
    ListILMPoliciesRequest(ListILMPoliciesRequest &&) = default ;
    ListILMPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListILMPoliciesRequest() = default ;
    ListILMPoliciesRequest& operator=(const ListILMPoliciesRequest &) = default ;
    ListILMPoliciesRequest& operator=(ListILMPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyName_ != nullptr; };
    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListILMPoliciesRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    std::shared_ptr<string> policyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
