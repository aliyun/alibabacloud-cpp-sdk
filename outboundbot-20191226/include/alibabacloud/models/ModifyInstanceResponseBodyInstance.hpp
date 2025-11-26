// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCERESPONSEBODYINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyInstanceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MaxConcurrentConversation, maxConcurrentConversation_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrentConversation, maxConcurrentConversation_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
    };
    ModifyInstanceResponseBodyInstance() = default ;
    ModifyInstanceResponseBodyInstance(const ModifyInstanceResponseBodyInstance &) = default ;
    ModifyInstanceResponseBodyInstance(ModifyInstanceResponseBodyInstance &&) = default ;
    ModifyInstanceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceResponseBodyInstance() = default ;
    ModifyInstanceResponseBodyInstance& operator=(const ModifyInstanceResponseBodyInstance &) = default ;
    ModifyInstanceResponseBodyInstance& operator=(ModifyInstanceResponseBodyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->creatorId_ == nullptr && return this->creatorName_ == nullptr && return this->instanceDescription_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->maxConcurrentConversation_ == nullptr && return this->ownerName_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline ModifyInstanceResponseBodyInstance& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline ModifyInstanceResponseBodyInstance& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ModifyInstanceResponseBodyInstance& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline ModifyInstanceResponseBodyInstance& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceResponseBodyInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceResponseBodyInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // maxConcurrentConversation Field Functions 
    bool hasMaxConcurrentConversation() const { return this->maxConcurrentConversation_ != nullptr;};
    void deleteMaxConcurrentConversation() { this->maxConcurrentConversation_ = nullptr;};
    inline int32_t maxConcurrentConversation() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentConversation_, 0) };
    inline ModifyInstanceResponseBodyInstance& setMaxConcurrentConversation(int32_t maxConcurrentConversation) { DARABONBA_PTR_SET_VALUE(maxConcurrentConversation_, maxConcurrentConversation) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ModifyInstanceResponseBodyInstance& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


  protected:
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> instanceDescription_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<int32_t> maxConcurrentConversation_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
