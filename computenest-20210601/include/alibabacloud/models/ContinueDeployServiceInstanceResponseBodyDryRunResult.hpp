// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUEDEPLOYSERVICEINSTANCERESPONSEBODYDRYRUNRESULT_HPP_
#define ALIBABACLOUD_MODELS_CONTINUEDEPLOYSERVICEINSTANCERESPONSEBODYDRYRUNRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ContinueDeployServiceInstanceResponseBodyDryRunResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueDeployServiceInstanceResponseBodyDryRunResult& obj) { 
      DARABONBA_PTR_TO_JSON(ParametersAllowedToBeModified, parametersAllowedToBeModified_);
      DARABONBA_PTR_TO_JSON(ParametersConditionallyAllowedToBeModified, parametersConditionallyAllowedToBeModified_);
      DARABONBA_PTR_TO_JSON(ParametersNotAllowedToBeModified, parametersNotAllowedToBeModified_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueDeployServiceInstanceResponseBodyDryRunResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ParametersAllowedToBeModified, parametersAllowedToBeModified_);
      DARABONBA_PTR_FROM_JSON(ParametersConditionallyAllowedToBeModified, parametersConditionallyAllowedToBeModified_);
      DARABONBA_PTR_FROM_JSON(ParametersNotAllowedToBeModified, parametersNotAllowedToBeModified_);
    };
    ContinueDeployServiceInstanceResponseBodyDryRunResult() = default ;
    ContinueDeployServiceInstanceResponseBodyDryRunResult(const ContinueDeployServiceInstanceResponseBodyDryRunResult &) = default ;
    ContinueDeployServiceInstanceResponseBodyDryRunResult(ContinueDeployServiceInstanceResponseBodyDryRunResult &&) = default ;
    ContinueDeployServiceInstanceResponseBodyDryRunResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueDeployServiceInstanceResponseBodyDryRunResult() = default ;
    ContinueDeployServiceInstanceResponseBodyDryRunResult& operator=(const ContinueDeployServiceInstanceResponseBodyDryRunResult &) = default ;
    ContinueDeployServiceInstanceResponseBodyDryRunResult& operator=(ContinueDeployServiceInstanceResponseBodyDryRunResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parametersAllowedToBeModified_ != nullptr
        && this->parametersConditionallyAllowedToBeModified_ != nullptr && this->parametersNotAllowedToBeModified_ != nullptr; };
    // parametersAllowedToBeModified Field Functions 
    bool hasParametersAllowedToBeModified() const { return this->parametersAllowedToBeModified_ != nullptr;};
    void deleteParametersAllowedToBeModified() { this->parametersAllowedToBeModified_ = nullptr;};
    inline const vector<string> & parametersAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersAllowedToBeModified_, vector<string>) };
    inline vector<string> parametersAllowedToBeModified() { DARABONBA_PTR_GET(parametersAllowedToBeModified_, vector<string>) };
    inline ContinueDeployServiceInstanceResponseBodyDryRunResult& setParametersAllowedToBeModified(const vector<string> & parametersAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };
    inline ContinueDeployServiceInstanceResponseBodyDryRunResult& setParametersAllowedToBeModified(vector<string> && parametersAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };


    // parametersConditionallyAllowedToBeModified Field Functions 
    bool hasParametersConditionallyAllowedToBeModified() const { return this->parametersConditionallyAllowedToBeModified_ != nullptr;};
    void deleteParametersConditionallyAllowedToBeModified() { this->parametersConditionallyAllowedToBeModified_ = nullptr;};
    inline const vector<string> & parametersConditionallyAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyAllowedToBeModified_, vector<string>) };
    inline vector<string> parametersConditionallyAllowedToBeModified() { DARABONBA_PTR_GET(parametersConditionallyAllowedToBeModified_, vector<string>) };
    inline ContinueDeployServiceInstanceResponseBodyDryRunResult& setParametersConditionallyAllowedToBeModified(const vector<string> & parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };
    inline ContinueDeployServiceInstanceResponseBodyDryRunResult& setParametersConditionallyAllowedToBeModified(vector<string> && parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };


    // parametersNotAllowedToBeModified Field Functions 
    bool hasParametersNotAllowedToBeModified() const { return this->parametersNotAllowedToBeModified_ != nullptr;};
    void deleteParametersNotAllowedToBeModified() { this->parametersNotAllowedToBeModified_ = nullptr;};
    inline const vector<string> & parametersNotAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersNotAllowedToBeModified_, vector<string>) };
    inline vector<string> parametersNotAllowedToBeModified() { DARABONBA_PTR_GET(parametersNotAllowedToBeModified_, vector<string>) };
    inline ContinueDeployServiceInstanceResponseBodyDryRunResult& setParametersNotAllowedToBeModified(const vector<string> & parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };
    inline ContinueDeployServiceInstanceResponseBodyDryRunResult& setParametersNotAllowedToBeModified(vector<string> && parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };


  protected:
    // The parameters that can be modified. The operation that is performed to modify the parameters does not cause a validation error.
    // 
    // > This parameter is returned only if DryRun is set to true.
    std::shared_ptr<vector<string>> parametersAllowedToBeModified_ = nullptr;
    // The parameters that can be modified under specific conditions. The new values of the parameters determine whether the operation that is performed to modify the parameters causes a validation error.
    // 
    // > This parameter is returned only if DryRun is set to true.
    std::shared_ptr<vector<string>> parametersConditionallyAllowedToBeModified_ = nullptr;
    // The parameters that cannot be modified. The operation that is performed to modify the parameters causes a validation error.
    // 
    // > This parameter is returned only if DryRun is set to true.
    std::shared_ptr<vector<string>> parametersNotAllowedToBeModified_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
