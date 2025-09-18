// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureEntityIds, featureEntityIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureEntityIds, featureEntityIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListFeatureEntitiesRequest() = default ;
    ListFeatureEntitiesRequest(const ListFeatureEntitiesRequest &) = default ;
    ListFeatureEntitiesRequest(ListFeatureEntitiesRequest &&) = default ;
    ListFeatureEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureEntitiesRequest() = default ;
    ListFeatureEntitiesRequest& operator=(const ListFeatureEntitiesRequest &) = default ;
    ListFeatureEntitiesRequest& operator=(ListFeatureEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureEntityIds_ != nullptr
        && this->name_ != nullptr && this->order_ != nullptr && this->owner_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->projectId_ != nullptr && this->sortBy_ != nullptr; };
    // featureEntityIds Field Functions 
    bool hasFeatureEntityIds() const { return this->featureEntityIds_ != nullptr;};
    void deleteFeatureEntityIds() { this->featureEntityIds_ = nullptr;};
    inline const vector<string> & featureEntityIds() const { DARABONBA_PTR_GET_CONST(featureEntityIds_, vector<string>) };
    inline vector<string> featureEntityIds() { DARABONBA_PTR_GET(featureEntityIds_, vector<string>) };
    inline ListFeatureEntitiesRequest& setFeatureEntityIds(const vector<string> & featureEntityIds) { DARABONBA_PTR_SET_VALUE(featureEntityIds_, featureEntityIds) };
    inline ListFeatureEntitiesRequest& setFeatureEntityIds(vector<string> && featureEntityIds) { DARABONBA_PTR_SET_RVALUE(featureEntityIds_, featureEntityIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFeatureEntitiesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListFeatureEntitiesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListFeatureEntitiesRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFeatureEntitiesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFeatureEntitiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListFeatureEntitiesRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListFeatureEntitiesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    std::shared_ptr<vector<string>> featureEntityIds_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
