// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREDEEMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYREDEEMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRedeemResponseBodyDataRedeem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRedeemResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRedeemResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Redeem, redeem_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRedeemResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Redeem, redeem_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryRedeemResponseBodyData() = default ;
    QueryRedeemResponseBodyData(const QueryRedeemResponseBodyData &) = default ;
    QueryRedeemResponseBodyData(QueryRedeemResponseBodyData &&) = default ;
    QueryRedeemResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRedeemResponseBodyData() = default ;
    QueryRedeemResponseBodyData& operator=(const QueryRedeemResponseBodyData &) = default ;
    QueryRedeemResponseBodyData& operator=(QueryRedeemResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNum_ != nullptr
        && this->pageSize_ != nullptr && this->redeem_ != nullptr && this->totalCount_ != nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline QueryRedeemResponseBodyData& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryRedeemResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // redeem Field Functions 
    bool hasRedeem() const { return this->redeem_ != nullptr;};
    void deleteRedeem() { this->redeem_ = nullptr;};
    inline const Models::QueryRedeemResponseBodyDataRedeem & redeem() const { DARABONBA_PTR_GET_CONST(redeem_, Models::QueryRedeemResponseBodyDataRedeem) };
    inline Models::QueryRedeemResponseBodyDataRedeem redeem() { DARABONBA_PTR_GET(redeem_, Models::QueryRedeemResponseBodyDataRedeem) };
    inline QueryRedeemResponseBodyData& setRedeem(const Models::QueryRedeemResponseBodyDataRedeem & redeem) { DARABONBA_PTR_SET_VALUE(redeem_, redeem) };
    inline QueryRedeemResponseBodyData& setRedeem(Models::QueryRedeemResponseBodyDataRedeem && redeem) { DARABONBA_PTR_SET_RVALUE(redeem_, redeem) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryRedeemResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The details of the redemption coupon.
    std::shared_ptr<Models::QueryRedeemResponseBodyDataRedeem> redeem_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
