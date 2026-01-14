// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListTopicsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(messageTypes, messageTypesShrink_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(messageTypes, messageTypesShrink_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListTopicsShrinkRequest() = default ;
    ListTopicsShrinkRequest(const ListTopicsShrinkRequest &) = default ;
    ListTopicsShrinkRequest(ListTopicsShrinkRequest &&) = default ;
    ListTopicsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicsShrinkRequest() = default ;
    ListTopicsShrinkRequest& operator=(const ListTopicsShrinkRequest &) = default ;
    ListTopicsShrinkRequest& operator=(ListTopicsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->messageTypesShrink_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListTopicsShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // messageTypesShrink Field Functions 
    bool hasMessageTypesShrink() const { return this->messageTypesShrink_ != nullptr;};
    void deleteMessageTypesShrink() { this->messageTypesShrink_ = nullptr;};
    inline string getMessageTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(messageTypesShrink_, "") };
    inline ListTopicsShrinkRequest& setMessageTypesShrink(string messageTypesShrink) { DARABONBA_PTR_SET_VALUE(messageTypesShrink_, messageTypesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTopicsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTopicsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The filter condition for the query. If not provided, all topics under the instance will be queried.
    shared_ptr<string> filter_ {};
    // The message type of the topic.
    shared_ptr<string> messageTypesShrink_ {};
    // Page number, indicating which page of results to return.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size, the maximum number of results to display per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
