// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMOTEADBDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMOTEADBDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateRemoteADBDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRemoteADBDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(LocalDBInstanceId, localDBInstanceId_);
      DARABONBA_PTR_TO_JSON(LocalDatabase, localDatabase_);
      DARABONBA_PTR_TO_JSON(ManagerUserName, managerUserName_);
      DARABONBA_PTR_TO_JSON(ManagerUserPassword, managerUserPassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RemoteDBInstanceId, remoteDBInstanceId_);
      DARABONBA_PTR_TO_JSON(RemoteDatabase, remoteDatabase_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserPassword, userPassword_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRemoteADBDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(LocalDBInstanceId, localDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(LocalDatabase, localDatabase_);
      DARABONBA_PTR_FROM_JSON(ManagerUserName, managerUserName_);
      DARABONBA_PTR_FROM_JSON(ManagerUserPassword, managerUserPassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RemoteDBInstanceId, remoteDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RemoteDatabase, remoteDatabase_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserPassword, userPassword_);
    };
    CreateRemoteADBDataSourceRequest() = default ;
    CreateRemoteADBDataSourceRequest(const CreateRemoteADBDataSourceRequest &) = default ;
    CreateRemoteADBDataSourceRequest(CreateRemoteADBDataSourceRequest &&) = default ;
    CreateRemoteADBDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRemoteADBDataSourceRequest() = default ;
    CreateRemoteADBDataSourceRequest& operator=(const CreateRemoteADBDataSourceRequest &) = default ;
    CreateRemoteADBDataSourceRequest& operator=(CreateRemoteADBDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceName_ != nullptr
        && this->localDBInstanceId_ != nullptr && this->localDatabase_ != nullptr && this->managerUserName_ != nullptr && this->managerUserPassword_ != nullptr && this->ownerId_ != nullptr
        && this->remoteDBInstanceId_ != nullptr && this->remoteDatabase_ != nullptr && this->userName_ != nullptr && this->userPassword_ != nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline CreateRemoteADBDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // localDBInstanceId Field Functions 
    bool hasLocalDBInstanceId() const { return this->localDBInstanceId_ != nullptr;};
    void deleteLocalDBInstanceId() { this->localDBInstanceId_ = nullptr;};
    inline string localDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(localDBInstanceId_, "") };
    inline CreateRemoteADBDataSourceRequest& setLocalDBInstanceId(string localDBInstanceId) { DARABONBA_PTR_SET_VALUE(localDBInstanceId_, localDBInstanceId) };


    // localDatabase Field Functions 
    bool hasLocalDatabase() const { return this->localDatabase_ != nullptr;};
    void deleteLocalDatabase() { this->localDatabase_ = nullptr;};
    inline string localDatabase() const { DARABONBA_PTR_GET_DEFAULT(localDatabase_, "") };
    inline CreateRemoteADBDataSourceRequest& setLocalDatabase(string localDatabase) { DARABONBA_PTR_SET_VALUE(localDatabase_, localDatabase) };


    // managerUserName Field Functions 
    bool hasManagerUserName() const { return this->managerUserName_ != nullptr;};
    void deleteManagerUserName() { this->managerUserName_ = nullptr;};
    inline string managerUserName() const { DARABONBA_PTR_GET_DEFAULT(managerUserName_, "") };
    inline CreateRemoteADBDataSourceRequest& setManagerUserName(string managerUserName) { DARABONBA_PTR_SET_VALUE(managerUserName_, managerUserName) };


    // managerUserPassword Field Functions 
    bool hasManagerUserPassword() const { return this->managerUserPassword_ != nullptr;};
    void deleteManagerUserPassword() { this->managerUserPassword_ = nullptr;};
    inline string managerUserPassword() const { DARABONBA_PTR_GET_DEFAULT(managerUserPassword_, "") };
    inline CreateRemoteADBDataSourceRequest& setManagerUserPassword(string managerUserPassword) { DARABONBA_PTR_SET_VALUE(managerUserPassword_, managerUserPassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRemoteADBDataSourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remoteDBInstanceId Field Functions 
    bool hasRemoteDBInstanceId() const { return this->remoteDBInstanceId_ != nullptr;};
    void deleteRemoteDBInstanceId() { this->remoteDBInstanceId_ = nullptr;};
    inline string remoteDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(remoteDBInstanceId_, "") };
    inline CreateRemoteADBDataSourceRequest& setRemoteDBInstanceId(string remoteDBInstanceId) { DARABONBA_PTR_SET_VALUE(remoteDBInstanceId_, remoteDBInstanceId) };


    // remoteDatabase Field Functions 
    bool hasRemoteDatabase() const { return this->remoteDatabase_ != nullptr;};
    void deleteRemoteDatabase() { this->remoteDatabase_ = nullptr;};
    inline string remoteDatabase() const { DARABONBA_PTR_GET_DEFAULT(remoteDatabase_, "") };
    inline CreateRemoteADBDataSourceRequest& setRemoteDatabase(string remoteDatabase) { DARABONBA_PTR_SET_VALUE(remoteDatabase_, remoteDatabase) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateRemoteADBDataSourceRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userPassword Field Functions 
    bool hasUserPassword() const { return this->userPassword_ != nullptr;};
    void deleteUserPassword() { this->userPassword_ = nullptr;};
    inline string userPassword() const { DARABONBA_PTR_GET_DEFAULT(userPassword_, "") };
    inline CreateRemoteADBDataSourceRequest& setUserPassword(string userPassword) { DARABONBA_PTR_SET_VALUE(userPassword_, userPassword) };


  protected:
    // Customer-specified DataSourceName.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // Instance ID of the data being used (required).
    // 
    // This parameter is required.
    std::shared_ptr<string> localDBInstanceId_ = nullptr;
    // Database name of the data being used (required)
    // 
    // This parameter is required.
    std::shared_ptr<string> localDatabase_ = nullptr;
    // Management account of the data-using instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> managerUserName_ = nullptr;
    // Password of the management account of the data-using instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> managerUserPassword_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Instance ID providing the data (required).
    // 
    // This parameter is required.
    std::shared_ptr<string> remoteDBInstanceId_ = nullptr;
    // Database name providing the data (required).
    // 
    // This parameter is required.
    std::shared_ptr<string> remoteDatabase_ = nullptr;
    // Account name of the data-providing instance used for user mapping (required).
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
    // Password of the data-providing instance account used for user mapping.
    // 
    // This parameter is required.
    std::shared_ptr<string> userPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
