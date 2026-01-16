// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateVpcEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CreateVpcEndpointResponseBody() = default ;
    CreateVpcEndpointResponseBody(const CreateVpcEndpointResponseBody &) = default ;
    CreateVpcEndpointResponseBody(CreateVpcEndpointResponseBody &&) = default ;
    CreateVpcEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointResponseBody() = default ;
    CreateVpcEndpointResponseBody& operator=(const CreateVpcEndpointResponseBody &) = default ;
    CreateVpcEndpointResponseBody& operator=(CreateVpcEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(endpointDomain, endpointDomain_);
        DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(endpointDomain, endpointDomain_);
        DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpointDomain_ == nullptr
        && this->endpointId_ == nullptr && this->endpointName_ == nullptr && this->serviceId_ == nullptr; };
      // endpointDomain Field Functions 
      bool hasEndpointDomain() const { return this->endpointDomain_ != nullptr;};
      void deleteEndpointDomain() { this->endpointDomain_ = nullptr;};
      inline string getEndpointDomain() const { DARABONBA_PTR_GET_DEFAULT(endpointDomain_, "") };
      inline Result& setEndpointDomain(string endpointDomain) { DARABONBA_PTR_SET_VALUE(endpointDomain_, endpointDomain) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Result& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointName Field Functions 
      bool hasEndpointName() const { return this->endpointName_ != nullptr;};
      void deleteEndpointName() { this->endpointName_ = nullptr;};
      inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
      inline Result& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Result& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    protected:
      shared_ptr<string> endpointDomain_ {};
      shared_ptr<string> endpointId_ {};
      shared_ptr<string> endpointName_ {};
      // The name of the service VPC-side endpoint.
      shared_ptr<string> serviceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpcEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateVpcEndpointResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateVpcEndpointResponseBody::Result) };
    inline CreateVpcEndpointResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateVpcEndpointResponseBody::Result) };
    inline CreateVpcEndpointResponseBody& setResult(const CreateVpcEndpointResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateVpcEndpointResponseBody& setResult(CreateVpcEndpointResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The endpoint domain name, which is used to configure the connection.
    shared_ptr<string> requestId_ {};
    // The ID of the endpoint on the service VPC side.
    shared_ptr<CreateVpcEndpointResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
