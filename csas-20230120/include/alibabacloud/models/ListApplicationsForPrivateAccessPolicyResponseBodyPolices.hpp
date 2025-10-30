// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApplicationsForPrivateAccessPolicyResponseBodyPolices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForPrivateAccessPolicyResponseBodyPolices& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForPrivateAccessPolicyResponseBodyPolices& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    ListApplicationsForPrivateAccessPolicyResponseBodyPolices() = default ;
    ListApplicationsForPrivateAccessPolicyResponseBodyPolices(const ListApplicationsForPrivateAccessPolicyResponseBodyPolices &) = default ;
    ListApplicationsForPrivateAccessPolicyResponseBodyPolices(ListApplicationsForPrivateAccessPolicyResponseBodyPolices &&) = default ;
    ListApplicationsForPrivateAccessPolicyResponseBodyPolices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForPrivateAccessPolicyResponseBodyPolices() = default ;
    ListApplicationsForPrivateAccessPolicyResponseBodyPolices& operator=(const ListApplicationsForPrivateAccessPolicyResponseBodyPolices &) = default ;
    ListApplicationsForPrivateAccessPolicyResponseBodyPolices& operator=(ListApplicationsForPrivateAccessPolicyResponseBodyPolices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && return this->policyId_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Models::ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Models::ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications>) };
    inline vector<Models::ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications> applications() { DARABONBA_PTR_GET(applications_, vector<Models::ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications>) };
    inline ListApplicationsForPrivateAccessPolicyResponseBodyPolices& setApplications(const vector<Models::ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsForPrivateAccessPolicyResponseBodyPolices& setApplications(vector<Models::ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListApplicationsForPrivateAccessPolicyResponseBodyPolices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications>> applications_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
