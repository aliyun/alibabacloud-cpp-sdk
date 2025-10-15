// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORNETWORKACCESSENDPOINTRESPONSEBODYAPPLICATIONSFORNETWORKACCESSENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORNETWORKACCESSENDPOINTRESPONSEBODYAPPLICATIONSFORNETWORKACCESSENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint() = default ;
    ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint(const ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint &) = default ;
    ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint(ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint &&) = default ;
    ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint() = default ;
    ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint& operator=(const ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint &) = default ;
    ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint& operator=(ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->applicationName_ == nullptr && return this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationsForNetworkAccessEndpointResponseBodyApplicationsForNetworkAccessEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 应用ID。
    std::shared_ptr<string> applicationId_ = nullptr;
    // 应用名称。
    std::shared_ptr<string> applicationName_ = nullptr;
    // IDaaS EIAM 实例ID
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
