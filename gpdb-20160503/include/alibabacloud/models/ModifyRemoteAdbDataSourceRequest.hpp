// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREMOTEADBDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREMOTEADBDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyRemoteADBDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRemoteADBDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(LocalDBInstanceId, localDBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserPassword, userPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRemoteADBDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(LocalDBInstanceId, localDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserPassword, userPassword_);
    };
    ModifyRemoteADBDataSourceRequest() = default ;
    ModifyRemoteADBDataSourceRequest(const ModifyRemoteADBDataSourceRequest &) = default ;
    ModifyRemoteADBDataSourceRequest(ModifyRemoteADBDataSourceRequest &&) = default ;
    ModifyRemoteADBDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRemoteADBDataSourceRequest() = default ;
    ModifyRemoteADBDataSourceRequest& operator=(const ModifyRemoteADBDataSourceRequest &) = default ;
    ModifyRemoteADBDataSourceRequest& operator=(ModifyRemoteADBDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && return this->dataSourceName_ == nullptr && return this->localDBInstanceId_ == nullptr && return this->ownerId_ == nullptr && return this->userName_ == nullptr && return this->userPassword_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ModifyRemoteADBDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ModifyRemoteADBDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // localDBInstanceId Field Functions 
    bool hasLocalDBInstanceId() const { return this->localDBInstanceId_ != nullptr;};
    void deleteLocalDBInstanceId() { this->localDBInstanceId_ = nullptr;};
    inline string localDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(localDBInstanceId_, "") };
    inline ModifyRemoteADBDataSourceRequest& setLocalDBInstanceId(string localDBInstanceId) { DARABONBA_PTR_SET_VALUE(localDBInstanceId_, localDBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyRemoteADBDataSourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModifyRemoteADBDataSourceRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userPassword Field Functions 
    bool hasUserPassword() const { return this->userPassword_ != nullptr;};
    void deleteUserPassword() { this->userPassword_ = nullptr;};
    inline string userPassword() const { DARABONBA_PTR_GET_DEFAULT(userPassword_, "") };
    inline ModifyRemoteADBDataSourceRequest& setUserPassword(string userPassword) { DARABONBA_PTR_SET_VALUE(userPassword_, userPassword) };


  protected:
    // Service ID
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // Specified dataSourceName.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The ID of the local data instance being used.
    // 
    // This parameter is required.
    std::shared_ptr<string> localDBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // New user name.
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
    // New user password, which must be transmitted in encrypted form.
    // 
    // This parameter is required.
    std::shared_ptr<string> userPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
