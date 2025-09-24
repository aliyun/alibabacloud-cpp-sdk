// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryProductListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryTotalCount, queryTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryTotalCount, queryTotalCount_);
    };
    QueryProductListRequest() = default ;
    QueryProductListRequest(const QueryProductListRequest &) = default ;
    QueryProductListRequest(QueryProductListRequest &&) = default ;
    QueryProductListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductListRequest() = default ;
    QueryProductListRequest& operator=(const QueryProductListRequest &) = default ;
    QueryProductListRequest& operator=(QueryProductListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNum_ != nullptr
        && this->pageSize_ != nullptr && this->queryTotalCount_ != nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryProductListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryProductListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryTotalCount Field Functions 
    bool hasQueryTotalCount() const { return this->queryTotalCount_ != nullptr;};
    void deleteQueryTotalCount() { this->queryTotalCount_ = nullptr;};
    inline bool queryTotalCount() const { DARABONBA_PTR_GET_DEFAULT(queryTotalCount_, false) };
    inline QueryProductListRequest& setQueryTotalCount(bool queryTotalCount) { DARABONBA_PTR_SET_VALUE(queryTotalCount_, queryTotalCount) };


  protected:
    // The page number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether to return the total number of services. Default value: false.
    std::shared_ptr<bool> queryTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
