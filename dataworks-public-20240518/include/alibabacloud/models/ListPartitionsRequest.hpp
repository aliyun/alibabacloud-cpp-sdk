// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListPartitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
    };
    ListPartitionsRequest() = default ;
    ListPartitionsRequest(const ListPartitionsRequest &) = default ;
    ListPartitionsRequest(ListPartitionsRequest &&) = default ;
    ListPartitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsRequest() = default ;
    ListPartitionsRequest& operator=(const ListPartitionsRequest &) = default ;
    ListPartitionsRequest& operator=(ListPartitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->order_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->sortBy_ == nullptr && return this->tableId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPartitionsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListPartitionsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPartitionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPartitionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListPartitionsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline ListPartitionsRequest& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


  protected:
    // The partition name.
    std::shared_ptr<string> name_ = nullptr;
    // The sort order. Default: Asc. Valid values:
    // 
    // *   Asc: Ascending order.
    // *   Desc: Descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Default: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default: 10. Maximum: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sort field. Default value: CreateTime. Valid values:
    // 
    // *   CreateTime: Creation time. Supported only for MaxCompute tables.
    // *   ModifyTime: Modification time. Supported only for MaxCompute tables.
    // *   Name: Name. Used for HMS-type tables.
    // *   RecordCount: Record count. Supported only for MaxCompute tables.
    // *   DataSize: Storage size. Supported only for MaxCompute tables.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The ID of the data table.You can refer to the ListTables API response and [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> tableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
