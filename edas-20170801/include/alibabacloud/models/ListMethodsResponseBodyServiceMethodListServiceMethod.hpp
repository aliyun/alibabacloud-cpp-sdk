// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODYSERVICEMETHODLISTSERVICEMETHOD_HPP_
#define ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODYSERVICEMETHODLISTSERVICEMETHOD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMethodsResponseBodyServiceMethodListServiceMethodInputParams.hpp>
#include <alibabacloud/models/ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListMethodsResponseBodyServiceMethodListServiceMethod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMethodsResponseBodyServiceMethodListServiceMethod& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ParamTypes, paramTypes_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMethodsResponseBodyServiceMethodListServiceMethod& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ParamTypes, paramTypes_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    ListMethodsResponseBodyServiceMethodListServiceMethod() = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethod(const ListMethodsResponseBodyServiceMethodListServiceMethod &) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethod(ListMethodsResponseBodyServiceMethodListServiceMethod &&) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMethodsResponseBodyServiceMethodListServiceMethod() = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethod& operator=(const ListMethodsResponseBodyServiceMethodListServiceMethod &) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethod& operator=(ListMethodsResponseBodyServiceMethodListServiceMethod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->inputParams_ == nullptr && return this->methodName_ == nullptr && return this->output_ == nullptr && return this->paramTypes_ == nullptr && return this->serviceName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListMethodsResponseBodyServiceMethodListServiceMethod& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline const Models::ListMethodsResponseBodyServiceMethodListServiceMethodInputParams & inputParams() const { DARABONBA_PTR_GET_CONST(inputParams_, Models::ListMethodsResponseBodyServiceMethodListServiceMethodInputParams) };
    inline Models::ListMethodsResponseBodyServiceMethodListServiceMethodInputParams inputParams() { DARABONBA_PTR_GET(inputParams_, Models::ListMethodsResponseBodyServiceMethodListServiceMethodInputParams) };
    inline ListMethodsResponseBodyServiceMethodListServiceMethod& setInputParams(const Models::ListMethodsResponseBodyServiceMethodListServiceMethodInputParams & inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };
    inline ListMethodsResponseBodyServiceMethodListServiceMethod& setInputParams(Models::ListMethodsResponseBodyServiceMethodListServiceMethodInputParams && inputParams) { DARABONBA_PTR_SET_RVALUE(inputParams_, inputParams) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline ListMethodsResponseBodyServiceMethodListServiceMethod& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline ListMethodsResponseBodyServiceMethodListServiceMethod& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // paramTypes Field Functions 
    bool hasParamTypes() const { return this->paramTypes_ != nullptr;};
    void deleteParamTypes() { this->paramTypes_ = nullptr;};
    inline const Models::ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes & paramTypes() const { DARABONBA_PTR_GET_CONST(paramTypes_, Models::ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes) };
    inline Models::ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes paramTypes() { DARABONBA_PTR_GET(paramTypes_, Models::ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes) };
    inline ListMethodsResponseBodyServiceMethodListServiceMethod& setParamTypes(const Models::ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes & paramTypes) { DARABONBA_PTR_SET_VALUE(paramTypes_, paramTypes) };
    inline ListMethodsResponseBodyServiceMethodListServiceMethod& setParamTypes(Models::ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes && paramTypes) { DARABONBA_PTR_SET_RVALUE(paramTypes_, paramTypes) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListMethodsResponseBodyServiceMethodListServiceMethod& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<Models::ListMethodsResponseBodyServiceMethodListServiceMethodInputParams> inputParams_ = nullptr;
    // The name of the service method.
    std::shared_ptr<string> methodName_ = nullptr;
    // The return type of the service method.
    std::shared_ptr<string> output_ = nullptr;
    std::shared_ptr<Models::ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes> paramTypes_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
