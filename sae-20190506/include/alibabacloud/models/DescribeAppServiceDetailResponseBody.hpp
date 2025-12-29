// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSERVICEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSERVICEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeAppServiceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppServiceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppServiceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeAppServiceDetailResponseBody() = default ;
    DescribeAppServiceDetailResponseBody(const DescribeAppServiceDetailResponseBody &) = default ;
    DescribeAppServiceDetailResponseBody(DescribeAppServiceDetailResponseBody &&) = default ;
    DescribeAppServiceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppServiceDetailResponseBody() = default ;
    DescribeAppServiceDetailResponseBody& operator=(const DescribeAppServiceDetailResponseBody &) = default ;
    DescribeAppServiceDetailResponseBody& operator=(DescribeAppServiceDetailResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServicePorts, servicePorts_);
        DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_TO_JSON(ServiceTags, serviceTags_);
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
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServicePorts, servicePorts_);
        DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_FROM_JSON(ServiceTags, serviceTags_);
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
          DARABONBA_PTR_TO_JSON(NameDetail, nameDetail_);
          DARABONBA_PTR_TO_JSON(ParameterDefinitions, parameterDefinitions_);
          DARABONBA_PTR_TO_JSON(ParameterDetails, parameterDetails_);
          DARABONBA_PTR_TO_JSON(ParameterTypes, parameterTypes_);
          DARABONBA_PTR_TO_JSON(Paths, paths_);
          DARABONBA_PTR_TO_JSON(RequestMethods, requestMethods_);
          DARABONBA_PTR_TO_JSON(ReturnDetails, returnDetails_);
          DARABONBA_PTR_TO_JSON(ReturnType, returnType_);
        };
        friend void from_json(const Darabonba::Json& j, Methods& obj) { 
          DARABONBA_PTR_FROM_JSON(MethodController, methodController_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameDetail, nameDetail_);
          DARABONBA_PTR_FROM_JSON(ParameterDefinitions, parameterDefinitions_);
          DARABONBA_PTR_FROM_JSON(ParameterDetails, parameterDetails_);
          DARABONBA_PTR_FROM_JSON(ParameterTypes, parameterTypes_);
          DARABONBA_PTR_FROM_JSON(Paths, paths_);
          DARABONBA_PTR_FROM_JSON(RequestMethods, requestMethods_);
          DARABONBA_PTR_FROM_JSON(ReturnDetails, returnDetails_);
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
        class ParameterDefinitions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParameterDefinitions& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ParameterDefinitions& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ParameterDefinitions() = default ;
          ParameterDefinitions(const ParameterDefinitions &) = default ;
          ParameterDefinitions(ParameterDefinitions &&) = default ;
          ParameterDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParameterDefinitions() = default ;
          ParameterDefinitions& operator=(const ParameterDefinitions &) = default ;
          ParameterDefinitions& operator=(ParameterDefinitions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ParameterDefinitions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ParameterDefinitions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ParameterDefinitions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The description of the parameter.
          shared_ptr<string> description_ {};
          // The name of the parameter.
          shared_ptr<string> name_ {};
          // The type of the parameter.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->methodController_ == nullptr
        && this->name_ == nullptr && this->nameDetail_ == nullptr && this->parameterDefinitions_ == nullptr && this->parameterDetails_ == nullptr && this->parameterTypes_ == nullptr
        && this->paths_ == nullptr && this->requestMethods_ == nullptr && this->returnDetails_ == nullptr && this->returnType_ == nullptr; };
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


        // nameDetail Field Functions 
        bool hasNameDetail() const { return this->nameDetail_ != nullptr;};
        void deleteNameDetail() { this->nameDetail_ = nullptr;};
        inline string getNameDetail() const { DARABONBA_PTR_GET_DEFAULT(nameDetail_, "") };
        inline Methods& setNameDetail(string nameDetail) { DARABONBA_PTR_SET_VALUE(nameDetail_, nameDetail) };


        // parameterDefinitions Field Functions 
        bool hasParameterDefinitions() const { return this->parameterDefinitions_ != nullptr;};
        void deleteParameterDefinitions() { this->parameterDefinitions_ = nullptr;};
        inline const vector<Methods::ParameterDefinitions> & getParameterDefinitions() const { DARABONBA_PTR_GET_CONST(parameterDefinitions_, vector<Methods::ParameterDefinitions>) };
        inline vector<Methods::ParameterDefinitions> getParameterDefinitions() { DARABONBA_PTR_GET(parameterDefinitions_, vector<Methods::ParameterDefinitions>) };
        inline Methods& setParameterDefinitions(const vector<Methods::ParameterDefinitions> & parameterDefinitions) { DARABONBA_PTR_SET_VALUE(parameterDefinitions_, parameterDefinitions) };
        inline Methods& setParameterDefinitions(vector<Methods::ParameterDefinitions> && parameterDefinitions) { DARABONBA_PTR_SET_RVALUE(parameterDefinitions_, parameterDefinitions) };


        // parameterDetails Field Functions 
        bool hasParameterDetails() const { return this->parameterDetails_ != nullptr;};
        void deleteParameterDetails() { this->parameterDetails_ = nullptr;};
        inline const vector<string> & getParameterDetails() const { DARABONBA_PTR_GET_CONST(parameterDetails_, vector<string>) };
        inline vector<string> getParameterDetails() { DARABONBA_PTR_GET(parameterDetails_, vector<string>) };
        inline Methods& setParameterDetails(const vector<string> & parameterDetails) { DARABONBA_PTR_SET_VALUE(parameterDetails_, parameterDetails) };
        inline Methods& setParameterDetails(vector<string> && parameterDetails) { DARABONBA_PTR_SET_RVALUE(parameterDetails_, parameterDetails) };


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


        // returnDetails Field Functions 
        bool hasReturnDetails() const { return this->returnDetails_ != nullptr;};
        void deleteReturnDetails() { this->returnDetails_ = nullptr;};
        inline string getReturnDetails() const { DARABONBA_PTR_GET_DEFAULT(returnDetails_, "") };
        inline Methods& setReturnDetails(string returnDetails) { DARABONBA_PTR_SET_VALUE(returnDetails_, returnDetails) };


        // returnType Field Functions 
        bool hasReturnType() const { return this->returnType_ != nullptr;};
        void deleteReturnType() { this->returnType_ = nullptr;};
        inline string getReturnType() const { DARABONBA_PTR_GET_DEFAULT(returnType_, "") };
        inline Methods& setReturnType(string returnType) { DARABONBA_PTR_SET_VALUE(returnType_, returnType) };


      protected:
        // The class to which the method belongs.
        shared_ptr<string> methodController_ {};
        // The name of the method.
        shared_ptr<string> name_ {};
        // The details of the method.
        shared_ptr<string> nameDetail_ {};
        // The definition of the parameter.
        shared_ptr<vector<Methods::ParameterDefinitions>> parameterDefinitions_ {};
        // The details of the parameters.
        shared_ptr<vector<string>> parameterDetails_ {};
        // The types of the parameters.
        shared_ptr<vector<string>> parameterTypes_ {};
        // The request paths. Format:
        // 
        // `/path`
        shared_ptr<vector<string>> paths_ {};
        // The request methods. Valid values:
        // 
        // *   **GET**
        // *   **ALL**
        shared_ptr<vector<string>> requestMethods_ {};
        // The details of the response.
        shared_ptr<string> returnDetails_ {};
        // The data format of the response.
        shared_ptr<string> returnType_ {};
      };

      virtual bool empty() const override { return this->dubboApplicationName_ == nullptr
        && this->edasAppName_ == nullptr && this->group_ == nullptr && this->metadata_ == nullptr && this->methods_ == nullptr && this->serviceName_ == nullptr
        && this->servicePorts_ == nullptr && this->serviceProtocol_ == nullptr && this->serviceTags_ == nullptr && this->serviceType_ == nullptr && this->springApplicationName_ == nullptr
        && this->version_ == nullptr; };
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


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // servicePorts Field Functions 
      bool hasServicePorts() const { return this->servicePorts_ != nullptr;};
      void deleteServicePorts() { this->servicePorts_ = nullptr;};
      inline const vector<int64_t> & getServicePorts() const { DARABONBA_PTR_GET_CONST(servicePorts_, vector<int64_t>) };
      inline vector<int64_t> getServicePorts() { DARABONBA_PTR_GET(servicePorts_, vector<int64_t>) };
      inline Data& setServicePorts(const vector<int64_t> & servicePorts) { DARABONBA_PTR_SET_VALUE(servicePorts_, servicePorts) };
      inline Data& setServicePorts(vector<int64_t> && servicePorts) { DARABONBA_PTR_SET_RVALUE(servicePorts_, servicePorts) };


      // serviceProtocol Field Functions 
      bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
      void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
      inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
      inline Data& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


      // serviceTags Field Functions 
      bool hasServiceTags() const { return this->serviceTags_ != nullptr;};
      void deleteServiceTags() { this->serviceTags_ = nullptr;};
      inline const vector<string> & getServiceTags() const { DARABONBA_PTR_GET_CONST(serviceTags_, vector<string>) };
      inline vector<string> getServiceTags() { DARABONBA_PTR_GET(serviceTags_, vector<string>) };
      inline Data& setServiceTags(const vector<string> & serviceTags) { DARABONBA_PTR_SET_VALUE(serviceTags_, serviceTags) };
      inline Data& setServiceTags(vector<string> && serviceTags) { DARABONBA_PTR_SET_RVALUE(serviceTags_, serviceTags) };


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
      // The group to which the service belongs. You can create a custom group.
      shared_ptr<string> group_ {};
      // The metadata. Example: `{side: "provider", port: "18081", preserved: {register: {source: "SPRING_CLOUD"}},…}`.
      Darabonba::Json metadata_ {};
      // The methods.
      shared_ptr<vector<Data::Methods>> methods_ {};
      // The name of the service.
      shared_ptr<string> serviceName_ {};
      // The port used by the service.
      shared_ptr<vector<int64_t>> servicePorts_ {};
      // The protocol used by the service.
      shared_ptr<string> serviceProtocol_ {};
      // The tag of the service.
      shared_ptr<vector<string>> serviceTags_ {};
      // The type of the service. Valid values:
      // 
      // *   **dubbo**
      // *   **springCloud**
      shared_ptr<string> serviceType_ {};
      // The name of the Spring Cloud application.
      shared_ptr<string> springApplicationName_ {};
      // The version of the service. You can create a custom version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAppServiceDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAppServiceDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAppServiceDetailResponseBody::Data) };
    inline DescribeAppServiceDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAppServiceDetailResponseBody::Data) };
    inline DescribeAppServiceDetailResponseBody& setData(const DescribeAppServiceDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAppServiceDetailResponseBody& setData(DescribeAppServiceDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeAppServiceDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAppServiceDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppServiceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAppServiceDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeAppServiceDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // - **2xx**: indicates that the call was successful.
    // - **3xx**: indicates that the call was redirected.
    // - **4xx**: indicates that the call failed.
    // - **5xx**: indicates that a server error occurred.
    shared_ptr<string> code_ {};
    // The data that is returned.
    shared_ptr<DescribeAppServiceDetailResponseBody::Data> data_ {};
    // The returned error code. Valid values:
    // 
    // - If the call is successful, the **ErrorCode** parameter is not returned.
    // - If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    shared_ptr<string> errorCode_ {};
    // The returned information.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the meta data was obtained. Valid values:
    // 
    // *   **true**: The metadata was obtained.
    // *   **false**: The metadata failed to be obtained.
    shared_ptr<bool> success_ {};
    // The ID of the trace. The ID is used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
