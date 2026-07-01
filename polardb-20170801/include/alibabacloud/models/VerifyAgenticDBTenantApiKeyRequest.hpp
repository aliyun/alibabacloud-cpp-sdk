// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYAGENTICDBTENANTAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYAGENTICDBTENANTAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class VerifyAgenticDBTenantApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyAgenticDBTenantApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyAgenticDBTenantApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    VerifyAgenticDBTenantApiKeyRequest() = default ;
    VerifyAgenticDBTenantApiKeyRequest(const VerifyAgenticDBTenantApiKeyRequest &) = default ;
    VerifyAgenticDBTenantApiKeyRequest(VerifyAgenticDBTenantApiKeyRequest &&) = default ;
    VerifyAgenticDBTenantApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyAgenticDBTenantApiKeyRequest() = default ;
    VerifyAgenticDBTenantApiKeyRequest& operator=(const VerifyAgenticDBTenantApiKeyRequest &) = default ;
    VerifyAgenticDBTenantApiKeyRequest& operator=(VerifyAgenticDBTenantApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->regionId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline VerifyAgenticDBTenantApiKeyRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline VerifyAgenticDBTenantApiKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> apiKey_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
