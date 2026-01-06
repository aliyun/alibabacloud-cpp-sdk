// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELAKESTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELAKESTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateLakeStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLakeStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLakeStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateLakeStorageRequest() = default ;
    UpdateLakeStorageRequest(const UpdateLakeStorageRequest &) = default ;
    UpdateLakeStorageRequest(UpdateLakeStorageRequest &&) = default ;
    UpdateLakeStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLakeStorageRequest() = default ;
    UpdateLakeStorageRequest& operator=(const UpdateLakeStorageRequest &) = default ;
    UpdateLakeStorageRequest& operator=(UpdateLakeStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Permissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(Read, read_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Write, write_);
      };
      friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(Read, read_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Write, write_);
      };
      Permissions() = default ;
      Permissions(const Permissions &) = default ;
      Permissions(Permissions &&) = default ;
      Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Permissions() = default ;
      Permissions& operator=(const Permissions &) = default ;
      Permissions& operator=(Permissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->account_ == nullptr
        && this->read_ == nullptr && this->type_ == nullptr && this->write_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline Permissions& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // read Field Functions 
      bool hasRead() const { return this->read_ != nullptr;};
      void deleteRead() { this->read_ = nullptr;};
      inline bool getRead() const { DARABONBA_PTR_GET_DEFAULT(read_, false) };
      inline Permissions& setRead(bool read) { DARABONBA_PTR_SET_VALUE(read_, read) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Permissions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // write Field Functions 
      bool hasWrite() const { return this->write_ != nullptr;};
      void deleteWrite() { this->write_ = nullptr;};
      inline bool getWrite() const { DARABONBA_PTR_GET_DEFAULT(write_, false) };
      inline Permissions& setWrite(bool write) { DARABONBA_PTR_SET_VALUE(write_, write) };


    protected:
      // The account ID.
      // 
      // This parameter is required.
      shared_ptr<string> account_ {};
      // The read permissions.
      // 
      // This parameter is required.
      shared_ptr<bool> read_ {};
      // The account type.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The write permissions.
      // 
      // This parameter is required.
      shared_ptr<bool> write_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->description_ == nullptr && this->lakeStorageId_ == nullptr && this->permissions_ == nullptr && this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateLakeStorageRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLakeStorageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lakeStorageId Field Functions 
    bool hasLakeStorageId() const { return this->lakeStorageId_ != nullptr;};
    void deleteLakeStorageId() { this->lakeStorageId_ = nullptr;};
    inline string getLakeStorageId() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageId_, "") };
    inline UpdateLakeStorageRequest& setLakeStorageId(string lakeStorageId) { DARABONBA_PTR_SET_VALUE(lakeStorageId_, lakeStorageId) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<UpdateLakeStorageRequest::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<UpdateLakeStorageRequest::Permissions>) };
    inline vector<UpdateLakeStorageRequest::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<UpdateLakeStorageRequest::Permissions>) };
    inline UpdateLakeStorageRequest& setPermissions(const vector<UpdateLakeStorageRequest::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline UpdateLakeStorageRequest& setPermissions(vector<UpdateLakeStorageRequest::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLakeStorageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster that is associated with the lake storage.
    shared_ptr<string> DBClusterId_ {};
    // The description of the lake storage.
    shared_ptr<string> description_ {};
    // The unique identifier of the lake storage.
    shared_ptr<string> lakeStorageId_ {};
    // The permissions on the lake storage.
    shared_ptr<vector<UpdateLakeStorageRequest::Permissions>> permissions_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
