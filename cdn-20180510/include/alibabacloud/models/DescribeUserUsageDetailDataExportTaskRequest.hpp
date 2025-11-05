// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDETAILDATAEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDETAILDATAEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserUsageDetailDataExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserUsageDetailDataExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserUsageDetailDataExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeUserUsageDetailDataExportTaskRequest() = default ;
    DescribeUserUsageDetailDataExportTaskRequest(const DescribeUserUsageDetailDataExportTaskRequest &) = default ;
    DescribeUserUsageDetailDataExportTaskRequest(DescribeUserUsageDetailDataExportTaskRequest &&) = default ;
    DescribeUserUsageDetailDataExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserUsageDetailDataExportTaskRequest() = default ;
    DescribeUserUsageDetailDataExportTaskRequest& operator=(const DescribeUserUsageDetailDataExportTaskRequest &) = default ;
    DescribeUserUsageDetailDataExportTaskRequest& operator=(DescribeUserUsageDetailDataExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeUserUsageDetailDataExportTaskRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeUserUsageDetailDataExportTaskRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The number of the page to return. Valid values: **1** to **100000**.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **20**. Maximum value: **50**.
    // 
    // Valid values: an integer from **1** to **50**.
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
