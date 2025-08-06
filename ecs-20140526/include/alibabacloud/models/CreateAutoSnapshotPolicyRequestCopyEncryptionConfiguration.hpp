// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUESTCOPYENCRYPTIONCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUESTCOPYENCRYPTIONCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAutoSnapshotPolicyRequestCopyEncryptionConfigurationArn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
    };
    CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration() = default ;
    CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration(const CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration &) = default ;
    CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration(CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration &&) = default ;
    CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration() = default ;
    CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration& operator=(const CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration &) = default ;
    CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration& operator=(CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->encrypted_ != nullptr && this->KMSKeyId_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<Models::CreateAutoSnapshotPolicyRequestCopyEncryptionConfigurationArn> & arn() const { DARABONBA_PTR_GET_CONST(arn_, vector<Models::CreateAutoSnapshotPolicyRequestCopyEncryptionConfigurationArn>) };
    inline vector<Models::CreateAutoSnapshotPolicyRequestCopyEncryptionConfigurationArn> arn() { DARABONBA_PTR_GET(arn_, vector<Models::CreateAutoSnapshotPolicyRequestCopyEncryptionConfigurationArn>) };
    inline CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration& setArn(const vector<Models::CreateAutoSnapshotPolicyRequestCopyEncryptionConfigurationArn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration& setArn(vector<Models::CreateAutoSnapshotPolicyRequestCopyEncryptionConfigurationArn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<vector<Models::CreateAutoSnapshotPolicyRequestCopyEncryptionConfigurationArn>> arn_ = nullptr;
    // Specifies whether to enable cross-region snapshot replication and encryption. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The ID of the Key Management Service (KMS) key used in cross-region snapshot replication and encryption.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
