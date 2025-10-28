// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURETOKENRESPONSEBODYSECURETOKEN_HPP_
#define ALIBABACLOUD_MODELS_GETSECURETOKENRESPONSEBODYSECURETOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetSecureTokenResponseBodySecureToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecureTokenResponseBodySecureToken& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(AddressServerHost, addressServerHost_);
      DARABONBA_PTR_TO_JSON(BelongRegion, belongRegion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EdasId, edasId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MseInstanceId, mseInstanceId_);
      DARABONBA_PTR_TO_JSON(MseInternetAddress, mseInternetAddress_);
      DARABONBA_PTR_TO_JSON(MseIntranetAddress, mseIntranetAddress_);
      DARABONBA_PTR_TO_JSON(MseRegistryType, mseRegistryType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecureTokenResponseBodySecureToken& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(AddressServerHost, addressServerHost_);
      DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EdasId, edasId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MseInstanceId, mseInstanceId_);
      DARABONBA_PTR_FROM_JSON(MseInternetAddress, mseInternetAddress_);
      DARABONBA_PTR_FROM_JSON(MseIntranetAddress, mseIntranetAddress_);
      DARABONBA_PTR_FROM_JSON(MseRegistryType, mseRegistryType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetSecureTokenResponseBodySecureToken() = default ;
    GetSecureTokenResponseBodySecureToken(const GetSecureTokenResponseBodySecureToken &) = default ;
    GetSecureTokenResponseBodySecureToken(GetSecureTokenResponseBodySecureToken &&) = default ;
    GetSecureTokenResponseBodySecureToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecureTokenResponseBodySecureToken() = default ;
    GetSecureTokenResponseBodySecureToken& operator=(const GetSecureTokenResponseBodySecureToken &) = default ;
    GetSecureTokenResponseBodySecureToken& operator=(GetSecureTokenResponseBodySecureToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKey_ == nullptr
        && return this->addressServerHost_ == nullptr && return this->belongRegion_ == nullptr && return this->description_ == nullptr && return this->edasId_ == nullptr && return this->id_ == nullptr
        && return this->mseInstanceId_ == nullptr && return this->mseInternetAddress_ == nullptr && return this->mseIntranetAddress_ == nullptr && return this->mseRegistryType_ == nullptr && return this->regionId_ == nullptr
        && return this->regionName_ == nullptr && return this->secretKey_ == nullptr && return this->tenantId_ == nullptr && return this->userId_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline GetSecureTokenResponseBodySecureToken& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // addressServerHost Field Functions 
    bool hasAddressServerHost() const { return this->addressServerHost_ != nullptr;};
    void deleteAddressServerHost() { this->addressServerHost_ = nullptr;};
    inline string addressServerHost() const { DARABONBA_PTR_GET_DEFAULT(addressServerHost_, "") };
    inline GetSecureTokenResponseBodySecureToken& setAddressServerHost(string addressServerHost) { DARABONBA_PTR_SET_VALUE(addressServerHost_, addressServerHost) };


    // belongRegion Field Functions 
    bool hasBelongRegion() const { return this->belongRegion_ != nullptr;};
    void deleteBelongRegion() { this->belongRegion_ = nullptr;};
    inline string belongRegion() const { DARABONBA_PTR_GET_DEFAULT(belongRegion_, "") };
    inline GetSecureTokenResponseBodySecureToken& setBelongRegion(string belongRegion) { DARABONBA_PTR_SET_VALUE(belongRegion_, belongRegion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSecureTokenResponseBodySecureToken& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edasId Field Functions 
    bool hasEdasId() const { return this->edasId_ != nullptr;};
    void deleteEdasId() { this->edasId_ = nullptr;};
    inline string edasId() const { DARABONBA_PTR_GET_DEFAULT(edasId_, "") };
    inline GetSecureTokenResponseBodySecureToken& setEdasId(string edasId) { DARABONBA_PTR_SET_VALUE(edasId_, edasId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSecureTokenResponseBodySecureToken& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mseInstanceId Field Functions 
    bool hasMseInstanceId() const { return this->mseInstanceId_ != nullptr;};
    void deleteMseInstanceId() { this->mseInstanceId_ = nullptr;};
    inline string mseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mseInstanceId_, "") };
    inline GetSecureTokenResponseBodySecureToken& setMseInstanceId(string mseInstanceId) { DARABONBA_PTR_SET_VALUE(mseInstanceId_, mseInstanceId) };


    // mseInternetAddress Field Functions 
    bool hasMseInternetAddress() const { return this->mseInternetAddress_ != nullptr;};
    void deleteMseInternetAddress() { this->mseInternetAddress_ = nullptr;};
    inline string mseInternetAddress() const { DARABONBA_PTR_GET_DEFAULT(mseInternetAddress_, "") };
    inline GetSecureTokenResponseBodySecureToken& setMseInternetAddress(string mseInternetAddress) { DARABONBA_PTR_SET_VALUE(mseInternetAddress_, mseInternetAddress) };


    // mseIntranetAddress Field Functions 
    bool hasMseIntranetAddress() const { return this->mseIntranetAddress_ != nullptr;};
    void deleteMseIntranetAddress() { this->mseIntranetAddress_ = nullptr;};
    inline string mseIntranetAddress() const { DARABONBA_PTR_GET_DEFAULT(mseIntranetAddress_, "") };
    inline GetSecureTokenResponseBodySecureToken& setMseIntranetAddress(string mseIntranetAddress) { DARABONBA_PTR_SET_VALUE(mseIntranetAddress_, mseIntranetAddress) };


    // mseRegistryType Field Functions 
    bool hasMseRegistryType() const { return this->mseRegistryType_ != nullptr;};
    void deleteMseRegistryType() { this->mseRegistryType_ = nullptr;};
    inline string mseRegistryType() const { DARABONBA_PTR_GET_DEFAULT(mseRegistryType_, "") };
    inline GetSecureTokenResponseBodySecureToken& setMseRegistryType(string mseRegistryType) { DARABONBA_PTR_SET_VALUE(mseRegistryType_, mseRegistryType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSecureTokenResponseBodySecureToken& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline GetSecureTokenResponseBodySecureToken& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline GetSecureTokenResponseBodySecureToken& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetSecureTokenResponseBodySecureToken& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetSecureTokenResponseBodySecureToken& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The AccessKey ID used in the namespace.
    std::shared_ptr<string> accessKey_ = nullptr;
    // The address of Address Server associated with the namespace.
    std::shared_ptr<string> addressServerHost_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> belongRegion_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the Alibaba Cloud account that activated Enterprise Distributed Application Service (EDAS).
    std::shared_ptr<string> edasId_ = nullptr;
    // The ID of the security token.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the MSE instance.
    std::shared_ptr<string> mseInstanceId_ = nullptr;
    // The public endpoint of the MSE registry.
    std::shared_ptr<string> mseInternetAddress_ = nullptr;
    // The private endpoint of the MSE registry.
    std::shared_ptr<string> mseIntranetAddress_ = nullptr;
    // The type of the Microservices Engine (MSE) registry.
    // 
    // *   default: the shared registry of EDAS
    // *   exclusive_mse: MSE Nacos registry
    std::shared_ptr<string> mseRegistryType_ = nullptr;
    // The ID of the region where the namespace resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the region where the namespace resides.
    std::shared_ptr<string> regionName_ = nullptr;
    // The AccessKey secret used in the namespace.
    std::shared_ptr<string> secretKey_ = nullptr;
    // The tenant ID of the namespace.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
