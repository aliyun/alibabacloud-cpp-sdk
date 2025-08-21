// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSKEYSRESPONSEBODYACCESSKEYSACCESSKEY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSKEYSRESPONSEBODYACCESSKEYSACCESSKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAccessKeysResponseBodyAccessKeysAccessKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessKeysResponseBodyAccessKeysAccessKey& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessKeysResponseBodyAccessKeysAccessKey& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    ListAccessKeysResponseBodyAccessKeysAccessKey() = default ;
    ListAccessKeysResponseBodyAccessKeysAccessKey(const ListAccessKeysResponseBodyAccessKeysAccessKey &) = default ;
    ListAccessKeysResponseBodyAccessKeysAccessKey(ListAccessKeysResponseBodyAccessKeysAccessKey &&) = default ;
    ListAccessKeysResponseBodyAccessKeysAccessKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessKeysResponseBodyAccessKeysAccessKey() = default ;
    ListAccessKeysResponseBodyAccessKeysAccessKey& operator=(const ListAccessKeysResponseBodyAccessKeysAccessKey &) = default ;
    ListAccessKeysResponseBodyAccessKeysAccessKey& operator=(ListAccessKeysResponseBodyAccessKeysAccessKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->createDate_ != nullptr && this->status_ != nullptr && this->updateDate_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline ListAccessKeysResponseBodyAccessKeysAccessKey& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListAccessKeysResponseBodyAccessKeysAccessKey& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAccessKeysResponseBodyAccessKeysAccessKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline ListAccessKeysResponseBodyAccessKeysAccessKey& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The time when the AccessKey pair was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The status of the AccessKey pair. Valid values:
    // 
    // *   Active
    // *   Inactive
    std::shared_ptr<string> status_ = nullptr;
    // The time when the AccessKey pair was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
