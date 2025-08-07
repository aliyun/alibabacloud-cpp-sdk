// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUEDEPLOYSERVICEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONTINUEDEPLOYSERVICEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ContinueDeployServiceInstanceResponseBodyDryRunResult.hpp>
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
    virtual bool empty() const override { this->dryRunResult_ != nullptr
        && this->requestId_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline const ContinueDeployServiceInstanceResponseBodyDryRunResult & dryRunResult() const { DARABONBA_PTR_GET_CONST(dryRunResult_, ContinueDeployServiceInstanceResponseBodyDryRunResult) };
    inline ContinueDeployServiceInstanceResponseBodyDryRunResult dryRunResult() { DARABONBA_PTR_GET(dryRunResult_, ContinueDeployServiceInstanceResponseBodyDryRunResult) };
    inline ContinueDeployServiceInstanceResponseBody& setDryRunResult(const ContinueDeployServiceInstanceResponseBodyDryRunResult & dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };
    inline ContinueDeployServiceInstanceResponseBody& setDryRunResult(ContinueDeployServiceInstanceResponseBodyDryRunResult && dryRunResult) { DARABONBA_PTR_SET_RVALUE(dryRunResult_, dryRunResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ContinueDeployServiceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ContinueDeployServiceInstanceResponseBody& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The dry run result.
    std::shared_ptr<ContinueDeployServiceInstanceResponseBodyDryRunResult> dryRunResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the service instance.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
