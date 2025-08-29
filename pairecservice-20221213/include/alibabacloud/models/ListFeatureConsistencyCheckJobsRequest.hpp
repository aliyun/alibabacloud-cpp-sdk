// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListFeatureConsistencyCheckJobsRequest() = default ;
    ListFeatureConsistencyCheckJobsRequest(const ListFeatureConsistencyCheckJobsRequest &) = default ;
    ListFeatureConsistencyCheckJobsRequest(ListFeatureConsistencyCheckJobsRequest &&) = default ;
    ListFeatureConsistencyCheckJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobsRequest() = default ;
    ListFeatureConsistencyCheckJobsRequest& operator=(const ListFeatureConsistencyCheckJobsRequest &) = default ;
    ListFeatureConsistencyCheckJobsRequest& operator=(ListFeatureConsistencyCheckJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->sortBy_ != nullptr && this->status_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFeatureConsistencyCheckJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListFeatureConsistencyCheckJobsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListFeatureConsistencyCheckJobsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListFeatureConsistencyCheckJobsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListFeatureConsistencyCheckJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFeatureConsistencyCheckJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
