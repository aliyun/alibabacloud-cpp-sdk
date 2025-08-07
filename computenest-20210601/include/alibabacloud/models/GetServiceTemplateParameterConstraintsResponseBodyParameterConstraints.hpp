// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints.hpp>
#include <alibabacloud/models/GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_TO_JSON(AssociationParameterNames, associationParameterNames_);
      DARABONBA_PTR_TO_JSON(Behavior, behavior_);
      DARABONBA_PTR_TO_JSON(BehaviorReason, behaviorReason_);
      DARABONBA_PTR_TO_JSON(OriginalConstraints, originalConstraints_);
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(QueryErrors, queryErrors_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_FROM_JSON(AssociationParameterNames, associationParameterNames_);
      DARABONBA_PTR_FROM_JSON(Behavior, behavior_);
      DARABONBA_PTR_FROM_JSON(BehaviorReason, behaviorReason_);
      DARABONBA_PTR_FROM_JSON(OriginalConstraints, originalConstraints_);
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(QueryErrors, queryErrors_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints() = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints(const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints &) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints(GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints &&) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints() = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& operator=(const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints &) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& operator=(GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedValues_ != nullptr
        && this->associationParameterNames_ != nullptr && this->behavior_ != nullptr && this->behaviorReason_ != nullptr && this->originalConstraints_ != nullptr && this->parameterKey_ != nullptr
        && this->queryErrors_ != nullptr && this->type_ != nullptr; };
    // allowedValues Field Functions 
    bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
    void deleteAllowedValues() { this->allowedValues_ = nullptr;};
    inline const vector<string> & allowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<string>) };
    inline vector<string> allowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<string>) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setAllowedValues(const vector<string> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setAllowedValues(vector<string> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


    // associationParameterNames Field Functions 
    bool hasAssociationParameterNames() const { return this->associationParameterNames_ != nullptr;};
    void deleteAssociationParameterNames() { this->associationParameterNames_ = nullptr;};
    inline const vector<string> & associationParameterNames() const { DARABONBA_PTR_GET_CONST(associationParameterNames_, vector<string>) };
    inline vector<string> associationParameterNames() { DARABONBA_PTR_GET(associationParameterNames_, vector<string>) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setAssociationParameterNames(const vector<string> & associationParameterNames) { DARABONBA_PTR_SET_VALUE(associationParameterNames_, associationParameterNames) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setAssociationParameterNames(vector<string> && associationParameterNames) { DARABONBA_PTR_SET_RVALUE(associationParameterNames_, associationParameterNames) };


    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline string behavior() const { DARABONBA_PTR_GET_DEFAULT(behavior_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setBehavior(string behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };


    // behaviorReason Field Functions 
    bool hasBehaviorReason() const { return this->behaviorReason_ != nullptr;};
    void deleteBehaviorReason() { this->behaviorReason_ = nullptr;};
    inline string behaviorReason() const { DARABONBA_PTR_GET_DEFAULT(behaviorReason_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setBehaviorReason(string behaviorReason) { DARABONBA_PTR_SET_VALUE(behaviorReason_, behaviorReason) };


    // originalConstraints Field Functions 
    bool hasOriginalConstraints() const { return this->originalConstraints_ != nullptr;};
    void deleteOriginalConstraints() { this->originalConstraints_ = nullptr;};
    inline const vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> & originalConstraints() const { DARABONBA_PTR_GET_CONST(originalConstraints_, vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>) };
    inline vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> originalConstraints() { DARABONBA_PTR_GET(originalConstraints_, vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setOriginalConstraints(const vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> & originalConstraints) { DARABONBA_PTR_SET_VALUE(originalConstraints_, originalConstraints) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setOriginalConstraints(vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> && originalConstraints) { DARABONBA_PTR_SET_RVALUE(originalConstraints_, originalConstraints) };


    // parameterKey Field Functions 
    bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
    void deleteParameterKey() { this->parameterKey_ = nullptr;};
    inline string parameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // queryErrors Field Functions 
    bool hasQueryErrors() const { return this->queryErrors_ != nullptr;};
    void deleteQueryErrors() { this->queryErrors_ = nullptr;};
    inline const vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> & queryErrors() const { DARABONBA_PTR_GET_CONST(queryErrors_, vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors>) };
    inline vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> queryErrors() { DARABONBA_PTR_GET(queryErrors_, vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors>) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setQueryErrors(const vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> & queryErrors) { DARABONBA_PTR_SET_VALUE(queryErrors_, queryErrors) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setQueryErrors(vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> && queryErrors) { DARABONBA_PTR_SET_RVALUE(queryErrors_, queryErrors) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The valid values of the parameter.
    std::shared_ptr<vector<string>> allowedValues_ = nullptr;
    // The names of the associated parameters.
    std::shared_ptr<vector<string>> associationParameterNames_ = nullptr;
    // The behavior of the parameter. Valid values:
    // 
    // *   NoLimit: No limit is imposed on the value of this parameter.
    // *   NotSupport: The value of this parameter cannot be queried.
    // *   QueryError: This parameter failed to be queried.
    // 
    // >  If AllowedValues is not returned, Behavior and BehaviorReason are returned, which indicate the behavior of the parameter and the reason for the behavior.
    std::shared_ptr<string> behavior_ = nullptr;
    // The reason why the behavior of the parameter is returned.
    std::shared_ptr<string> behaviorReason_ = nullptr;
    // The original constraint information.
    std::shared_ptr<vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>> originalConstraints_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The error details that are returned if the request fails.
    std::shared_ptr<vector<Models::GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors>> queryErrors_ = nullptr;
    // The data type of the parameter.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
