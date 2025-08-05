// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTRESPONSEBODYPOLICYASSOCIATIONBACKUPCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTRESPONSEBODYPOLICYASSOCIATIONBACKUPCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
      DARABONBA_PTR_TO_JSON(CandidateName, candidateName_);
      DARABONBA_PTR_TO_JSON(CandidateType, candidateType_);
      DARABONBA_PTR_TO_JSON(CurrentRouteTableId, currentRouteTableId_);
      DARABONBA_PTR_TO_JSON(OriginalRouteTableId, originalRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
      DARABONBA_PTR_FROM_JSON(CandidateName, candidateName_);
      DARABONBA_PTR_FROM_JSON(CandidateType, candidateType_);
      DARABONBA_PTR_FROM_JSON(CurrentRouteTableId, currentRouteTableId_);
      DARABONBA_PTR_FROM_JSON(OriginalRouteTableId, originalRouteTableId_);
    };
    DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs(const DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs(DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs &&) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& operator=(const DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& operator=(DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->candidateId_ != nullptr
        && this->candidateName_ != nullptr && this->candidateType_ != nullptr && this->currentRouteTableId_ != nullptr && this->originalRouteTableId_ != nullptr; };
    // candidateId Field Functions 
    bool hasCandidateId() const { return this->candidateId_ != nullptr;};
    void deleteCandidateId() { this->candidateId_ = nullptr;};
    inline string candidateId() const { DARABONBA_PTR_GET_DEFAULT(candidateId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& setCandidateId(string candidateId) { DARABONBA_PTR_SET_VALUE(candidateId_, candidateId) };


    // candidateName Field Functions 
    bool hasCandidateName() const { return this->candidateName_ != nullptr;};
    void deleteCandidateName() { this->candidateName_ = nullptr;};
    inline string candidateName() const { DARABONBA_PTR_GET_DEFAULT(candidateName_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& setCandidateName(string candidateName) { DARABONBA_PTR_SET_VALUE(candidateName_, candidateName) };


    // candidateType Field Functions 
    bool hasCandidateType() const { return this->candidateType_ != nullptr;};
    void deleteCandidateType() { this->candidateType_ = nullptr;};
    inline string candidateType() const { DARABONBA_PTR_GET_DEFAULT(candidateType_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& setCandidateType(string candidateType) { DARABONBA_PTR_SET_VALUE(candidateType_, candidateType) };


    // currentRouteTableId Field Functions 
    bool hasCurrentRouteTableId() const { return this->currentRouteTableId_ != nullptr;};
    void deleteCurrentRouteTableId() { this->currentRouteTableId_ = nullptr;};
    inline string currentRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(currentRouteTableId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& setCurrentRouteTableId(string currentRouteTableId) { DARABONBA_PTR_SET_VALUE(currentRouteTableId_, currentRouteTableId) };


    // originalRouteTableId Field Functions 
    bool hasOriginalRouteTableId() const { return this->originalRouteTableId_ != nullptr;};
    void deleteOriginalRouteTableId() { this->originalRouteTableId_ = nullptr;};
    inline string originalRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(originalRouteTableId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs& setOriginalRouteTableId(string originalRouteTableId) { DARABONBA_PTR_SET_VALUE(originalRouteTableId_, originalRouteTableId) };


  protected:
    // The ID of the traffic redirection instance.
    std::shared_ptr<string> candidateId_ = nullptr;
    // The name of the traffic redirection instance.
    std::shared_ptr<string> candidateName_ = nullptr;
    // The type of the traffic redirection instance.
    std::shared_ptr<string> candidateType_ = nullptr;
    // The route table that is used after traffic redirection.
    std::shared_ptr<string> currentRouteTableId_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> originalRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
