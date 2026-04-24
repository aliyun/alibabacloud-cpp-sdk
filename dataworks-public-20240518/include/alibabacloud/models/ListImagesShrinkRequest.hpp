// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListImagesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Official, official_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIdsShrink_);
      DARABONBA_PTR_TO_JSON(ProviderTypes, providerTypesShrink_);
      DARABONBA_PTR_TO_JSON(SearchAll, searchAll_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Stages, stagesShrink_);
      DARABONBA_PTR_TO_JSON(Statuses, statusesShrink_);
      DARABONBA_PTR_TO_JSON(SupportedModules, supportedModulesShrink_);
      DARABONBA_PTR_TO_JSON(SupportedTaskTypes, supportedTaskTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Official, official_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ProviderTypes, providerTypesShrink_);
      DARABONBA_PTR_FROM_JSON(SearchAll, searchAll_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Stages, stagesShrink_);
      DARABONBA_PTR_FROM_JSON(Statuses, statusesShrink_);
      DARABONBA_PTR_FROM_JSON(SupportedModules, supportedModulesShrink_);
      DARABONBA_PTR_FROM_JSON(SupportedTaskTypes, supportedTaskTypesShrink_);
    };
    ListImagesShrinkRequest() = default ;
    ListImagesShrinkRequest(const ListImagesShrinkRequest &) = default ;
    ListImagesShrinkRequest(ListImagesShrinkRequest &&) = default ;
    ListImagesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesShrinkRequest() = default ;
    ListImagesShrinkRequest& operator=(const ListImagesShrinkRequest &) = default ;
    ListImagesShrinkRequest& operator=(ListImagesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->name_ == nullptr && this->official_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectIdsShrink_ == nullptr
        && this->providerTypesShrink_ == nullptr && this->searchAll_ == nullptr && this->sortBy_ == nullptr && this->stagesShrink_ == nullptr && this->statusesShrink_ == nullptr
        && this->supportedModulesShrink_ == nullptr && this->supportedTaskTypesShrink_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListImagesShrinkRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListImagesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // official Field Functions 
    bool hasOfficial() const { return this->official_ != nullptr;};
    void deleteOfficial() { this->official_ = nullptr;};
    inline bool getOfficial() const { DARABONBA_PTR_GET_DEFAULT(official_, false) };
    inline ListImagesShrinkRequest& setOfficial(bool official) { DARABONBA_PTR_SET_VALUE(official_, official) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListImagesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListImagesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectIdsShrink Field Functions 
    bool hasProjectIdsShrink() const { return this->projectIdsShrink_ != nullptr;};
    void deleteProjectIdsShrink() { this->projectIdsShrink_ = nullptr;};
    inline string getProjectIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(projectIdsShrink_, "") };
    inline ListImagesShrinkRequest& setProjectIdsShrink(string projectIdsShrink) { DARABONBA_PTR_SET_VALUE(projectIdsShrink_, projectIdsShrink) };


    // providerTypesShrink Field Functions 
    bool hasProviderTypesShrink() const { return this->providerTypesShrink_ != nullptr;};
    void deleteProviderTypesShrink() { this->providerTypesShrink_ = nullptr;};
    inline string getProviderTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(providerTypesShrink_, "") };
    inline ListImagesShrinkRequest& setProviderTypesShrink(string providerTypesShrink) { DARABONBA_PTR_SET_VALUE(providerTypesShrink_, providerTypesShrink) };


    // searchAll Field Functions 
    bool hasSearchAll() const { return this->searchAll_ != nullptr;};
    void deleteSearchAll() { this->searchAll_ = nullptr;};
    inline bool getSearchAll() const { DARABONBA_PTR_GET_DEFAULT(searchAll_, false) };
    inline ListImagesShrinkRequest& setSearchAll(bool searchAll) { DARABONBA_PTR_SET_VALUE(searchAll_, searchAll) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListImagesShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // stagesShrink Field Functions 
    bool hasStagesShrink() const { return this->stagesShrink_ != nullptr;};
    void deleteStagesShrink() { this->stagesShrink_ = nullptr;};
    inline string getStagesShrink() const { DARABONBA_PTR_GET_DEFAULT(stagesShrink_, "") };
    inline ListImagesShrinkRequest& setStagesShrink(string stagesShrink) { DARABONBA_PTR_SET_VALUE(stagesShrink_, stagesShrink) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string getStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline ListImagesShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


    // supportedModulesShrink Field Functions 
    bool hasSupportedModulesShrink() const { return this->supportedModulesShrink_ != nullptr;};
    void deleteSupportedModulesShrink() { this->supportedModulesShrink_ = nullptr;};
    inline string getSupportedModulesShrink() const { DARABONBA_PTR_GET_DEFAULT(supportedModulesShrink_, "") };
    inline ListImagesShrinkRequest& setSupportedModulesShrink(string supportedModulesShrink) { DARABONBA_PTR_SET_VALUE(supportedModulesShrink_, supportedModulesShrink) };


    // supportedTaskTypesShrink Field Functions 
    bool hasSupportedTaskTypesShrink() const { return this->supportedTaskTypesShrink_ != nullptr;};
    void deleteSupportedTaskTypesShrink() { this->supportedTaskTypesShrink_ = nullptr;};
    inline string getSupportedTaskTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(supportedTaskTypesShrink_, "") };
    inline ListImagesShrinkRequest& setSupportedTaskTypesShrink(string supportedTaskTypesShrink) { DARABONBA_PTR_SET_VALUE(supportedTaskTypesShrink_, supportedTaskTypesShrink) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> official_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> projectIdsShrink_ {};
    shared_ptr<string> providerTypesShrink_ {};
    shared_ptr<bool> searchAll_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> stagesShrink_ {};
    shared_ptr<string> statusesShrink_ {};
    shared_ptr<string> supportedModulesShrink_ {};
    shared_ptr<string> supportedTaskTypesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
