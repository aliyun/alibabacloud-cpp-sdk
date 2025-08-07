// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVATIONCODEDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVATIONCODEDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeActivationCodeDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActivationCodeDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivationCodeId, activationCodeId_);
      DARABONBA_PTR_TO_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActivationCodeDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivationCodeId, activationCodeId_);
      DARABONBA_PTR_FROM_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeActivationCodeDetailsRequest() = default ;
    DescribeActivationCodeDetailsRequest(const DescribeActivationCodeDetailsRequest &) = default ;
    DescribeActivationCodeDetailsRequest(DescribeActivationCodeDetailsRequest &&) = default ;
    DescribeActivationCodeDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActivationCodeDetailsRequest() = default ;
    DescribeActivationCodeDetailsRequest& operator=(const DescribeActivationCodeDetailsRequest &) = default ;
    DescribeActivationCodeDetailsRequest& operator=(DescribeActivationCodeDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activationCodeId_ != nullptr
        && this->aliyunOrderId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // activationCodeId Field Functions 
    bool hasActivationCodeId() const { return this->activationCodeId_ != nullptr;};
    void deleteActivationCodeId() { this->activationCodeId_ = nullptr;};
    inline int32_t activationCodeId() const { DARABONBA_PTR_GET_DEFAULT(activationCodeId_, 0) };
    inline DescribeActivationCodeDetailsRequest& setActivationCodeId(int32_t activationCodeId) { DARABONBA_PTR_SET_VALUE(activationCodeId_, activationCodeId) };


    // aliyunOrderId Field Functions 
    bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
    void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
    inline string aliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, "") };
    inline DescribeActivationCodeDetailsRequest& setAliyunOrderId(string aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeActivationCodeDetailsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeActivationCodeDetailsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeActivationCodeDetailsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeActivationCodeDetailsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the activation code.
    std::shared_ptr<int32_t> activationCodeId_ = nullptr;
    // The Alibaba Cloud order ID (including the virtual order ID).
    // 
    // This parameter is required.
    std::shared_ptr<string> aliyunOrderId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
