// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCESHARERESPONSEBODYRESOURCESHARE_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCESHARERESPONSEBODYRESOURCESHARE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class UpdateResourceShareResponseBodyResourceShare : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceShareResponseBodyResourceShare& obj) { 
      DARABONBA_PTR_TO_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_TO_JSON(ResourceShareOwner, resourceShareOwner_);
      DARABONBA_PTR_TO_JSON(ResourceShareStatus, resourceShareStatus_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceShareResponseBodyResourceShare& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_FROM_JSON(ResourceShareOwner, resourceShareOwner_);
      DARABONBA_PTR_FROM_JSON(ResourceShareStatus, resourceShareStatus_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    UpdateResourceShareResponseBodyResourceShare() = default ;
    UpdateResourceShareResponseBodyResourceShare(const UpdateResourceShareResponseBodyResourceShare &) = default ;
    UpdateResourceShareResponseBodyResourceShare(UpdateResourceShareResponseBodyResourceShare &&) = default ;
    UpdateResourceShareResponseBodyResourceShare(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceShareResponseBodyResourceShare() = default ;
    UpdateResourceShareResponseBodyResourceShare& operator=(const UpdateResourceShareResponseBodyResourceShare &) = default ;
    UpdateResourceShareResponseBodyResourceShare& operator=(UpdateResourceShareResponseBodyResourceShare &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowExternalTargets_ != nullptr
        && this->createTime_ != nullptr && this->resourceShareId_ != nullptr && this->resourceShareName_ != nullptr && this->resourceShareOwner_ != nullptr && this->resourceShareStatus_ != nullptr
        && this->updateTime_ != nullptr; };
    // allowExternalTargets Field Functions 
    bool hasAllowExternalTargets() const { return this->allowExternalTargets_ != nullptr;};
    void deleteAllowExternalTargets() { this->allowExternalTargets_ = nullptr;};
    inline bool allowExternalTargets() const { DARABONBA_PTR_GET_DEFAULT(allowExternalTargets_, false) };
    inline UpdateResourceShareResponseBodyResourceShare& setAllowExternalTargets(bool allowExternalTargets) { DARABONBA_PTR_SET_VALUE(allowExternalTargets_, allowExternalTargets) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateResourceShareResponseBodyResourceShare& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline UpdateResourceShareResponseBodyResourceShare& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string resourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline UpdateResourceShareResponseBodyResourceShare& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


    // resourceShareOwner Field Functions 
    bool hasResourceShareOwner() const { return this->resourceShareOwner_ != nullptr;};
    void deleteResourceShareOwner() { this->resourceShareOwner_ = nullptr;};
    inline string resourceShareOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceShareOwner_, "") };
    inline UpdateResourceShareResponseBodyResourceShare& setResourceShareOwner(string resourceShareOwner) { DARABONBA_PTR_SET_VALUE(resourceShareOwner_, resourceShareOwner) };


    // resourceShareStatus Field Functions 
    bool hasResourceShareStatus() const { return this->resourceShareStatus_ != nullptr;};
    void deleteResourceShareStatus() { this->resourceShareStatus_ = nullptr;};
    inline string resourceShareStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceShareStatus_, "") };
    inline UpdateResourceShareResponseBodyResourceShare& setResourceShareStatus(string resourceShareStatus) { DARABONBA_PTR_SET_VALUE(resourceShareStatus_, resourceShareStatus) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline UpdateResourceShareResponseBodyResourceShare& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Indicates whether resources in the resource share can be shared with accounts outside the resource directory. Valid values:
    // 
    // *   false: Resources in the resource share can be shared only with accounts in the resource directory.
    // *   true: Resources in the resource share can be shared with both accounts in the resource directory and accounts outside the resource directory.
    std::shared_ptr<bool> allowExternalTargets_ = nullptr;
    // The time when the resource share was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the resource share.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The name of the resource share.
    std::shared_ptr<string> resourceShareName_ = nullptr;
    // The owner of the resource share.
    std::shared_ptr<string> resourceShareOwner_ = nullptr;
    // The status of the resource share. Valid values:
    // 
    // *   Active: The resource share is enabled.
    // *   Pending: The resource share is associated with one or more resource sharing invitations that are waiting for confirmation.
    // *   Deleting: The resource share is being deleted.
    // *   Deleted: The resource share is deleted.
    // 
    // >  The system deletes the records of resource shares in the Deleted state within 48 hours to 96 hours after you delete the resource shares.
    std::shared_ptr<string> resourceShareStatus_ = nullptr;
    // The time when the resource share was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
