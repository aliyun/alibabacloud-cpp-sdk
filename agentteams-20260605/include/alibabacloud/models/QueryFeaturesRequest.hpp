// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFEATURESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFEATURESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class QueryFeaturesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFeaturesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(TargetScope, targetScope_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFeaturesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(TargetScope, targetScope_);
    };
    QueryFeaturesRequest() = default ;
    QueryFeaturesRequest(const QueryFeaturesRequest &) = default ;
    QueryFeaturesRequest(QueryFeaturesRequest &&) = default ;
    QueryFeaturesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFeaturesRequest() = default ;
    QueryFeaturesRequest& operator=(const QueryFeaturesRequest &) = default ;
    QueryFeaturesRequest& operator=(QueryFeaturesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->resourceName_ == nullptr && this->targetScope_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryFeaturesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline QueryFeaturesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // targetScope Field Functions 
    bool hasTargetScope() const { return this->targetScope_ != nullptr;};
    void deleteTargetScope() { this->targetScope_ = nullptr;};
    inline string getTargetScope() const { DARABONBA_PTR_GET_DEFAULT(targetScope_, "") };
    inline QueryFeaturesRequest& setTargetScope(string targetScope) { DARABONBA_PTR_SET_VALUE(targetScope_, targetScope) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> resourceName_ {};
    // This parameter is required.
    shared_ptr<string> targetScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
