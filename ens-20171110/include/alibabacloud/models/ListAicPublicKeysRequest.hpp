// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICPUBLICKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAICPUBLICKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListAICPublicKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICPublicKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICPublicKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListAICPublicKeysRequest() = default ;
    ListAICPublicKeysRequest(const ListAICPublicKeysRequest &) = default ;
    ListAICPublicKeysRequest(ListAICPublicKeysRequest &&) = default ;
    ListAICPublicKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICPublicKeysRequest() = default ;
    ListAICPublicKeysRequest& operator=(const ListAICPublicKeysRequest &) = default ;
    ListAICPublicKeysRequest& operator=(ListAICPublicKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyGroup_ == nullptr
        && return this->keyName_ == nullptr && return this->keyType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // keyGroup Field Functions 
    bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
    void deleteKeyGroup() { this->keyGroup_ = nullptr;};
    inline string keyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
    inline ListAICPublicKeysRequest& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline ListAICPublicKeysRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline ListAICPublicKeysRequest& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAICPublicKeysRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAICPublicKeysRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Public key grouping
    std::shared_ptr<string> keyGroup_ = nullptr;
    // Public key name
    std::shared_ptr<string> keyName_ = nullptr;
    // Public key type
    std::shared_ptr<string> keyType_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
