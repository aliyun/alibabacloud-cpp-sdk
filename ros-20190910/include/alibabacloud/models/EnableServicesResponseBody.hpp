// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLESERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class EnableServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedServices, failedServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedServices, failedServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableServicesResponseBody() = default ;
    EnableServicesResponseBody(const EnableServicesResponseBody &) = default ;
    EnableServicesResponseBody(EnableServicesResponseBody &&) = default ;
    EnableServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableServicesResponseBody() = default ;
    EnableServicesResponseBody& operator=(const EnableServicesResponseBody &) = default ;
    EnableServicesResponseBody& operator=(EnableServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailedServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedServices& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, FailedServices& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      };
      FailedServices() = default ;
      FailedServices(const FailedServices &) = default ;
      FailedServices(FailedServices &&) = default ;
      FailedServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedServices() = default ;
      FailedServices& operator=(const FailedServices &) = default ;
      FailedServices& operator=(FailedServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->serviceName_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline FailedServices& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline FailedServices& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline FailedServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> serviceName_ {};
    };

    virtual bool empty() const override { return this->failedServices_ == nullptr
        && this->requestId_ == nullptr; };
    // failedServices Field Functions 
    bool hasFailedServices() const { return this->failedServices_ != nullptr;};
    void deleteFailedServices() { this->failedServices_ = nullptr;};
    inline const vector<EnableServicesResponseBody::FailedServices> & getFailedServices() const { DARABONBA_PTR_GET_CONST(failedServices_, vector<EnableServicesResponseBody::FailedServices>) };
    inline vector<EnableServicesResponseBody::FailedServices> getFailedServices() { DARABONBA_PTR_GET(failedServices_, vector<EnableServicesResponseBody::FailedServices>) };
    inline EnableServicesResponseBody& setFailedServices(const vector<EnableServicesResponseBody::FailedServices> & failedServices) { DARABONBA_PTR_SET_VALUE(failedServices_, failedServices) };
    inline EnableServicesResponseBody& setFailedServices(vector<EnableServicesResponseBody::FailedServices> && failedServices) { DARABONBA_PTR_SET_RVALUE(failedServices_, failedServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<EnableServicesResponseBody::FailedServices>> failedServices_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
