// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDatasetListResponseBodyDatasetInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetInfoList, datasetInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetInfoList, datasetInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDatasetListResponseBody() = default ;
    DescribeDatasetListResponseBody(const DescribeDatasetListResponseBody &) = default ;
    DescribeDatasetListResponseBody(DescribeDatasetListResponseBody &&) = default ;
    DescribeDatasetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetListResponseBody() = default ;
    DescribeDatasetListResponseBody& operator=(const DescribeDatasetListResponseBody &) = default ;
    DescribeDatasetListResponseBody& operator=(DescribeDatasetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetInfoList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // datasetInfoList Field Functions 
    bool hasDatasetInfoList() const { return this->datasetInfoList_ != nullptr;};
    void deleteDatasetInfoList() { this->datasetInfoList_ = nullptr;};
    inline const vector<DescribeDatasetListResponseBodyDatasetInfoList> & datasetInfoList() const { DARABONBA_PTR_GET_CONST(datasetInfoList_, vector<DescribeDatasetListResponseBodyDatasetInfoList>) };
    inline vector<DescribeDatasetListResponseBodyDatasetInfoList> datasetInfoList() { DARABONBA_PTR_GET(datasetInfoList_, vector<DescribeDatasetListResponseBodyDatasetInfoList>) };
    inline DescribeDatasetListResponseBody& setDatasetInfoList(const vector<DescribeDatasetListResponseBodyDatasetInfoList> & datasetInfoList) { DARABONBA_PTR_SET_VALUE(datasetInfoList_, datasetInfoList) };
    inline DescribeDatasetListResponseBody& setDatasetInfoList(vector<DescribeDatasetListResponseBodyDatasetInfoList> && datasetInfoList) { DARABONBA_PTR_SET_RVALUE(datasetInfoList_, datasetInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatasetListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatasetListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatasetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDatasetListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned dataset information. It is an array consisting of datasetinfo.
    std::shared_ptr<vector<DescribeDatasetListResponseBodyDatasetInfoList>> datasetInfoList_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
