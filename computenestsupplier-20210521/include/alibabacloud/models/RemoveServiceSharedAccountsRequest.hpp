// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESERVICESHAREDACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESERVICESHAREDACCOUNTSREQUEST_HPP_
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
  class RemoveServiceSharedAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveServiceSharedAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserAliUids, userAliUids_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveServiceSharedAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserAliUids, userAliUids_);
    };
    RemoveServiceSharedAccountsRequest() = default ;
    RemoveServiceSharedAccountsRequest(const RemoveServiceSharedAccountsRequest &) = default ;
    RemoveServiceSharedAccountsRequest(RemoveServiceSharedAccountsRequest &&) = default ;
    RemoveServiceSharedAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveServiceSharedAccountsRequest() = default ;
    RemoveServiceSharedAccountsRequest& operator=(const RemoveServiceSharedAccountsRequest &) = default ;
    RemoveServiceSharedAccountsRequest& operator=(RemoveServiceSharedAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->regionId_ != nullptr && this->serviceId_ != nullptr && this->type_ != nullptr && this->userAliUids_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveServiceSharedAccountsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveServiceSharedAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline RemoveServiceSharedAccountsRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RemoveServiceSharedAccountsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userAliUids Field Functions 
    bool hasUserAliUids() const { return this->userAliUids_ != nullptr;};
    void deleteUserAliUids() { this->userAliUids_ = nullptr;};
    inline const vector<int64_t> & userAliUids() const { DARABONBA_PTR_GET_CONST(userAliUids_, vector<int64_t>) };
    inline vector<int64_t> userAliUids() { DARABONBA_PTR_GET(userAliUids_, vector<int64_t>) };
    inline RemoveServiceSharedAccountsRequest& setUserAliUids(const vector<int64_t> & userAliUids) { DARABONBA_PTR_SET_VALUE(userAliUids_, userAliUids) };
    inline RemoveServiceSharedAccountsRequest& setUserAliUids(vector<int64_t> && userAliUids) { DARABONBA_PTR_SET_RVALUE(userAliUids_, userAliUids) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The share type of the service. Default value: SharedAccount. Valid values:
    // 
    // *   SharedAccount: The service is shared by multiple accounts.
    // *   Reseller: The service is distributed.
    std::shared_ptr<string> type_ = nullptr;
    // Whitelist accounts for service sharing.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> userAliUids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
