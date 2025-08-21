// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListVpcEndpointsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointsResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointsResponseBodyResult& obj) { 
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
    ListVpcEndpointsResponseBodyResult() = default ;
    ListVpcEndpointsResponseBodyResult(const ListVpcEndpointsResponseBodyResult &) = default ;
    ListVpcEndpointsResponseBodyResult(ListVpcEndpointsResponseBodyResult &&) = default ;
    ListVpcEndpointsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointsResponseBodyResult() = default ;
    ListVpcEndpointsResponseBodyResult& operator=(const ListVpcEndpointsResponseBodyResult &) = default ;
    ListVpcEndpointsResponseBodyResult& operator=(ListVpcEndpointsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionStatus_ != nullptr
        && this->createTime_ != nullptr && this->endpointBusinessStatus_ != nullptr && this->endpointDomain_ != nullptr && this->endpointId_ != nullptr && this->endpointName_ != nullptr
        && this->endpointStatus_ != nullptr && this->serviceId_ != nullptr && this->serviceName_ != nullptr; };
    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline ListVpcEndpointsResponseBodyResult& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListVpcEndpointsResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endpointBusinessStatus Field Functions 
    bool hasEndpointBusinessStatus() const { return this->endpointBusinessStatus_ != nullptr;};
    void deleteEndpointBusinessStatus() { this->endpointBusinessStatus_ = nullptr;};
    inline string endpointBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointBusinessStatus_, "") };
    inline ListVpcEndpointsResponseBodyResult& setEndpointBusinessStatus(string endpointBusinessStatus) { DARABONBA_PTR_SET_VALUE(endpointBusinessStatus_, endpointBusinessStatus) };


    // endpointDomain Field Functions 
    bool hasEndpointDomain() const { return this->endpointDomain_ != nullptr;};
    void deleteEndpointDomain() { this->endpointDomain_ = nullptr;};
    inline string endpointDomain() const { DARABONBA_PTR_GET_DEFAULT(endpointDomain_, "") };
    inline ListVpcEndpointsResponseBodyResult& setEndpointDomain(string endpointDomain) { DARABONBA_PTR_SET_VALUE(endpointDomain_, endpointDomain) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ListVpcEndpointsResponseBodyResult& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline ListVpcEndpointsResponseBodyResult& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointStatus Field Functions 
    bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
    void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
    inline string endpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
    inline ListVpcEndpointsResponseBodyResult& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListVpcEndpointsResponseBodyResult& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListVpcEndpointsResponseBodyResult& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


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
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The time when the endpoint was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The business status of the endpoint. Valid values:
    // 
    // *   Normal
    // *   FinancialLocked
    std::shared_ptr<string> endpointBusinessStatus_ = nullptr;
    // The domain name of the endpoint. The domain name is used for connection configuration.
    std::shared_ptr<string> endpointDomain_ = nullptr;
    // The ID of the endpoint.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The name of the endpoint.
    std::shared_ptr<string> endpointName_ = nullptr;
    // The status of the endpoint. Valid values:
    // 
    // *   Creating
    // *   Active
    // *   Pending
    // *   Deleting
    std::shared_ptr<string> endpointStatus_ = nullptr;
    // The ID of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
