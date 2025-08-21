// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDETAILDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage() = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage(const DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage &) = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage(DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage &&) = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage() = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& operator=(const DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage &) = default ;
    DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& operator=(DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData) };
    inline Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData data() { DARABONBA_PTR_GET(data_, Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData) };
    inline DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& setData(const Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& setData(Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPage& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the task.
    std::shared_ptr<Models::DescribeUserUsageDetailDataExportTaskResponseBodyUsageDataPerPageData> data_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
