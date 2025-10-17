// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSNAPSHOTPOLICYEXREQUESTCOPYENCRYPTIONCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSNAPSHOTPOLICYEXREQUESTCOPYENCRYPTIONCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfigurationArn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
    };
    ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration() = default ;
    ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration(const ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration &) = default ;
    ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration(ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration &&) = default ;
    ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration() = default ;
    ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration& operator=(const ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration &) = default ;
    ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration& operator=(ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->encrypted_ == nullptr && return this->KMSKeyId_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<Models::ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfigurationArn> & arn() const { DARABONBA_PTR_GET_CONST(arn_, vector<Models::ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfigurationArn>) };
    inline vector<Models::ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfigurationArn> arn() { DARABONBA_PTR_GET(arn_, vector<Models::ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfigurationArn>) };
    inline ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration& setArn(const vector<Models::ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfigurationArn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration& setArn(vector<Models::ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfigurationArn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


  protected:
    // This parameter is not publicly available.
    std::shared_ptr<vector<Models::ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfigurationArn>> arn_ = nullptr;
    // Specifies whether to enable encryption for cross-region snapshot replication. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The ID of the KMS key used for encryption in cross-region snapshot replication.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
