// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREPOTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREPOTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteRepoTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRepoTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(TriggerId, triggerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRepoTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(TriggerId, triggerId_);
    };
    DeleteRepoTriggerRequest() = default ;
    DeleteRepoTriggerRequest(const DeleteRepoTriggerRequest &) = default ;
    DeleteRepoTriggerRequest(DeleteRepoTriggerRequest &&) = default ;
    DeleteRepoTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRepoTriggerRequest() = default ;
    DeleteRepoTriggerRequest& operator=(const DeleteRepoTriggerRequest &) = default ;
    DeleteRepoTriggerRequest& operator=(DeleteRepoTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->repoId_ == nullptr && return this->triggerId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteRepoTriggerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DeleteRepoTriggerRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // triggerId Field Functions 
    bool hasTriggerId() const { return this->triggerId_ != nullptr;};
    void deleteTriggerId() { this->triggerId_ = nullptr;};
    inline string triggerId() const { DARABONBA_PTR_GET_DEFAULT(triggerId_, "") };
    inline DeleteRepoTriggerRequest& setTriggerId(string triggerId) { DARABONBA_PTR_SET_VALUE(triggerId_, triggerId) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
    // The ID of the trigger.
    // 
    // This parameter is required.
    std::shared_ptr<string> triggerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
