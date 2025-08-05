// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKFCPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKFCPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFcParametersBody.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFcParametersConcurrency.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFcParametersDataFormat.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFcParametersFunctionName.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFcParametersInvocationType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFcParametersQualifier.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFcParametersServiceName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkFcParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkFcParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(InvocationType, invocationType_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkFcParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(InvocationType, invocationType_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    CreateEventStreamingRequestSinkSinkFcParameters() = default ;
    CreateEventStreamingRequestSinkSinkFcParameters(const CreateEventStreamingRequestSinkSinkFcParameters &) = default ;
    CreateEventStreamingRequestSinkSinkFcParameters(CreateEventStreamingRequestSinkSinkFcParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkFcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkFcParameters() = default ;
    CreateEventStreamingRequestSinkSinkFcParameters& operator=(const CreateEventStreamingRequestSinkSinkFcParameters &) = default ;
    CreateEventStreamingRequestSinkSinkFcParameters& operator=(CreateEventStreamingRequestSinkSinkFcParameters &&) = default ;
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
    inline const Models::CreateEventStreamingRequestSinkSinkFcParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::CreateEventStreamingRequestSinkSinkFcParametersBody) };
    inline Models::CreateEventStreamingRequestSinkSinkFcParametersBody body() { DARABONBA_PTR_GET(body_, Models::CreateEventStreamingRequestSinkSinkFcParametersBody) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setBody(const Models::CreateEventStreamingRequestSinkSinkFcParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setBody(Models::CreateEventStreamingRequestSinkSinkFcParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFcParametersConcurrency & concurrency() const { DARABONBA_PTR_GET_CONST(concurrency_, Models::CreateEventStreamingRequestSinkSinkFcParametersConcurrency) };
    inline Models::CreateEventStreamingRequestSinkSinkFcParametersConcurrency concurrency() { DARABONBA_PTR_GET(concurrency_, Models::CreateEventStreamingRequestSinkSinkFcParametersConcurrency) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setConcurrency(const Models::CreateEventStreamingRequestSinkSinkFcParametersConcurrency & concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setConcurrency(Models::CreateEventStreamingRequestSinkSinkFcParametersConcurrency && concurrency) { DARABONBA_PTR_SET_RVALUE(concurrency_, concurrency) };


    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFcParametersDataFormat & dataFormat() const { DARABONBA_PTR_GET_CONST(dataFormat_, Models::CreateEventStreamingRequestSinkSinkFcParametersDataFormat) };
    inline Models::CreateEventStreamingRequestSinkSinkFcParametersDataFormat dataFormat() { DARABONBA_PTR_GET(dataFormat_, Models::CreateEventStreamingRequestSinkSinkFcParametersDataFormat) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setDataFormat(const Models::CreateEventStreamingRequestSinkSinkFcParametersDataFormat & dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setDataFormat(Models::CreateEventStreamingRequestSinkSinkFcParametersDataFormat && dataFormat) { DARABONBA_PTR_SET_RVALUE(dataFormat_, dataFormat) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFcParametersFunctionName & functionName() const { DARABONBA_PTR_GET_CONST(functionName_, Models::CreateEventStreamingRequestSinkSinkFcParametersFunctionName) };
    inline Models::CreateEventStreamingRequestSinkSinkFcParametersFunctionName functionName() { DARABONBA_PTR_GET(functionName_, Models::CreateEventStreamingRequestSinkSinkFcParametersFunctionName) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setFunctionName(const Models::CreateEventStreamingRequestSinkSinkFcParametersFunctionName & functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setFunctionName(Models::CreateEventStreamingRequestSinkSinkFcParametersFunctionName && functionName) { DARABONBA_PTR_SET_RVALUE(functionName_, functionName) };


    // invocationType Field Functions 
    bool hasInvocationType() const { return this->invocationType_ != nullptr;};
    void deleteInvocationType() { this->invocationType_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFcParametersInvocationType & invocationType() const { DARABONBA_PTR_GET_CONST(invocationType_, Models::CreateEventStreamingRequestSinkSinkFcParametersInvocationType) };
    inline Models::CreateEventStreamingRequestSinkSinkFcParametersInvocationType invocationType() { DARABONBA_PTR_GET(invocationType_, Models::CreateEventStreamingRequestSinkSinkFcParametersInvocationType) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setInvocationType(const Models::CreateEventStreamingRequestSinkSinkFcParametersInvocationType & invocationType) { DARABONBA_PTR_SET_VALUE(invocationType_, invocationType) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setInvocationType(Models::CreateEventStreamingRequestSinkSinkFcParametersInvocationType && invocationType) { DARABONBA_PTR_SET_RVALUE(invocationType_, invocationType) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFcParametersQualifier & qualifier() const { DARABONBA_PTR_GET_CONST(qualifier_, Models::CreateEventStreamingRequestSinkSinkFcParametersQualifier) };
    inline Models::CreateEventStreamingRequestSinkSinkFcParametersQualifier qualifier() { DARABONBA_PTR_GET(qualifier_, Models::CreateEventStreamingRequestSinkSinkFcParametersQualifier) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setQualifier(const Models::CreateEventStreamingRequestSinkSinkFcParametersQualifier & qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setQualifier(Models::CreateEventStreamingRequestSinkSinkFcParametersQualifier && qualifier) { DARABONBA_PTR_SET_RVALUE(qualifier_, qualifier) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFcParametersServiceName & serviceName() const { DARABONBA_PTR_GET_CONST(serviceName_, Models::CreateEventStreamingRequestSinkSinkFcParametersServiceName) };
    inline Models::CreateEventStreamingRequestSinkSinkFcParametersServiceName serviceName() { DARABONBA_PTR_GET(serviceName_, Models::CreateEventStreamingRequestSinkSinkFcParametersServiceName) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setServiceName(const Models::CreateEventStreamingRequestSinkSinkFcParametersServiceName & serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };
    inline CreateEventStreamingRequestSinkSinkFcParameters& setServiceName(Models::CreateEventStreamingRequestSinkSinkFcParametersServiceName && serviceName) { DARABONBA_PTR_SET_RVALUE(serviceName_, serviceName) };


  protected:
    // The message body that you want to deliver to Function Compute.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFcParametersBody> body_ = nullptr;
    // The delivery concurrency. Minimum value: 1.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFcParametersConcurrency> concurrency_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFcParametersDataFormat> dataFormat_ = nullptr;
    // The function name.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFcParametersFunctionName> functionName_ = nullptr;
    // The invocation mode. Valid values: Sync and Async.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFcParametersInvocationType> invocationType_ = nullptr;
    // The service version.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFcParametersQualifier> qualifier_ = nullptr;
    // The service name.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFcParametersServiceName> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
