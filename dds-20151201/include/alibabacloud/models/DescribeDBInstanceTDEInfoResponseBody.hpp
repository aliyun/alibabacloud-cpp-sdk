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
    // 实例的自定义密钥。
    // 
    // 目前仅以下地域支持BYOK（Bring Your Own Key，用户可以自行管理和拥有加密密钥）：
    // - 华东1（杭州）
    // - 华东2（上海）
    // - 华北2（北京）
    // - 华南1（深圳）
    // - 中国（香港）
    // - 新加坡
    // - 马来西亚（吉隆坡）
    // 
    // > 支持BYOK，用户可以管理且拥有密钥，系统将返回用户的自定义密钥；不支持BYOK，用户不可管理密钥，系统将返回字符串`NoActiveBYOK`。
    shared_ptr<string> encryptionKey_ {};
    // 加密算法。
    shared_ptr<string> encryptorName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // 指定待授权角色的全局资源描述符ARN（Alibaba Cloud Resource Name）信息。
    shared_ptr<string> roleARN_ {};
    // The TDE status. Valid values:
    // 
    // *   **enabled**
    // *   **disabled**
    shared_ptr<string> TDEStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
