// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONDBSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONDBSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeEncryptionDBSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEncryptionDBSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EncryptionDBRegion, encryptionDBRegion_);
      DARABONBA_PTR_TO_JSON(EncryptionDBStatus, encryptionDBStatus_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEncryptionDBSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EncryptionDBRegion, encryptionDBRegion_);
      DARABONBA_PTR_FROM_JSON(EncryptionDBStatus, encryptionDBStatus_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEncryptionDBSecretResponseBody() = default ;
    DescribeEncryptionDBSecretResponseBody(const DescribeEncryptionDBSecretResponseBody &) = default ;
    DescribeEncryptionDBSecretResponseBody(DescribeEncryptionDBSecretResponseBody &&) = default ;
    DescribeEncryptionDBSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEncryptionDBSecretResponseBody() = default ;
    DescribeEncryptionDBSecretResponseBody& operator=(const DescribeEncryptionDBSecretResponseBody &) = default ;
    DescribeEncryptionDBSecretResponseBody& operator=(DescribeEncryptionDBSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->encryptionDBRegion_ != nullptr && this->encryptionDBStatus_ != nullptr && this->encryptionKey_ != nullptr && this->encryptionKeyStatus_ != nullptr && this->requestId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeEncryptionDBSecretResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // encryptionDBRegion Field Functions 
    bool hasEncryptionDBRegion() const { return this->encryptionDBRegion_ != nullptr;};
    void deleteEncryptionDBRegion() { this->encryptionDBRegion_ = nullptr;};
    inline string encryptionDBRegion() const { DARABONBA_PTR_GET_DEFAULT(encryptionDBRegion_, "") };
    inline DescribeEncryptionDBSecretResponseBody& setEncryptionDBRegion(string encryptionDBRegion) { DARABONBA_PTR_SET_VALUE(encryptionDBRegion_, encryptionDBRegion) };


    // encryptionDBStatus Field Functions 
    bool hasEncryptionDBStatus() const { return this->encryptionDBStatus_ != nullptr;};
    void deleteEncryptionDBStatus() { this->encryptionDBStatus_ = nullptr;};
    inline string encryptionDBStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionDBStatus_, "") };
    inline DescribeEncryptionDBSecretResponseBody& setEncryptionDBStatus(string encryptionDBStatus) { DARABONBA_PTR_SET_VALUE(encryptionDBStatus_, encryptionDBStatus) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeEncryptionDBSecretResponseBody& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionKeyStatus Field Functions 
    bool hasEncryptionKeyStatus() const { return this->encryptionKeyStatus_ != nullptr;};
    void deleteEncryptionKeyStatus() { this->encryptionKeyStatus_ = nullptr;};
    inline string encryptionKeyStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyStatus_, "") };
    inline DescribeEncryptionDBSecretResponseBody& setEncryptionKeyStatus(string encryptionKeyStatus) { DARABONBA_PTR_SET_VALUE(encryptionKeyStatus_, encryptionKeyStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEncryptionDBSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> encryptionDBRegion_ = nullptr;
    std::shared_ptr<string> encryptionDBStatus_ = nullptr;
    std::shared_ptr<string> encryptionKey_ = nullptr;
    std::shared_ptr<string> encryptionKeyStatus_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
