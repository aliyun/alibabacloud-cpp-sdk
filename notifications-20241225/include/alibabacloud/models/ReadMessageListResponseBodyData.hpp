// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadMessageListResponseBodyDataRows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadMessageListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
    };
    ReadMessageListResponseBodyData() = default ;
    ReadMessageListResponseBodyData(const ReadMessageListResponseBodyData &) = default ;
    ReadMessageListResponseBodyData(ReadMessageListResponseBodyData &&) = default ;
    ReadMessageListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageListResponseBodyData() = default ;
    ReadMessageListResponseBodyData& operator=(const ReadMessageListResponseBodyData &) = default ;
    ReadMessageListResponseBodyData& operator=(ReadMessageListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->rows_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ReadMessageListResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ReadMessageListResponseBodyData& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ReadMessageListResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ReadMessageListResponseBodyData& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ReadMessageListResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<Models::ReadMessageListResponseBodyDataRows> & rows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Models::ReadMessageListResponseBodyDataRows>) };
    inline vector<Models::ReadMessageListResponseBodyDataRows> rows() { DARABONBA_PTR_GET(rows_, vector<Models::ReadMessageListResponseBodyDataRows>) };
    inline ReadMessageListResponseBodyData& setRows(const vector<Models::ReadMessageListResponseBodyDataRows> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline ReadMessageListResponseBodyData& setRows(vector<Models::ReadMessageListResponseBodyDataRows> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


  protected:
    // The number of entries returned.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // If excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The number of rows updated or returned on PolarDB-X 2.0 compute nodes.
    std::shared_ptr<vector<Models::ReadMessageListResponseBodyDataRows>> rows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
