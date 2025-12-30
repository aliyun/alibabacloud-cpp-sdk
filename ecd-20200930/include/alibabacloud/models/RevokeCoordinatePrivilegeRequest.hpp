// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKECOORDINATEPRIVILEGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKECOORDINATEPRIVILEGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RevokeCoordinatePrivilegeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeCoordinatePrivilegeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoId, coId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeCoordinatePrivilegeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoId, coId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    RevokeCoordinatePrivilegeRequest() = default ;
    RevokeCoordinatePrivilegeRequest(const RevokeCoordinatePrivilegeRequest &) = default ;
    RevokeCoordinatePrivilegeRequest(RevokeCoordinatePrivilegeRequest &&) = default ;
    RevokeCoordinatePrivilegeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeCoordinatePrivilegeRequest() = default ;
    RevokeCoordinatePrivilegeRequest& operator=(const RevokeCoordinatePrivilegeRequest &) = default ;
    RevokeCoordinatePrivilegeRequest& operator=(RevokeCoordinatePrivilegeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coId_ == nullptr
        && this->endUserId_ == nullptr && this->regionId_ == nullptr && this->userType_ == nullptr && this->uuid_ == nullptr; };
    // coId Field Functions 
    bool hasCoId() const { return this->coId_ != nullptr;};
    void deleteCoId() { this->coId_ = nullptr;};
    inline string getCoId() const { DARABONBA_PTR_GET_DEFAULT(coId_, "") };
    inline RevokeCoordinatePrivilegeRequest& setCoId(string coId) { DARABONBA_PTR_SET_VALUE(coId_, coId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline RevokeCoordinatePrivilegeRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RevokeCoordinatePrivilegeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline RevokeCoordinatePrivilegeRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline RevokeCoordinatePrivilegeRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the stream coordination task.
    // 
    // This parameter is required.
    shared_ptr<string> coId_ {};
    // The ID of the end user.
    shared_ptr<string> endUserId_ {};
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The type of user who requires the coordinate permissions.
    // 
    // Set the value to TENANT_ADMIN. Only tenant administrators can be granted with the coordinate permissions.
    // 
    // This parameter is required.
    shared_ptr<string> userType_ {};
    // The unique identifier of the client. If you use an Alibaba Cloud Workspace client, click **About** on the client logon page to view the identifier of the client.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
