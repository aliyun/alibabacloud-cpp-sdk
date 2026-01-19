// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCESERVERSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCESERVERSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DeleteResourceServerScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceServerScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeId, resourceServerScopeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceServerScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeId, resourceServerScopeId_);
    };
    DeleteResourceServerScopeRequest() = default ;
    DeleteResourceServerScopeRequest(const DeleteResourceServerScopeRequest &) = default ;
    DeleteResourceServerScopeRequest(DeleteResourceServerScopeRequest &&) = default ;
    DeleteResourceServerScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceServerScopeRequest() = default ;
    DeleteResourceServerScopeRequest& operator=(const DeleteResourceServerScopeRequest &) = default ;
    DeleteResourceServerScopeRequest& operator=(DeleteResourceServerScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->instanceId_ == nullptr && this->resourceServerScopeId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DeleteResourceServerScopeRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteResourceServerScopeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceServerScopeId Field Functions 
    bool hasResourceServerScopeId() const { return this->resourceServerScopeId_ != nullptr;};
    void deleteResourceServerScopeId() { this->resourceServerScopeId_ = nullptr;};
    inline string getResourceServerScopeId() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeId_, "") };
    inline DeleteResourceServerScopeRequest& setResourceServerScopeId(string resourceServerScopeId) { DARABONBA_PTR_SET_VALUE(resourceServerScopeId_, resourceServerScopeId) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // ResourceServer下Scope唯一标识。
    // 
    // This parameter is required.
    shared_ptr<string> resourceServerScopeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
