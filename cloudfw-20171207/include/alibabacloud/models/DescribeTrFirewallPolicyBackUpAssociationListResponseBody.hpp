// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallPolicyBackUpAssociationListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallPolicyBackUpAssociationListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyAssociationBackupConfigs, policyAssociationBackupConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallPolicyBackUpAssociationListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyAssociationBackupConfigs, policyAssociationBackupConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody(const DescribeTrFirewallPolicyBackUpAssociationListResponseBody &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody(DescribeTrFirewallPolicyBackUpAssociationListResponseBody &&) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallPolicyBackUpAssociationListResponseBody() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody& operator=(const DescribeTrFirewallPolicyBackUpAssociationListResponseBody &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody& operator=(DescribeTrFirewallPolicyBackUpAssociationListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyAssociationBackupConfigs_ == nullptr
        && return this->requestId_ == nullptr; };
    // policyAssociationBackupConfigs Field Functions 
    bool hasPolicyAssociationBackupConfigs() const { return this->policyAssociationBackupConfigs_ != nullptr;};
    void deletePolicyAssociationBackupConfigs() { this->policyAssociationBackupConfigs_ = nullptr;};
    inline const vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs> & policyAssociationBackupConfigs() const { DARABONBA_PTR_GET_CONST(policyAssociationBackupConfigs_, vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs>) };
    inline vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs> policyAssociationBackupConfigs() { DARABONBA_PTR_GET(policyAssociationBackupConfigs_, vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs>) };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBody& setPolicyAssociationBackupConfigs(const vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs> & policyAssociationBackupConfigs) { DARABONBA_PTR_SET_VALUE(policyAssociationBackupConfigs_, policyAssociationBackupConfigs) };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBody& setPolicyAssociationBackupConfigs(vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs> && policyAssociationBackupConfigs) { DARABONBA_PTR_SET_RVALUE(policyAssociationBackupConfigs_, policyAssociationBackupConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The route tables.
    std::shared_ptr<vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs>> policyAssociationBackupConfigs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
