// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProjectMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeProjectMetaRequest() = default ;
    DescribeProjectMetaRequest(const DescribeProjectMetaRequest &) = default ;
    DescribeProjectMetaRequest(DescribeProjectMetaRequest &&) = default ;
    DescribeProjectMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectMetaRequest() = default ;
    DescribeProjectMetaRequest& operator=(const DescribeProjectMetaRequest &) = default ;
    DescribeProjectMetaRequest& operator=(DescribeProjectMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DescribeProjectMetaRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeProjectMetaRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeProjectMetaRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The tags. Tags are used to filter services.
    // 
    // You can filter services only by the tag whose `name` is `product`. Example: {"name":"product","value":"ECS"}.
    // 
    // > We recommend that you do not use the special tags in the CloudMonitor console.
    std::shared_ptr<string> labels_ = nullptr;
    // The page number.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Valid values: 1 to 10000.
    // 
    // Default value: 30.
    // 
    // > The value of this parameter is not limited. You can view a large number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
