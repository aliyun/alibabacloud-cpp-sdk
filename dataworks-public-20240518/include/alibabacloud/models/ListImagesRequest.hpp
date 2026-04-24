// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Official, official_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(ProviderTypes, providerTypes_);
      DARABONBA_PTR_TO_JSON(SearchAll, searchAll_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Stages, stages_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      DARABONBA_PTR_TO_JSON(SupportedModules, supportedModules_);
      DARABONBA_PTR_TO_JSON(SupportedTaskTypes, supportedTaskTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Official, official_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(ProviderTypes, providerTypes_);
      DARABONBA_PTR_FROM_JSON(SearchAll, searchAll_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Stages, stages_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(SupportedModules, supportedModules_);
      DARABONBA_PTR_FROM_JSON(SupportedTaskTypes, supportedTaskTypes_);
    };
    ListImagesRequest() = default ;
    ListImagesRequest(const ListImagesRequest &) = default ;
    ListImagesRequest(ListImagesRequest &&) = default ;
    ListImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesRequest() = default ;
    ListImagesRequest& operator=(const ListImagesRequest &) = default ;
    ListImagesRequest& operator=(ListImagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->name_ == nullptr && this->official_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectIds_ == nullptr
        && this->providerTypes_ == nullptr && this->searchAll_ == nullptr && this->sortBy_ == nullptr && this->stages_ == nullptr && this->statuses_ == nullptr
        && this->supportedModules_ == nullptr && this->supportedTaskTypes_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListImagesRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListImagesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // official Field Functions 
    bool hasOfficial() const { return this->official_ != nullptr;};
    void deleteOfficial() { this->official_ = nullptr;};
    inline bool getOfficial() const { DARABONBA_PTR_GET_DEFAULT(official_, false) };
    inline ListImagesRequest& setOfficial(bool official) { DARABONBA_PTR_SET_VALUE(official_, official) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListImagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListImagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
    inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
    inline ListImagesRequest& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
    inline ListImagesRequest& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


    // providerTypes Field Functions 
    bool hasProviderTypes() const { return this->providerTypes_ != nullptr;};
    void deleteProviderTypes() { this->providerTypes_ = nullptr;};
    inline const vector<string> & getProviderTypes() const { DARABONBA_PTR_GET_CONST(providerTypes_, vector<string>) };
    inline vector<string> getProviderTypes() { DARABONBA_PTR_GET(providerTypes_, vector<string>) };
    inline ListImagesRequest& setProviderTypes(const vector<string> & providerTypes) { DARABONBA_PTR_SET_VALUE(providerTypes_, providerTypes) };
    inline ListImagesRequest& setProviderTypes(vector<string> && providerTypes) { DARABONBA_PTR_SET_RVALUE(providerTypes_, providerTypes) };


    // searchAll Field Functions 
    bool hasSearchAll() const { return this->searchAll_ != nullptr;};
    void deleteSearchAll() { this->searchAll_ = nullptr;};
    inline bool getSearchAll() const { DARABONBA_PTR_GET_DEFAULT(searchAll_, false) };
    inline ListImagesRequest& setSearchAll(bool searchAll) { DARABONBA_PTR_SET_VALUE(searchAll_, searchAll) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListImagesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline const vector<string> & getStages() const { DARABONBA_PTR_GET_CONST(stages_, vector<string>) };
    inline vector<string> getStages() { DARABONBA_PTR_GET(stages_, vector<string>) };
    inline ListImagesRequest& setStages(const vector<string> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
    inline ListImagesRequest& setStages(vector<string> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListImagesRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListImagesRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    // supportedModules Field Functions 
    bool hasSupportedModules() const { return this->supportedModules_ != nullptr;};
    void deleteSupportedModules() { this->supportedModules_ = nullptr;};
    inline const vector<string> & getSupportedModules() const { DARABONBA_PTR_GET_CONST(supportedModules_, vector<string>) };
    inline vector<string> getSupportedModules() { DARABONBA_PTR_GET(supportedModules_, vector<string>) };
    inline ListImagesRequest& setSupportedModules(const vector<string> & supportedModules) { DARABONBA_PTR_SET_VALUE(supportedModules_, supportedModules) };
    inline ListImagesRequest& setSupportedModules(vector<string> && supportedModules) { DARABONBA_PTR_SET_RVALUE(supportedModules_, supportedModules) };


    // supportedTaskTypes Field Functions 
    bool hasSupportedTaskTypes() const { return this->supportedTaskTypes_ != nullptr;};
    void deleteSupportedTaskTypes() { this->supportedTaskTypes_ = nullptr;};
    inline const vector<string> & getSupportedTaskTypes() const { DARABONBA_PTR_GET_CONST(supportedTaskTypes_, vector<string>) };
    inline vector<string> getSupportedTaskTypes() { DARABONBA_PTR_GET(supportedTaskTypes_, vector<string>) };
    inline ListImagesRequest& setSupportedTaskTypes(const vector<string> & supportedTaskTypes) { DARABONBA_PTR_SET_VALUE(supportedTaskTypes_, supportedTaskTypes) };
    inline ListImagesRequest& setSupportedTaskTypes(vector<string> && supportedTaskTypes) { DARABONBA_PTR_SET_RVALUE(supportedTaskTypes_, supportedTaskTypes) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> official_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<int64_t>> projectIds_ {};
    shared_ptr<vector<string>> providerTypes_ {};
    shared_ptr<bool> searchAll_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<vector<string>> stages_ {};
    shared_ptr<vector<string>> statuses_ {};
    shared_ptr<vector<string>> supportedModules_ {};
    shared_ptr<vector<string>> supportedTaskTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
