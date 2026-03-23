// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVERECEIVERDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVERECEIVERDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SaveReceiverDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveReceiverDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomDetail, customDetail_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveReceiverDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomDetail, customDetail_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SaveReceiverDetailRequest() = default ;
    SaveReceiverDetailRequest(const SaveReceiverDetailRequest &) = default ;
    SaveReceiverDetailRequest(SaveReceiverDetailRequest &&) = default ;
    SaveReceiverDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveReceiverDetailRequest() = default ;
    SaveReceiverDetailRequest& operator=(const SaveReceiverDetailRequest &) = default ;
    SaveReceiverDetailRequest& operator=(SaveReceiverDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customDetail_ == nullptr
        && this->detail_ == nullptr && this->ownerId_ == nullptr && this->receiverId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // customDetail Field Functions 
    bool hasCustomDetail() const { return this->customDetail_ != nullptr;};
    void deleteCustomDetail() { this->customDetail_ = nullptr;};
    inline string getCustomDetail() const { DARABONBA_PTR_GET_DEFAULT(customDetail_, "") };
    inline SaveReceiverDetailRequest& setCustomDetail(string customDetail) { DARABONBA_PTR_SET_VALUE(customDetail_, customDetail) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline SaveReceiverDetailRequest& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SaveReceiverDetailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // receiverId Field Functions 
    bool hasReceiverId() const { return this->receiverId_ != nullptr;};
    void deleteReceiverId() { this->receiverId_ = nullptr;};
    inline string getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
    inline SaveReceiverDetailRequest& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SaveReceiverDetailRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SaveReceiverDetailRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The recipient\\"s email address and template parameters, in an array format.
    shared_ptr<string> customDetail_ {};
    // The recipient details. You can upload up to 500 recipients in a single request. The value is a string in a JSON array format. Each object in the array represents a recipient. For example: \\`[{ },{ },{ }...]\\`. The format for each recipient object is \\`[{"b":"birthday","e":"xxx\\@example.net","g":"gender","m":"mobile","n":"nickname","u":"name"}]\\`. If you add a duplicate recipient address, the system returns \\`"ErrorCount": 1\\`.
    // 
    // The format is \\`[{ },{ },{ }...]\\`. The format of the content within each \\`{}\\` is as follows:
    // 
    // [{"b":"birthday","e":"xxx\\@example.net","g":"gender","m":"mobile","n":"nickname","u":"name"}]. Pass the value as a string, not a list.
    // 
    // Inserting a duplicate recipient address returns "ErrorCount": 1.
    shared_ptr<string> detail_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the recipient list.
    // 
    // This parameter is required.
    shared_ptr<string> receiverId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
