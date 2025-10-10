// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRELATIONSRESPONSEBODYSECRITYPOLICYRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRELATIONSRESPONSEBODYSECRITYPOLICYRELATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
    };
    ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations() = default ;
    ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations(const ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations &) = default ;
    ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations(ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations &&) = default ;
    ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations() = default ;
    ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations& operator=(const ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations &) = default ;
    ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations& operator=(ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->relatedListeners_ != nullptr
        && this->securityPolicyId_ != nullptr; };
    // relatedListeners Field Functions 
    bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
    void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
    inline const vector<Models::ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners> & relatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, vector<Models::ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners>) };
    inline vector<Models::ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners> relatedListeners() { DARABONBA_PTR_GET(relatedListeners_, vector<Models::ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners>) };
    inline ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations& setRelatedListeners(const vector<Models::ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners> & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
    inline ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations& setRelatedListeners(vector<Models::ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners> && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


  protected:
    // The listeners that are associated with the security policy.
    std::shared_ptr<vector<Models::ListSecurityPolicyRelationsResponseBodySecrityPolicyRelationsRelatedListeners>> relatedListeners_ = nullptr;
    // The security policy ID.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
