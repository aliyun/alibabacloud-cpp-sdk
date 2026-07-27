// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGWCONSUMERORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGWCONSUMERORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateGwConsumerOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGwConsumerOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(KeyCount, keyCount_);
      DARABONBA_PTR_TO_JSON(PackageSpec, packageSpec_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGwConsumerOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(KeyCount, keyCount_);
      DARABONBA_PTR_FROM_JSON(PackageSpec, packageSpec_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateGwConsumerOrderRequest() = default ;
    CreateGwConsumerOrderRequest(const CreateGwConsumerOrderRequest &) = default ;
    CreateGwConsumerOrderRequest(CreateGwConsumerOrderRequest &&) = default ;
    CreateGwConsumerOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGwConsumerOrderRequest() = default ;
    CreateGwConsumerOrderRequest& operator=(const CreateGwConsumerOrderRequest &) = default ;
    CreateGwConsumerOrderRequest& operator=(CreateGwConsumerOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->expireTime_ == nullptr && this->gatewayId_ == nullptr && this->keyCount_ == nullptr && this->packageSpec_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateGwConsumerOrderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateGwConsumerOrderRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateGwConsumerOrderRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // keyCount Field Functions 
    bool hasKeyCount() const { return this->keyCount_ != nullptr;};
    void deleteKeyCount() { this->keyCount_ = nullptr;};
    inline int32_t getKeyCount() const { DARABONBA_PTR_GET_DEFAULT(keyCount_, 0) };
    inline CreateGwConsumerOrderRequest& setKeyCount(int32_t keyCount) { DARABONBA_PTR_SET_VALUE(keyCount_, keyCount) };


    // packageSpec Field Functions 
    bool hasPackageSpec() const { return this->packageSpec_ != nullptr;};
    void deletePackageSpec() { this->packageSpec_ = nullptr;};
    inline string getPackageSpec() const { DARABONBA_PTR_GET_DEFAULT(packageSpec_, "") };
    inline CreateGwConsumerOrderRequest& setPackageSpec(string packageSpec) { DARABONBA_PTR_SET_VALUE(packageSpec_, packageSpec) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGwConsumerOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The idempotence token.
    shared_ptr<string> clientToken_ {};
    // The expiration time of the API key in ISO 8601 format. The value must be later than the current time.
    // 
    // This parameter is required.
    shared_ptr<string> expireTime_ {};
    // The ID of the AI gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // The number of API keys to generate, which corresponds to the number of resource plans to purchase. Valid values: 1 to 30.
    // 
    // This parameter is required.
    shared_ptr<int32_t> keyCount_ {};
    // The specification tier of the resource plan. Valid values:
    // 
    // - basic: 3000 points per plan.
    // - advanced: 6000 points per plan.
    // - pro: 9000 points per plan.
    // 
    // This parameter is required.
    shared_ptr<string> packageSpec_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query region information.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
