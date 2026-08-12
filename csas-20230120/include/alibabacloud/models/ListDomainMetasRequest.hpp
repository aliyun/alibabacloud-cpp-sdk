// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINMETASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINMETASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDomainMetasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainMetasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DefaultTemplate, defaultTemplate_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainMetasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DefaultTemplate, defaultTemplate_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDomainMetasRequest() = default ;
    ListDomainMetasRequest(const ListDomainMetasRequest &) = default ;
    ListDomainMetasRequest(ListDomainMetasRequest &&) = default ;
    ListDomainMetasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainMetasRequest() = default ;
    ListDomainMetasRequest& operator=(const ListDomainMetasRequest &) = default ;
    ListDomainMetasRequest& operator=(ListDomainMetasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->defaultTemplate_ == nullptr && this->listType_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDomainMetasRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // defaultTemplate Field Functions 
    bool hasDefaultTemplate() const { return this->defaultTemplate_ != nullptr;};
    void deleteDefaultTemplate() { this->defaultTemplate_ = nullptr;};
    inline bool getDefaultTemplate() const { DARABONBA_PTR_GET_DEFAULT(defaultTemplate_, false) };
    inline ListDomainMetasRequest& setDefaultTemplate(bool defaultTemplate) { DARABONBA_PTR_SET_VALUE(defaultTemplate_, defaultTemplate) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline ListDomainMetasRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDomainMetasRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDomainMetasRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The current page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether to include system default template lists.
    shared_ptr<bool> defaultTemplate_ {};
    // The list type (blacklist/whitelist).
    // 
    // This parameter is required.
    shared_ptr<string> listType_ {};
    // The list name. Fuzzy match is supported.
    shared_ptr<string> name_ {};
    // The number of entries per page in a paged query. Settings: 1 to 1000. Paging is used to return results.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
