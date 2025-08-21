// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODYKEYPAIRSKEYPAIR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODYKEYPAIRSKEYPAIR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeKeyPairsResponseBodyKeyPairsKeyPair : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsResponseBodyKeyPairsKeyPair& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsResponseBodyKeyPairsKeyPair& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
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
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->keyPairFingerPrint_ != nullptr && this->keyPairId_ != nullptr && this->keyPairName_ != nullptr; };
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


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPair& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


  protected:
    // The time when the key pair was created. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The fingerprint of the key pair.
    std::shared_ptr<string> keyPairFingerPrint_ = nullptr;
    // The ID of the key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The name of the SSH key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
