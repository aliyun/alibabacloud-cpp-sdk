// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    ListDisasterRecoveryItemsRequest() = default ;
    ListDisasterRecoveryItemsRequest(const ListDisasterRecoveryItemsRequest &) = default ;
    ListDisasterRecoveryItemsRequest(ListDisasterRecoveryItemsRequest &&) = default ;
    ListDisasterRecoveryItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryItemsRequest() = default ;
    ListDisasterRecoveryItemsRequest& operator=(const ListDisasterRecoveryItemsRequest &) = default ;
    ListDisasterRecoveryItemsRequest& operator=(ListDisasterRecoveryItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->topicName_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListDisasterRecoveryItemsRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDisasterRecoveryItemsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDisasterRecoveryItemsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListDisasterRecoveryItemsRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The filter condition. Topics are filtered by topic name.
    std::shared_ptr<string> filter_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
