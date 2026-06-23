// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEMACSECKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEMACSECKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AssociateMacSecKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateMacSecKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cak, cak_);
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(Ckn, ckn_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateMacSecKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cak, cak_);
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(Ckn, ckn_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AssociateMacSecKeyRequest() = default ;
    AssociateMacSecKeyRequest(const AssociateMacSecKeyRequest &) = default ;
    AssociateMacSecKeyRequest(AssociateMacSecKeyRequest &&) = default ;
    AssociateMacSecKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateMacSecKeyRequest() = default ;
    AssociateMacSecKeyRequest& operator=(const AssociateMacSecKeyRequest &) = default ;
    AssociateMacSecKeyRequest& operator=(AssociateMacSecKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cak_ == nullptr
        && this->cipherSuite_ == nullptr && this->ckn_ == nullptr && this->physicalConnectionId_ == nullptr && this->regionId_ == nullptr; };
    // cak Field Functions 
    bool hasCak() const { return this->cak_ != nullptr;};
    void deleteCak() { this->cak_ = nullptr;};
    inline string getCak() const { DARABONBA_PTR_GET_DEFAULT(cak_, "") };
    inline AssociateMacSecKeyRequest& setCak(string cak) { DARABONBA_PTR_SET_VALUE(cak_, cak) };


    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline string getCipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, "") };
    inline AssociateMacSecKeyRequest& setCipherSuite(string cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // ckn Field Functions 
    bool hasCkn() const { return this->ckn_ != nullptr;};
    void deleteCkn() { this->ckn_ = nullptr;};
    inline string getCkn() const { DARABONBA_PTR_GET_DEFAULT(ckn_, "") };
    inline AssociateMacSecKeyRequest& setCkn(string ckn) { DARABONBA_PTR_SET_VALUE(ckn_, ckn) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline AssociateMacSecKeyRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateMacSecKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The key secret. This parameter accepts only hexadecimal characters. Lowercase letters are automatically converted to uppercase. The cipher suite determines the required length of the key secret: 32 hexadecimal characters for GCM-AES-128 or GCM-AES-XPN-128, and 64 hexadecimal characters for GCM-AES-256 or GCM-AES-XPN-256.
    // 
    // This parameter is required.
    shared_ptr<string> cak_ {};
    // The cipher suite. Valid values:
    // 
    // - GCM-AES-128
    // 
    // - GCM-AES-XPN-128
    // 
    // - GCM-AES-256
    // 
    // - GCM-AES-XPN-256
    // 
    // This parameter is required.
    shared_ptr<string> cipherSuite_ {};
    // The key name. This parameter accepts only hexadecimal characters. Lowercase letters are automatically converted to uppercase. The cipher suite determines the required length of the key name: 32 hexadecimal characters for GCM-AES-128 or GCM-AES-XPN-128, and 64 hexadecimal characters for GCM-AES-256 or GCM-AES-XPN-256.
    // 
    // This parameter is required.
    shared_ptr<string> ckn_ {};
    // The ID of the Express Connect physical connection.
    // 
    // This parameter is required.
    shared_ptr<string> physicalConnectionId_ {};
    // The region ID of the Express Connect physical connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/448570.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
