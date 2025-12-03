// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONWITHCODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONWITHCODERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20220307
{
namespace Models
{
  class ApplyCoordinationWithCodeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationWithCodeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CoId, coId_);
      DARABONBA_PTR_TO_JSON(CoordinateStatus, coordinateStatus_);
      DARABONBA_PTR_TO_JSON(CoordinateTicket, coordinateTicket_);
      DARABONBA_PTR_TO_JSON(CoordinatorAliUid, coordinatorAliUid_);
      DARABONBA_PTR_TO_JSON(CoordinatorUserId, coordinatorUserId_);
      DARABONBA_PTR_TO_JSON(OwnerAliUid, ownerAliUid_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationWithCodeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CoId, coId_);
      DARABONBA_PTR_FROM_JSON(CoordinateStatus, coordinateStatus_);
      DARABONBA_PTR_FROM_JSON(CoordinateTicket, coordinateTicket_);
      DARABONBA_PTR_FROM_JSON(CoordinatorAliUid, coordinatorAliUid_);
      DARABONBA_PTR_FROM_JSON(CoordinatorUserId, coordinatorUserId_);
      DARABONBA_PTR_FROM_JSON(OwnerAliUid, ownerAliUid_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ApplyCoordinationWithCodeResponseBodyData() = default ;
    ApplyCoordinationWithCodeResponseBodyData(const ApplyCoordinationWithCodeResponseBodyData &) = default ;
    ApplyCoordinationWithCodeResponseBodyData(ApplyCoordinationWithCodeResponseBodyData &&) = default ;
    ApplyCoordinationWithCodeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationWithCodeResponseBodyData() = default ;
    ApplyCoordinationWithCodeResponseBodyData& operator=(const ApplyCoordinationWithCodeResponseBodyData &) = default ;
    ApplyCoordinationWithCodeResponseBodyData& operator=(ApplyCoordinationWithCodeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coId_ == nullptr
        && return this->coordinateStatus_ == nullptr && return this->coordinateTicket_ == nullptr && return this->coordinatorAliUid_ == nullptr && return this->coordinatorUserId_ == nullptr && return this->ownerAliUid_ == nullptr
        && return this->ownerUserId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceRegionId_ == nullptr && return this->resourceType_ == nullptr; };
    // coId Field Functions 
    bool hasCoId() const { return this->coId_ != nullptr;};
    void deleteCoId() { this->coId_ = nullptr;};
    inline string coId() const { DARABONBA_PTR_GET_DEFAULT(coId_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setCoId(string coId) { DARABONBA_PTR_SET_VALUE(coId_, coId) };


    // coordinateStatus Field Functions 
    bool hasCoordinateStatus() const { return this->coordinateStatus_ != nullptr;};
    void deleteCoordinateStatus() { this->coordinateStatus_ = nullptr;};
    inline string coordinateStatus() const { DARABONBA_PTR_GET_DEFAULT(coordinateStatus_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setCoordinateStatus(string coordinateStatus) { DARABONBA_PTR_SET_VALUE(coordinateStatus_, coordinateStatus) };


    // coordinateTicket Field Functions 
    bool hasCoordinateTicket() const { return this->coordinateTicket_ != nullptr;};
    void deleteCoordinateTicket() { this->coordinateTicket_ = nullptr;};
    inline string coordinateTicket() const { DARABONBA_PTR_GET_DEFAULT(coordinateTicket_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setCoordinateTicket(string coordinateTicket) { DARABONBA_PTR_SET_VALUE(coordinateTicket_, coordinateTicket) };


    // coordinatorAliUid Field Functions 
    bool hasCoordinatorAliUid() const { return this->coordinatorAliUid_ != nullptr;};
    void deleteCoordinatorAliUid() { this->coordinatorAliUid_ = nullptr;};
    inline int64_t coordinatorAliUid() const { DARABONBA_PTR_GET_DEFAULT(coordinatorAliUid_, 0L) };
    inline ApplyCoordinationWithCodeResponseBodyData& setCoordinatorAliUid(int64_t coordinatorAliUid) { DARABONBA_PTR_SET_VALUE(coordinatorAliUid_, coordinatorAliUid) };


    // coordinatorUserId Field Functions 
    bool hasCoordinatorUserId() const { return this->coordinatorUserId_ != nullptr;};
    void deleteCoordinatorUserId() { this->coordinatorUserId_ = nullptr;};
    inline string coordinatorUserId() const { DARABONBA_PTR_GET_DEFAULT(coordinatorUserId_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setCoordinatorUserId(string coordinatorUserId) { DARABONBA_PTR_SET_VALUE(coordinatorUserId_, coordinatorUserId) };


    // ownerAliUid Field Functions 
    bool hasOwnerAliUid() const { return this->ownerAliUid_ != nullptr;};
    void deleteOwnerAliUid() { this->ownerAliUid_ = nullptr;};
    inline int64_t ownerAliUid() const { DARABONBA_PTR_GET_DEFAULT(ownerAliUid_, 0L) };
    inline ApplyCoordinationWithCodeResponseBodyData& setOwnerAliUid(int64_t ownerAliUid) { DARABONBA_PTR_SET_VALUE(ownerAliUid_, ownerAliUid) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ApplyCoordinationWithCodeResponseBodyData& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> coId_ = nullptr;
    std::shared_ptr<string> coordinateStatus_ = nullptr;
    std::shared_ptr<string> coordinateTicket_ = nullptr;
    std::shared_ptr<int64_t> coordinatorAliUid_ = nullptr;
    std::shared_ptr<string> coordinatorUserId_ = nullptr;
    std::shared_ptr<int64_t> ownerAliUid_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20220307
#endif
