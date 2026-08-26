// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSASEUSERTAGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSASEUSERTAGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListSaseUserTagsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaseUserTagsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaseUserTagsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIdsShrink_);
    };
    ListSaseUserTagsShrinkRequest() = default ;
    ListSaseUserTagsShrinkRequest(const ListSaseUserTagsShrinkRequest &) = default ;
    ListSaseUserTagsShrinkRequest(ListSaseUserTagsShrinkRequest &&) = default ;
    ListSaseUserTagsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaseUserTagsShrinkRequest() = default ;
    ListSaseUserTagsShrinkRequest& operator=(const ListSaseUserTagsShrinkRequest &) = default ;
    ListSaseUserTagsShrinkRequest& operator=(ListSaseUserTagsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->name_ == nullptr && this->pageSize_ == nullptr && this->tagIdsShrink_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListSaseUserTagsShrinkRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSaseUserTagsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSaseUserTagsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tagIdsShrink Field Functions 
    bool hasTagIdsShrink() const { return this->tagIdsShrink_ != nullptr;};
    void deleteTagIdsShrink() { this->tagIdsShrink_ = nullptr;};
    inline string getTagIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagIdsShrink_, "") };
    inline ListSaseUserTagsShrinkRequest& setTagIdsShrink(string tagIdsShrink) { DARABONBA_PTR_SET_VALUE(tagIdsShrink_, tagIdsShrink) };


  protected:
    // The page number of the current page in a paging query. Valid values: 1 to 10000.
    shared_ptr<int64_t> currentPage_ {};
    // The name of the user label. The name must be 1 to 128 characters in length.
    shared_ptr<string> name_ {};
    // The number of entries per page. Settings: 1 to 1000.
    shared_ptr<int64_t> pageSize_ {};
    // The collection of user label IDs.
    shared_ptr<string> tagIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
