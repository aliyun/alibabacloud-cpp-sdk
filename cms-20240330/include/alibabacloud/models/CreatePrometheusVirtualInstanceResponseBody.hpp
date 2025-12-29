// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSVIRTUALINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSVIRTUALINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreatePrometheusVirtualInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusVirtualInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusVirtualInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreatePrometheusVirtualInstanceResponseBody() = default ;
    CreatePrometheusVirtualInstanceResponseBody(const CreatePrometheusVirtualInstanceResponseBody &) = default ;
    CreatePrometheusVirtualInstanceResponseBody(CreatePrometheusVirtualInstanceResponseBody &&) = default ;
    CreatePrometheusVirtualInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusVirtualInstanceResponseBody() = default ;
    CreatePrometheusVirtualInstanceResponseBody& operator=(const CreatePrometheusVirtualInstanceResponseBody &) = default ;
    CreatePrometheusVirtualInstanceResponseBody& operator=(CreatePrometheusVirtualInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(httpApiUrl, httpApiUrl_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(httpApiUrl, httpApiUrl_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
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
      inline Instance& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // httpApiUrl Field Functions 
      bool hasHttpApiUrl() const { return this->httpApiUrl_ != nullptr;};
      void deleteHttpApiUrl() { this->httpApiUrl_ = nullptr;};
      inline string getHttpApiUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiUrl_, "") };
      inline Instance& setHttpApiUrl(string httpApiUrl) { DARABONBA_PTR_SET_VALUE(httpApiUrl_, httpApiUrl) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Instance& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Instance& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Creation time
      shared_ptr<string> createdAt_ {};
      // HTTP API query address
      shared_ptr<string> httpApiUrl_ {};
      // Region ID
      shared_ptr<string> instanceId_ {};
      // Cloud product
      shared_ptr<string> namespace_ {};
      // User ID
      shared_ptr<string> regionId_ {};
      // User ID
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->instance_ == nullptr
        && this->requestId_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const CreatePrometheusVirtualInstanceResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, CreatePrometheusVirtualInstanceResponseBody::Instance) };
    inline CreatePrometheusVirtualInstanceResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, CreatePrometheusVirtualInstanceResponseBody::Instance) };
    inline CreatePrometheusVirtualInstanceResponseBody& setInstance(const CreatePrometheusVirtualInstanceResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline CreatePrometheusVirtualInstanceResponseBody& setInstance(CreatePrometheusVirtualInstanceResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePrometheusVirtualInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Instance ID
    shared_ptr<CreatePrometheusVirtualInstanceResponseBody::Instance> instance_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
