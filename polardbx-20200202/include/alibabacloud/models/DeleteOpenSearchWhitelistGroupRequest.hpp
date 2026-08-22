// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOPENSEARCHWHITELISTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOPENSEARCHWHITELISTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DeleteOpenSearchWhitelistGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOpenSearchWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOpenSearchWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteOpenSearchWhitelistGroupRequest() = default ;
    DeleteOpenSearchWhitelistGroupRequest(const DeleteOpenSearchWhitelistGroupRequest &) = default ;
    DeleteOpenSearchWhitelistGroupRequest(DeleteOpenSearchWhitelistGroupRequest &&) = default ;
    DeleteOpenSearchWhitelistGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOpenSearchWhitelistGroupRequest() = default ;
    DeleteOpenSearchWhitelistGroupRequest& operator=(const DeleteOpenSearchWhitelistGroupRequest &) = default ;
    DeleteOpenSearchWhitelistGroupRequest& operator=(DeleteOpenSearchWhitelistGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->groupId_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DeleteOpenSearchWhitelistGroupRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteOpenSearchWhitelistGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteOpenSearchWhitelistGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
