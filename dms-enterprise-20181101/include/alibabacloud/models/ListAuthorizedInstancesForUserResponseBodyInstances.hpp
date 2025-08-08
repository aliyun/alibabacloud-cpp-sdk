// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDINSTANCESFORUSERRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDINSTANCESFORUSERRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedInstancesForUserResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedInstancesForUserResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PermissionDetail, permissionDetail_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedInstancesForUserResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PermissionDetail, permissionDetail_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListAuthorizedInstancesForUserResponseBodyInstances() = default ;
    ListAuthorizedInstancesForUserResponseBodyInstances(const ListAuthorizedInstancesForUserResponseBodyInstances &) = default ;
    ListAuthorizedInstancesForUserResponseBodyInstances(ListAuthorizedInstancesForUserResponseBodyInstances &&) = default ;
    ListAuthorizedInstancesForUserResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedInstancesForUserResponseBodyInstances() = default ;
    ListAuthorizedInstancesForUserResponseBodyInstances& operator=(const ListAuthorizedInstancesForUserResponseBodyInstances &) = default ;
    ListAuthorizedInstancesForUserResponseBodyInstances& operator=(ListAuthorizedInstancesForUserResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbType_ != nullptr
        && this->envType_ != nullptr && this->host_ != nullptr && this->instanceAlias_ != nullptr && this->instanceId_ != nullptr && this->permissionDetail_ != nullptr
        && this->port_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // permissionDetail Field Functions 
    bool hasPermissionDetail() const { return this->permissionDetail_ != nullptr;};
    void deletePermissionDetail() { this->permissionDetail_ = nullptr;};
    inline const Models::ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail & permissionDetail() const { DARABONBA_PTR_GET_CONST(permissionDetail_, Models::ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail) };
    inline Models::ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail permissionDetail() { DARABONBA_PTR_GET(permissionDetail_, Models::ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail) };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setPermissionDetail(const Models::ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail & permissionDetail) { DARABONBA_PTR_SET_VALUE(permissionDetail_, permissionDetail) };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setPermissionDetail(Models::ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail && permissionDetail) { DARABONBA_PTR_SET_RVALUE(permissionDetail_, permissionDetail) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstances& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<string> envType_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> instanceAlias_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<Models::ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail> permissionDetail_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
