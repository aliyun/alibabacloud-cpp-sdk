// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolation.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyAdmitLog.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyOnState.hpp>
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
      DARABONBA_PTR_TO_JSON(Violation, violation_);
      DARABONBA_PTR_TO_JSON(admit_log, admitLog_);
      DARABONBA_PTR_TO_JSON(on_state, onState_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Violation, violation_);
      DARABONBA_PTR_FROM_JSON(admit_log, admitLog_);
      DARABONBA_PTR_FROM_JSON(on_state, onState_);
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
    virtual bool empty() const override { return this->violation_ == nullptr
        && return this->admitLog_ == nullptr && return this->onState_ == nullptr; };
    // violation Field Functions 
    bool hasViolation() const { return this->violation_ != nullptr;};
    void deleteViolation() { this->violation_ = nullptr;};
    inline const DescribePolicyGovernanceInClusterResponseBodyViolation & violation() const { DARABONBA_PTR_GET_CONST(violation_, DescribePolicyGovernanceInClusterResponseBodyViolation) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolation violation() { DARABONBA_PTR_GET(violation_, DescribePolicyGovernanceInClusterResponseBodyViolation) };
    inline DescribePolicyGovernanceInClusterResponseBody& setViolation(const DescribePolicyGovernanceInClusterResponseBodyViolation & violation) { DARABONBA_PTR_SET_VALUE(violation_, violation) };
    inline DescribePolicyGovernanceInClusterResponseBody& setViolation(DescribePolicyGovernanceInClusterResponseBodyViolation && violation) { DARABONBA_PTR_SET_RVALUE(violation_, violation) };


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


  protected:
    std::shared_ptr<DescribePolicyGovernanceInClusterResponseBodyViolation> violation_ = nullptr;
    // The audit logs of the policies in the cluster.
    std::shared_ptr<DescribePolicyGovernanceInClusterResponseBodyAdmitLog> admitLog_ = nullptr;
    // Details about the policies of different severity levels that are enabled for the cluster.
    std::shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBodyOnState>> onState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
