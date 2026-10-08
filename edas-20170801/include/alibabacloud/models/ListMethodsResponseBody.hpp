// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListMethodsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMethodsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceMethodList, serviceMethodList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMethodsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceMethodList, serviceMethodList_);
    };
    ListMethodsResponseBody() = default ;
    ListMethodsResponseBody(const ListMethodsResponseBody &) = default ;
    ListMethodsResponseBody(ListMethodsResponseBody &&) = default ;
    ListMethodsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMethodsResponseBody() = default ;
    ListMethodsResponseBody& operator=(const ListMethodsResponseBody &) = default ;
    ListMethodsResponseBody& operator=(ListMethodsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceMethodList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceMethodList& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceMethod, serviceMethod_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceMethodList& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceMethod, serviceMethod_);
      };
      ServiceMethodList() = default ;
      ServiceMethodList(const ServiceMethodList &) = default ;
      ServiceMethodList(ServiceMethodList &&) = default ;
      ServiceMethodList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceMethodList() = default ;
      ServiceMethodList& operator=(const ServiceMethodList &) = default ;
      ServiceMethodList& operator=(ServiceMethodList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServiceMethod : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceMethod& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
          DARABONBA_PTR_TO_JSON(MethodName, methodName_);
          DARABONBA_PTR_TO_JSON(Output, output_);
          DARABONBA_PTR_TO_JSON(ParamTypes, paramTypes_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceMethod& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
          DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
          DARABONBA_PTR_FROM_JSON(ParamTypes, paramTypes_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        };
        ServiceMethod() = default ;
        ServiceMethod(const ServiceMethod &) = default ;
        ServiceMethod(ServiceMethod &&) = default ;
        ServiceMethod(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceMethod() = default ;
        ServiceMethod& operator=(const ServiceMethod &) = default ;
        ServiceMethod& operator=(ServiceMethod &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ParamTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParamTypes& obj) { 
            DARABONBA_PTR_TO_JSON(ParamType, paramType_);
          };
          friend void from_json(const Darabonba::Json& j, ParamTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
          };
          ParamTypes() = default ;
          ParamTypes(const ParamTypes &) = default ;
          ParamTypes(ParamTypes &&) = default ;
          ParamTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParamTypes() = default ;
          ParamTypes& operator=(const ParamTypes &) = default ;
          ParamTypes& operator=(ParamTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->paramType_ == nullptr; };
          // paramType Field Functions 
          bool hasParamType() const { return this->paramType_ != nullptr;};
          void deleteParamType() { this->paramType_ = nullptr;};
          inline const vector<string> & getParamType() const { DARABONBA_PTR_GET_CONST(paramType_, vector<string>) };
          inline vector<string> getParamType() { DARABONBA_PTR_GET(paramType_, vector<string>) };
          inline ParamTypes& setParamType(const vector<string> & paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };
          inline ParamTypes& setParamType(vector<string> && paramType) { DARABONBA_PTR_SET_RVALUE(paramType_, paramType) };


        protected:
          shared_ptr<vector<string>> paramType_ {};
        };

        class InputParams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputParams& obj) { 
            DARABONBA_PTR_TO_JSON(InputParam, inputParam_);
          };
          friend void from_json(const Darabonba::Json& j, InputParams& obj) { 
            DARABONBA_PTR_FROM_JSON(InputParam, inputParam_);
          };
          InputParams() = default ;
          InputParams(const InputParams &) = default ;
          InputParams(InputParams &&) = default ;
          InputParams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputParams() = default ;
          InputParams& operator=(const InputParams &) = default ;
          InputParams& operator=(InputParams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->inputParam_ == nullptr; };
          // inputParam Field Functions 
          bool hasInputParam() const { return this->inputParam_ != nullptr;};
          void deleteInputParam() { this->inputParam_ = nullptr;};
          inline const vector<string> & getInputParam() const { DARABONBA_PTR_GET_CONST(inputParam_, vector<string>) };
          inline vector<string> getInputParam() { DARABONBA_PTR_GET(inputParam_, vector<string>) };
          inline InputParams& setInputParam(const vector<string> & inputParam) { DARABONBA_PTR_SET_VALUE(inputParam_, inputParam) };
          inline InputParams& setInputParam(vector<string> && inputParam) { DARABONBA_PTR_SET_RVALUE(inputParam_, inputParam) };


        protected:
          shared_ptr<vector<string>> inputParam_ {};
        };

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->inputParams_ == nullptr && this->methodName_ == nullptr && this->output_ == nullptr && this->paramTypes_ == nullptr && this->serviceName_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline ServiceMethod& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // inputParams Field Functions 
        bool hasInputParams() const { return this->inputParams_ != nullptr;};
        void deleteInputParams() { this->inputParams_ = nullptr;};
        inline const ServiceMethod::InputParams & getInputParams() const { DARABONBA_PTR_GET_CONST(inputParams_, ServiceMethod::InputParams) };
        inline ServiceMethod::InputParams getInputParams() { DARABONBA_PTR_GET(inputParams_, ServiceMethod::InputParams) };
        inline ServiceMethod& setInputParams(const ServiceMethod::InputParams & inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };
        inline ServiceMethod& setInputParams(ServiceMethod::InputParams && inputParams) { DARABONBA_PTR_SET_RVALUE(inputParams_, inputParams) };


        // methodName Field Functions 
        bool hasMethodName() const { return this->methodName_ != nullptr;};
        void deleteMethodName() { this->methodName_ = nullptr;};
        inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
        inline ServiceMethod& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
        inline ServiceMethod& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


        // paramTypes Field Functions 
        bool hasParamTypes() const { return this->paramTypes_ != nullptr;};
        void deleteParamTypes() { this->paramTypes_ = nullptr;};
        inline const ServiceMethod::ParamTypes & getParamTypes() const { DARABONBA_PTR_GET_CONST(paramTypes_, ServiceMethod::ParamTypes) };
        inline ServiceMethod::ParamTypes getParamTypes() { DARABONBA_PTR_GET(paramTypes_, ServiceMethod::ParamTypes) };
        inline ServiceMethod& setParamTypes(const ServiceMethod::ParamTypes & paramTypes) { DARABONBA_PTR_SET_VALUE(paramTypes_, paramTypes) };
        inline ServiceMethod& setParamTypes(ServiceMethod::ParamTypes && paramTypes) { DARABONBA_PTR_SET_RVALUE(paramTypes_, paramTypes) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline ServiceMethod& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<ServiceMethod::InputParams> inputParams_ {};
        shared_ptr<string> methodName_ {};
        shared_ptr<string> output_ {};
        shared_ptr<ServiceMethod::ParamTypes> paramTypes_ {};
        shared_ptr<string> serviceName_ {};
      };

      virtual bool empty() const override { return this->serviceMethod_ == nullptr; };
      // serviceMethod Field Functions 
      bool hasServiceMethod() const { return this->serviceMethod_ != nullptr;};
      void deleteServiceMethod() { this->serviceMethod_ = nullptr;};
      inline const vector<ServiceMethodList::ServiceMethod> & getServiceMethod() const { DARABONBA_PTR_GET_CONST(serviceMethod_, vector<ServiceMethodList::ServiceMethod>) };
      inline vector<ServiceMethodList::ServiceMethod> getServiceMethod() { DARABONBA_PTR_GET(serviceMethod_, vector<ServiceMethodList::ServiceMethod>) };
      inline ServiceMethodList& setServiceMethod(const vector<ServiceMethodList::ServiceMethod> & serviceMethod) { DARABONBA_PTR_SET_VALUE(serviceMethod_, serviceMethod) };
      inline ServiceMethodList& setServiceMethod(vector<ServiceMethodList::ServiceMethod> && serviceMethod) { DARABONBA_PTR_SET_RVALUE(serviceMethod_, serviceMethod) };


    protected:
      shared_ptr<vector<ServiceMethodList::ServiceMethod>> serviceMethod_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->serviceMethodList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListMethodsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMethodsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMethodsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceMethodList Field Functions 
    bool hasServiceMethodList() const { return this->serviceMethodList_ != nullptr;};
    void deleteServiceMethodList() { this->serviceMethodList_ = nullptr;};
    inline const ListMethodsResponseBody::ServiceMethodList & getServiceMethodList() const { DARABONBA_PTR_GET_CONST(serviceMethodList_, ListMethodsResponseBody::ServiceMethodList) };
    inline ListMethodsResponseBody::ServiceMethodList getServiceMethodList() { DARABONBA_PTR_GET(serviceMethodList_, ListMethodsResponseBody::ServiceMethodList) };
    inline ListMethodsResponseBody& setServiceMethodList(const ListMethodsResponseBody::ServiceMethodList & serviceMethodList) { DARABONBA_PTR_SET_VALUE(serviceMethodList_, serviceMethodList) };
    inline ListMethodsResponseBody& setServiceMethodList(ListMethodsResponseBody::ServiceMethodList && serviceMethodList) { DARABONBA_PTR_SET_RVALUE(serviceMethodList_, serviceMethodList) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListMethodsResponseBody::ServiceMethodList> serviceMethodList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
