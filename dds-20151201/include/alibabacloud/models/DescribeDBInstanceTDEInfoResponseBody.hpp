// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstanceTDEInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTDEInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptorName, encryptorName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTDEInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptorName, encryptorName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
    };
    DescribeDBInstanceTDEInfoResponseBody() = default ;
    DescribeDBInstanceTDEInfoResponseBody(const DescribeDBInstanceTDEInfoResponseBody &) = default ;
    DescribeDBInstanceTDEInfoResponseBody(DescribeDBInstanceTDEInfoResponseBody &&) = default ;
    DescribeDBInstanceTDEInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTDEInfoResponseBody() = default ;
    DescribeDBInstanceTDEInfoResponseBody& operator=(const DescribeDBInstanceTDEInfoResponseBody &) = default ;
    DescribeDBInstanceTDEInfoResponseBody& operator=(DescribeDBInstanceTDEInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptionKey_ == nullptr
        && this->encryptorName_ == nullptr && this->requestId_ == nullptr && this->roleARN_ == nullptr && this->TDEStatus_ == nullptr; };
    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBInstanceTDEInfoResponseBody& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptorName Field Functions 
    bool hasEncryptorName() const { return this->encryptorName_ != nullptr;};
    void deleteEncryptorName() { this->encryptorName_ = nullptr;};
    inline string getEncryptorName() const { DARABONBA_PTR_GET_DEFAULT(encryptorName_, "") };
    inline DescribeDBInstanceTDEInfoResponseBody& setEncryptorName(string encryptorName) { DARABONBA_PTR_SET_VALUE(encryptorName_, encryptorName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceTDEInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string getRoleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline DescribeDBInstanceTDEInfoResponseBody& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline string getTDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
    inline DescribeDBInstanceTDEInfoResponseBody& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


  protected:
    // The custom key of the instance.
    // 
    // Currently, only the following regions support Bring Your Own Key (BYOK), which allows you to manage and own encryption keys:
    // - China (Hangzhou)
    // - China (Shanghai)
    // - China (Beijing)
    // - China (Shenzhen)
    // - Hong Kong (China)
    // - Singapore
    // - Malaysia (Kuala Lumpur)
    // 
    // > If BYOK is supported, you can manage and own the key, and the system returns your custom key. If BYOK is not supported, you cannot manage the key, and the system returns the string `NoActiveBYOK`.
    shared_ptr<string> encryptionKey_ {};
    // The encryption algorithm.
    shared_ptr<string> encryptorName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The global resource descriptor ARN (Alibaba Cloud Resource Name) of the role pending authorization.
    shared_ptr<string> roleARN_ {};
    // The TDE enabling status. Valid values:
    // - **enabled**: TDE is enabled.
    // - **disabled**: TDE is disabled.
    // 
    // > If the TDE status is disabled, the **RoleARN**, **EncryptionKey**, and **EncryptorName** parameters are not returned.
    shared_ptr<string> TDEStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
