// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage() = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage(const DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage &) = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage(DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage &&) = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage() = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& operator=(const DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage &) = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& operator=(DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageData) };
    inline Models::DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageData data() { DARABONBA_PTR_GET(data_, Models::DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageData) };
    inline DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& setData(const Models::DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& setData(Models::DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPage& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the tasks.
    std::shared_ptr<Models::DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageData> data_ = nullptr;
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
