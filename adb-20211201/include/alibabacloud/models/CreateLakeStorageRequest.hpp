// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAKESTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAKESTORAGEREQUEST_HPP_
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
  class CreateLakeStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLakeStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLakeStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateLakeStorageRequest() = default ;
    CreateLakeStorageRequest(const CreateLakeStorageRequest &) = default ;
    CreateLakeStorageRequest(CreateLakeStorageRequest &&) = default ;
    CreateLakeStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLakeStorageRequest() = default ;
    CreateLakeStorageRequest& operator=(const CreateLakeStorageRequest &) = default ;
    CreateLakeStorageRequest& operator=(CreateLakeStorageRequest &&) = default ;
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
      shared_ptr<string> account_ {};
      // The read permissions.
      shared_ptr<bool> read_ {};
      // The account type.
      shared_ptr<string> type_ {};
      // The write permissions.
      shared_ptr<bool> write_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DBClusterId_ == nullptr && this->description_ == nullptr && this->permissions_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLakeStorageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateLakeStorageRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLakeStorageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<CreateLakeStorageRequest::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<CreateLakeStorageRequest::Permissions>) };
    inline vector<CreateLakeStorageRequest::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<CreateLakeStorageRequest::Permissions>) };
    inline CreateLakeStorageRequest& setPermissions(const vector<CreateLakeStorageRequest::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline CreateLakeStorageRequest& setPermissions(vector<CreateLakeStorageRequest::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLakeStorageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The ID of the AnalyticDB for MySQL cluster with which you want to associate the lake storage.
    shared_ptr<string> DBClusterId_ {};
    // The description of the lake storage.
    shared_ptr<string> description_ {};
    // The permissions that you want to grant on the lake storage to the Alibaba Cloud account besides the permissions that are automatically granted to the Resource Access Management (RAM) user or the Alibaba Cloud account.
    shared_ptr<vector<CreateLakeStorageRequest::Permissions>> permissions_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
