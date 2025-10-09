// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCatalogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    ListCatalogsRequest() = default ;
    ListCatalogsRequest(const ListCatalogsRequest &) = default ;
    ListCatalogsRequest(ListCatalogsRequest &&) = default ;
    ListCatalogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogsRequest() = default ;
    ListCatalogsRequest& operator=(const ListCatalogsRequest &) = default ;
    ListCatalogsRequest& operator=(ListCatalogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->name_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->parentMetaEntityId_ != nullptr
        && this->sortBy_ != nullptr && this->types_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListCatalogsRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCatalogsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListCatalogsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCatalogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCatalogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentMetaEntityId Field Functions 
    bool hasParentMetaEntityId() const { return this->parentMetaEntityId_ != nullptr;};
    void deleteParentMetaEntityId() { this->parentMetaEntityId_ = nullptr;};
    inline string parentMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(parentMetaEntityId_, "") };
    inline ListCatalogsRequest& setParentMetaEntityId(string parentMetaEntityId) { DARABONBA_PTR_SET_VALUE(parentMetaEntityId_, parentMetaEntityId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListCatalogsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListCatalogsRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListCatalogsRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The parent entity ID. For more information, see [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // Only DLF and StarRocks data sources support this parameter.
    // 
    // *   For DLF data sources, you can call this API operation to query all catalogs. In this case, you must set the `ParentMetaEntityId` parameter to `dlf`.
    // *   For StarRocks data sources, you can call this API operation to query the catalogs in a specific instance. In this case, you can configure the `ParentMetaEntityId` parameter in the `starrocks:(instance_id|encoded_jdbc_url)` format.
    // 
    // > \\
    // `instance_id`: the ID of an instance. If the related data source is added to DataWorks in Alibaba Cloud instance mode, you must configure this parameter.\\
    // `encoded_jdbc_url`: the JDBC connection string that is URL-encoded. If the related data source is added to DataWorks in connection string mode, you must configure this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentMetaEntityId_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<vector<string>> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
