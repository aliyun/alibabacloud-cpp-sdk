// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCRONITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCRONITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyCronItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyCronItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyCronItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribePropertyCronItemRequest() = default ;
    DescribePropertyCronItemRequest(const DescribePropertyCronItemRequest &) = default ;
    DescribePropertyCronItemRequest(DescribePropertyCronItemRequest &&) = default ;
    DescribePropertyCronItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyCronItemRequest() = default ;
    DescribePropertyCronItemRequest& operator=(const DescribePropertyCronItemRequest &) = default ;
    DescribePropertyCronItemRequest& operator=(DescribePropertyCronItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->forceFlush_ == nullptr && return this->pageSize_ == nullptr && return this->source_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyCronItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // forceFlush Field Functions 
    bool hasForceFlush() const { return this->forceFlush_ != nullptr;};
    void deleteForceFlush() { this->forceFlush_ = nullptr;};
    inline bool forceFlush() const { DARABONBA_PTR_GET_DEFAULT(forceFlush_, false) };
    inline DescribePropertyCronItemRequest& setForceFlush(bool forceFlush) { DARABONBA_PTR_SET_VALUE(forceFlush_, forceFlush) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyCronItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribePropertyCronItemRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether to forcefully refresh the data that you want to query. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> forceFlush_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The path to the scheduled task.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
