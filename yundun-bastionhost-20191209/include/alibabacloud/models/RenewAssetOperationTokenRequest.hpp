// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWASSETOPERATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWASSETOPERATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class RenewAssetOperationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewAssetOperationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TokenId, tokenId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewAssetOperationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TokenId, tokenId_);
    };
    RenewAssetOperationTokenRequest() = default ;
    RenewAssetOperationTokenRequest(const RenewAssetOperationTokenRequest &) = default ;
    RenewAssetOperationTokenRequest(RenewAssetOperationTokenRequest &&) = default ;
    RenewAssetOperationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewAssetOperationTokenRequest() = default ;
    RenewAssetOperationTokenRequest& operator=(const RenewAssetOperationTokenRequest &) = default ;
    RenewAssetOperationTokenRequest& operator=(RenewAssetOperationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->tokenId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewAssetOperationTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RenewAssetOperationTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tokenId Field Functions 
    bool hasTokenId() const { return this->tokenId_ != nullptr;};
    void deleteTokenId() { this->tokenId_ = nullptr;};
    inline string getTokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
    inline RenewAssetOperationTokenRequest& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


  protected:
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the O\\&M token that you want to renew.
    // 
    // >  You can call the [GenerateAssetOperationToken](https://help.aliyun.com/document_detail/2758861.html) operation to query the O\\&M token ID.
    shared_ptr<string> tokenId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
