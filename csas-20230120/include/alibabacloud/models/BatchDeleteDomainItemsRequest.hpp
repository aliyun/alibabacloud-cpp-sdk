// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDOMAINITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDOMAINITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class BatchDeleteDomainItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDomainItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_TO_JSON(ListId, listId_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDomainItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_FROM_JSON(ListId, listId_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
    };
    BatchDeleteDomainItemsRequest() = default ;
    BatchDeleteDomainItemsRequest(const BatchDeleteDomainItemsRequest &) = default ;
    BatchDeleteDomainItemsRequest(BatchDeleteDomainItemsRequest &&) = default ;
    BatchDeleteDomainItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDomainItemsRequest() = default ;
    BatchDeleteDomainItemsRequest& operator=(const BatchDeleteDomainItemsRequest &) = default ;
    BatchDeleteDomainItemsRequest& operator=(BatchDeleteDomainItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemIds_ == nullptr
        && this->listId_ == nullptr && this->listType_ == nullptr; };
    // itemIds Field Functions 
    bool hasItemIds() const { return this->itemIds_ != nullptr;};
    void deleteItemIds() { this->itemIds_ = nullptr;};
    inline const vector<int64_t> & getItemIds() const { DARABONBA_PTR_GET_CONST(itemIds_, vector<int64_t>) };
    inline vector<int64_t> getItemIds() { DARABONBA_PTR_GET(itemIds_, vector<int64_t>) };
    inline BatchDeleteDomainItemsRequest& setItemIds(const vector<int64_t> & itemIds) { DARABONBA_PTR_SET_VALUE(itemIds_, itemIds) };
    inline BatchDeleteDomainItemsRequest& setItemIds(vector<int64_t> && itemIds) { DARABONBA_PTR_SET_RVALUE(itemIds_, itemIds) };


    // listId Field Functions 
    bool hasListId() const { return this->listId_ != nullptr;};
    void deleteListId() { this->listId_ = nullptr;};
    inline string getListId() const { DARABONBA_PTR_GET_DEFAULT(listId_, "") };
    inline BatchDeleteDomainItemsRequest& setListId(string listId) { DARABONBA_PTR_SET_VALUE(listId_, listId) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline BatchDeleteDomainItemsRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


  protected:
    // The IDs of domain name list entries.
    shared_ptr<vector<int64_t>> itemIds_ {};
    // The list ID. This is the unique business identifier used for policy references and add, delete, and modify operations.
    shared_ptr<string> listId_ {};
    // The list type (Blacklist/Whitelist).
    shared_ptr<string> listType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
