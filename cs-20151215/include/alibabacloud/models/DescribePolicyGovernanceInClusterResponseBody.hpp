// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyAdmitLog.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyOnState.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyTotalViolations.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(admit_log, admitLog_);
      DARABONBA_PTR_TO_JSON(on_state, onState_);
      DARABONBA_PTR_TO_JSON(totalViolations, totalViolations_);
      DARABONBA_PTR_TO_JSON(violations, violations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(admit_log, admitLog_);
      DARABONBA_PTR_FROM_JSON(on_state, onState_);
      DARABONBA_PTR_FROM_JSON(totalViolations, totalViolations_);
      DARABONBA_PTR_FROM_JSON(violations, violations_);
    };
    DescribePolicyGovernanceInClusterResponseBody() = default ;
    DescribePolicyGovernanceInClusterResponseBody(const DescribePolicyGovernanceInClusterResponseBody &) = default ;
    DescribePolicyGovernanceInClusterResponseBody(DescribePolicyGovernanceInClusterResponseBody &&) = default ;
    DescribePolicyGovernanceInClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBody() = default ;
    DescribePolicyGovernanceInClusterResponseBody& operator=(const DescribePolicyGovernanceInClusterResponseBody &) = default ;
    DescribePolicyGovernanceInClusterResponseBody& operator=(DescribePolicyGovernanceInClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->admitLog_ != nullptr
        && this->onState_ != nullptr && this->totalViolations_ != nullptr && this->violations_ != nullptr; };
    // admitLog Field Functions 
    bool hasAdmitLog() const { return this->admitLog_ != nullptr;};
    void deleteAdmitLog() { this->admitLog_ = nullptr;};
    inline const DescribePolicyGovernanceInClusterResponseBodyAdmitLog & admitLog() const { DARABONBA_PTR_GET_CONST(admitLog_, DescribePolicyGovernanceInClusterResponseBodyAdmitLog) };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLog admitLog() { DARABONBA_PTR_GET(admitLog_, DescribePolicyGovernanceInClusterResponseBodyAdmitLog) };
    inline DescribePolicyGovernanceInClusterResponseBody& setAdmitLog(const DescribePolicyGovernanceInClusterResponseBodyAdmitLog & admitLog) { DARABONBA_PTR_SET_VALUE(admitLog_, admitLog) };
    inline DescribePolicyGovernanceInClusterResponseBody& setAdmitLog(DescribePolicyGovernanceInClusterResponseBodyAdmitLog && admitLog) { DARABONBA_PTR_SET_RVALUE(admitLog_, admitLog) };


    // onState Field Functions 
    bool hasOnState() const { return this->onState_ != nullptr;};
    void deleteOnState() { this->onState_ = nullptr;};
    inline const vector<DescribePolicyGovernanceInClusterResponseBodyOnState> & onState() const { DARABONBA_PTR_GET_CONST(onState_, vector<DescribePolicyGovernanceInClusterResponseBodyOnState>) };
    inline vector<DescribePolicyGovernanceInClusterResponseBodyOnState> onState() { DARABONBA_PTR_GET(onState_, vector<DescribePolicyGovernanceInClusterResponseBodyOnState>) };
    inline DescribePolicyGovernanceInClusterResponseBody& setOnState(const vector<DescribePolicyGovernanceInClusterResponseBodyOnState> & onState) { DARABONBA_PTR_SET_VALUE(onState_, onState) };
    inline DescribePolicyGovernanceInClusterResponseBody& setOnState(vector<DescribePolicyGovernanceInClusterResponseBodyOnState> && onState) { DARABONBA_PTR_SET_RVALUE(onState_, onState) };


    // totalViolations Field Functions 
    bool hasTotalViolations() const { return this->totalViolations_ != nullptr;};
    void deleteTotalViolations() { this->totalViolations_ = nullptr;};
    inline const DescribePolicyGovernanceInClusterResponseBodyTotalViolations & totalViolations() const { DARABONBA_PTR_GET_CONST(totalViolations_, DescribePolicyGovernanceInClusterResponseBodyTotalViolations) };
    inline DescribePolicyGovernanceInClusterResponseBodyTotalViolations totalViolations() { DARABONBA_PTR_GET(totalViolations_, DescribePolicyGovernanceInClusterResponseBodyTotalViolations) };
    inline DescribePolicyGovernanceInClusterResponseBody& setTotalViolations(const DescribePolicyGovernanceInClusterResponseBodyTotalViolations & totalViolations) { DARABONBA_PTR_SET_VALUE(totalViolations_, totalViolations) };
    inline DescribePolicyGovernanceInClusterResponseBody& setTotalViolations(DescribePolicyGovernanceInClusterResponseBodyTotalViolations && totalViolations) { DARABONBA_PTR_SET_RVALUE(totalViolations_, totalViolations) };


    // violations Field Functions 
    bool hasViolations() const { return this->violations_ != nullptr;};
    void deleteViolations() { this->violations_ = nullptr;};
    inline const DescribePolicyGovernanceInClusterResponseBodyViolations & violations() const { DARABONBA_PTR_GET_CONST(violations_, DescribePolicyGovernanceInClusterResponseBodyViolations) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolations violations() { DARABONBA_PTR_GET(violations_, DescribePolicyGovernanceInClusterResponseBodyViolations) };
    inline DescribePolicyGovernanceInClusterResponseBody& setViolations(const DescribePolicyGovernanceInClusterResponseBodyViolations & violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };
    inline DescribePolicyGovernanceInClusterResponseBody& setViolations(DescribePolicyGovernanceInClusterResponseBodyViolations && violations) { DARABONBA_PTR_SET_RVALUE(violations_, violations) };


  protected:
    // The audit logs of the policies in the cluster.
    std::shared_ptr<DescribePolicyGovernanceInClusterResponseBodyAdmitLog> admitLog_ = nullptr;
    // Details about the policies of different severity levels that are enabled for the cluster.
    std::shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBodyOnState>> onState_ = nullptr;
    // Details about the blocking and alerting events that are triggered by policies of different severity levels.
    std::shared_ptr<DescribePolicyGovernanceInClusterResponseBodyTotalViolations> totalViolations_ = nullptr;
    // Details about the blocking and alerting events that are triggered by different policies.
    std::shared_ptr<DescribePolicyGovernanceInClusterResponseBodyViolations> violations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
