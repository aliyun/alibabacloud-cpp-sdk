// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDCONTACTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDCONTACTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsResponseBodyFailedContactParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsResponseBodyFailedContactParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ContactParameter, contactParameter_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsResponseBodyFailedContactParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactParameter, contactParameter_);
    };
    PutEventRuleTargetsResponseBodyFailedContactParameters() = default ;
    PutEventRuleTargetsResponseBodyFailedContactParameters(const PutEventRuleTargetsResponseBodyFailedContactParameters &) = default ;
    PutEventRuleTargetsResponseBodyFailedContactParameters(PutEventRuleTargetsResponseBodyFailedContactParameters &&) = default ;
    PutEventRuleTargetsResponseBodyFailedContactParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsResponseBodyFailedContactParameters() = default ;
    PutEventRuleTargetsResponseBodyFailedContactParameters& operator=(const PutEventRuleTargetsResponseBodyFailedContactParameters &) = default ;
    PutEventRuleTargetsResponseBodyFailedContactParameters& operator=(PutEventRuleTargetsResponseBodyFailedContactParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactParameter_ == nullptr; };
    // contactParameter Field Functions 
    bool hasContactParameter() const { return this->contactParameter_ != nullptr;};
    void deleteContactParameter() { this->contactParameter_ = nullptr;};
    inline const vector<Models::PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter> & contactParameter() const { DARABONBA_PTR_GET_CONST(contactParameter_, vector<Models::PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter>) };
    inline vector<Models::PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter> contactParameter() { DARABONBA_PTR_GET(contactParameter_, vector<Models::PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter>) };
    inline PutEventRuleTargetsResponseBodyFailedContactParameters& setContactParameter(const vector<Models::PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter> & contactParameter) { DARABONBA_PTR_SET_VALUE(contactParameter_, contactParameter) };
    inline PutEventRuleTargetsResponseBodyFailedContactParameters& setContactParameter(vector<Models::PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter> && contactParameter) { DARABONBA_PTR_SET_RVALUE(contactParameter_, contactParameter) };


  protected:
    std::shared_ptr<vector<Models::PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter>> contactParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
