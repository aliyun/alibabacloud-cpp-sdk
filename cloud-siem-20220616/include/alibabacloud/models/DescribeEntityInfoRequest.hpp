// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTITYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTITYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEntityInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEntityInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityIdentity, entityIdentity_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEntityInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityIdentity, entityIdentity_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
    };
    DescribeEntityInfoRequest() = default ;
    DescribeEntityInfoRequest(const DescribeEntityInfoRequest &) = default ;
    DescribeEntityInfoRequest(DescribeEntityInfoRequest &&) = default ;
    DescribeEntityInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEntityInfoRequest() = default ;
    DescribeEntityInfoRequest& operator=(const DescribeEntityInfoRequest &) = default ;
    DescribeEntityInfoRequest& operator=(DescribeEntityInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityId_ != nullptr
        && this->entityIdentity_ != nullptr && this->incidentUuid_ != nullptr && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr
        && this->sophonTaskId_ != nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline DescribeEntityInfoRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityIdentity Field Functions 
    bool hasEntityIdentity() const { return this->entityIdentity_ != nullptr;};
    void deleteEntityIdentity() { this->entityIdentity_ = nullptr;};
    inline string entityIdentity() const { DARABONBA_PTR_GET_DEFAULT(entityIdentity_, "") };
    inline DescribeEntityInfoRequest& setEntityIdentity(string entityIdentity) { DARABONBA_PTR_SET_VALUE(entityIdentity_, entityIdentity) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeEntityInfoRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEntityInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeEntityInfoRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DescribeEntityInfoRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // sophonTaskId Field Functions 
    bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
    void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
    inline string sophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
    inline DescribeEntityInfoRequest& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


  protected:
    // The logical ID of the entity.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // The feature value of the entity. Fuzzy match is supported.
    std::shared_ptr<string> entityIdentity_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
    // The ID of the SOAR handling policy.
    std::shared_ptr<string> sophonTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
