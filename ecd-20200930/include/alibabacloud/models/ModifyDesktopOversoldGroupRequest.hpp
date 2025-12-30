// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopOversoldGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrenceCount, concurrenceCount_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(OversoldUserCount, oversoldUserCount_);
      DARABONBA_PTR_TO_JSON(OversoldWarn, oversoldWarn_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrenceCount, concurrenceCount_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(OversoldUserCount, oversoldUserCount_);
      DARABONBA_PTR_FROM_JSON(OversoldWarn, oversoldWarn_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
    };
    ModifyDesktopOversoldGroupRequest() = default ;
    ModifyDesktopOversoldGroupRequest(const ModifyDesktopOversoldGroupRequest &) = default ;
    ModifyDesktopOversoldGroupRequest(ModifyDesktopOversoldGroupRequest &&) = default ;
    ModifyDesktopOversoldGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopOversoldGroupRequest() = default ;
    ModifyDesktopOversoldGroupRequest& operator=(const ModifyDesktopOversoldGroupRequest &) = default ;
    ModifyDesktopOversoldGroupRequest& operator=(ModifyDesktopOversoldGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrenceCount_ == nullptr
        && this->description_ == nullptr && this->idleDisconnectDuration_ == nullptr && this->imageId_ == nullptr && this->keepDuration_ == nullptr && this->name_ == nullptr
        && this->oversoldGroupId_ == nullptr && this->oversoldUserCount_ == nullptr && this->oversoldWarn_ == nullptr && this->policyGroupId_ == nullptr && this->stopDuration_ == nullptr; };
    // concurrenceCount Field Functions 
    bool hasConcurrenceCount() const { return this->concurrenceCount_ != nullptr;};
    void deleteConcurrenceCount() { this->concurrenceCount_ = nullptr;};
    inline int32_t getConcurrenceCount() const { DARABONBA_PTR_GET_DEFAULT(concurrenceCount_, 0) };
    inline ModifyDesktopOversoldGroupRequest& setConcurrenceCount(int32_t concurrenceCount) { DARABONBA_PTR_SET_VALUE(concurrenceCount_, concurrenceCount) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDesktopOversoldGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // idleDisconnectDuration Field Functions 
    bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
    void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
    inline int64_t getIdleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, 0L) };
    inline ModifyDesktopOversoldGroupRequest& setIdleDisconnectDuration(int64_t idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyDesktopOversoldGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keepDuration Field Functions 
    bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
    void deleteKeepDuration() { this->keepDuration_ = nullptr;};
    inline int32_t getKeepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0) };
    inline ModifyDesktopOversoldGroupRequest& setKeepDuration(int32_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyDesktopOversoldGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline ModifyDesktopOversoldGroupRequest& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // oversoldUserCount Field Functions 
    bool hasOversoldUserCount() const { return this->oversoldUserCount_ != nullptr;};
    void deleteOversoldUserCount() { this->oversoldUserCount_ = nullptr;};
    inline int32_t getOversoldUserCount() const { DARABONBA_PTR_GET_DEFAULT(oversoldUserCount_, 0) };
    inline ModifyDesktopOversoldGroupRequest& setOversoldUserCount(int32_t oversoldUserCount) { DARABONBA_PTR_SET_VALUE(oversoldUserCount_, oversoldUserCount) };


    // oversoldWarn Field Functions 
    bool hasOversoldWarn() const { return this->oversoldWarn_ != nullptr;};
    void deleteOversoldWarn() { this->oversoldWarn_ = nullptr;};
    inline int32_t getOversoldWarn() const { DARABONBA_PTR_GET_DEFAULT(oversoldWarn_, 0) };
    inline ModifyDesktopOversoldGroupRequest& setOversoldWarn(int32_t oversoldWarn) { DARABONBA_PTR_SET_VALUE(oversoldWarn_, oversoldWarn) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyDesktopOversoldGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // stopDuration Field Functions 
    bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
    void deleteStopDuration() { this->stopDuration_ = nullptr;};
    inline int32_t getStopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0) };
    inline ModifyDesktopOversoldGroupRequest& setStopDuration(int32_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


  protected:
    shared_ptr<int32_t> concurrenceCount_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> idleDisconnectDuration_ {};
    shared_ptr<string> imageId_ {};
    shared_ptr<int32_t> keepDuration_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> oversoldGroupId_ {};
    shared_ptr<int32_t> oversoldUserCount_ {};
    shared_ptr<int32_t> oversoldWarn_ {};
    shared_ptr<string> policyGroupId_ {};
    shared_ptr<int32_t> stopDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
