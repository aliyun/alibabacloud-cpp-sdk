// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONTAINERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONTAINERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContainerInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListServiceContainersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceContainersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceContainersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    ListServiceContainersResponseBody() = default ;
    ListServiceContainersResponseBody(const ListServiceContainersResponseBody &) = default ;
    ListServiceContainersResponseBody(ListServiceContainersResponseBody &&) = default ;
    ListServiceContainersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceContainersResponseBody() = default ;
    ListServiceContainersResponseBody& operator=(const ListServiceContainersResponseBody &) = default ;
    ListServiceContainersResponseBody& operator=(ListServiceContainersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containers_ == nullptr
        && return this->requestId_ == nullptr && return this->serviceName_ == nullptr; };
    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<ContainerInfo> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<ContainerInfo>) };
    inline vector<ContainerInfo> containers() { DARABONBA_PTR_GET(containers_, vector<ContainerInfo>) };
    inline ListServiceContainersResponseBody& setContainers(const vector<ContainerInfo> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline ListServiceContainersResponseBody& setContainers(vector<ContainerInfo> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceContainersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListServiceContainersResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The containers of the service.
    std::shared_ptr<vector<ContainerInfo>> containers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
