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
      DARABONBA_PTR_TO_JSON(DstMainConnectString, dstMainConnectString_);
      DARABONBA_PTR_TO_JSON(DstMainPort, dstMainPort_);
      DARABONBA_PTR_TO_JSON(IsModifyEndpoint, isModifyEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SrcMainConnectString, srcMainConnectString_);
      DARABONBA_PTR_TO_JSON(SrcMainPort, srcMainPort_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_TO_JSON(TaskTimeout, taskTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchGdnMemberRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DstMainConnectString, dstMainConnectString_);
      DARABONBA_PTR_FROM_JSON(DstMainPort, dstMainPort_);
      DARABONBA_PTR_FROM_JSON(IsModifyEndpoint, isModifyEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SrcMainConnectString, srcMainConnectString_);
      DARABONBA_PTR_FROM_JSON(SrcMainPort, srcMainPort_);
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
        && this->dstMainConnectString_ == nullptr && this->dstMainPort_ == nullptr && this->isModifyEndpoint_ == nullptr && this->regionId_ == nullptr && this->srcMainConnectString_ == nullptr
        && this->srcMainPort_ == nullptr && this->switchMode_ == nullptr && this->taskTimeout_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline SwitchGdnMemberRoleRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dstMainConnectString Field Functions 
    bool hasDstMainConnectString() const { return this->dstMainConnectString_ != nullptr;};
    void deleteDstMainConnectString() { this->dstMainConnectString_ = nullptr;};
    inline string getDstMainConnectString() const { DARABONBA_PTR_GET_DEFAULT(dstMainConnectString_, "") };
    inline SwitchGdnMemberRoleRequest& setDstMainConnectString(string dstMainConnectString) { DARABONBA_PTR_SET_VALUE(dstMainConnectString_, dstMainConnectString) };


    // dstMainPort Field Functions 
    bool hasDstMainPort() const { return this->dstMainPort_ != nullptr;};
    void deleteDstMainPort() { this->dstMainPort_ = nullptr;};
    inline string getDstMainPort() const { DARABONBA_PTR_GET_DEFAULT(dstMainPort_, "") };
    inline SwitchGdnMemberRoleRequest& setDstMainPort(string dstMainPort) { DARABONBA_PTR_SET_VALUE(dstMainPort_, dstMainPort) };


    // isModifyEndpoint Field Functions 
    bool hasIsModifyEndpoint() const { return this->isModifyEndpoint_ != nullptr;};
    void deleteIsModifyEndpoint() { this->isModifyEndpoint_ = nullptr;};
    inline string getIsModifyEndpoint() const { DARABONBA_PTR_GET_DEFAULT(isModifyEndpoint_, "") };
    inline SwitchGdnMemberRoleRequest& setIsModifyEndpoint(string isModifyEndpoint) { DARABONBA_PTR_SET_VALUE(isModifyEndpoint_, isModifyEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SwitchGdnMemberRoleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // srcMainConnectString Field Functions 
    bool hasSrcMainConnectString() const { return this->srcMainConnectString_ != nullptr;};
    void deleteSrcMainConnectString() { this->srcMainConnectString_ = nullptr;};
    inline string getSrcMainConnectString() const { DARABONBA_PTR_GET_DEFAULT(srcMainConnectString_, "") };
    inline SwitchGdnMemberRoleRequest& setSrcMainConnectString(string srcMainConnectString) { DARABONBA_PTR_SET_VALUE(srcMainConnectString_, srcMainConnectString) };


    // srcMainPort Field Functions 
    bool hasSrcMainPort() const { return this->srcMainPort_ != nullptr;};
    void deleteSrcMainPort() { this->srcMainPort_ = nullptr;};
    inline string getSrcMainPort() const { DARABONBA_PTR_GET_DEFAULT(srcMainPort_, "") };
    inline SwitchGdnMemberRoleRequest& setSrcMainPort(string srcMainPort) { DARABONBA_PTR_SET_VALUE(srcMainPort_, srcMainPort) };


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
    shared_ptr<string> dstMainConnectString_ {};
    shared_ptr<string> dstMainPort_ {};
    shared_ptr<string> isModifyEndpoint_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> srcMainConnectString_ {};
    shared_ptr<string> srcMainPort_ {};
    // This parameter is required.
    shared_ptr<string> switchMode_ {};
    shared_ptr<int64_t> taskTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
