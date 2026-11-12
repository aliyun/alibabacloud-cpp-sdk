// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDATABASEACCOUNTPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETDATABASEACCOUNTPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ResetDatabaseAccountPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDatabaseAccountPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDatabaseAccountPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ResetDatabaseAccountPasswordRequest() = default ;
    ResetDatabaseAccountPasswordRequest(const ResetDatabaseAccountPasswordRequest &) = default ;
    ResetDatabaseAccountPasswordRequest(ResetDatabaseAccountPasswordRequest &&) = default ;
    ResetDatabaseAccountPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDatabaseAccountPasswordRequest() = default ;
    ResetDatabaseAccountPasswordRequest& operator=(const ResetDatabaseAccountPasswordRequest &) = default ;
    ResetDatabaseAccountPasswordRequest& operator=(ResetDatabaseAccountPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountPassword_ == nullptr
        && this->clientToken_ == nullptr && this->databaseInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline ResetDatabaseAccountPasswordRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ResetDatabaseAccountPasswordRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // databaseInstanceId Field Functions 
    bool hasDatabaseInstanceId() const { return this->databaseInstanceId_ != nullptr;};
    void deleteDatabaseInstanceId() { this->databaseInstanceId_ = nullptr;};
    inline string getDatabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceId_, "") };
    inline ResetDatabaseAccountPasswordRequest& setDatabaseInstanceId(string databaseInstanceId) { DARABONBA_PTR_SET_VALUE(databaseInstanceId_, databaseInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetDatabaseAccountPasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The password of the administrator account for the database.
    // 
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, and you must ensure that the value is unique among different requests. The client token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The instance ID of the simple application server database.
    // 
    // This parameter is required.
    shared_ptr<string> databaseInstanceId_ {};
    // The region ID of the simple application server database instance. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the supported Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
