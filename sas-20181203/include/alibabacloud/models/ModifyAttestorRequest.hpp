// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYATTESTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYATTESTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyAttestorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAttestorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyRegionId, keyRegionId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAttestorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyRegionId, keyRegionId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    ModifyAttestorRequest() = default ;
    ModifyAttestorRequest(const ModifyAttestorRequest &) = default ;
    ModifyAttestorRequest(ModifyAttestorRequest &&) = default ;
    ModifyAttestorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAttestorRequest() = default ;
    ModifyAttestorRequest& operator=(const ModifyAttestorRequest &) = default ;
    ModifyAttestorRequest& operator=(ModifyAttestorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyId_ != nullptr
        && this->keyRegionId_ != nullptr && this->keyVersionId_ != nullptr && this->name_ != nullptr && this->remark_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->sourceIp_ != nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline ModifyAttestorRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyRegionId Field Functions 
    bool hasKeyRegionId() const { return this->keyRegionId_ != nullptr;};
    void deleteKeyRegionId() { this->keyRegionId_ = nullptr;};
    inline string keyRegionId() const { DARABONBA_PTR_GET_DEFAULT(keyRegionId_, "") };
    inline ModifyAttestorRequest& setKeyRegionId(string keyRegionId) { DARABONBA_PTR_SET_VALUE(keyRegionId_, keyRegionId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string keyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline ModifyAttestorRequest& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAttestorRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyAttestorRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAttestorRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyAttestorRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the KMS key.
    std::shared_ptr<string> keyId_ = nullptr;
    // The region ID of the Key Management Service (KMS) key.
    std::shared_ptr<string> keyRegionId_ = nullptr;
    // The version ID of the KMS key.
    std::shared_ptr<string> keyVersionId_ = nullptr;
    // The name of the witness.
    std::shared_ptr<string> name_ = nullptr;
    // The description.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
