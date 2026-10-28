// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPXFSACCESSTOKENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPXFSACCESSTOKENSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribePxfsAccessTokensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePxfsAccessTokensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePxfsAccessTokensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribePxfsAccessTokensRequest() = default ;
    DescribePxfsAccessTokensRequest(const DescribePxfsAccessTokensRequest &) = default ;
    DescribePxfsAccessTokensRequest(DescribePxfsAccessTokensRequest &&) = default ;
    DescribePxfsAccessTokensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePxfsAccessTokensRequest() = default ;
    DescribePxfsAccessTokensRequest& operator=(const DescribePxfsAccessTokensRequest &) = default ;
    DescribePxfsAccessTokensRequest& operator=(DescribePxfsAccessTokensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->identityName_ == nullptr && this->regionId_ == nullptr && this->tenantId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribePxfsAccessTokensRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // identityName Field Functions 
    bool hasIdentityName() const { return this->identityName_ != nullptr;};
    void deleteIdentityName() { this->identityName_ = nullptr;};
    inline string getIdentityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
    inline DescribePxfsAccessTokensRequest& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePxfsAccessTokensRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribePxfsAccessTokensRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The PolarDB-X instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The identity name.
    shared_ptr<string> identityName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
