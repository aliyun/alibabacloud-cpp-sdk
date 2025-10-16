// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRFIREWALLV2ROUTEPOLICYREQUESTDESTCANDIDATELIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRFIREWALLV2ROUTEPOLICYREQUESTDESTCANDIDATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateTrFirewallV2RoutePolicyRequestDestCandidateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrFirewallV2RoutePolicyRequestDestCandidateList& obj) { 
      DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
      DARABONBA_PTR_TO_JSON(CandidateType, candidateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrFirewallV2RoutePolicyRequestDestCandidateList& obj) { 
      DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
      DARABONBA_PTR_FROM_JSON(CandidateType, candidateType_);
    };
    CreateTrFirewallV2RoutePolicyRequestDestCandidateList() = default ;
    CreateTrFirewallV2RoutePolicyRequestDestCandidateList(const CreateTrFirewallV2RoutePolicyRequestDestCandidateList &) = default ;
    CreateTrFirewallV2RoutePolicyRequestDestCandidateList(CreateTrFirewallV2RoutePolicyRequestDestCandidateList &&) = default ;
    CreateTrFirewallV2RoutePolicyRequestDestCandidateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrFirewallV2RoutePolicyRequestDestCandidateList() = default ;
    CreateTrFirewallV2RoutePolicyRequestDestCandidateList& operator=(const CreateTrFirewallV2RoutePolicyRequestDestCandidateList &) = default ;
    CreateTrFirewallV2RoutePolicyRequestDestCandidateList& operator=(CreateTrFirewallV2RoutePolicyRequestDestCandidateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->candidateId_ == nullptr
        && return this->candidateType_ == nullptr; };
    // candidateId Field Functions 
    bool hasCandidateId() const { return this->candidateId_ != nullptr;};
    void deleteCandidateId() { this->candidateId_ = nullptr;};
    inline string candidateId() const { DARABONBA_PTR_GET_DEFAULT(candidateId_, "") };
    inline CreateTrFirewallV2RoutePolicyRequestDestCandidateList& setCandidateId(string candidateId) { DARABONBA_PTR_SET_VALUE(candidateId_, candidateId) };


    // candidateType Field Functions 
    bool hasCandidateType() const { return this->candidateType_ != nullptr;};
    void deleteCandidateType() { this->candidateType_ = nullptr;};
    inline string candidateType() const { DARABONBA_PTR_GET_DEFAULT(candidateType_, "") };
    inline CreateTrFirewallV2RoutePolicyRequestDestCandidateList& setCandidateType(string candidateType) { DARABONBA_PTR_SET_VALUE(candidateType_, candidateType) };


  protected:
    // The ID of the traffic redirection instance.
    std::shared_ptr<string> candidateId_ = nullptr;
    // The type of the traffic redirection instance.
    std::shared_ptr<string> candidateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
