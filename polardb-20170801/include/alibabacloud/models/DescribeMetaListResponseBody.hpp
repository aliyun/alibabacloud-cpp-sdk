// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetaListResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeMetaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPageCount, totalPageCount_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPageCount, totalPageCount_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeMetaListResponseBody() = default ;
    DescribeMetaListResponseBody(const DescribeMetaListResponseBody &) = default ;
    DescribeMetaListResponseBody(DescribeMetaListResponseBody &&) = default ;
    DescribeMetaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaListResponseBody() = default ;
    DescribeMetaListResponseBody& operator=(const DescribeMetaListResponseBody &) = default ;
    DescribeMetaListResponseBody& operator=(DescribeMetaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->items_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalPageCount_ != nullptr
        && this->totalRecordCount_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeMetaListResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeMetaListResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeMetaListResponseBodyItems>) };
    inline vector<DescribeMetaListResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeMetaListResponseBodyItems>) };
    inline DescribeMetaListResponseBody& setItems(const vector<DescribeMetaListResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeMetaListResponseBody& setItems(vector<DescribeMetaListResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeMetaListResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeMetaListResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPageCount Field Functions 
    bool hasTotalPageCount() const { return this->totalPageCount_ != nullptr;};
    void deleteTotalPageCount() { this->totalPageCount_ = nullptr;};
    inline string totalPageCount() const { DARABONBA_PTR_GET_DEFAULT(totalPageCount_, "") };
    inline DescribeMetaListResponseBody& setTotalPageCount(string totalPageCount) { DARABONBA_PTR_SET_VALUE(totalPageCount_, totalPageCount) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribeMetaListResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The details of databases and tables that can be restored.
    std::shared_ptr<vector<DescribeMetaListResponseBodyItems>> items_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned pages.
    std::shared_ptr<string> totalPageCount_ = nullptr;
    // The total number of entries.
    std::shared_ptr<string> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
