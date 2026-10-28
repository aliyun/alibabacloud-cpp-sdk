// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEPXFSACCESSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEPXFSACCESSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class RevokePxfsAccessTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokePxfsAccessTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TokenId, tokenId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokePxfsAccessTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TokenId, tokenId_);
    };
    RevokePxfsAccessTokenRequest() = default ;
    RevokePxfsAccessTokenRequest(const RevokePxfsAccessTokenRequest &) = default ;
    RevokePxfsAccessTokenRequest(RevokePxfsAccessTokenRequest &&) = default ;
    RevokePxfsAccessTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokePxfsAccessTokenRequest() = default ;
    RevokePxfsAccessTokenRequest& operator=(const RevokePxfsAccessTokenRequest &) = default ;
    RevokePxfsAccessTokenRequest& operator=(RevokePxfsAccessTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->tenantId_ == nullptr && this->tokenId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline RevokePxfsAccessTokenRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RevokePxfsAccessTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RevokePxfsAccessTokenRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tokenId Field Functions 
    bool hasTokenId() const { return this->tokenId_ != nullptr;};
    void deleteTokenId() { this->tokenId_ = nullptr;};
    inline string getTokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
    inline RevokePxfsAccessTokenRequest& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


  protected:
    // The ID of the PolarDB-X instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
    // Token ID
    // 
    // This parameter is required.
    shared_ptr<string> tokenId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
