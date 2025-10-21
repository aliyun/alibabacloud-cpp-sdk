// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYIPLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYIPLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifySecurityIPListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityIPListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityIPListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
    };
    ModifySecurityIPListResponseBodyData() = default ;
    ModifySecurityIPListResponseBodyData(const ModifySecurityIPListResponseBodyData &) = default ;
    ModifySecurityIPListResponseBodyData(ModifySecurityIPListResponseBodyData &&) = default ;
    ModifySecurityIPListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityIPListResponseBodyData() = default ;
    ModifySecurityIPListResponseBodyData& operator=(const ModifySecurityIPListResponseBodyData &) = default ;
    ModifySecurityIPListResponseBodyData& operator=(ModifySecurityIPListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && return this->DBInstanceName_ == nullptr && return this->groupName_ == nullptr && return this->groupTag_ == nullptr && return this->securityIPList_ == nullptr && return this->securityIPType_ == nullptr
        && return this->taskId_ == nullptr && return this->whitelistNetType_ == nullptr; };
    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int32_t DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
    inline ModifySecurityIPListResponseBodyData& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifySecurityIPListResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifySecurityIPListResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupTag Field Functions 
    bool hasGroupTag() const { return this->groupTag_ != nullptr;};
    void deleteGroupTag() { this->groupTag_ = nullptr;};
    inline string groupTag() const { DARABONBA_PTR_GET_DEFAULT(groupTag_, "") };
    inline ModifySecurityIPListResponseBodyData& setGroupTag(string groupTag) { DARABONBA_PTR_SET_VALUE(groupTag_, groupTag) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ModifySecurityIPListResponseBodyData& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string securityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline ModifySecurityIPListResponseBodyData& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ModifySecurityIPListResponseBodyData& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // whitelistNetType Field Functions 
    bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
    void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
    inline string whitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
    inline ModifySecurityIPListResponseBodyData& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


  protected:
    // The cluster ID.
    std::shared_ptr<int32_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The name of the whitelist.
    std::shared_ptr<string> groupName_ = nullptr;
    // The tag of the whitelist.
    std::shared_ptr<string> groupTag_ = nullptr;
    // The IP addresses and CIDR blocks in the whitelist.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The IP address type.
    std::shared_ptr<string> securityIPType_ = nullptr;
    // The task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
    // The network type of the whitelist.
    std::shared_ptr<string> whitelistNetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
