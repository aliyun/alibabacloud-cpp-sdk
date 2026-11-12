// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATABASEINSTANCEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATABASEINSTANCEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ModifyDatabaseInstanceDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatabaseInstanceDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DatabaseInstanceDescription, databaseInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatabaseInstanceDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DatabaseInstanceDescription, databaseInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDatabaseInstanceDescriptionRequest() = default ;
    ModifyDatabaseInstanceDescriptionRequest(const ModifyDatabaseInstanceDescriptionRequest &) = default ;
    ModifyDatabaseInstanceDescriptionRequest(ModifyDatabaseInstanceDescriptionRequest &&) = default ;
    ModifyDatabaseInstanceDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatabaseInstanceDescriptionRequest() = default ;
    ModifyDatabaseInstanceDescriptionRequest& operator=(const ModifyDatabaseInstanceDescriptionRequest &) = default ;
    ModifyDatabaseInstanceDescriptionRequest& operator=(ModifyDatabaseInstanceDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->databaseInstanceDescription_ == nullptr && this->databaseInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDatabaseInstanceDescriptionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // databaseInstanceDescription Field Functions 
    bool hasDatabaseInstanceDescription() const { return this->databaseInstanceDescription_ != nullptr;};
    void deleteDatabaseInstanceDescription() { this->databaseInstanceDescription_ = nullptr;};
    inline string getDatabaseInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceDescription_, "") };
    inline ModifyDatabaseInstanceDescriptionRequest& setDatabaseInstanceDescription(string databaseInstanceDescription) { DARABONBA_PTR_SET_VALUE(databaseInstanceDescription_, databaseInstanceDescription) };


    // databaseInstanceId Field Functions 
    bool hasDatabaseInstanceId() const { return this->databaseInstanceId_ != nullptr;};
    void deleteDatabaseInstanceId() { this->databaseInstanceId_ = nullptr;};
    inline string getDatabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceId_, "") };
    inline ModifyDatabaseInstanceDescriptionRequest& setDatabaseInstanceId(string databaseInstanceId) { DARABONBA_PTR_SET_VALUE(databaseInstanceId_, databaseInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDatabaseInstanceDescriptionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Ensures the idempotence of the request. You can generate the value from your client to ensure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters and can be up to 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the lightweight database instance.
    // 
    // This parameter is required.
    shared_ptr<string> databaseInstanceDescription_ {};
    // The instance ID of the lightweight database instance.
    // 
    // This parameter is required.
    shared_ptr<string> databaseInstanceId_ {};
    // The region ID of the lightweight database instance. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the list of supported Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
