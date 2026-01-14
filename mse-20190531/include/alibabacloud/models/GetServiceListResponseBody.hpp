// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServiceListResponseBody() = default ;
    GetServiceListResponseBody(const GetServiceListResponseBody &) = default ;
    GetServiceListResponseBody(GetServiceListResponseBody &&) = default ;
    GetServiceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListResponseBody() = default ;
    GetServiceListResponseBody& operator=(const GetServiceListResponseBody &) = default ;
    GetServiceListResponseBody& operator=(GetServiceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DubboApplicationName, dubboApplicationName_);
        DARABONBA_PTR_TO_JSON(EdasAppName, edasAppName_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Methods, methods_);
        DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(SpringApplicationName, springApplicationName_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DubboApplicationName, dubboApplicationName_);
        DARABONBA_PTR_FROM_JSON(EdasAppName, edasAppName_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Methods, methods_);
        DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(SpringApplicationName, springApplicationName_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Methods : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Methods& obj) { 
          DARABONBA_PTR_TO_JSON(MethodController, methodController_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ParameterTypes, parameterTypes_);
          DARABONBA_PTR_TO_JSON(Paths, paths_);
          DARABONBA_PTR_TO_JSON(RequestMethods, requestMethods_);
          DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
        };
        friend void from_json(const Darabonba::Json& j, Methods& obj) { 
          DARABONBA_PTR_FROM_JSON(MethodController, methodController_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ParameterTypes, parameterTypes_);
          DARABONBA_PTR_FROM_JSON(Paths, paths_);
          DARABONBA_PTR_FROM_JSON(RequestMethods, requestMethods_);
          DARABONBA_PTR_FROM_JSON(ReturnType, returnType_);
        };
        Methods() = default ;
        Methods(const Methods &) = default ;
        Methods(Methods &&) = default ;
        Methods(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Methods() = default ;
        Methods& operator=(const Methods &) = default ;
        Methods& operator=(Methods &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->methodController_ == nullptr
        && this->name_ == nullptr && this->parameterTypes_ == nullptr && this->paths_ == nullptr && this->requestMethods_ == nullptr && this->returnType_ == nullptr; };
        // methodController Field Functions 
        bool hasMethodController() const { return this->methodController_ != nullptr;};
        void deleteMethodController() { this->methodController_ = nullptr;};
        inline string getMethodController() const { DARABONBA_PTR_GET_DEFAULT(methodController_, "") };
        inline Methods& setMethodController(string methodController) { DARABONBA_PTR_SET_VALUE(methodController_, methodController) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Methods& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parameterTypes Field Functions 
        bool hasParameterTypes() const { return this->parameterTypes_ != nullptr;};
        void deleteParameterTypes() { this->parameterTypes_ = nullptr;};
        inline const vector<string> & getParameterTypes() const { DARABONBA_PTR_GET_CONST(parameterTypes_, vector<string>) };
        inline vector<string> getParameterTypes() { DARABONBA_PTR_GET(parameterTypes_, vector<string>) };
        inline Methods& setParameterTypes(const vector<string> & parameterTypes) { DARABONBA_PTR_SET_VALUE(parameterTypes_, parameterTypes) };
        inline Methods& setParameterTypes(vector<string> && parameterTypes) { DARABONBA_PTR_SET_RVALUE(parameterTypes_, parameterTypes) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
        inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
        inline Methods& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline Methods& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // requestMethods Field Functions 
        bool hasRequestMethods() const { return this->requestMethods_ != nullptr;};
        void deleteRequestMethods() { this->requestMethods_ = nullptr;};
        inline const vector<string> & getRequestMethods() const { DARABONBA_PTR_GET_CONST(requestMethods_, vector<string>) };
        inline vector<string> getRequestMethods() { DARABONBA_PTR_GET(requestMethods_, vector<string>) };
        inline Methods& setRequestMethods(const vector<string> & requestMethods) { DARABONBA_PTR_SET_VALUE(requestMethods_, requestMethods) };
        inline Methods& setRequestMethods(vector<string> && requestMethods) { DARABONBA_PTR_SET_RVALUE(requestMethods_, requestMethods) };


        // returnType Field Functions 
        bool hasReturnType() const { return this->returnType_ != nullptr;};
        void deleteReturnType() { this->returnType_ = nullptr;};
        inline string getReturnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
        inline Methods& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


      protected:
        // The controller of the method.
        shared_ptr<string> methodController_ {};
        // The name of the method.
        shared_ptr<string> name_ {};
        // The data types of the parameters.
        shared_ptr<vector<string>> parameterTypes_ {};
        // The paths.
        shared_ptr<vector<string>> paths_ {};
        // The methods.
        shared_ptr<vector<string>> requestMethods_ {};
        // The type of the return value.
        shared_ptr<string> returnType_ {};
      };

      virtual bool empty() const override { return this->dubboApplicationName_ == nullptr
        && this->edasAppName_ == nullptr && this->group_ == nullptr && this->metadata_ == nullptr && this->methods_ == nullptr && this->registryType_ == nullptr
        && this->serviceName_ == nullptr && this->serviceType_ == nullptr && this->springApplicationName_ == nullptr && this->version_ == nullptr; };
      // dubboApplicationName Field Functions 
      bool hasDubboApplicationName() const { return this->dubboApplicationName_ != nullptr;};
      void deleteDubboApplicationName() { this->dubboApplicationName_ = nullptr;};
      inline string getDubboApplicationName() const { DARABONBA_PTR_GET_DEFAULT(dubboApplicationName_, "") };
      inline Data& setDubboApplicationName(string dubboApplicationName) { DARABONBA_PTR_SET_VALUE(dubboApplicationName_, dubboApplicationName) };


      // edasAppName Field Functions 
      bool hasEdasAppName() const { return this->edasAppName_ != nullptr;};
      void deleteEdasAppName() { this->edasAppName_ = nullptr;};
      inline string getEdasAppName() const { DARABONBA_PTR_GET_DEFAULT(edasAppName_, "") };
      inline Data& setEdasAppName(string edasAppName) { DARABONBA_PTR_SET_VALUE(edasAppName_, edasAppName) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Data& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Data& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // methods Field Functions 
      bool hasMethods() const { return this->methods_ != nullptr;};
      void deleteMethods() { this->methods_ = nullptr;};
      inline const vector<Data::Methods> & getMethods() const { DARABONBA_PTR_GET_CONST(methods_, vector<Data::Methods>) };
      inline vector<Data::Methods> getMethods() { DARABONBA_PTR_GET(methods_, vector<Data::Methods>) };
      inline Data& setMethods(const vector<Data::Methods> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
      inline Data& setMethods(vector<Data::Methods> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline Data& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Data& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // springApplicationName Field Functions 
      bool hasSpringApplicationName() const { return this->springApplicationName_ != nullptr;};
      void deleteSpringApplicationName() { this->springApplicationName_ = nullptr;};
      inline string getSpringApplicationName() const { DARABONBA_PTR_GET_DEFAULT(springApplicationName_, "") };
      inline Data& setSpringApplicationName(string springApplicationName) { DARABONBA_PTR_SET_VALUE(springApplicationName_, springApplicationName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The name of the Dubbo application.
      shared_ptr<string> dubboApplicationName_ {};
      // The name of the application.
      shared_ptr<string> edasAppName_ {};
      // The group.
      shared_ptr<string> group_ {};
      // The metadata.
      Darabonba::Json metadata_ {};
      // The methods.
      shared_ptr<vector<Data::Methods>> methods_ {};
      // The type of the service registry.
      shared_ptr<string> registryType_ {};
      // The name of the service.
      shared_ptr<string> serviceName_ {};
      // The type of the service.
      shared_ptr<string> serviceType_ {};
      // The name of the Spring application.
      shared_ptr<string> springApplicationName_ {};
      // The version information.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetServiceListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetServiceListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetServiceListResponseBody::Data>) };
    inline vector<GetServiceListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetServiceListResponseBody::Data>) };
    inline GetServiceListResponseBody& setData(const vector<GetServiceListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceListResponseBody& setData(vector<GetServiceListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetServiceListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The data entries returned.
    shared_ptr<vector<GetServiceListResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
