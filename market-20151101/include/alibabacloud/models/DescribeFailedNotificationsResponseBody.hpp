// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAILEDNOTIFICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAILEDNOTIFICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeFailedNotificationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFailedNotificationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationList, notificationList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFailedNotificationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationList, notificationList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFailedNotificationsResponseBody() = default ;
    DescribeFailedNotificationsResponseBody(const DescribeFailedNotificationsResponseBody &) = default ;
    DescribeFailedNotificationsResponseBody(DescribeFailedNotificationsResponseBody &&) = default ;
    DescribeFailedNotificationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFailedNotificationsResponseBody() = default ;
    DescribeFailedNotificationsResponseBody& operator=(const DescribeFailedNotificationsResponseBody &) = default ;
    DescribeFailedNotificationsResponseBody& operator=(DescribeFailedNotificationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NotificationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotificationList& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NotificationRequestId, notificationRequestId_);
      };
      friend void from_json(const Darabonba::Json& j, NotificationList& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NotificationRequestId, notificationRequestId_);
      };
      NotificationList() = default ;
      NotificationList(const NotificationList &) = default ;
      NotificationList(NotificationList &&) = default ;
      NotificationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotificationList() = default ;
      NotificationList& operator=(const NotificationList &) = default ;
      NotificationList& operator=(NotificationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->createTime_ == nullptr && this->message_ == nullptr && this->notificationRequestId_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline NotificationList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NotificationList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline NotificationList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // notificationRequestId Field Functions 
      bool hasNotificationRequestId() const { return this->notificationRequestId_ != nullptr;};
      void deleteNotificationRequestId() { this->notificationRequestId_ = nullptr;};
      inline string getNotificationRequestId() const { DARABONBA_PTR_GET_DEFAULT(notificationRequestId_, "") };
      inline NotificationList& setNotificationRequestId(string notificationRequestId) { DARABONBA_PTR_SET_VALUE(notificationRequestId_, notificationRequestId) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> notificationRequestId_ {};
    };

    virtual bool empty() const override { return this->notificationList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // notificationList Field Functions 
    bool hasNotificationList() const { return this->notificationList_ != nullptr;};
    void deleteNotificationList() { this->notificationList_ = nullptr;};
    inline const vector<DescribeFailedNotificationsResponseBody::NotificationList> & getNotificationList() const { DARABONBA_PTR_GET_CONST(notificationList_, vector<DescribeFailedNotificationsResponseBody::NotificationList>) };
    inline vector<DescribeFailedNotificationsResponseBody::NotificationList> getNotificationList() { DARABONBA_PTR_GET(notificationList_, vector<DescribeFailedNotificationsResponseBody::NotificationList>) };
    inline DescribeFailedNotificationsResponseBody& setNotificationList(const vector<DescribeFailedNotificationsResponseBody::NotificationList> & notificationList) { DARABONBA_PTR_SET_VALUE(notificationList_, notificationList) };
    inline DescribeFailedNotificationsResponseBody& setNotificationList(vector<DescribeFailedNotificationsResponseBody::NotificationList> && notificationList) { DARABONBA_PTR_SET_RVALUE(notificationList_, notificationList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFailedNotificationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFailedNotificationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFailedNotificationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFailedNotificationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeFailedNotificationsResponseBody::NotificationList>> notificationList_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
