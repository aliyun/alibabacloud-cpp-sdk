// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPXFSACCESSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPXFSACCESSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreatePxfsAccessTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePxfsAccessTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TtlSeconds, ttlSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePxfsAccessTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TtlSeconds, ttlSeconds_);
    };
    CreatePxfsAccessTokenRequest() = default ;
    CreatePxfsAccessTokenRequest(const CreatePxfsAccessTokenRequest &) = default ;
    CreatePxfsAccessTokenRequest(CreatePxfsAccessTokenRequest &&) = default ;
    CreatePxfsAccessTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePxfsAccessTokenRequest() = default ;
    CreatePxfsAccessTokenRequest& operator=(const CreatePxfsAccessTokenRequest &) = default ;
    CreatePxfsAccessTokenRequest& operator=(CreatePxfsAccessTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->identityName_ == nullptr && this->label_ == nullptr && this->regionId_ == nullptr && this->tenantId_ == nullptr && this->ttlSeconds_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreatePxfsAccessTokenRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // identityName Field Functions 
    bool hasIdentityName() const { return this->identityName_ != nullptr;};
    void deleteIdentityName() { this->identityName_ = nullptr;};
    inline string getIdentityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
    inline CreatePxfsAccessTokenRequest& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline CreatePxfsAccessTokenRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePxfsAccessTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePxfsAccessTokenRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // ttlSeconds Field Functions 
    bool hasTtlSeconds() const { return this->ttlSeconds_ != nullptr;};
    void deleteTtlSeconds() { this->ttlSeconds_ = nullptr;};
    inline int64_t getTtlSeconds() const { DARABONBA_PTR_GET_DEFAULT(ttlSeconds_, 0L) };
    inline CreatePxfsAccessTokenRequest& setTtlSeconds(int64_t ttlSeconds) { DARABONBA_PTR_SET_VALUE(ttlSeconds_, ttlSeconds) };


  protected:
    // The PolarDB-X instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The name of the identity.
    // 
    // This parameter is required.
    shared_ptr<string> identityName_ {};
    // The label of the token.
    shared_ptr<string> label_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
    // The validity period of the token.
    shared_ptr<int64_t> ttlSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
