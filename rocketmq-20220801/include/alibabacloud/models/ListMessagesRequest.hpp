// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(liteTopicName, liteTopicName_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(messageKey, messageKey_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(scrollId, scrollId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(liteTopicName, liteTopicName_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(messageKey, messageKey_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(scrollId, scrollId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListMessagesRequest() = default ;
    ListMessagesRequest(const ListMessagesRequest &) = default ;
    ListMessagesRequest(ListMessagesRequest &&) = default ;
    ListMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessagesRequest() = default ;
    ListMessagesRequest& operator=(const ListMessagesRequest &) = default ;
    ListMessagesRequest& operator=(ListMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->liteTopicName_ == nullptr && return this->messageId_ == nullptr && return this->messageKey_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->scrollId_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListMessagesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // liteTopicName Field Functions 
    bool hasLiteTopicName() const { return this->liteTopicName_ != nullptr;};
    void deleteLiteTopicName() { this->liteTopicName_ = nullptr;};
    inline string liteTopicName() const { DARABONBA_PTR_GET_DEFAULT(liteTopicName_, "") };
    inline ListMessagesRequest& setLiteTopicName(string liteTopicName) { DARABONBA_PTR_SET_VALUE(liteTopicName_, liteTopicName) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ListMessagesRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // messageKey Field Functions 
    bool hasMessageKey() const { return this->messageKey_ != nullptr;};
    void deleteMessageKey() { this->messageKey_ = nullptr;};
    inline string messageKey() const { DARABONBA_PTR_GET_DEFAULT(messageKey_, "") };
    inline ListMessagesRequest& setMessageKey(string messageKey) { DARABONBA_PTR_SET_VALUE(messageKey_, messageKey) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMessagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMessagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline ListMessagesRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListMessagesRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> liteTopicName_ = nullptr;
    // Message Id.
    std::shared_ptr<string> messageId_ = nullptr;
    // Message key.
    std::shared_ptr<string> messageKey_ = nullptr;
    // The page number. Pages start from page 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The scroll ID of the request.
    // 
    // You do not need to configure this parameter for the first page. This parameter is included in the pagination request based on the result returned for the first page.
    std::shared_ptr<string> scrollId_ = nullptr;
    // The beginning of the time range to query.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
