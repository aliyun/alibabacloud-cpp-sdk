// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREMANAGEDRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPREMANAGEDRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListPreManagedRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPreManagedRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListPreManagedRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypesShrink_);
    };
    ListPreManagedRulesShrinkRequest() = default ;
    ListPreManagedRulesShrinkRequest(const ListPreManagedRulesShrinkRequest &) = default ;
    ListPreManagedRulesShrinkRequest(ListPreManagedRulesShrinkRequest &&) = default ;
    ListPreManagedRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPreManagedRulesShrinkRequest() = default ;
    ListPreManagedRulesShrinkRequest& operator=(const ListPreManagedRulesShrinkRequest &) = default ;
    ListPreManagedRulesShrinkRequest& operator=(ListPreManagedRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->resourceTypesShrink_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListPreManagedRulesShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPreManagedRulesShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceTypesShrink Field Functions 
    bool hasResourceTypesShrink() const { return this->resourceTypesShrink_ != nullptr;};
    void deleteResourceTypesShrink() { this->resourceTypesShrink_ = nullptr;};
    inline string getResourceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesShrink_, "") };
    inline ListPreManagedRulesShrinkRequest& setResourceTypesShrink(string resourceTypesShrink) { DARABONBA_PTR_SET_VALUE(resourceTypesShrink_, resourceTypesShrink) };


  protected:
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
    // The type of the resource.
    shared_ptr<string> resourceTypesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
