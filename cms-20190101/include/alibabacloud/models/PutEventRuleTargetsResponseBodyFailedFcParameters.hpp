// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDFCPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDFCPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsResponseBodyFailedFcParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsResponseBodyFailedFcParameters& obj) { 
      DARABONBA_PTR_TO_JSON(FcParameter, fcParameter_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsResponseBodyFailedFcParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(FcParameter, fcParameter_);
    };
    PutEventRuleTargetsResponseBodyFailedFcParameters() = default ;
    PutEventRuleTargetsResponseBodyFailedFcParameters(const PutEventRuleTargetsResponseBodyFailedFcParameters &) = default ;
    PutEventRuleTargetsResponseBodyFailedFcParameters(PutEventRuleTargetsResponseBodyFailedFcParameters &&) = default ;
    PutEventRuleTargetsResponseBodyFailedFcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsResponseBodyFailedFcParameters() = default ;
    PutEventRuleTargetsResponseBodyFailedFcParameters& operator=(const PutEventRuleTargetsResponseBodyFailedFcParameters &) = default ;
    PutEventRuleTargetsResponseBodyFailedFcParameters& operator=(PutEventRuleTargetsResponseBodyFailedFcParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fcParameter_ == nullptr; };
    // fcParameter Field Functions 
    bool hasFcParameter() const { return this->fcParameter_ != nullptr;};
    void deleteFcParameter() { this->fcParameter_ = nullptr;};
    inline const vector<Models::PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter> & fcParameter() const { DARABONBA_PTR_GET_CONST(fcParameter_, vector<Models::PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter>) };
    inline vector<Models::PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter> fcParameter() { DARABONBA_PTR_GET(fcParameter_, vector<Models::PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter>) };
    inline PutEventRuleTargetsResponseBodyFailedFcParameters& setFcParameter(const vector<Models::PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter> & fcParameter) { DARABONBA_PTR_SET_VALUE(fcParameter_, fcParameter) };
    inline PutEventRuleTargetsResponseBodyFailedFcParameters& setFcParameter(vector<Models::PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter> && fcParameter) { DARABONBA_PTR_SET_RVALUE(fcParameter_, fcParameter) };


  protected:
    std::shared_ptr<vector<Models::PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter>> fcParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
