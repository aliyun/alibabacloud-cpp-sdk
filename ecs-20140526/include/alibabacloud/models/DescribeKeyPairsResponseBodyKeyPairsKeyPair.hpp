// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODYKEYPAIRSKEYPAIR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODYKEYPAIRSKEYPAIR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeKeyPairsResponseBodyKeyPairsKeyPairTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeKeyPairsResponseBodyKeyPairsKeyPair : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsResponseBodyKeyPairsKeyPair& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsResponseBodyKeyPairsKeyPair& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeKeyPairsResponseBodyKeyPairsKeyPair() = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPair(const DescribeKeyPairsResponseBodyKeyPairsKeyPair &) = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPair(DescribeKeyPairsResponseBodyKeyPairsKeyPair &&) = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPair(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsResponseBodyKeyPairsKeyPair() = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPair& operator=(const DescribeKeyPairsResponseBodyKeyPairsKeyPair &) = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPair& operator=(DescribeKeyPairsResponseBodyKeyPairsKeyPair &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->keyPairFingerPrint_ == nullptr && return this->keyPairName_ == nullptr && return this->publicKey_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // keyPairFingerPrint Field Functions 
    bool hasKeyPairFingerPrint() const { return this->keyPairFingerPrint_ != nullptr;};
    void deleteKeyPairFingerPrint() { this->keyPairFingerPrint_ = nullptr;};
    inline string keyPairFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(keyPairFingerPrint_, "") };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setKeyPairFingerPrint(string keyPairFingerPrint) { DARABONBA_PTR_SET_VALUE(keyPairFingerPrint_, keyPairFingerPrint) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTags) };
    inline Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTags) };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setTags(const Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setTags(Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the key pair was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The fingerprint of the key pair.
    std::shared_ptr<string> keyPairFingerPrint_ = nullptr;
    // The name of the key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The content of the public key.
    std::shared_ptr<string> publicKey_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the key pair.
    std::shared_ptr<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
