// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTLSCIPHERPOLICYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETTLSCIPHERPOLICYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetTLSCipherPolicyAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTLSCipherPolicyAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TLSCipherPolicyId, TLSCipherPolicyId_);
      DARABONBA_PTR_TO_JSON(TLSVersions, TLSVersions_);
    };
    friend void from_json(const Darabonba::Json& j, SetTLSCipherPolicyAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TLSCipherPolicyId, TLSCipherPolicyId_);
      DARABONBA_PTR_FROM_JSON(TLSVersions, TLSVersions_);
    };
    SetTLSCipherPolicyAttributeRequest() = default ;
    SetTLSCipherPolicyAttributeRequest(const SetTLSCipherPolicyAttributeRequest &) = default ;
    SetTLSCipherPolicyAttributeRequest(SetTLSCipherPolicyAttributeRequest &&) = default ;
    SetTLSCipherPolicyAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTLSCipherPolicyAttributeRequest() = default ;
    SetTLSCipherPolicyAttributeRequest& operator=(const SetTLSCipherPolicyAttributeRequest &) = default ;
    SetTLSCipherPolicyAttributeRequest& operator=(SetTLSCipherPolicyAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphers_ == nullptr
        && return this->name_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->TLSCipherPolicyId_ == nullptr && return this->TLSVersions_ == nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline const vector<string> & ciphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
    inline vector<string> ciphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
    inline SetTLSCipherPolicyAttributeRequest& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
    inline SetTLSCipherPolicyAttributeRequest& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SetTLSCipherPolicyAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetTLSCipherPolicyAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetTLSCipherPolicyAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetTLSCipherPolicyAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetTLSCipherPolicyAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetTLSCipherPolicyAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // TLSCipherPolicyId Field Functions 
    bool hasTLSCipherPolicyId() const { return this->TLSCipherPolicyId_ != nullptr;};
    void deleteTLSCipherPolicyId() { this->TLSCipherPolicyId_ = nullptr;};
    inline string TLSCipherPolicyId() const { DARABONBA_PTR_GET_DEFAULT(TLSCipherPolicyId_, "") };
    inline SetTLSCipherPolicyAttributeRequest& setTLSCipherPolicyId(string TLSCipherPolicyId) { DARABONBA_PTR_SET_VALUE(TLSCipherPolicyId_, TLSCipherPolicyId) };


    // TLSVersions Field Functions 
    bool hasTLSVersions() const { return this->TLSVersions_ != nullptr;};
    void deleteTLSVersions() { this->TLSVersions_ = nullptr;};
    inline const vector<string> & TLSVersions() const { DARABONBA_PTR_GET_CONST(TLSVersions_, vector<string>) };
    inline vector<string> TLSVersions() { DARABONBA_PTR_GET(TLSVersions_, vector<string>) };
    inline SetTLSCipherPolicyAttributeRequest& setTLSVersions(const vector<string> & TLSVersions) { DARABONBA_PTR_SET_VALUE(TLSVersions_, TLSVersions) };
    inline SetTLSCipherPolicyAttributeRequest& setTLSVersions(vector<string> && TLSVersions) { DARABONBA_PTR_SET_RVALUE(TLSVersions_, TLSVersions) };


  protected:
    // The cipher suites supported by the TLS version.
    // 
    // The specified cipher suites must be supported by at least one TLS protocol version that you specify. For example, if you set the TLSVersions parameter to TLSv1.3, you must specify cipher suites that are supported by this protocol version.
    // 
    // TLS 1.0 and TLS 1.1 support the following cipher suites:
    // 
    // *   ECDHE-ECDSA-AES128-SHA
    // *   ECDHE-ECDSA-AES256-SHA
    // *   ECDHE-RSA-AES128-SHA
    // *   ECDHE-RSA-AES256-SHA
    // *   AES128-SHA AES256-SHA
    // *   DES-CBC3-SHA
    // 
    // TLS 1.2 supports the following cipher suites:
    // 
    // *   ECDHE-ECDSA-AES128-SHA
    // *   ECDHE-ECDSA-AES256-SHA
    // *   ECDHE-RSA-AES128-SHA
    // *   ECDHE-RSA-AES256-SHA
    // *   AES128-SHA AES256-SHA
    // *   DES-CBC3-SHA
    // *   ECDHE-ECDSA-AES128-GCM-SHA256
    // *   ECDHE-ECDSA-AES256-GCM-SHA384
    // *   ECDHE-ECDSA-AES128-SHA256
    // *   ECDHE-ECDSA-AES256-SHA384
    // *   ECDHE-RSA-AES128-GCM-SHA256
    // *   ECDHE-RSA-AES256-GCM-SHA384
    // *   ECDHE-RSA-AES128-SHA256
    // *   ECDHE-RSA-AES256-SHA384
    // *   AES128-GCM-SHA256
    // *   AES256-GCM-SHA384
    // *   AES128-SHA256 AES256-SHA256
    // 
    // TLS 1.3 supports the following cipher suites:
    // 
    // *   TLS_AES_128_GCM_SHA256
    // *   TLS_AES_256_GCM_SHA384
    // *   TLS_CHACHA20_POLY1305_SHA256
    // *   TLS_AES_128_CCM_SHA256
    // *   TLS_AES_128_CCM_8_SHA256
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> ciphers_ = nullptr;
    // The name of the TLS policy. The name must be 2 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the Server Load Balancer (SLB) instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the TLS policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> TLSCipherPolicyId_ = nullptr;
    // The version of the TLS protocol. Valid values: **TLSv1.0**, **TLSv1.1**, **TLSv1.2**, and **TLSv1.3**.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> TLSVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
