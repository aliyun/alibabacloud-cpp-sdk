// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYPUSHSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYPUSHSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchQueryPushStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryPushStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OutBizIds, outBizIdsShrink_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryPushStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OutBizIds, outBizIdsShrink_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    BatchQueryPushStatusShrinkRequest() = default ;
    BatchQueryPushStatusShrinkRequest(const BatchQueryPushStatusShrinkRequest &) = default ;
    BatchQueryPushStatusShrinkRequest(BatchQueryPushStatusShrinkRequest &&) = default ;
    BatchQueryPushStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryPushStatusShrinkRequest() = default ;
    BatchQueryPushStatusShrinkRequest& operator=(const BatchQueryPushStatusShrinkRequest &) = default ;
    BatchQueryPushStatusShrinkRequest& operator=(BatchQueryPushStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->outBizIdsShrink_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline BatchQueryPushStatusShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline BatchQueryPushStatusShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // outBizIdsShrink Field Functions 
    bool hasOutBizIdsShrink() const { return this->outBizIdsShrink_ != nullptr;};
    void deleteOutBizIdsShrink() { this->outBizIdsShrink_ = nullptr;};
    inline string getOutBizIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(outBizIdsShrink_, "") };
    inline BatchQueryPushStatusShrinkRequest& setOutBizIdsShrink(string outBizIdsShrink) { DARABONBA_PTR_SET_VALUE(outBizIdsShrink_, outBizIdsShrink) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline BatchQueryPushStatusShrinkRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline BatchQueryPushStatusShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> outBizIdsShrink_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
