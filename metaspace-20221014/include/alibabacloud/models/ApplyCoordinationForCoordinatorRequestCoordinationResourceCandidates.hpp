// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORCOORDINATORREQUESTCOORDINATIONRESOURCECANDIDATES_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORCOORDINATORREQUESTCOORDINATIONRESOURCECANDIDATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20221014
{
namespace Models
{
  class ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerEndUserId, ownerEndUserId_);
      DARABONBA_PTR_TO_JSON(OwnerWyId, ownerWyId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerEndUserId, ownerEndUserId_);
      DARABONBA_PTR_FROM_JSON(OwnerWyId, ownerWyId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates() = default ;
    ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates(const ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates &) = default ;
    ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates(ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates &&) = default ;
    ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates() = default ;
    ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& operator=(const ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates &) = default ;
    ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& operator=(ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerEndUserId_ != nullptr
        && this->ownerWyId_ != nullptr && this->resourceId_ != nullptr && this->resourceName_ != nullptr && this->resourceRegionId_ != nullptr && this->resourceType_ != nullptr; };
    // ownerEndUserId Field Functions 
    bool hasOwnerEndUserId() const { return this->ownerEndUserId_ != nullptr;};
    void deleteOwnerEndUserId() { this->ownerEndUserId_ = nullptr;};
    inline string ownerEndUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerEndUserId_, "") };
    inline ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& setOwnerEndUserId(string ownerEndUserId) { DARABONBA_PTR_SET_VALUE(ownerEndUserId_, ownerEndUserId) };


    // ownerWyId Field Functions 
    bool hasOwnerWyId() const { return this->ownerWyId_ != nullptr;};
    void deleteOwnerWyId() { this->ownerWyId_ = nullptr;};
    inline string ownerWyId() const { DARABONBA_PTR_GET_DEFAULT(ownerWyId_, "") };
    inline ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& setOwnerWyId(string ownerWyId) { DARABONBA_PTR_SET_VALUE(ownerWyId_, ownerWyId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> ownerEndUserId_ = nullptr;
    std::shared_ptr<string> ownerWyId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20221014
#endif
