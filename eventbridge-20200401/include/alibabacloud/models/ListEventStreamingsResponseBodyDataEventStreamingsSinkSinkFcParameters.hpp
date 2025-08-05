// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKFCPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKFCPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersDataFormat.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(InvocationType, invocationType_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(InvocationType, invocationType_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters &&) = default ;
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
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody body() { DARABONBA_PTR_GET(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setBody(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setBody(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency & concurrency() const { DARABONBA_PTR_GET_CONST(concurrency_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency concurrency() { DARABONBA_PTR_GET(concurrency_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setConcurrency(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency & concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setConcurrency(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency && concurrency) { DARABONBA_PTR_SET_RVALUE(concurrency_, concurrency) };


    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersDataFormat & dataFormat() const { DARABONBA_PTR_GET_CONST(dataFormat_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersDataFormat) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersDataFormat dataFormat() { DARABONBA_PTR_GET(dataFormat_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersDataFormat) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setDataFormat(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersDataFormat & dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setDataFormat(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersDataFormat && dataFormat) { DARABONBA_PTR_SET_RVALUE(dataFormat_, dataFormat) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName & functionName() const { DARABONBA_PTR_GET_CONST(functionName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName functionName() { DARABONBA_PTR_GET(functionName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setFunctionName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName & functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setFunctionName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName && functionName) { DARABONBA_PTR_SET_RVALUE(functionName_, functionName) };


    // invocationType Field Functions 
    bool hasInvocationType() const { return this->invocationType_ != nullptr;};
    void deleteInvocationType() { this->invocationType_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType & invocationType() const { DARABONBA_PTR_GET_CONST(invocationType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType invocationType() { DARABONBA_PTR_GET(invocationType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setInvocationType(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType & invocationType) { DARABONBA_PTR_SET_VALUE(invocationType_, invocationType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setInvocationType(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType && invocationType) { DARABONBA_PTR_SET_RVALUE(invocationType_, invocationType) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier & qualifier() const { DARABONBA_PTR_GET_CONST(qualifier_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier qualifier() { DARABONBA_PTR_GET(qualifier_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setQualifier(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier & qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setQualifier(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier && qualifier) { DARABONBA_PTR_SET_RVALUE(qualifier_, qualifier) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName & serviceName() const { DARABONBA_PTR_GET_CONST(serviceName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName serviceName() { DARABONBA_PTR_GET(serviceName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setServiceName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName & serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters& setServiceName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName && serviceName) { DARABONBA_PTR_SET_RVALUE(serviceName_, serviceName) };


  protected:
    // The message body that is delivered to Function Compute.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody> body_ = nullptr;
    // The delivery concurrency. Minimum value: 1.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency> concurrency_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersDataFormat> dataFormat_ = nullptr;
    // The function name.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName> functionName_ = nullptr;
    // The invocation mode. Valid values:
    // 
    // *   Sync
    // *   Async
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType> invocationType_ = nullptr;
    // The alias of the service to which the function belongs.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier> qualifier_ = nullptr;
    // The service name.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
