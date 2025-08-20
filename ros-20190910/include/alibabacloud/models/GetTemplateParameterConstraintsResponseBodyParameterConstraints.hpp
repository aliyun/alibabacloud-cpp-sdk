// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources.hpp>
#include <alibabacloud/models/GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints.hpp>
#include <alibabacloud/models/GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors.hpp>
#include <alibabacloud/models/GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryTimeoutDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateParameterConstraintsResponseBodyParameterConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParameterConstraintsResponseBodyParameterConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_TO_JSON(AssociationParameterNames, associationParameterNames_);
      DARABONBA_PTR_TO_JSON(Behavior, behavior_);
      DARABONBA_PTR_TO_JSON(BehaviorReason, behaviorReason_);
      DARABONBA_PTR_TO_JSON(IllegalValueByParameterConstraints, illegalValueByParameterConstraints_);
      DARABONBA_PTR_TO_JSON(IllegalValueByRules, illegalValueByRules_);
      DARABONBA_PTR_TO_JSON(NotSupportResources, notSupportResources_);
      DARABONBA_PTR_TO_JSON(OriginalConstraints, originalConstraints_);
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(QueryErrors, queryErrors_);
      DARABONBA_PTR_TO_JSON(QueryTimeoutDetails, queryTimeoutDetails_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParameterConstraintsResponseBodyParameterConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_FROM_JSON(AssociationParameterNames, associationParameterNames_);
      DARABONBA_PTR_FROM_JSON(Behavior, behavior_);
      DARABONBA_PTR_FROM_JSON(BehaviorReason, behaviorReason_);
      DARABONBA_PTR_FROM_JSON(IllegalValueByParameterConstraints, illegalValueByParameterConstraints_);
      DARABONBA_PTR_FROM_JSON(IllegalValueByRules, illegalValueByRules_);
      DARABONBA_PTR_FROM_JSON(NotSupportResources, notSupportResources_);
      DARABONBA_PTR_FROM_JSON(OriginalConstraints, originalConstraints_);
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(QueryErrors, queryErrors_);
      DARABONBA_PTR_FROM_JSON(QueryTimeoutDetails, queryTimeoutDetails_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetTemplateParameterConstraintsResponseBodyParameterConstraints() = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraints(const GetTemplateParameterConstraintsResponseBodyParameterConstraints &) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraints(GetTemplateParameterConstraintsResponseBodyParameterConstraints &&) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParameterConstraintsResponseBodyParameterConstraints() = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraints& operator=(const GetTemplateParameterConstraintsResponseBodyParameterConstraints &) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraints& operator=(GetTemplateParameterConstraintsResponseBodyParameterConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedValues_ != nullptr
        && this->associationParameterNames_ != nullptr && this->behavior_ != nullptr && this->behaviorReason_ != nullptr && this->illegalValueByParameterConstraints_ != nullptr && this->illegalValueByRules_ != nullptr
        && this->notSupportResources_ != nullptr && this->originalConstraints_ != nullptr && this->parameterKey_ != nullptr && this->queryErrors_ != nullptr && this->queryTimeoutDetails_ != nullptr
        && this->type_ != nullptr; };
    // allowedValues Field Functions 
    bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
    void deleteAllowedValues() { this->allowedValues_ = nullptr;};
    inline const vector<string> & allowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<string>) };
    inline vector<string> allowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<string>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setAllowedValues(const vector<string> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setAllowedValues(vector<string> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


    // associationParameterNames Field Functions 
    bool hasAssociationParameterNames() const { return this->associationParameterNames_ != nullptr;};
    void deleteAssociationParameterNames() { this->associationParameterNames_ = nullptr;};
    inline const vector<string> & associationParameterNames() const { DARABONBA_PTR_GET_CONST(associationParameterNames_, vector<string>) };
    inline vector<string> associationParameterNames() { DARABONBA_PTR_GET(associationParameterNames_, vector<string>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setAssociationParameterNames(const vector<string> & associationParameterNames) { DARABONBA_PTR_SET_VALUE(associationParameterNames_, associationParameterNames) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setAssociationParameterNames(vector<string> && associationParameterNames) { DARABONBA_PTR_SET_RVALUE(associationParameterNames_, associationParameterNames) };


    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline string behavior() const { DARABONBA_PTR_GET_DEFAULT(behavior_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setBehavior(string behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };


    // behaviorReason Field Functions 
    bool hasBehaviorReason() const { return this->behaviorReason_ != nullptr;};
    void deleteBehaviorReason() { this->behaviorReason_ = nullptr;};
    inline string behaviorReason() const { DARABONBA_PTR_GET_DEFAULT(behaviorReason_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setBehaviorReason(string behaviorReason) { DARABONBA_PTR_SET_VALUE(behaviorReason_, behaviorReason) };


    // illegalValueByParameterConstraints Field Functions 
    bool hasIllegalValueByParameterConstraints() const { return this->illegalValueByParameterConstraints_ != nullptr;};
    void deleteIllegalValueByParameterConstraints() { this->illegalValueByParameterConstraints_ = nullptr;};
    inline const vector<Darabonba::Json> & illegalValueByParameterConstraints() const { DARABONBA_PTR_GET_CONST(illegalValueByParameterConstraints_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> illegalValueByParameterConstraints() { DARABONBA_PTR_GET(illegalValueByParameterConstraints_, vector<Darabonba::Json>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setIllegalValueByParameterConstraints(const vector<Darabonba::Json> & illegalValueByParameterConstraints) { DARABONBA_PTR_SET_VALUE(illegalValueByParameterConstraints_, illegalValueByParameterConstraints) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setIllegalValueByParameterConstraints(vector<Darabonba::Json> && illegalValueByParameterConstraints) { DARABONBA_PTR_SET_RVALUE(illegalValueByParameterConstraints_, illegalValueByParameterConstraints) };


    // illegalValueByRules Field Functions 
    bool hasIllegalValueByRules() const { return this->illegalValueByRules_ != nullptr;};
    void deleteIllegalValueByRules() { this->illegalValueByRules_ = nullptr;};
    inline const vector<Darabonba::Json> & illegalValueByRules() const { DARABONBA_PTR_GET_CONST(illegalValueByRules_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> illegalValueByRules() { DARABONBA_PTR_GET(illegalValueByRules_, vector<Darabonba::Json>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setIllegalValueByRules(const vector<Darabonba::Json> & illegalValueByRules) { DARABONBA_PTR_SET_VALUE(illegalValueByRules_, illegalValueByRules) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setIllegalValueByRules(vector<Darabonba::Json> && illegalValueByRules) { DARABONBA_PTR_SET_RVALUE(illegalValueByRules_, illegalValueByRules) };


    // notSupportResources Field Functions 
    bool hasNotSupportResources() const { return this->notSupportResources_ != nullptr;};
    void deleteNotSupportResources() { this->notSupportResources_ = nullptr;};
    inline const vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources> & notSupportResources() const { DARABONBA_PTR_GET_CONST(notSupportResources_, vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources>) };
    inline vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources> notSupportResources() { DARABONBA_PTR_GET(notSupportResources_, vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setNotSupportResources(const vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources> & notSupportResources) { DARABONBA_PTR_SET_VALUE(notSupportResources_, notSupportResources) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setNotSupportResources(vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources> && notSupportResources) { DARABONBA_PTR_SET_RVALUE(notSupportResources_, notSupportResources) };


    // originalConstraints Field Functions 
    bool hasOriginalConstraints() const { return this->originalConstraints_ != nullptr;};
    void deleteOriginalConstraints() { this->originalConstraints_ = nullptr;};
    inline const vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> & originalConstraints() const { DARABONBA_PTR_GET_CONST(originalConstraints_, vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>) };
    inline vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> originalConstraints() { DARABONBA_PTR_GET(originalConstraints_, vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setOriginalConstraints(const vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> & originalConstraints) { DARABONBA_PTR_SET_VALUE(originalConstraints_, originalConstraints) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setOriginalConstraints(vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> && originalConstraints) { DARABONBA_PTR_SET_RVALUE(originalConstraints_, originalConstraints) };


    // parameterKey Field Functions 
    bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
    void deleteParameterKey() { this->parameterKey_ = nullptr;};
    inline string parameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // queryErrors Field Functions 
    bool hasQueryErrors() const { return this->queryErrors_ != nullptr;};
    void deleteQueryErrors() { this->queryErrors_ = nullptr;};
    inline const vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> & queryErrors() const { DARABONBA_PTR_GET_CONST(queryErrors_, vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors>) };
    inline vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> queryErrors() { DARABONBA_PTR_GET(queryErrors_, vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setQueryErrors(const vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> & queryErrors) { DARABONBA_PTR_SET_VALUE(queryErrors_, queryErrors) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setQueryErrors(vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> && queryErrors) { DARABONBA_PTR_SET_RVALUE(queryErrors_, queryErrors) };


    // queryTimeoutDetails Field Functions 
    bool hasQueryTimeoutDetails() const { return this->queryTimeoutDetails_ != nullptr;};
    void deleteQueryTimeoutDetails() { this->queryTimeoutDetails_ = nullptr;};
    inline const vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryTimeoutDetails> & queryTimeoutDetails() const { DARABONBA_PTR_GET_CONST(queryTimeoutDetails_, vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryTimeoutDetails>) };
    inline vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryTimeoutDetails> queryTimeoutDetails() { DARABONBA_PTR_GET(queryTimeoutDetails_, vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryTimeoutDetails>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setQueryTimeoutDetails(const vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryTimeoutDetails> & queryTimeoutDetails) { DARABONBA_PTR_SET_VALUE(queryTimeoutDetails_, queryTimeoutDetails) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setQueryTimeoutDetails(vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryTimeoutDetails> && queryTimeoutDetails) { DARABONBA_PTR_SET_RVALUE(queryTimeoutDetails_, queryTimeoutDetails) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The values of the parameter.
    std::shared_ptr<vector<string>> allowedValues_ = nullptr;
    // The names of the associated parameters.
    std::shared_ptr<vector<string>> associationParameterNames_ = nullptr;
    // The behavior of the parameter. Valid values:
    // 
    // *   NoLimit: No limit is imposed on the value of this parameter.
    // *   NotSupport: The value of this parameter cannot be queried.
    // *   QueryError: This parameter failed to be queried.
    // 
    // > If AllowedValues is not returned, Behavior and BehaviorReason are returned.
    std::shared_ptr<string> behavior_ = nullptr;
    // The reason why the behavior of the parameter is returned.
    std::shared_ptr<string> behaviorReason_ = nullptr;
    // The values that do not conform to the parameter constraints.
    // 
    // > If AllowedValues is returned, IllegalValueByParameterConstraints and IllegalValueByRules are returned at the same time.
    std::shared_ptr<vector<Darabonba::Json>> illegalValueByParameterConstraints_ = nullptr;
    // The values that do not match the rules in the template.
    // 
    // > If AllowedValues is returned, IllegalValueByParameterConstraints and IllegalValueByRules are returned at the same time.
    std::shared_ptr<vector<Darabonba::Json>> illegalValueByRules_ = nullptr;
    // The unsupported resource in the template.
    std::shared_ptr<vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources>> notSupportResources_ = nullptr;
    // The original constraint information.
    std::shared_ptr<vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>> originalConstraints_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The error that is returned when the request fails.
    std::shared_ptr<vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors>> queryErrors_ = nullptr;
    // Query the details of timeout.
    std::shared_ptr<vector<Models::GetTemplateParameterConstraintsResponseBodyParameterConstraintsQueryTimeoutDetails>> queryTimeoutDetails_ = nullptr;
    // The data type of the parameter.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
