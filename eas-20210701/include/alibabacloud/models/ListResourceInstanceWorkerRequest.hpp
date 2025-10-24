// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEINSTANCEWORKERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEINSTANCEWORKERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListResourceInstanceWorkerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceInstanceWorkerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkerName, workerName_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceInstanceWorkerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkerName, workerName_);
    };
    ListResourceInstanceWorkerRequest() = default ;
    ListResourceInstanceWorkerRequest(const ListResourceInstanceWorkerRequest &) = default ;
    ListResourceInstanceWorkerRequest(ListResourceInstanceWorkerRequest &&) = default ;
    ListResourceInstanceWorkerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceInstanceWorkerRequest() = default ;
    ListResourceInstanceWorkerRequest& operator=(const ListResourceInstanceWorkerRequest &) = default ;
    ListResourceInstanceWorkerRequest& operator=(ListResourceInstanceWorkerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->order_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->ready_ == nullptr && return this->serviceName_ == nullptr && return this->sort_ == nullptr
        && return this->status_ == nullptr && return this->workerName_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListResourceInstanceWorkerRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceInstanceWorkerRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceInstanceWorkerRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline bool ready() const { DARABONBA_PTR_GET_DEFAULT(ready_, false) };
    inline ListResourceInstanceWorkerRequest& setReady(bool ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListResourceInstanceWorkerRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListResourceInstanceWorkerRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceInstanceWorkerRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workerName Field Functions 
    bool hasWorkerName() const { return this->workerName_ != nullptr;};
    void deleteWorkerName() { this->workerName_ = nullptr;};
    inline string workerName() const { DARABONBA_PTR_GET_DEFAULT(workerName_, "") };
    inline ListResourceInstanceWorkerRequest& setWorkerName(string workerName) { DARABONBA_PTR_SET_VALUE(workerName_, workerName) };


  protected:
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<bool> ready_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    // The worker name.
    std::shared_ptr<string> workerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
