// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListConsumerGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListConsumerGroupsRequest() = default ;
    ListConsumerGroupsRequest(const ListConsumerGroupsRequest &) = default ;
    ListConsumerGroupsRequest(ListConsumerGroupsRequest &&) = default ;
    ListConsumerGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerGroupsRequest() = default ;
    ListConsumerGroupsRequest& operator=(const ListConsumerGroupsRequest &) = default ;
    ListConsumerGroupsRequest& operator=(ListConsumerGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListConsumerGroupsRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConsumerGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConsumerGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The filter condition for the query. If not provided, all consumer groups under the specified instance will be queried.
    std::shared_ptr<string> filter_ = nullptr;
    // Page number, indicating which page of results to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size, the maximum number of results to display per page.
    // 
    // Value range: [10, 100].
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
