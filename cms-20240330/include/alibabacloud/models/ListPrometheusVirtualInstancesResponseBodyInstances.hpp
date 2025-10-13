// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSVIRTUALINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSVIRTUALINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusVirtualInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusVirtualInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(httpApiUrl, httpApiUrl_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusVirtualInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(httpApiUrl, httpApiUrl_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    ListPrometheusVirtualInstancesResponseBodyInstances() = default ;
    ListPrometheusVirtualInstancesResponseBodyInstances(const ListPrometheusVirtualInstancesResponseBodyInstances &) = default ;
    ListPrometheusVirtualInstancesResponseBodyInstances(ListPrometheusVirtualInstancesResponseBodyInstances &&) = default ;
    ListPrometheusVirtualInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusVirtualInstancesResponseBodyInstances() = default ;
    ListPrometheusVirtualInstancesResponseBodyInstances& operator=(const ListPrometheusVirtualInstancesResponseBodyInstances &) = default ;
    ListPrometheusVirtualInstancesResponseBodyInstances& operator=(ListPrometheusVirtualInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->httpApiUrl_ == nullptr && return this->instanceId_ == nullptr && return this->namespace_ == nullptr && return this->regionId_ == nullptr && return this->userId_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListPrometheusVirtualInstancesResponseBodyInstances& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // httpApiUrl Field Functions 
    bool hasHttpApiUrl() const { return this->httpApiUrl_ != nullptr;};
    void deleteHttpApiUrl() { this->httpApiUrl_ = nullptr;};
    inline string httpApiUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiUrl_, "") };
    inline ListPrometheusVirtualInstancesResponseBodyInstances& setHttpApiUrl(string httpApiUrl) { DARABONBA_PTR_SET_VALUE(httpApiUrl_, httpApiUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPrometheusVirtualInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListPrometheusVirtualInstancesResponseBodyInstances& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusVirtualInstancesResponseBodyInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListPrometheusVirtualInstancesResponseBodyInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> httpApiUrl_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
