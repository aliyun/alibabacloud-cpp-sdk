// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKFCPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKFCPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFcParametersBody.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFcParametersConcurrency.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFcParametersDataFormat.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFcParametersFunctionName.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFcParametersInvocationType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFcParametersQualifier.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFcParametersServiceName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkFcParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkFcParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(InvocationType, invocationType_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkFcParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(InvocationType, invocationType_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    UpdateEventStreamingRequestSinkSinkFcParameters() = default ;
    UpdateEventStreamingRequestSinkSinkFcParameters(const UpdateEventStreamingRequestSinkSinkFcParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkFcParameters(UpdateEventStreamingRequestSinkSinkFcParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkFcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkFcParameters() = default ;
    UpdateEventStreamingRequestSinkSinkFcParameters& operator=(const UpdateEventStreamingRequestSinkSinkFcParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkFcParameters& operator=(UpdateEventStreamingRequestSinkSinkFcParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->concurrency_ != nullptr && this->dataFormat_ != nullptr && this->functionName_ != nullptr && this->invocationType_ != nullptr && this->qualifier_ != nullptr
        && this->serviceName_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFcParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::UpdateEventStreamingRequestSinkSinkFcParametersBody) };
    inline Models::UpdateEventStreamingRequestSinkSinkFcParametersBody body() { DARABONBA_PTR_GET(body_, Models::UpdateEventStreamingRequestSinkSinkFcParametersBody) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setBody(const Models::UpdateEventStreamingRequestSinkSinkFcParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setBody(Models::UpdateEventStreamingRequestSinkSinkFcParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFcParametersConcurrency & concurrency() const { DARABONBA_PTR_GET_CONST(concurrency_, Models::UpdateEventStreamingRequestSinkSinkFcParametersConcurrency) };
    inline Models::UpdateEventStreamingRequestSinkSinkFcParametersConcurrency concurrency() { DARABONBA_PTR_GET(concurrency_, Models::UpdateEventStreamingRequestSinkSinkFcParametersConcurrency) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setConcurrency(const Models::UpdateEventStreamingRequestSinkSinkFcParametersConcurrency & concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setConcurrency(Models::UpdateEventStreamingRequestSinkSinkFcParametersConcurrency && concurrency) { DARABONBA_PTR_SET_RVALUE(concurrency_, concurrency) };


    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFcParametersDataFormat & dataFormat() const { DARABONBA_PTR_GET_CONST(dataFormat_, Models::UpdateEventStreamingRequestSinkSinkFcParametersDataFormat) };
    inline Models::UpdateEventStreamingRequestSinkSinkFcParametersDataFormat dataFormat() { DARABONBA_PTR_GET(dataFormat_, Models::UpdateEventStreamingRequestSinkSinkFcParametersDataFormat) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setDataFormat(const Models::UpdateEventStreamingRequestSinkSinkFcParametersDataFormat & dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setDataFormat(Models::UpdateEventStreamingRequestSinkSinkFcParametersDataFormat && dataFormat) { DARABONBA_PTR_SET_RVALUE(dataFormat_, dataFormat) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFcParametersFunctionName & functionName() const { DARABONBA_PTR_GET_CONST(functionName_, Models::UpdateEventStreamingRequestSinkSinkFcParametersFunctionName) };
    inline Models::UpdateEventStreamingRequestSinkSinkFcParametersFunctionName functionName() { DARABONBA_PTR_GET(functionName_, Models::UpdateEventStreamingRequestSinkSinkFcParametersFunctionName) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setFunctionName(const Models::UpdateEventStreamingRequestSinkSinkFcParametersFunctionName & functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setFunctionName(Models::UpdateEventStreamingRequestSinkSinkFcParametersFunctionName && functionName) { DARABONBA_PTR_SET_RVALUE(functionName_, functionName) };


    // invocationType Field Functions 
    bool hasInvocationType() const { return this->invocationType_ != nullptr;};
    void deleteInvocationType() { this->invocationType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFcParametersInvocationType & invocationType() const { DARABONBA_PTR_GET_CONST(invocationType_, Models::UpdateEventStreamingRequestSinkSinkFcParametersInvocationType) };
    inline Models::UpdateEventStreamingRequestSinkSinkFcParametersInvocationType invocationType() { DARABONBA_PTR_GET(invocationType_, Models::UpdateEventStreamingRequestSinkSinkFcParametersInvocationType) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setInvocationType(const Models::UpdateEventStreamingRequestSinkSinkFcParametersInvocationType & invocationType) { DARABONBA_PTR_SET_VALUE(invocationType_, invocationType) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setInvocationType(Models::UpdateEventStreamingRequestSinkSinkFcParametersInvocationType && invocationType) { DARABONBA_PTR_SET_RVALUE(invocationType_, invocationType) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFcParametersQualifier & qualifier() const { DARABONBA_PTR_GET_CONST(qualifier_, Models::UpdateEventStreamingRequestSinkSinkFcParametersQualifier) };
    inline Models::UpdateEventStreamingRequestSinkSinkFcParametersQualifier qualifier() { DARABONBA_PTR_GET(qualifier_, Models::UpdateEventStreamingRequestSinkSinkFcParametersQualifier) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setQualifier(const Models::UpdateEventStreamingRequestSinkSinkFcParametersQualifier & qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setQualifier(Models::UpdateEventStreamingRequestSinkSinkFcParametersQualifier && qualifier) { DARABONBA_PTR_SET_RVALUE(qualifier_, qualifier) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFcParametersServiceName & serviceName() const { DARABONBA_PTR_GET_CONST(serviceName_, Models::UpdateEventStreamingRequestSinkSinkFcParametersServiceName) };
    inline Models::UpdateEventStreamingRequestSinkSinkFcParametersServiceName serviceName() { DARABONBA_PTR_GET(serviceName_, Models::UpdateEventStreamingRequestSinkSinkFcParametersServiceName) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setServiceName(const Models::UpdateEventStreamingRequestSinkSinkFcParametersServiceName & serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };
    inline UpdateEventStreamingRequestSinkSinkFcParameters& setServiceName(Models::UpdateEventStreamingRequestSinkSinkFcParametersServiceName && serviceName) { DARABONBA_PTR_SET_RVALUE(serviceName_, serviceName) };


  protected:
    // The message body that you want to deliver to Function Compute.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFcParametersBody> body_ = nullptr;
    // The delivery concurrency. Minimum value: 1.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFcParametersConcurrency> concurrency_ = nullptr;
    // The rule that you want to use to transform the format of event content.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFcParametersDataFormat> dataFormat_ = nullptr;
    // The function name.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFcParametersFunctionName> functionName_ = nullptr;
    // The invocation mode. Valid values: Sync and Async.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFcParametersInvocationType> invocationType_ = nullptr;
    // The alias of the service to which the function belongs.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFcParametersQualifier> qualifier_ = nullptr;
    // The service name.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFcParametersServiceName> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
