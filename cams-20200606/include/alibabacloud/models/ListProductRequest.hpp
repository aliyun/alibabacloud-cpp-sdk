// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(After, after_);
      DARABONBA_PTR_TO_JSON(Before, before_);
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(WabaId, wabaId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(After, after_);
      DARABONBA_PTR_FROM_JSON(Before, before_);
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(WabaId, wabaId_);
    };
    ListProductRequest() = default ;
    ListProductRequest(const ListProductRequest &) = default ;
    ListProductRequest(ListProductRequest &&) = default ;
    ListProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductRequest() = default ;
    ListProductRequest& operator=(const ListProductRequest &) = default ;
    ListProductRequest& operator=(ListProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->after_ == nullptr
        && this->before_ == nullptr && this->catalogId_ == nullptr && this->custSpaceId_ == nullptr && this->fields_ == nullptr && this->limit_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->wabaId_ == nullptr; };
    // after Field Functions 
    bool hasAfter() const { return this->after_ != nullptr;};
    void deleteAfter() { this->after_ = nullptr;};
    inline string getAfter() const { DARABONBA_PTR_GET_DEFAULT(after_, "") };
    inline ListProductRequest& setAfter(string after) { DARABONBA_PTR_SET_VALUE(after_, after) };


    // before Field Functions 
    bool hasBefore() const { return this->before_ != nullptr;};
    void deleteBefore() { this->before_ = nullptr;};
    inline string getBefore() const { DARABONBA_PTR_GET_DEFAULT(before_, "") };
    inline ListProductRequest& setBefore(string before) { DARABONBA_PTR_SET_VALUE(before_, before) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string getCatalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListProductRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline ListProductRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string getFields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline ListProductRequest& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ListProductRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListProductRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListProductRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListProductRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // wabaId Field Functions 
    bool hasWabaId() const { return this->wabaId_ != nullptr;};
    void deleteWabaId() { this->wabaId_ = nullptr;};
    inline string getWabaId() const { DARABONBA_PTR_GET_DEFAULT(wabaId_, "") };
    inline ListProductRequest& setWabaId(string wabaId) { DARABONBA_PTR_SET_VALUE(wabaId_, wabaId) };


  protected:
    // The cursor that points to the end of the page of the returned data.
    shared_ptr<string> after_ {};
    // The cursor that points to the beginning of the page of the returned data.
    shared_ptr<string> before_ {};
    // The catalog ID.
    // 
    // This parameter is required.
    shared_ptr<string> catalogId_ {};
    // The space ID of the user within the independent software vendor (ISV) account.
    shared_ptr<string> custSpaceId_ {};
    // The fields. Separate multiple fields with commas (,).
    // 
    //  see [product fields](https://help.aliyun.com/document_detail/2579419.html)
    shared_ptr<string> fields_ {};
    // The number of products to be queried. Valid values: 1 to 1000.
    shared_ptr<int64_t> limit_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the WhatsApp Business account (WABA).
    // 
    // This parameter is required.
    shared_ptr<string> wabaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
