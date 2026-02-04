// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceCLSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceCLSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyMode, encryptionKeyMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WhiteListMode, whiteListMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceCLSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyMode, encryptionKeyMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WhiteListMode, whiteListMode_);
    };
    DescribeDBInstanceCLSResponseBody() = default ;
    DescribeDBInstanceCLSResponseBody(const DescribeDBInstanceCLSResponseBody &) = default ;
    DescribeDBInstanceCLSResponseBody(DescribeDBInstanceCLSResponseBody &&) = default ;
    DescribeDBInstanceCLSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceCLSResponseBody() = default ;
    DescribeDBInstanceCLSResponseBody& operator=(const DescribeDBInstanceCLSResponseBody &) = default ;
    DescribeDBInstanceCLSResponseBody& operator=(DescribeDBInstanceCLSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->encryptionKey_ == nullptr && this->encryptionKeyMode_ == nullptr && this->requestId_ == nullptr && this->whiteListMode_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline DescribeDBInstanceCLSResponseBody& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBInstanceCLSResponseBody& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionKeyMode Field Functions 
    bool hasEncryptionKeyMode() const { return this->encryptionKeyMode_ != nullptr;};
    void deleteEncryptionKeyMode() { this->encryptionKeyMode_ = nullptr;};
    inline string getEncryptionKeyMode() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyMode_, "") };
    inline DescribeDBInstanceCLSResponseBody& setEncryptionKeyMode(string encryptionKeyMode) { DARABONBA_PTR_SET_VALUE(encryptionKeyMode_, encryptionKeyMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceCLSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // whiteListMode Field Functions 
    bool hasWhiteListMode() const { return this->whiteListMode_ != nullptr;};
    void deleteWhiteListMode() { this->whiteListMode_ = nullptr;};
    inline bool getWhiteListMode() const { DARABONBA_PTR_GET_DEFAULT(whiteListMode_, false) };
    inline DescribeDBInstanceCLSResponseBody& setWhiteListMode(bool whiteListMode) { DARABONBA_PTR_SET_VALUE(whiteListMode_, whiteListMode) };


  protected:
    shared_ptr<string> algorithm_ {};
    shared_ptr<string> encryptionKey_ {};
    shared_ptr<string> encryptionKeyMode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> whiteListMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
