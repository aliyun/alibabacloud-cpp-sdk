// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUEDEPLOYSERVICEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONTINUEDEPLOYSERVICEINSTANCERESPONSEBODY_HPP_
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
  class ContinueDeployServiceInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueDeployServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueDeployServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    ContinueDeployServiceInstanceResponseBody() = default ;
    ContinueDeployServiceInstanceResponseBody(const ContinueDeployServiceInstanceResponseBody &) = default ;
    ContinueDeployServiceInstanceResponseBody(ContinueDeployServiceInstanceResponseBody &&) = default ;
    ContinueDeployServiceInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueDeployServiceInstanceResponseBody() = default ;
    ContinueDeployServiceInstanceResponseBody& operator=(const ContinueDeployServiceInstanceResponseBody &) = default ;
    ContinueDeployServiceInstanceResponseBody& operator=(ContinueDeployServiceInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DryRunResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DryRunResult& obj) { 
        DARABONBA_PTR_TO_JSON(ParametersAllowedToBeModified, parametersAllowedToBeModified_);
        DARABONBA_PTR_TO_JSON(ParametersConditionallyAllowedToBeModified, parametersConditionallyAllowedToBeModified_);
        DARABONBA_PTR_TO_JSON(ParametersNotAllowedToBeModified, parametersNotAllowedToBeModified_);
      };
      friend void from_json(const Darabonba::Json& j, DryRunResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ParametersAllowedToBeModified, parametersAllowedToBeModified_);
        DARABONBA_PTR_FROM_JSON(ParametersConditionallyAllowedToBeModified, parametersConditionallyAllowedToBeModified_);
        DARABONBA_PTR_FROM_JSON(ParametersNotAllowedToBeModified, parametersNotAllowedToBeModified_);
      };
      DryRunResult() = default ;
      DryRunResult(const DryRunResult &) = default ;
      DryRunResult(DryRunResult &&) = default ;
      DryRunResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DryRunResult() = default ;
      DryRunResult& operator=(const DryRunResult &) = default ;
      DryRunResult& operator=(DryRunResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parametersAllowedToBeModified_ == nullptr
        && this->parametersConditionallyAllowedToBeModified_ == nullptr && this->parametersNotAllowedToBeModified_ == nullptr; };
      // parametersAllowedToBeModified Field Functions 
      bool hasParametersAllowedToBeModified() const { return this->parametersAllowedToBeModified_ != nullptr;};
      void deleteParametersAllowedToBeModified() { this->parametersAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersAllowedToBeModified() { DARABONBA_PTR_GET(parametersAllowedToBeModified_, vector<string>) };
      inline DryRunResult& setParametersAllowedToBeModified(const vector<string> & parametersAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };
      inline DryRunResult& setParametersAllowedToBeModified(vector<string> && parametersAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };


      // parametersConditionallyAllowedToBeModified Field Functions 
      bool hasParametersConditionallyAllowedToBeModified() const { return this->parametersConditionallyAllowedToBeModified_ != nullptr;};
      void deleteParametersConditionallyAllowedToBeModified() { this->parametersConditionallyAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersConditionallyAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersConditionallyAllowedToBeModified() { DARABONBA_PTR_GET(parametersConditionallyAllowedToBeModified_, vector<string>) };
      inline DryRunResult& setParametersConditionallyAllowedToBeModified(const vector<string> & parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };
      inline DryRunResult& setParametersConditionallyAllowedToBeModified(vector<string> && parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };


      // parametersNotAllowedToBeModified Field Functions 
      bool hasParametersNotAllowedToBeModified() const { return this->parametersNotAllowedToBeModified_ != nullptr;};
      void deleteParametersNotAllowedToBeModified() { this->parametersNotAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersNotAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersNotAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersNotAllowedToBeModified() { DARABONBA_PTR_GET(parametersNotAllowedToBeModified_, vector<string>) };
      inline DryRunResult& setParametersNotAllowedToBeModified(const vector<string> & parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };
      inline DryRunResult& setParametersNotAllowedToBeModified(vector<string> && parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };


    protected:
      // The parameters that can be modified. The operation that is performed to modify the parameters does not cause a validation error.
      // 
      // > This parameter is returned only if DryRun is set to true.
      shared_ptr<vector<string>> parametersAllowedToBeModified_ {};
      // The parameters that can be modified under specific conditions. The new values of the parameters determine whether the operation that is performed to modify the parameters causes a validation error.
      // 
      // > This parameter is returned only if DryRun is set to true.
      shared_ptr<vector<string>> parametersConditionallyAllowedToBeModified_ {};
      // The parameters that cannot be modified. The operation that is performed to modify the parameters causes a validation error.
      // 
      // > This parameter is returned only if DryRun is set to true.
      shared_ptr<vector<string>> parametersNotAllowedToBeModified_ {};
    };

    virtual bool empty() const override { return this->dryRunResult_ == nullptr
        && this->requestId_ == nullptr && this->serviceInstanceId_ == nullptr; };
    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline const ContinueDeployServiceInstanceResponseBody::DryRunResult & getDryRunResult() const { DARABONBA_PTR_GET_CONST(dryRunResult_, ContinueDeployServiceInstanceResponseBody::DryRunResult) };
    inline ContinueDeployServiceInstanceResponseBody::DryRunResult getDryRunResult() { DARABONBA_PTR_GET(dryRunResult_, ContinueDeployServiceInstanceResponseBody::DryRunResult) };
    inline ContinueDeployServiceInstanceResponseBody& setDryRunResult(const ContinueDeployServiceInstanceResponseBody::DryRunResult & dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };
    inline ContinueDeployServiceInstanceResponseBody& setDryRunResult(ContinueDeployServiceInstanceResponseBody::DryRunResult && dryRunResult) { DARABONBA_PTR_SET_RVALUE(dryRunResult_, dryRunResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ContinueDeployServiceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ContinueDeployServiceInstanceResponseBody& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The dry run result.
    shared_ptr<ContinueDeployServiceInstanceResponseBody::DryRunResult> dryRunResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the service instance.
    shared_ptr<string> serviceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
