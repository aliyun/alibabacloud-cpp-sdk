// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGERELATIONSHIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGERELATIONSHIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListLineageRelationshipsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineageRelationshipsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DstEntityId, dstEntityId_);
      DARABONBA_PTR_TO_JSON(DstEntityName, dstEntityName_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SrcEntityId, srcEntityId_);
      DARABONBA_PTR_TO_JSON(SrcEntityName, srcEntityName_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineageRelationshipsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DstEntityId, dstEntityId_);
      DARABONBA_PTR_FROM_JSON(DstEntityName, dstEntityName_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SrcEntityId, srcEntityId_);
      DARABONBA_PTR_FROM_JSON(SrcEntityName, srcEntityName_);
    };
    ListLineageRelationshipsRequest() = default ;
    ListLineageRelationshipsRequest(const ListLineageRelationshipsRequest &) = default ;
    ListLineageRelationshipsRequest(ListLineageRelationshipsRequest &&) = default ;
    ListLineageRelationshipsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineageRelationshipsRequest() = default ;
    ListLineageRelationshipsRequest& operator=(const ListLineageRelationshipsRequest &) = default ;
    ListLineageRelationshipsRequest& operator=(ListLineageRelationshipsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstEntityId_ == nullptr
        && this->dstEntityName_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr
        && this->srcEntityId_ == nullptr && this->srcEntityName_ == nullptr; };
    // dstEntityId Field Functions 
    bool hasDstEntityId() const { return this->dstEntityId_ != nullptr;};
    void deleteDstEntityId() { this->dstEntityId_ = nullptr;};
    inline string getDstEntityId() const { DARABONBA_PTR_GET_DEFAULT(dstEntityId_, "") };
    inline ListLineageRelationshipsRequest& setDstEntityId(string dstEntityId) { DARABONBA_PTR_SET_VALUE(dstEntityId_, dstEntityId) };


    // dstEntityName Field Functions 
    bool hasDstEntityName() const { return this->dstEntityName_ != nullptr;};
    void deleteDstEntityName() { this->dstEntityName_ = nullptr;};
    inline string getDstEntityName() const { DARABONBA_PTR_GET_DEFAULT(dstEntityName_, "") };
    inline ListLineageRelationshipsRequest& setDstEntityName(string dstEntityName) { DARABONBA_PTR_SET_VALUE(dstEntityName_, dstEntityName) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListLineageRelationshipsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLineageRelationshipsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLineageRelationshipsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLineageRelationshipsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // srcEntityId Field Functions 
    bool hasSrcEntityId() const { return this->srcEntityId_ != nullptr;};
    void deleteSrcEntityId() { this->srcEntityId_ = nullptr;};
    inline string getSrcEntityId() const { DARABONBA_PTR_GET_DEFAULT(srcEntityId_, "") };
    inline ListLineageRelationshipsRequest& setSrcEntityId(string srcEntityId) { DARABONBA_PTR_SET_VALUE(srcEntityId_, srcEntityId) };


    // srcEntityName Field Functions 
    bool hasSrcEntityName() const { return this->srcEntityName_ != nullptr;};
    void deleteSrcEntityName() { this->srcEntityName_ = nullptr;};
    inline string getSrcEntityName() const { DARABONBA_PTR_GET_DEFAULT(srcEntityName_, "") };
    inline ListLineageRelationshipsRequest& setSrcEntityName(string srcEntityName) { DARABONBA_PTR_SET_VALUE(srcEntityName_, srcEntityName) };


  protected:
    // The destination entity ID. For more information, see the table ID or field ID in the response returned by the ListTables or ListColumns operation. You can also specify a custom entity ID.
    // 
    // This parameter is required.
    shared_ptr<string> dstEntityId_ {};
    // The destination entity name. Supports fuzzy matching.
    shared_ptr<string> dstEntityName_ {};
    // The order in which schemas are sorted. Default value: Asc. Valid values:
    // 
    // *   Asc: ascending.
    // *   Desc: descending.
    shared_ptr<string> order_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The sort field. Default value: Name.
    shared_ptr<string> sortBy_ {};
    // The source entity ID. For more information, see the table ID or field ID in the response returned by the ListTables or ListColumns operation. You can also specify a custom entity ID.
    // 
    // This parameter is required.
    shared_ptr<string> srcEntityId_ {};
    // The source entity name. Supports fuzzy matching.
    shared_ptr<string> srcEntityName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
