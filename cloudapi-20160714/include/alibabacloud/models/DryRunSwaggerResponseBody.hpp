// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DryRunSwaggerResponseBodyFailed.hpp>
#include <alibabacloud/models/DryRunSwaggerResponseBodyModelFailed.hpp>
#include <alibabacloud/models/DryRunSwaggerResponseBodyModelSuccess.hpp>
#include <alibabacloud/models/DryRunSwaggerResponseBodySuccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DryRunSwaggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunSwaggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(GlobalCondition, globalCondition_);
      DARABONBA_PTR_TO_JSON(ModelFailed, modelFailed_);
      DARABONBA_PTR_TO_JSON(ModelSuccess, modelSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunSwaggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(GlobalCondition, globalCondition_);
      DARABONBA_PTR_FROM_JSON(ModelFailed, modelFailed_);
      DARABONBA_PTR_FROM_JSON(ModelSuccess, modelSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DryRunSwaggerResponseBody() = default ;
    DryRunSwaggerResponseBody(const DryRunSwaggerResponseBody &) = default ;
    DryRunSwaggerResponseBody(DryRunSwaggerResponseBody &&) = default ;
    DryRunSwaggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunSwaggerResponseBody() = default ;
    DryRunSwaggerResponseBody& operator=(const DryRunSwaggerResponseBody &) = default ;
    DryRunSwaggerResponseBody& operator=(DryRunSwaggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failed_ == nullptr
        && return this->globalCondition_ == nullptr && return this->modelFailed_ == nullptr && return this->modelSuccess_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline const DryRunSwaggerResponseBodyFailed & failed() const { DARABONBA_PTR_GET_CONST(failed_, DryRunSwaggerResponseBodyFailed) };
    inline DryRunSwaggerResponseBodyFailed failed() { DARABONBA_PTR_GET(failed_, DryRunSwaggerResponseBodyFailed) };
    inline DryRunSwaggerResponseBody& setFailed(const DryRunSwaggerResponseBodyFailed & failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };
    inline DryRunSwaggerResponseBody& setFailed(DryRunSwaggerResponseBodyFailed && failed) { DARABONBA_PTR_SET_RVALUE(failed_, failed) };


    // globalCondition Field Functions 
    bool hasGlobalCondition() const { return this->globalCondition_ != nullptr;};
    void deleteGlobalCondition() { this->globalCondition_ = nullptr;};
    inline string globalCondition() const { DARABONBA_PTR_GET_DEFAULT(globalCondition_, "") };
    inline DryRunSwaggerResponseBody& setGlobalCondition(string globalCondition) { DARABONBA_PTR_SET_VALUE(globalCondition_, globalCondition) };


    // modelFailed Field Functions 
    bool hasModelFailed() const { return this->modelFailed_ != nullptr;};
    void deleteModelFailed() { this->modelFailed_ = nullptr;};
    inline const DryRunSwaggerResponseBodyModelFailed & modelFailed() const { DARABONBA_PTR_GET_CONST(modelFailed_, DryRunSwaggerResponseBodyModelFailed) };
    inline DryRunSwaggerResponseBodyModelFailed modelFailed() { DARABONBA_PTR_GET(modelFailed_, DryRunSwaggerResponseBodyModelFailed) };
    inline DryRunSwaggerResponseBody& setModelFailed(const DryRunSwaggerResponseBodyModelFailed & modelFailed) { DARABONBA_PTR_SET_VALUE(modelFailed_, modelFailed) };
    inline DryRunSwaggerResponseBody& setModelFailed(DryRunSwaggerResponseBodyModelFailed && modelFailed) { DARABONBA_PTR_SET_RVALUE(modelFailed_, modelFailed) };


    // modelSuccess Field Functions 
    bool hasModelSuccess() const { return this->modelSuccess_ != nullptr;};
    void deleteModelSuccess() { this->modelSuccess_ = nullptr;};
    inline const DryRunSwaggerResponseBodyModelSuccess & modelSuccess() const { DARABONBA_PTR_GET_CONST(modelSuccess_, DryRunSwaggerResponseBodyModelSuccess) };
    inline DryRunSwaggerResponseBodyModelSuccess modelSuccess() { DARABONBA_PTR_GET(modelSuccess_, DryRunSwaggerResponseBodyModelSuccess) };
    inline DryRunSwaggerResponseBody& setModelSuccess(const DryRunSwaggerResponseBodyModelSuccess & modelSuccess) { DARABONBA_PTR_SET_VALUE(modelSuccess_, modelSuccess) };
    inline DryRunSwaggerResponseBody& setModelSuccess(DryRunSwaggerResponseBodyModelSuccess && modelSuccess) { DARABONBA_PTR_SET_RVALUE(modelSuccess_, modelSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DryRunSwaggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline const DryRunSwaggerResponseBodySuccess & success() const { DARABONBA_PTR_GET_CONST(success_, DryRunSwaggerResponseBodySuccess) };
    inline DryRunSwaggerResponseBodySuccess success() { DARABONBA_PTR_GET(success_, DryRunSwaggerResponseBodySuccess) };
    inline DryRunSwaggerResponseBody& setSuccess(const DryRunSwaggerResponseBodySuccess & success) { DARABONBA_PTR_SET_VALUE(success_, success) };
    inline DryRunSwaggerResponseBody& setSuccess(DryRunSwaggerResponseBodySuccess && success) { DARABONBA_PTR_SET_RVALUE(success_, success) };


  protected:
    // The APIs that failed to be created based on the Swagger-compliant data imported this time.
    std::shared_ptr<DryRunSwaggerResponseBodyFailed> failed_ = nullptr;
    // The global condition.
    std::shared_ptr<string> globalCondition_ = nullptr;
    // The models that failed to be imported through the Swagger-compliant data this time.
    std::shared_ptr<DryRunSwaggerResponseBodyModelFailed> modelFailed_ = nullptr;
    // The models that failed to be imported through the Swagger-compliant data this time.
    std::shared_ptr<DryRunSwaggerResponseBodyModelSuccess> modelSuccess_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The APIs that are created based on the Swagger-compliant data imported this time.
    std::shared_ptr<DryRunSwaggerResponseBodySuccess> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
