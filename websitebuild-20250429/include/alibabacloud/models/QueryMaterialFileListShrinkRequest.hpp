// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMATERIALFILELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMATERIALFILELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class QueryMaterialFileListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMaterialFileListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(MaxFileSize, maxFileSize_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MinFileSize, minFileSize_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StatusList, statusListShrink_);
      DARABONBA_PTR_TO_JSON(SuffixList, suffixListShrink_);
      DARABONBA_PTR_TO_JSON(TypeList, typeListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMaterialFileListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(MaxFileSize, maxFileSize_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MinFileSize, minFileSize_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusListShrink_);
      DARABONBA_PTR_FROM_JSON(SuffixList, suffixListShrink_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeListShrink_);
    };
    QueryMaterialFileListShrinkRequest() = default ;
    QueryMaterialFileListShrinkRequest(const QueryMaterialFileListShrinkRequest &) = default ;
    QueryMaterialFileListShrinkRequest(QueryMaterialFileListShrinkRequest &&) = default ;
    QueryMaterialFileListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMaterialFileListShrinkRequest() = default ;
    QueryMaterialFileListShrinkRequest& operator=(const QueryMaterialFileListShrinkRequest &) = default ;
    QueryMaterialFileListShrinkRequest& operator=(QueryMaterialFileListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->directoryId_ == nullptr && this->maxFileSize_ == nullptr && this->maxResults_ == nullptr && this->minFileSize_ == nullptr && this->name_ == nullptr
        && this->nextToken_ == nullptr && this->orderColumn_ == nullptr && this->orderType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->statusListShrink_ == nullptr && this->suffixListShrink_ == nullptr && this->typeListShrink_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryMaterialFileListShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline QueryMaterialFileListShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // maxFileSize Field Functions 
    bool hasMaxFileSize() const { return this->maxFileSize_ != nullptr;};
    void deleteMaxFileSize() { this->maxFileSize_ = nullptr;};
    inline int64_t getMaxFileSize() const { DARABONBA_PTR_GET_DEFAULT(maxFileSize_, 0L) };
    inline QueryMaterialFileListShrinkRequest& setMaxFileSize(int64_t maxFileSize) { DARABONBA_PTR_SET_VALUE(maxFileSize_, maxFileSize) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryMaterialFileListShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // minFileSize Field Functions 
    bool hasMinFileSize() const { return this->minFileSize_ != nullptr;};
    void deleteMinFileSize() { this->minFileSize_ = nullptr;};
    inline int64_t getMinFileSize() const { DARABONBA_PTR_GET_DEFAULT(minFileSize_, 0L) };
    inline QueryMaterialFileListShrinkRequest& setMinFileSize(int64_t minFileSize) { DARABONBA_PTR_SET_VALUE(minFileSize_, minFileSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryMaterialFileListShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryMaterialFileListShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline QueryMaterialFileListShrinkRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline QueryMaterialFileListShrinkRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryMaterialFileListShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMaterialFileListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusListShrink Field Functions 
    bool hasStatusListShrink() const { return this->statusListShrink_ != nullptr;};
    void deleteStatusListShrink() { this->statusListShrink_ = nullptr;};
    inline string getStatusListShrink() const { DARABONBA_PTR_GET_DEFAULT(statusListShrink_, "") };
    inline QueryMaterialFileListShrinkRequest& setStatusListShrink(string statusListShrink) { DARABONBA_PTR_SET_VALUE(statusListShrink_, statusListShrink) };


    // suffixListShrink Field Functions 
    bool hasSuffixListShrink() const { return this->suffixListShrink_ != nullptr;};
    void deleteSuffixListShrink() { this->suffixListShrink_ = nullptr;};
    inline string getSuffixListShrink() const { DARABONBA_PTR_GET_DEFAULT(suffixListShrink_, "") };
    inline QueryMaterialFileListShrinkRequest& setSuffixListShrink(string suffixListShrink) { DARABONBA_PTR_SET_VALUE(suffixListShrink_, suffixListShrink) };


    // typeListShrink Field Functions 
    bool hasTypeListShrink() const { return this->typeListShrink_ != nullptr;};
    void deleteTypeListShrink() { this->typeListShrink_ = nullptr;};
    inline string getTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(typeListShrink_, "") };
    inline QueryMaterialFileListShrinkRequest& setTypeListShrink(string typeListShrink) { DARABONBA_PTR_SET_VALUE(typeListShrink_, typeListShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    shared_ptr<int64_t> maxFileSize_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<int64_t> minFileSize_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> orderColumn_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> statusListShrink_ {};
    shared_ptr<string> suffixListShrink_ {};
    shared_ptr<string> typeListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
