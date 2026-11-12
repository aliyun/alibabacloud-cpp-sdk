// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTDATABASEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTDATABASEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class RestartDatabaseInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartDatabaseInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RestartDatabaseInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RestartDatabaseInstanceRequest() = default ;
    RestartDatabaseInstanceRequest(const RestartDatabaseInstanceRequest &) = default ;
    RestartDatabaseInstanceRequest(RestartDatabaseInstanceRequest &&) = default ;
    RestartDatabaseInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartDatabaseInstanceRequest() = default ;
    RestartDatabaseInstanceRequest& operator=(const RestartDatabaseInstanceRequest &) = default ;
    RestartDatabaseInstanceRequest& operator=(RestartDatabaseInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->databaseInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RestartDatabaseInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // databaseInstanceId Field Functions 
    bool hasDatabaseInstanceId() const { return this->databaseInstanceId_ != nullptr;};
    void deleteDatabaseInstanceId() { this->databaseInstanceId_ = nullptr;};
    inline string getDatabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceId_, "") };
    inline RestartDatabaseInstanceRequest& setDatabaseInstanceId(string databaseInstanceId) { DARABONBA_PTR_SET_VALUE(databaseInstanceId_, databaseInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RestartDatabaseInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A client-generated token to ensure request idempotency. The token must be unique for each request. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The ID of the lightweight database instance.
    // 
    // This parameter is required.
    shared_ptr<string> databaseInstanceId_ {};
    // The region ID of the lightweight database instance. Call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to get the latest list of supported Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
