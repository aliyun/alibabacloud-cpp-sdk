// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListVpcEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListVpcEndpointsResponseBody() = default ;
    ListVpcEndpointsResponseBody(const ListVpcEndpointsResponseBody &) = default ;
    ListVpcEndpointsResponseBody(ListVpcEndpointsResponseBody &&) = default ;
    ListVpcEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointsResponseBody() = default ;
    ListVpcEndpointsResponseBody& operator=(const ListVpcEndpointsResponseBody &) = default ;
    ListVpcEndpointsResponseBody& operator=(ListVpcEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(connectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(endpointBusinessStatus, endpointBusinessStatus_);
        DARABONBA_PTR_TO_JSON(endpointDomain, endpointDomain_);
        DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
        DARABONBA_PTR_TO_JSON(endpointStatus, endpointStatus_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(connectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(endpointBusinessStatus, endpointBusinessStatus_);
        DARABONBA_PTR_FROM_JSON(endpointDomain, endpointDomain_);
        DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
        DARABONBA_PTR_FROM_JSON(endpointStatus, endpointStatus_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
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
      virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->createTime_ == nullptr && this->endpointBusinessStatus_ == nullptr && this->endpointDomain_ == nullptr && this->endpointId_ == nullptr && this->endpointName_ == nullptr
        && this->endpointStatus_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr; };
      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline Result& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endpointBusinessStatus Field Functions 
      bool hasEndpointBusinessStatus() const { return this->endpointBusinessStatus_ != nullptr;};
      void deleteEndpointBusinessStatus() { this->endpointBusinessStatus_ = nullptr;};
      inline string getEndpointBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointBusinessStatus_, "") };
      inline Result& setEndpointBusinessStatus(string endpointBusinessStatus) { DARABONBA_PTR_SET_VALUE(endpointBusinessStatus_, endpointBusinessStatus) };


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


      // endpointStatus Field Functions 
      bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
      void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
      inline string getEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
      inline Result& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Result& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Result& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      // The status of the endpoint connection. Valid values:
      // 
      // *   Pending
      // *   Connecting
      // *   Connected
      // *   Disconnecting
      // *   Disconnected
      // *   Deleting
      // *   ServiceDeleted
      shared_ptr<string> connectionStatus_ {};
      // The time when the endpoint was created.
      shared_ptr<string> createTime_ {};
      // The business status of the endpoint. Valid values:
      // 
      // *   Normal
      // *   FinancialLocked
      shared_ptr<string> endpointBusinessStatus_ {};
      // The domain name of the endpoint. The domain name is used for connection configuration.
      shared_ptr<string> endpointDomain_ {};
      // The ID of the endpoint.
      shared_ptr<string> endpointId_ {};
      // The name of the endpoint.
      shared_ptr<string> endpointName_ {};
      // The status of the endpoint. Valid values:
      // 
      // *   Creating
      // *   Active
      // *   Pending
      // *   Deleting
      shared_ptr<string> endpointStatus_ {};
      // The ID of the endpoint service with which the endpoint is associated.
      shared_ptr<string> serviceId_ {};
      // The name of the endpoint service with which the endpoint is associated.
      shared_ptr<string> serviceName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListVpcEndpointsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListVpcEndpointsResponseBody::Result>) };
    inline vector<ListVpcEndpointsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListVpcEndpointsResponseBody::Result>) };
    inline ListVpcEndpointsResponseBody& setResult(const vector<ListVpcEndpointsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListVpcEndpointsResponseBody& setResult(vector<ListVpcEndpointsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the endpoints.
    shared_ptr<vector<ListVpcEndpointsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
