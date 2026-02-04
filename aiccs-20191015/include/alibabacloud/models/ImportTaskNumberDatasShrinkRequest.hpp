// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTTASKNUMBERDATASSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTTASKNUMBERDATASSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ImportTaskNumberDatasShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportTaskNumberDatasShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(OssFileName, ossFileName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumberList, phoneNumberListShrink_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportTaskNumberDatasShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(OssFileName, ossFileName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberList, phoneNumberListShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ImportTaskNumberDatasShrinkRequest() = default ;
    ImportTaskNumberDatasShrinkRequest(const ImportTaskNumberDatasShrinkRequest &) = default ;
    ImportTaskNumberDatasShrinkRequest(ImportTaskNumberDatasShrinkRequest &&) = default ;
    ImportTaskNumberDatasShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportTaskNumberDatasShrinkRequest() = default ;
    ImportTaskNumberDatasShrinkRequest& operator=(const ImportTaskNumberDatasShrinkRequest &) = default ;
    ImportTaskNumberDatasShrinkRequest& operator=(ImportTaskNumberDatasShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && this->encryptionType_ == nullptr && this->ossFileName_ == nullptr && this->ownerId_ == nullptr && this->phoneNumberListShrink_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->taskId_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ImportTaskNumberDatasShrinkRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline int64_t getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, 0L) };
    inline ImportTaskNumberDatasShrinkRequest& setEncryptionType(int64_t encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // ossFileName Field Functions 
    bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
    void deleteOssFileName() { this->ossFileName_ = nullptr;};
    inline string getOssFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
    inline ImportTaskNumberDatasShrinkRequest& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ImportTaskNumberDatasShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumberListShrink Field Functions 
    bool hasPhoneNumberListShrink() const { return this->phoneNumberListShrink_ != nullptr;};
    void deletePhoneNumberListShrink() { this->phoneNumberListShrink_ = nullptr;};
    inline string getPhoneNumberListShrink() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberListShrink_, "") };
    inline ImportTaskNumberDatasShrinkRequest& setPhoneNumberListShrink(string phoneNumberListShrink) { DARABONBA_PTR_SET_VALUE(phoneNumberListShrink_, phoneNumberListShrink) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ImportTaskNumberDatasShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ImportTaskNumberDatasShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ImportTaskNumberDatasShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataType_ {};
    shared_ptr<int64_t> encryptionType_ {};
    shared_ptr<string> ossFileName_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> phoneNumberListShrink_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
