// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSKEYSINRECYCLEBINRESPONSEBODYACCESSKEYSACCESSKEY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSKEYSINRECYCLEBINRESPONSEBODYACCESSKEYSACCESSKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_TO_JSON(RecycleDate, recycleDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_FROM_JSON(RecycleDate, recycleDate_);
    };
    ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey() = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey(const ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey &) = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey(ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey &&) = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey() = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey& operator=(const ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey &) = default ;
    ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey& operator=(ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->createDate_ != nullptr && this->deleteDate_ != nullptr && this->recycleDate_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // deleteDate Field Functions 
    bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
    void deleteDeleteDate() { this->deleteDate_ = nullptr;};
    inline string deleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
    inline ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


    // recycleDate Field Functions 
    bool hasRecycleDate() const { return this->recycleDate_ != nullptr;};
    void deleteRecycleDate() { this->recycleDate_ = nullptr;};
    inline string recycleDate() const { DARABONBA_PTR_GET_DEFAULT(recycleDate_, "") };
    inline ListAccessKeysInRecycleBinResponseBodyAccessKeysAccessKey& setRecycleDate(string recycleDate) { DARABONBA_PTR_SET_VALUE(recycleDate_, recycleDate) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The time when the AccessKey pair was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The time when the AccessKey pair will be permanently deleted from the recycle bin.
    std::shared_ptr<string> deleteDate_ = nullptr;
    // The time when the AccessKey pair was deleted and moved to the recycle bin.
    std::shared_ptr<string> recycleDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
