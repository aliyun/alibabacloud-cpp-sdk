// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSVIRTUALINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSVIRTUALINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusVirtualInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusVirtualInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusVirtualInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPrometheusVirtualInstancesResponseBody() = default ;
    ListPrometheusVirtualInstancesResponseBody(const ListPrometheusVirtualInstancesResponseBody &) = default ;
    ListPrometheusVirtualInstancesResponseBody(ListPrometheusVirtualInstancesResponseBody &&) = default ;
    ListPrometheusVirtualInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusVirtualInstancesResponseBody() = default ;
    ListPrometheusVirtualInstancesResponseBody& operator=(const ListPrometheusVirtualInstancesResponseBody &) = default ;
    ListPrometheusVirtualInstancesResponseBody& operator=(ListPrometheusVirtualInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(httpApiUrl, httpApiUrl_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(httpApiUrl, httpApiUrl_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->httpApiUrl_ == nullptr && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Instances& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // httpApiUrl Field Functions 
      bool hasHttpApiUrl() const { return this->httpApiUrl_ != nullptr;};
      void deleteHttpApiUrl() { this->httpApiUrl_ = nullptr;};
      inline string getHttpApiUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiUrl_, "") };
      inline Instances& setHttpApiUrl(string httpApiUrl) { DARABONBA_PTR_SET_VALUE(httpApiUrl_, httpApiUrl) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Instances& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Instances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Creation time
      shared_ptr<string> createdAt_ {};
      // HTTP API URL.
      shared_ptr<string> httpApiUrl_ {};
      // Applicable data source type: PROMETHEUS_DS
      // 
      // Prometheus instance ID
      shared_ptr<string> instanceId_ {};
      // Applicable query type: CMS_BASIC_QUERY.
      // 
      // Namespace of the metric
      shared_ptr<string> namespace_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // User ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListPrometheusVirtualInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListPrometheusVirtualInstancesResponseBody::Instances>) };
    inline vector<ListPrometheusVirtualInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListPrometheusVirtualInstancesResponseBody::Instances>) };
    inline ListPrometheusVirtualInstancesResponseBody& setInstances(const vector<ListPrometheusVirtualInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListPrometheusVirtualInstancesResponseBody& setInstances(vector<ListPrometheusVirtualInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusVirtualInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Instance information.
    shared_ptr<vector<ListPrometheusVirtualInstancesResponseBody::Instances>> instances_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
