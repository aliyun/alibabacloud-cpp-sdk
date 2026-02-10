// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertySoftwareItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertySoftwareItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertySoftwareItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribePropertySoftwareItemRequest() = default ;
    DescribePropertySoftwareItemRequest(const DescribePropertySoftwareItemRequest &) = default ;
    DescribePropertySoftwareItemRequest(DescribePropertySoftwareItemRequest &&) = default ;
    DescribePropertySoftwareItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertySoftwareItemRequest() = default ;
    DescribePropertySoftwareItemRequest& operator=(const DescribePropertySoftwareItemRequest &) = default ;
    DescribePropertySoftwareItemRequest& operator=(DescribePropertySoftwareItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->forceFlush_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertySoftwareItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // forceFlush Field Functions 
    bool hasForceFlush() const { return this->forceFlush_ != nullptr;};
    void deleteForceFlush() { this->forceFlush_ = nullptr;};
    inline bool getForceFlush() const { DARABONBA_PTR_GET_DEFAULT(forceFlush_, false) };
    inline DescribePropertySoftwareItemRequest& setForceFlush(bool forceFlush) { DARABONBA_PTR_SET_VALUE(forceFlush_, forceFlush) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertySoftwareItemRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertySoftwareItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether to forcefully refresh the data that you want to query.
    shared_ptr<bool> forceFlush_ {};
    // The name of the software that you want to query.
    shared_ptr<string> name_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
