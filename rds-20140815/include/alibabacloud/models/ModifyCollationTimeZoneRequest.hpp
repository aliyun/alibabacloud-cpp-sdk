// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOLLATIONTIMEZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOLLATIONTIMEZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyCollationTimeZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCollationTimeZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collation, collation_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCollationTimeZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collation, collation_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
    };
    ModifyCollationTimeZoneRequest() = default ;
    ModifyCollationTimeZoneRequest(const ModifyCollationTimeZoneRequest &) = default ;
    ModifyCollationTimeZoneRequest(ModifyCollationTimeZoneRequest &&) = default ;
    ModifyCollationTimeZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCollationTimeZoneRequest() = default ;
    ModifyCollationTimeZoneRequest& operator=(const ModifyCollationTimeZoneRequest &) = default ;
    ModifyCollationTimeZoneRequest& operator=(ModifyCollationTimeZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collation_ == nullptr
        && this->DBInstanceId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->timezone_ == nullptr; };
    // collation Field Functions 
    bool hasCollation() const { return this->collation_ != nullptr;};
    void deleteCollation() { this->collation_ = nullptr;};
    inline string getCollation() const { DARABONBA_PTR_GET_DEFAULT(collation_, "") };
    inline ModifyCollationTimeZoneRequest& setCollation(string collation) { DARABONBA_PTR_SET_VALUE(collation_, collation) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyCollationTimeZoneRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCollationTimeZoneRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCollationTimeZoneRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCollationTimeZoneRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ModifyCollationTimeZoneRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


  protected:
    // The character set collation of the instance. By default, the system does not modify the character set collation of the instance. Valid values:
    // 
    // *   **Chinese_PRC_CI_AS**
    // *   **Chinese_PRC_CS_AS**
    // *   **Chinese_PRC_BIN**
    // *   **Latin1_General_CI_AS**
    // *   **Latin1_General_CS_AS**
    // *   **SQL_Latin1_General_CP1_CI_AS**
    // *   **SQL_Latin1_General_CP1_CS_AS**
    // *   **Japanese_CI_AS**
    // *   **Japanese_CS_AS**
    // *   **Chinese_Taiwan_Stroke_CI_AS**
    // *   **Chinese_Taiwan_Stroke_CS_AS**
    // 
    // > *   The default character set collation of the instance is **Chinese_PRC_CI_AS**.
    // > *   You must specify one of the **Collation** and **Timezone** parameters.
    shared_ptr<string> collation_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The time zone of the instance. By default, the system does not modify the time zone.
    // 
    // > *   The default time zone of the instance is **China Standard Time**.
    // > *   You must specify one of the **Collation** and **Timezone** parameters.
    shared_ptr<string> timezone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
