// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSERVICESHAREDACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSERVICESHAREDACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class AddServiceSharedAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddServiceSharedAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(SharedAccounts, sharedAccounts_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddServiceSharedAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(SharedAccounts, sharedAccounts_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddServiceSharedAccountsRequest() = default ;
    AddServiceSharedAccountsRequest(const AddServiceSharedAccountsRequest &) = default ;
    AddServiceSharedAccountsRequest(AddServiceSharedAccountsRequest &&) = default ;
    AddServiceSharedAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddServiceSharedAccountsRequest() = default ;
    AddServiceSharedAccountsRequest& operator=(const AddServiceSharedAccountsRequest &) = default ;
    AddServiceSharedAccountsRequest& operator=(AddServiceSharedAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SharedAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharedAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(Permission, permission_);
        DARABONBA_PTR_TO_JSON(UserAliUid, userAliUid_);
      };
      friend void from_json(const Darabonba::Json& j, SharedAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Permission, permission_);
        DARABONBA_PTR_FROM_JSON(UserAliUid, userAliUid_);
      };
      SharedAccounts() = default ;
      SharedAccounts(const SharedAccounts &) = default ;
      SharedAccounts(SharedAccounts &&) = default ;
      SharedAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SharedAccounts() = default ;
      SharedAccounts& operator=(const SharedAccounts &) = default ;
      SharedAccounts& operator=(SharedAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->permission_ == nullptr
        && this->userAliUid_ == nullptr; };
      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
      inline SharedAccounts& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      // userAliUid Field Functions 
      bool hasUserAliUid() const { return this->userAliUid_ != nullptr;};
      void deleteUserAliUid() { this->userAliUid_ = nullptr;};
      inline string getUserAliUid() const { DARABONBA_PTR_GET_DEFAULT(userAliUid_, "") };
      inline SharedAccounts& setUserAliUid(string userAliUid) { DARABONBA_PTR_SET_VALUE(userAliUid_, userAliUid) };


    protected:
      // The permission type. Valid values:
      // 
      // - Deployable: The service can be deployed.
      // 
      // - Accessible: The service can be accessed.
      // 
      // This parameter is required.
      shared_ptr<string> permission_ {};
      // The UID of the Alibaba Cloud account.
      // 
      // This parameter is required.
      shared_ptr<string> userAliUid_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->regionId_ == nullptr && this->serviceId_ == nullptr && this->sharedAccounts_ == nullptr && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddServiceSharedAccountsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddServiceSharedAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline AddServiceSharedAccountsRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // sharedAccounts Field Functions 
    bool hasSharedAccounts() const { return this->sharedAccounts_ != nullptr;};
    void deleteSharedAccounts() { this->sharedAccounts_ = nullptr;};
    inline const vector<AddServiceSharedAccountsRequest::SharedAccounts> & getSharedAccounts() const { DARABONBA_PTR_GET_CONST(sharedAccounts_, vector<AddServiceSharedAccountsRequest::SharedAccounts>) };
    inline vector<AddServiceSharedAccountsRequest::SharedAccounts> getSharedAccounts() { DARABONBA_PTR_GET(sharedAccounts_, vector<AddServiceSharedAccountsRequest::SharedAccounts>) };
    inline AddServiceSharedAccountsRequest& setSharedAccounts(const vector<AddServiceSharedAccountsRequest::SharedAccounts> & sharedAccounts) { DARABONBA_PTR_SET_VALUE(sharedAccounts_, sharedAccounts) };
    inline AddServiceSharedAccountsRequest& setSharedAccounts(vector<AddServiceSharedAccountsRequest::SharedAccounts> && sharedAccounts) { DARABONBA_PTR_SET_RVALUE(sharedAccounts_, sharedAccounts) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddServiceSharedAccountsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // A unique identifier that you provide to ensure the idempotence of the request. The token can contain only ASCII characters and cannot be longer than 64 characters.
    shared_ptr<string> clientToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The shared accounts and their permissions.
    // 
    // This parameter is required.
    shared_ptr<vector<AddServiceSharedAccountsRequest::SharedAccounts>> sharedAccounts_ {};
    // The service sharing type. The default value is SharedAccount. Valid values:
    // 
    // - SharedAccount: The service is shared with a specified account.
    // 
    // - Reseller: The service is shared with a reseller.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
