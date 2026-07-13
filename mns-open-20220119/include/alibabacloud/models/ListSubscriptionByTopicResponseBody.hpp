// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONBYTOPICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONBYTOPICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListSubscriptionByTopicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionByTopicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionByTopicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSubscriptionByTopicResponseBody() = default ;
    ListSubscriptionByTopicResponseBody(const ListSubscriptionByTopicResponseBody &) = default ;
    ListSubscriptionByTopicResponseBody(ListSubscriptionByTopicResponseBody &&) = default ;
    ListSubscriptionByTopicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionByTopicResponseBody() = default ;
    ListSubscriptionByTopicResponseBody& operator=(const ListSubscriptionByTopicResponseBody &) = default ;
    ListSubscriptionByTopicResponseBody& operator=(ListSubscriptionByTopicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageData, pageData_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Pages, pages_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageData, pageData_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Pages, pages_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageData& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(FilterTag, filterTag_);
          DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_TO_JSON(NotifyContentFormat, notifyContentFormat_);
          DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
          DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
          DARABONBA_PTR_TO_JSON(TopicOwner, topicOwner_);
        };
        friend void from_json(const Darabonba::Json& j, PageData& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(FilterTag, filterTag_);
          DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_FROM_JSON(NotifyContentFormat, notifyContentFormat_);
          DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
          DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
          DARABONBA_PTR_FROM_JSON(TopicOwner, topicOwner_);
        };
        PageData() = default ;
        PageData(const PageData &) = default ;
        PageData(PageData &&) = default ;
        PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageData() = default ;
        PageData& operator=(const PageData &) = default ;
        PageData& operator=(PageData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DlqPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DlqPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, DlqPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          };
          DlqPolicy() = default ;
          DlqPolicy(const DlqPolicy &) = default ;
          DlqPolicy(DlqPolicy &&) = default ;
          DlqPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DlqPolicy() = default ;
          DlqPolicy& operator=(const DlqPolicy &) = default ;
          DlqPolicy& operator=(DlqPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deadLetterTargetQueue_ == nullptr
        && this->enabled_ == nullptr; };
          // deadLetterTargetQueue Field Functions 
          bool hasDeadLetterTargetQueue() const { return this->deadLetterTargetQueue_ != nullptr;};
          void deleteDeadLetterTargetQueue() { this->deadLetterTargetQueue_ = nullptr;};
          inline string getDeadLetterTargetQueue() const { DARABONBA_PTR_GET_DEFAULT(deadLetterTargetQueue_, "") };
          inline DlqPolicy& setDeadLetterTargetQueue(string deadLetterTargetQueue) { DARABONBA_PTR_SET_VALUE(deadLetterTargetQueue_, deadLetterTargetQueue) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline DlqPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          // The destination queue for dead-letter messages.
          shared_ptr<string> deadLetterTargetQueue_ {};
          // Indicates whether dead-letter message delivery is enabled.
          shared_ptr<bool> enabled_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dlqPolicy_ == nullptr && this->endpoint_ == nullptr && this->filterTag_ == nullptr && this->lastModifyTime_ == nullptr && this->notifyContentFormat_ == nullptr
        && this->notifyStrategy_ == nullptr && this->subscriptionName_ == nullptr && this->topicName_ == nullptr && this->topicOwner_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline PageData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dlqPolicy Field Functions 
        bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
        void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
        inline const PageData::DlqPolicy & getDlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, PageData::DlqPolicy) };
        inline PageData::DlqPolicy getDlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, PageData::DlqPolicy) };
        inline PageData& setDlqPolicy(const PageData::DlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
        inline PageData& setDlqPolicy(PageData::DlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline PageData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // filterTag Field Functions 
        bool hasFilterTag() const { return this->filterTag_ != nullptr;};
        void deleteFilterTag() { this->filterTag_ = nullptr;};
        inline string getFilterTag() const { DARABONBA_PTR_GET_DEFAULT(filterTag_, "") };
        inline PageData& setFilterTag(string filterTag) { DARABONBA_PTR_SET_VALUE(filterTag_, filterTag) };


        // lastModifyTime Field Functions 
        bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
        void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
        inline int64_t getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
        inline PageData& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


        // notifyContentFormat Field Functions 
        bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
        void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
        inline string getNotifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
        inline PageData& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


        // notifyStrategy Field Functions 
        bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
        void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
        inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
        inline PageData& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


        // subscriptionName Field Functions 
        bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
        void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
        inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
        inline PageData& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline PageData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // topicOwner Field Functions 
        bool hasTopicOwner() const { return this->topicOwner_ != nullptr;};
        void deleteTopicOwner() { this->topicOwner_ = nullptr;};
        inline string getTopicOwner() const { DARABONBA_PTR_GET_DEFAULT(topicOwner_, "") };
        inline PageData& setTopicOwner(string topicOwner) { DARABONBA_PTR_SET_VALUE(topicOwner_, topicOwner) };


      protected:
        // The time when the subscription was created, in Unix time format.
        shared_ptr<int64_t> createTime_ {};
        // The dead-letter queue policy.
        shared_ptr<PageData::DlqPolicy> dlqPolicy_ {};
        // The endpoint of the subscription.
        shared_ptr<string> endpoint_ {};
        // The tag for message filtering in the subscription. Only messages with the same tag are pushed.
        shared_ptr<string> filterTag_ {};
        // The time when the subscription properties were last modified. This value is a UNIX timestamp.
        shared_ptr<int64_t> lastModifyTime_ {};
        // The format of the message content pushed to the endpoint.
        // Valid values:
        // 
        // - XML
        // 
        // - JSON
        // 
        // - SIMPLIFIED
        shared_ptr<string> notifyContentFormat_ {};
        // The retry policy for message push failures to the endpoint. Valid values:
        // 
        // - BACKOFF_RETRY: backoff retry.
        // 
        // - EXPONENTIAL_DECAY_RETRY: exponential decay retry.
        shared_ptr<string> notifyStrategy_ {};
        // The subscription name.
        shared_ptr<string> subscriptionName_ {};
        // The name of the topic to which the subscription belongs.
        shared_ptr<string> topicName_ {};
        // The AccountId of the owner of the topic to which the subscription belongs.
        shared_ptr<string> topicOwner_ {};
      };

      virtual bool empty() const override { return this->pageData_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pages_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // pageData Field Functions 
      bool hasPageData() const { return this->pageData_ != nullptr;};
      void deletePageData() { this->pageData_ = nullptr;};
      inline const vector<Data::PageData> & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Data::PageData>) };
      inline vector<Data::PageData> getPageData() { DARABONBA_PTR_GET(pageData_, vector<Data::PageData>) };
      inline Data& setPageData(const vector<Data::PageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
      inline Data& setPageData(vector<Data::PageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
      inline Data& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pages Field Functions 
      bool hasPages() const { return this->pages_ != nullptr;};
      void deletePages() { this->pages_ = nullptr;};
      inline int64_t getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0L) };
      inline Data& setPages(int64_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The entries on the current page.
      shared_ptr<vector<Data::PageData>> pageData_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of pages.
      shared_ptr<int64_t> pages_ {};
      // The number of entries on the current page.
      shared_ptr<int64_t> size_ {};
      // The total number of entries.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListSubscriptionByTopicResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSubscriptionByTopicResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSubscriptionByTopicResponseBody::Data) };
    inline ListSubscriptionByTopicResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSubscriptionByTopicResponseBody::Data) };
    inline ListSubscriptionByTopicResponseBody& setData(const ListSubscriptionByTopicResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSubscriptionByTopicResponseBody& setData(ListSubscriptionByTopicResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSubscriptionByTopicResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubscriptionByTopicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSubscriptionByTopicResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSubscriptionByTopicResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The response data.
    shared_ptr<ListSubscriptionByTopicResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The response status.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
