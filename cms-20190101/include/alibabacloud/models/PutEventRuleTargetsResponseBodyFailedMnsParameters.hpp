// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsResponseBodyFailedMnsParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsResponseBodyFailedMnsParameters& obj) { 
      DARABONBA_PTR_TO_JSON(MnsParameter, mnsParameter_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsResponseBodyFailedMnsParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(MnsParameter, mnsParameter_);
    };
    PutEventRuleTargetsResponseBodyFailedMnsParameters() = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParameters(const PutEventRuleTargetsResponseBodyFailedMnsParameters &) = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParameters(PutEventRuleTargetsResponseBodyFailedMnsParameters &&) = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsResponseBodyFailedMnsParameters() = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParameters& operator=(const PutEventRuleTargetsResponseBodyFailedMnsParameters &) = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParameters& operator=(PutEventRuleTargetsResponseBodyFailedMnsParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mnsParameter_ != nullptr; };
    // mnsParameter Field Functions 
    bool hasMnsParameter() const { return this->mnsParameter_ != nullptr;};
    void deleteMnsParameter() { this->mnsParameter_ = nullptr;};
    inline const vector<Models::PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter> & mnsParameter() const { DARABONBA_PTR_GET_CONST(mnsParameter_, vector<Models::PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter>) };
    inline vector<Models::PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter> mnsParameter() { DARABONBA_PTR_GET(mnsParameter_, vector<Models::PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter>) };
    inline PutEventRuleTargetsResponseBodyFailedMnsParameters& setMnsParameter(const vector<Models::PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter> & mnsParameter) { DARABONBA_PTR_SET_VALUE(mnsParameter_, mnsParameter) };
    inline PutEventRuleTargetsResponseBodyFailedMnsParameters& setMnsParameter(vector<Models::PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter> && mnsParameter) { DARABONBA_PTR_SET_RVALUE(mnsParameter_, mnsParameter) };


  protected:
    std::shared_ptr<vector<Models::PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter>> mnsParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
