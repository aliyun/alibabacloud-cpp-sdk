// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class ModifySecurityIPListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
    };
    ModifySecurityIPListResponseBody() = default ;
    ModifySecurityIPListResponseBody(const ModifySecurityIPListResponseBody &) = default ;
    ModifySecurityIPListResponseBody(ModifySecurityIPListResponseBody &&) = default ;
    ModifySecurityIPListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityIPListResponseBody() = default ;
    ModifySecurityIPListResponseBody& operator=(const ModifySecurityIPListResponseBody &) = default ;
    ModifySecurityIPListResponseBody& operator=(ModifySecurityIPListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceName_ != nullptr
        && this->groupName_ != nullptr && this->groupTag_ != nullptr && this->requestId_ != nullptr && this->securityIPList_ != nullptr && this->securityIPType_ != nullptr
        && this->taskId_ != nullptr && this->whitelistNetType_ != nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifySecurityIPListResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifySecurityIPListResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupTag Field Functions 
    bool hasGroupTag() const { return this->groupTag_ != nullptr;};
    void deleteGroupTag() { this->groupTag_ = nullptr;};
    inline string groupTag() const { DARABONBA_PTR_GET_DEFAULT(groupTag_, "") };
    inline ModifySecurityIPListResponseBody& setGroupTag(string groupTag) { DARABONBA_PTR_SET_VALUE(groupTag_, groupTag) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySecurityIPListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ModifySecurityIPListResponseBody& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string securityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline ModifySecurityIPListResponseBody& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ModifySecurityIPListResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // whitelistNetType Field Functions 
    bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
    void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
    inline string whitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
    inline ModifySecurityIPListResponseBody& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


  protected:
    // The name of the instance.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The name of the whitelist.
    std::shared_ptr<string> groupName_ = nullptr;
    // The tag of the whitelist.
    std::shared_ptr<string> groupTag_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IP addresses in the whitelist of the instance. Multiple IP addresses are separated by commas (,).
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The IP address type.
    std::shared_ptr<string> securityIPType_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The network type of the whitelist.
    std::shared_ptr<string> whitelistNetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
