// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKFCPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKFCPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFcParametersBody.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFcParametersDataFormat.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkFcParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkFcParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(InvocationType, invocationType_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkFcParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(InvocationType, invocationType_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetEventStreamingResponseBodyDataSinkSinkFcParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkFcParameters(const GetEventStreamingResponseBodyDataSinkSinkFcParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkFcParameters(GetEventStreamingResponseBodyDataSinkSinkFcParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkFcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkFcParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkFcParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkFcParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkFcParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkFcParameters &&) = default ;
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
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersBody) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersBody body() { DARABONBA_PTR_GET(body_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersBody) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setBody(const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setBody(Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency & concurrency() const { DARABONBA_PTR_GET_CONST(concurrency_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency concurrency() { DARABONBA_PTR_GET(concurrency_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setConcurrency(const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency & concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setConcurrency(Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency && concurrency) { DARABONBA_PTR_SET_RVALUE(concurrency_, concurrency) };


    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersDataFormat & dataFormat() const { DARABONBA_PTR_GET_CONST(dataFormat_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersDataFormat) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersDataFormat dataFormat() { DARABONBA_PTR_GET(dataFormat_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersDataFormat) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setDataFormat(const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersDataFormat & dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setDataFormat(Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersDataFormat && dataFormat) { DARABONBA_PTR_SET_RVALUE(dataFormat_, dataFormat) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName & functionName() const { DARABONBA_PTR_GET_CONST(functionName_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName functionName() { DARABONBA_PTR_GET(functionName_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setFunctionName(const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName & functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setFunctionName(Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName && functionName) { DARABONBA_PTR_SET_RVALUE(functionName_, functionName) };


    // invocationType Field Functions 
    bool hasInvocationType() const { return this->invocationType_ != nullptr;};
    void deleteInvocationType() { this->invocationType_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType & invocationType() const { DARABONBA_PTR_GET_CONST(invocationType_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType invocationType() { DARABONBA_PTR_GET(invocationType_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setInvocationType(const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType & invocationType) { DARABONBA_PTR_SET_VALUE(invocationType_, invocationType) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setInvocationType(Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType && invocationType) { DARABONBA_PTR_SET_RVALUE(invocationType_, invocationType) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier & qualifier() const { DARABONBA_PTR_GET_CONST(qualifier_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier qualifier() { DARABONBA_PTR_GET(qualifier_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setQualifier(const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier & qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setQualifier(Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier && qualifier) { DARABONBA_PTR_SET_RVALUE(qualifier_, qualifier) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName & serviceName() const { DARABONBA_PTR_GET_CONST(serviceName_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName serviceName() { DARABONBA_PTR_GET(serviceName_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setServiceName(const Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName & serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFcParameters& setServiceName(Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName && serviceName) { DARABONBA_PTR_SET_RVALUE(serviceName_, serviceName) };


  protected:
    // The message body that is sent to the function.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersBody> body_ = nullptr;
    // The delivery concurrency. Minimum value: 1.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency> concurrency_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersDataFormat> dataFormat_ = nullptr;
    // The function name.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName> functionName_ = nullptr;
    // The invocation type. Valid values: Sync: synchronous Async: asynchronous
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType> invocationType_ = nullptr;
    // The alias of the service to which the function belongs.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier> qualifier_ = nullptr;
    // The service name.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
