// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDELETIONPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDELETIONPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class SetDeletionProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionProtectionDescription, deletionProtectionDescription_);
      DARABONBA_PTR_TO_JSON(EnableDeletionProtection, enableDeletionProtection_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(ProtectedResourceArn, protectedResourceArn_);
    };
    friend void from_json(const Darabonba::Json& j, SetDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionProtectionDescription, deletionProtectionDescription_);
      DARABONBA_PTR_FROM_JSON(EnableDeletionProtection, enableDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(ProtectedResourceArn, protectedResourceArn_);
    };
    SetDeletionProtectionRequest() = default ;
    SetDeletionProtectionRequest(const SetDeletionProtectionRequest &) = default ;
    SetDeletionProtectionRequest(SetDeletionProtectionRequest &&) = default ;
    SetDeletionProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDeletionProtectionRequest() = default ;
    SetDeletionProtectionRequest& operator=(const SetDeletionProtectionRequest &) = default ;
    SetDeletionProtectionRequest& operator=(SetDeletionProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionProtectionDescription_ == nullptr
        && return this->enableDeletionProtection_ == nullptr && return this->keyId_ == nullptr && return this->protectedResourceArn_ == nullptr; };
    // deletionProtectionDescription Field Functions 
    bool hasDeletionProtectionDescription() const { return this->deletionProtectionDescription_ != nullptr;};
    void deleteDeletionProtectionDescription() { this->deletionProtectionDescription_ = nullptr;};
    inline string deletionProtectionDescription() const { DARABONBA_PTR_GET_DEFAULT(deletionProtectionDescription_, "") };
    inline SetDeletionProtectionRequest& setDeletionProtectionDescription(string deletionProtectionDescription) { DARABONBA_PTR_SET_VALUE(deletionProtectionDescription_, deletionProtectionDescription) };


    // enableDeletionProtection Field Functions 
    bool hasEnableDeletionProtection() const { return this->enableDeletionProtection_ != nullptr;};
    void deleteEnableDeletionProtection() { this->enableDeletionProtection_ = nullptr;};
    inline bool enableDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(enableDeletionProtection_, false) };
    inline SetDeletionProtectionRequest& setEnableDeletionProtection(bool enableDeletionProtection) { DARABONBA_PTR_SET_VALUE(enableDeletionProtection_, enableDeletionProtection) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline SetDeletionProtectionRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // protectedResourceArn Field Functions 
    bool hasProtectedResourceArn() const { return this->protectedResourceArn_ != nullptr;};
    void deleteProtectedResourceArn() { this->protectedResourceArn_ = nullptr;};
    inline string protectedResourceArn() const { DARABONBA_PTR_GET_DEFAULT(protectedResourceArn_, "") };
    inline SetDeletionProtectionRequest& setProtectedResourceArn(string protectedResourceArn) { DARABONBA_PTR_SET_VALUE(protectedResourceArn_, protectedResourceArn) };


  protected:
    // The description of deletion protection.
    // 
    // >  This parameter takes effect only when you set the EnableDeletionProtection parameter to true.
    std::shared_ptr<string> deletionProtectionDescription_ = nullptr;
    // Specifies whether to enable deletion protection. Valid values:
    // 
    // *   true: enables deletion protection.
    // *   false: disables deletion protection.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableDeletionProtection_ = nullptr;
    std::shared_ptr<string> keyId_ = nullptr;
    // The ARN of the CMK for which you want to set deletion protection.
    // 
    // You can call the [DescribeKey](https://help.aliyun.com/document_detail/28952.html) operation to query the CMK ARN.
    std::shared_ptr<string> protectedResourceArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
