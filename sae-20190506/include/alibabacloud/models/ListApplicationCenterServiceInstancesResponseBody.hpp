// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCENTERSERVICEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCENTERSERVICEINSTANCESRESPONSEBODY_HPP_
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
  class ListApplicationCenterServiceInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationCenterServiceInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationCenterServiceInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListApplicationCenterServiceInstancesResponseBody() = default ;
    ListApplicationCenterServiceInstancesResponseBody(const ListApplicationCenterServiceInstancesResponseBody &) = default ;
    ListApplicationCenterServiceInstancesResponseBody(ListApplicationCenterServiceInstancesResponseBody &&) = default ;
    ListApplicationCenterServiceInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationCenterServiceInstancesResponseBody() = default ;
    ListApplicationCenterServiceInstancesResponseBody& operator=(const ListApplicationCenterServiceInstancesResponseBody &) = default ;
    ListApplicationCenterServiceInstancesResponseBody& operator=(ListApplicationCenterServiceInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceInstances, serviceInstances_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceInstances, serviceInstances_);
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
      class ServiceInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceInstances& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        };
        ServiceInstances() = default ;
        ServiceInstances(const ServiceInstances &) = default ;
        ServiceInstances(ServiceInstances &&) = default ;
        ServiceInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceInstances() = default ;
        ServiceInstances& operator=(const ServiceInstances &) = default ;
        ServiceInstances& operator=(ServiceInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->name_ == nullptr && this->serviceInstanceId_ == nullptr && this->serviceName_ == nullptr && this->templateName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ServiceInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ServiceInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // serviceInstanceId Field Functions 
        bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
        void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
        inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
        inline ServiceInstances& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline ServiceInstances& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline ServiceInstances& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> serviceInstanceId_ {};
        shared_ptr<string> serviceName_ {};
        shared_ptr<string> templateName_ {};
      };

      virtual bool empty() const override { return this->serviceInstances_ == nullptr; };
      // serviceInstances Field Functions 
      bool hasServiceInstances() const { return this->serviceInstances_ != nullptr;};
      void deleteServiceInstances() { this->serviceInstances_ = nullptr;};
      inline const vector<Data::ServiceInstances> & getServiceInstances() const { DARABONBA_PTR_GET_CONST(serviceInstances_, vector<Data::ServiceInstances>) };
      inline vector<Data::ServiceInstances> getServiceInstances() { DARABONBA_PTR_GET(serviceInstances_, vector<Data::ServiceInstances>) };
      inline Data& setServiceInstances(const vector<Data::ServiceInstances> & serviceInstances) { DARABONBA_PTR_SET_VALUE(serviceInstances_, serviceInstances) };
      inline Data& setServiceInstances(vector<Data::ServiceInstances> && serviceInstances) { DARABONBA_PTR_SET_RVALUE(serviceInstances_, serviceInstances) };


    protected:
      shared_ptr<vector<Data::ServiceInstances>> serviceInstances_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApplicationCenterServiceInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListApplicationCenterServiceInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListApplicationCenterServiceInstancesResponseBody::Data) };
    inline ListApplicationCenterServiceInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListApplicationCenterServiceInstancesResponseBody::Data) };
    inline ListApplicationCenterServiceInstancesResponseBody& setData(const ListApplicationCenterServiceInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApplicationCenterServiceInstancesResponseBody& setData(ListApplicationCenterServiceInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListApplicationCenterServiceInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApplicationCenterServiceInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationCenterServiceInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApplicationCenterServiceInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListApplicationCenterServiceInstancesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListApplicationCenterServiceInstancesResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
