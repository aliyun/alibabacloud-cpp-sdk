// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListLineagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DstEntityId, dstEntityId_);
      DARABONBA_PTR_TO_JSON(DstEntityName, dstEntityName_);
      DARABONBA_PTR_TO_JSON(NeedAttachRelationship, needAttachRelationship_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SrcEntityId, srcEntityId_);
      DARABONBA_PTR_TO_JSON(SrcEntityName, srcEntityName_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DstEntityId, dstEntityId_);
      DARABONBA_PTR_FROM_JSON(DstEntityName, dstEntityName_);
      DARABONBA_PTR_FROM_JSON(NeedAttachRelationship, needAttachRelationship_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SrcEntityId, srcEntityId_);
      DARABONBA_PTR_FROM_JSON(SrcEntityName, srcEntityName_);
    };
    ListLineagesRequest() = default ;
    ListLineagesRequest(const ListLineagesRequest &) = default ;
    ListLineagesRequest(ListLineagesRequest &&) = default ;
    ListLineagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineagesRequest() = default ;
    ListLineagesRequest& operator=(const ListLineagesRequest &) = default ;
    ListLineagesRequest& operator=(ListLineagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstEntityId_ == nullptr
        && return this->dstEntityName_ == nullptr && return this->needAttachRelationship_ == nullptr && return this->order_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->sortBy_ == nullptr && return this->srcEntityId_ == nullptr && return this->srcEntityName_ == nullptr; };
    // dstEntityId Field Functions 
    bool hasDstEntityId() const { return this->dstEntityId_ != nullptr;};
    void deleteDstEntityId() { this->dstEntityId_ = nullptr;};
    inline string dstEntityId() const { DARABONBA_PTR_GET_DEFAULT(dstEntityId_, "") };
    inline ListLineagesRequest& setDstEntityId(string dstEntityId) { DARABONBA_PTR_SET_VALUE(dstEntityId_, dstEntityId) };


    // dstEntityName Field Functions 
    bool hasDstEntityName() const { return this->dstEntityName_ != nullptr;};
    void deleteDstEntityName() { this->dstEntityName_ = nullptr;};
    inline string dstEntityName() const { DARABONBA_PTR_GET_DEFAULT(dstEntityName_, "") };
    inline ListLineagesRequest& setDstEntityName(string dstEntityName) { DARABONBA_PTR_SET_VALUE(dstEntityName_, dstEntityName) };


    // needAttachRelationship Field Functions 
    bool hasNeedAttachRelationship() const { return this->needAttachRelationship_ != nullptr;};
    void deleteNeedAttachRelationship() { this->needAttachRelationship_ = nullptr;};
    inline bool needAttachRelationship() const { DARABONBA_PTR_GET_DEFAULT(needAttachRelationship_, false) };
    inline ListLineagesRequest& setNeedAttachRelationship(bool needAttachRelationship) { DARABONBA_PTR_SET_VALUE(needAttachRelationship_, needAttachRelationship) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListLineagesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLineagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLineagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLineagesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // srcEntityId Field Functions 
    bool hasSrcEntityId() const { return this->srcEntityId_ != nullptr;};
    void deleteSrcEntityId() { this->srcEntityId_ = nullptr;};
    inline string srcEntityId() const { DARABONBA_PTR_GET_DEFAULT(srcEntityId_, "") };
    inline ListLineagesRequest& setSrcEntityId(string srcEntityId) { DARABONBA_PTR_SET_VALUE(srcEntityId_, srcEntityId) };


    // srcEntityName Field Functions 
    bool hasSrcEntityName() const { return this->srcEntityName_ != nullptr;};
    void deleteSrcEntityName() { this->srcEntityName_ = nullptr;};
    inline string srcEntityName() const { DARABONBA_PTR_GET_DEFAULT(srcEntityName_, "") };
    inline ListLineagesRequest& setSrcEntityName(string srcEntityName) { DARABONBA_PTR_SET_VALUE(srcEntityName_, srcEntityName) };


  protected:
    // The destination entity ID. You can refer to the table or column ID returned by the ListTables or ListColumns operation, or use a custom entity ID.
    std::shared_ptr<string> dstEntityId_ = nullptr;
    // The destination entity name. Supports fuzzy matching.
    std::shared_ptr<string> dstEntityName_ = nullptr;
    // Specifies whether to return lineage information.
    std::shared_ptr<bool> needAttachRelationship_ = nullptr;
    // The sort order. Default value: Asc. Valid values:
    // 
    // *   Asc
    // *   Desc
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of records per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sort field. Default value: Name.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The source entity ID. You can refer to the table or column ID returned by the ListTables or ListColumns operation, or use a custom entity ID.
    std::shared_ptr<string> srcEntityId_ = nullptr;
    // The source entity name. Supports fuzzy matching.
    std::shared_ptr<string> srcEntityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
