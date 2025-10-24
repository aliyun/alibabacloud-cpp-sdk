// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBENCHMARKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBENCHMARKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListBenchmarkTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBenchmarkTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListBenchmarkTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestMethod, requestMethod_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListBenchmarkTaskRequest() = default ;
    ListBenchmarkTaskRequest(const ListBenchmarkTaskRequest &) = default ;
    ListBenchmarkTaskRequest(ListBenchmarkTaskRequest &&) = default ;
    ListBenchmarkTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBenchmarkTaskRequest() = default ;
    ListBenchmarkTaskRequest& operator=(const ListBenchmarkTaskRequest &) = default ;
    ListBenchmarkTaskRequest& operator=(ListBenchmarkTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->modelId_ == nullptr && return this->order_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestMethod_ == nullptr
        && return this->serviceName_ == nullptr && return this->sort_ == nullptr && return this->status_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListBenchmarkTaskRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ListBenchmarkTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListBenchmarkTaskRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListBenchmarkTaskRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListBenchmarkTaskRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestMethod Field Functions 
    bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
    void deleteRequestMethod() { this->requestMethod_ = nullptr;};
    inline string requestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, "") };
    inline ListBenchmarkTaskRequest& setRequestMethod(string requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListBenchmarkTaskRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListBenchmarkTaskRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBenchmarkTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The keyword used to query required stress testing tasks. If this parameter is specified, the system returns stress testing tasks based on the names of the stress testing tasks in the matched Elastic Algorithm Service (EAS).
    std::shared_ptr<string> filter_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 100.
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> requestMethod_ = nullptr;
    // The name of the EAS service that corresponds to the stress testing task. For more information about how to query the service name, see [ListServices](https://help.aliyun.com/document_detail/412109.html).
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
