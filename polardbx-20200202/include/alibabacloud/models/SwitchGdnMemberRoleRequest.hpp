// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHGDNMEMBERROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHGDNMEMBERROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class SwitchGdnMemberRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchGdnMemberRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_TO_JSON(TaskTimeout, taskTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchGdnMemberRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_FROM_JSON(TaskTimeout, taskTimeout_);
    };
    SwitchGdnMemberRoleRequest() = default ;
    SwitchGdnMemberRoleRequest(const SwitchGdnMemberRoleRequest &) = default ;
    SwitchGdnMemberRoleRequest(SwitchGdnMemberRoleRequest &&) = default ;
    SwitchGdnMemberRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchGdnMemberRoleRequest() = default ;
    SwitchGdnMemberRoleRequest& operator=(const SwitchGdnMemberRoleRequest &) = default ;
    SwitchGdnMemberRoleRequest& operator=(SwitchGdnMemberRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->switchMode_ == nullptr && this->taskTimeout_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline SwitchGdnMemberRoleRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SwitchGdnMemberRoleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline string getSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, "") };
    inline SwitchGdnMemberRoleRequest& setSwitchMode(string switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


    // taskTimeout Field Functions 
    bool hasTaskTimeout() const { return this->taskTimeout_ != nullptr;};
    void deleteTaskTimeout() { this->taskTimeout_ = nullptr;};
    inline int64_t getTaskTimeout() const { DARABONBA_PTR_GET_DEFAULT(taskTimeout_, 0L) };
    inline SwitchGdnMemberRoleRequest& setTaskTimeout(int64_t taskTimeout) { DARABONBA_PTR_SET_VALUE(taskTimeout_, taskTimeout) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> switchMode_ {};
    shared_ptr<int64_t> taskTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
