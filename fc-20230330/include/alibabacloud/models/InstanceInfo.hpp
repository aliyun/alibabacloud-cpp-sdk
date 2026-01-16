// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEINFO_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class InstanceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(createdTimeMs, createdTimeMs_);
      DARABONBA_PTR_TO_JSON(destroyedTimeMs, destroyedTimeMs_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(createdTimeMs, createdTimeMs_);
      DARABONBA_PTR_FROM_JSON(destroyedTimeMs, destroyedTimeMs_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    InstanceInfo() = default ;
    InstanceInfo(const InstanceInfo &) = default ;
    InstanceInfo(InstanceInfo &&) = default ;
    InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceInfo() = default ;
    InstanceInfo& operator=(const InstanceInfo &) = default ;
    InstanceInfo& operator=(InstanceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTimeMs_ == nullptr
        && this->destroyedTimeMs_ == nullptr && this->instanceId_ == nullptr && this->qualifier_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr
        && this->versionId_ == nullptr; };
    // createdTimeMs Field Functions 
    bool hasCreatedTimeMs() const { return this->createdTimeMs_ != nullptr;};
    void deleteCreatedTimeMs() { this->createdTimeMs_ = nullptr;};
    inline int64_t getCreatedTimeMs() const { DARABONBA_PTR_GET_DEFAULT(createdTimeMs_, 0L) };
    inline InstanceInfo& setCreatedTimeMs(int64_t createdTimeMs) { DARABONBA_PTR_SET_VALUE(createdTimeMs_, createdTimeMs) };


    // destroyedTimeMs Field Functions 
    bool hasDestroyedTimeMs() const { return this->destroyedTimeMs_ != nullptr;};
    void deleteDestroyedTimeMs() { this->destroyedTimeMs_ = nullptr;};
    inline int64_t getDestroyedTimeMs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTimeMs_, 0L) };
    inline InstanceInfo& setDestroyedTimeMs(int64_t destroyedTimeMs) { DARABONBA_PTR_SET_VALUE(destroyedTimeMs_, destroyedTimeMs) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline InstanceInfo& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline InstanceInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline InstanceInfo& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    shared_ptr<int64_t> createdTimeMs_ {};
    shared_ptr<int64_t> destroyedTimeMs_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> qualifier_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
