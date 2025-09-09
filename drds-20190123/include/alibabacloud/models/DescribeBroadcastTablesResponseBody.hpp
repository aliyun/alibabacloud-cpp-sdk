// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBROADCASTTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBROADCASTTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBroadcastTablesResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBroadcastTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBroadcastTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsShard, isShard_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBroadcastTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsShard, isShard_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeBroadcastTablesResponseBody() = default ;
    DescribeBroadcastTablesResponseBody(const DescribeBroadcastTablesResponseBody &) = default ;
    DescribeBroadcastTablesResponseBody(DescribeBroadcastTablesResponseBody &&) = default ;
    DescribeBroadcastTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBroadcastTablesResponseBody() = default ;
    DescribeBroadcastTablesResponseBody& operator=(const DescribeBroadcastTablesResponseBody &) = default ;
    DescribeBroadcastTablesResponseBody& operator=(DescribeBroadcastTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isShard_ != nullptr
        && this->list_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr
        && this->total_ != nullptr; };
    // isShard Field Functions 
    bool hasIsShard() const { return this->isShard_ != nullptr;};
    void deleteIsShard() { this->isShard_ = nullptr;};
    inline bool isShard() const { DARABONBA_PTR_GET_DEFAULT(isShard_, false) };
    inline DescribeBroadcastTablesResponseBody& setIsShard(bool isShard) { DARABONBA_PTR_SET_VALUE(isShard_, isShard) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeBroadcastTablesResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeBroadcastTablesResponseBodyList>) };
    inline vector<DescribeBroadcastTablesResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<DescribeBroadcastTablesResponseBodyList>) };
    inline DescribeBroadcastTablesResponseBody& setList(const vector<DescribeBroadcastTablesResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeBroadcastTablesResponseBody& setList(vector<DescribeBroadcastTablesResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBroadcastTablesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBroadcastTablesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBroadcastTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBroadcastTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeBroadcastTablesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Indicates whether the database is sharded.
    std::shared_ptr<bool> isShard_ = nullptr;
    // Indicates information about broadcast tables.
    std::shared_ptr<vector<DescribeBroadcastTablesResponseBodyList>> list_ = nullptr;
    // Indicates the page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Indicates the number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Indicates the ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // Indicates the total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
