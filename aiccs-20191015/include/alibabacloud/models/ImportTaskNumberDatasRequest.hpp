// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTTASKNUMBERDATASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTTASKNUMBERDATASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ImportTaskNumberDatasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportTaskNumberDatasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(OssFileName, ossFileName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumberList, phoneNumberList_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportTaskNumberDatasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(OssFileName, ossFileName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberList, phoneNumberList_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ImportTaskNumberDatasRequest() = default ;
    ImportTaskNumberDatasRequest(const ImportTaskNumberDatasRequest &) = default ;
    ImportTaskNumberDatasRequest(ImportTaskNumberDatasRequest &&) = default ;
    ImportTaskNumberDatasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportTaskNumberDatasRequest() = default ;
    ImportTaskNumberDatasRequest& operator=(const ImportTaskNumberDatasRequest &) = default ;
    ImportTaskNumberDatasRequest& operator=(ImportTaskNumberDatasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && this->encryptionType_ == nullptr && this->ossFileName_ == nullptr && this->ownerId_ == nullptr && this->phoneNumberList_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->taskId_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ImportTaskNumberDatasRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline int64_t getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, 0L) };
    inline ImportTaskNumberDatasRequest& setEncryptionType(int64_t encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // ossFileName Field Functions 
    bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
    void deleteOssFileName() { this->ossFileName_ = nullptr;};
    inline string getOssFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
    inline ImportTaskNumberDatasRequest& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ImportTaskNumberDatasRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumberList Field Functions 
    bool hasPhoneNumberList() const { return this->phoneNumberList_ != nullptr;};
    void deletePhoneNumberList() { this->phoneNumberList_ = nullptr;};
    inline const vector<Darabonba::Json> & getPhoneNumberList() const { DARABONBA_PTR_GET_CONST(phoneNumberList_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getPhoneNumberList() { DARABONBA_PTR_GET(phoneNumberList_, vector<Darabonba::Json>) };
    inline ImportTaskNumberDatasRequest& setPhoneNumberList(const vector<Darabonba::Json> & phoneNumberList) { DARABONBA_PTR_SET_VALUE(phoneNumberList_, phoneNumberList) };
    inline ImportTaskNumberDatasRequest& setPhoneNumberList(vector<Darabonba::Json> && phoneNumberList) { DARABONBA_PTR_SET_RVALUE(phoneNumberList_, phoneNumberList) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ImportTaskNumberDatasRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ImportTaskNumberDatasRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ImportTaskNumberDatasRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataType_ {};
    shared_ptr<int64_t> encryptionType_ {};
    shared_ptr<string> ossFileName_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<vector<Darabonba::Json>> phoneNumberList_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
