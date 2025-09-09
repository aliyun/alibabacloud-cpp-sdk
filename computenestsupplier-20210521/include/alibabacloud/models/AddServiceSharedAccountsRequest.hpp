// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSERVICESHAREDACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSERVICESHAREDACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddServiceSharedAccountsRequestSharedAccounts.hpp>
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
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->regionId_ != nullptr && this->serviceId_ != nullptr && this->sharedAccounts_ != nullptr && this->type_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddServiceSharedAccountsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddServiceSharedAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline AddServiceSharedAccountsRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // sharedAccounts Field Functions 
    bool hasSharedAccounts() const { return this->sharedAccounts_ != nullptr;};
    void deleteSharedAccounts() { this->sharedAccounts_ = nullptr;};
    inline const vector<AddServiceSharedAccountsRequestSharedAccounts> & sharedAccounts() const { DARABONBA_PTR_GET_CONST(sharedAccounts_, vector<AddServiceSharedAccountsRequestSharedAccounts>) };
    inline vector<AddServiceSharedAccountsRequestSharedAccounts> sharedAccounts() { DARABONBA_PTR_GET(sharedAccounts_, vector<AddServiceSharedAccountsRequestSharedAccounts>) };
    inline AddServiceSharedAccountsRequest& setSharedAccounts(const vector<AddServiceSharedAccountsRequestSharedAccounts> & sharedAccounts) { DARABONBA_PTR_SET_VALUE(sharedAccounts_, sharedAccounts) };
    inline AddServiceSharedAccountsRequest& setSharedAccounts(vector<AddServiceSharedAccountsRequestSharedAccounts> && sharedAccounts) { DARABONBA_PTR_SET_RVALUE(sharedAccounts_, sharedAccounts) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddServiceSharedAccountsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The shared account and permissions of the service.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddServiceSharedAccountsRequestSharedAccounts>> sharedAccounts_ = nullptr;
    // The share type of the service. Default value: SharedAccount. Valid values:
    // 
    // *   SharedAccount: The service is shared by multiple accounts.
    // *   Reseller: The service is distributed.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
