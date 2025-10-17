// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEADVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEADVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableAdvicesResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAvailableAdvicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableAdvicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaTableNames, schemaTableNames_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableAdvicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaTableNames, schemaTableNames_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAvailableAdvicesResponseBody() = default ;
    DescribeAvailableAdvicesResponseBody(const DescribeAvailableAdvicesResponseBody &) = default ;
    DescribeAvailableAdvicesResponseBody(DescribeAvailableAdvicesResponseBody &&) = default ;
    DescribeAvailableAdvicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableAdvicesResponseBody() = default ;
    DescribeAvailableAdvicesResponseBody& operator=(const DescribeAvailableAdvicesResponseBody &) = default ;
    DescribeAvailableAdvicesResponseBody& operator=(DescribeAvailableAdvicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->schemaTableNames_ == nullptr && return this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAvailableAdvicesResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAvailableAdvicesResponseBodyItems>) };
    inline vector<DescribeAvailableAdvicesResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeAvailableAdvicesResponseBodyItems>) };
    inline DescribeAvailableAdvicesResponseBody& setItems(const vector<DescribeAvailableAdvicesResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAvailableAdvicesResponseBody& setItems(vector<DescribeAvailableAdvicesResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAvailableAdvicesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAvailableAdvicesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableAdvicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaTableNames Field Functions 
    bool hasSchemaTableNames() const { return this->schemaTableNames_ != nullptr;};
    void deleteSchemaTableNames() { this->schemaTableNames_ = nullptr;};
    inline const vector<string> & schemaTableNames() const { DARABONBA_PTR_GET_CONST(schemaTableNames_, vector<string>) };
    inline vector<string> schemaTableNames() { DARABONBA_PTR_GET(schemaTableNames_, vector<string>) };
    inline DescribeAvailableAdvicesResponseBody& setSchemaTableNames(const vector<string> & schemaTableNames) { DARABONBA_PTR_SET_VALUE(schemaTableNames_, schemaTableNames) };
    inline DescribeAvailableAdvicesResponseBody& setSchemaTableNames(vector<string> && schemaTableNames) { DARABONBA_PTR_SET_RVALUE(schemaTableNames_, schemaTableNames) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAvailableAdvicesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried suggestions.
    std::shared_ptr<vector<DescribeAvailableAdvicesResponseBodyItems>> items_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the table in the DatabaseName.TableName format.
    std::shared_ptr<vector<string>> schemaTableNames_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
