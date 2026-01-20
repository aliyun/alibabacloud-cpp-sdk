// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifySecurityIPListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(GroupTag, groupTag_);
        DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(GroupTag, groupTag_);
        DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && this->DBInstanceName_ == nullptr && this->groupName_ == nullptr && this->groupTag_ == nullptr && this->securityIPList_ == nullptr && this->securityIPType_ == nullptr
        && this->taskId_ == nullptr && this->whitelistNetType_ == nullptr; };
      // DBInstanceID Field Functions 
      bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
      void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
      inline int32_t getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
      inline Data& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupTag Field Functions 
      bool hasGroupTag() const { return this->groupTag_ != nullptr;};
      void deleteGroupTag() { this->groupTag_ = nullptr;};
      inline string getGroupTag() const { DARABONBA_PTR_GET_DEFAULT(groupTag_, "") };
      inline Data& setGroupTag(string groupTag) { DARABONBA_PTR_SET_VALUE(groupTag_, groupTag) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline Data& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      // securityIPType Field Functions 
      bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
      void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
      inline string getSecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
      inline Data& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline Data& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // whitelistNetType Field Functions 
      bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
      void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
      inline string getWhitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
      inline Data& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


    protected:
      // The cluster ID.
      shared_ptr<int32_t> DBInstanceID_ {};
      // The cluster name.
      shared_ptr<string> DBInstanceName_ {};
      // The name of the whitelist.
      shared_ptr<string> groupName_ {};
      // The tag of the whitelist.
      shared_ptr<string> groupTag_ {};
      // The IP addresses and CIDR blocks in the whitelist.
      shared_ptr<string> securityIPList_ {};
      // The IP address type.
      shared_ptr<string> securityIPType_ {};
      // The task ID.
      shared_ptr<int32_t> taskId_ {};
      // The network type of the whitelist.
      shared_ptr<string> whitelistNetType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifySecurityIPListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifySecurityIPListResponseBody::Data) };
    inline ModifySecurityIPListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifySecurityIPListResponseBody::Data) };
    inline ModifySecurityIPListResponseBody& setData(const ModifySecurityIPListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifySecurityIPListResponseBody& setData(ModifySecurityIPListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySecurityIPListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<ModifySecurityIPListResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
