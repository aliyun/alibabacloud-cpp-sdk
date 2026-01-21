// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPNOTIFYPOLICYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPNOTIFYPOLICYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupNotifyPolicyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupNotifyPolicyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NotifyPolicyList, notifyPolicyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupNotifyPolicyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NotifyPolicyList, notifyPolicyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMonitorGroupNotifyPolicyListResponseBody() = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody(const DescribeMonitorGroupNotifyPolicyListResponseBody &) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody(DescribeMonitorGroupNotifyPolicyListResponseBody &&) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupNotifyPolicyListResponseBody() = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody& operator=(const DescribeMonitorGroupNotifyPolicyListResponseBody &) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody& operator=(DescribeMonitorGroupNotifyPolicyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NotifyPolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotifyPolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(NotifyPolicy, notifyPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, NotifyPolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(NotifyPolicy, notifyPolicy_);
      };
      NotifyPolicyList() = default ;
      NotifyPolicyList(const NotifyPolicyList &) = default ;
      NotifyPolicyList(NotifyPolicyList &&) = default ;
      NotifyPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotifyPolicyList() = default ;
      NotifyPolicyList& operator=(const NotifyPolicyList &) = default ;
      NotifyPolicyList& operator=(NotifyPolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NotifyPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotifyPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, NotifyPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        NotifyPolicy() = default ;
        NotifyPolicy(const NotifyPolicy &) = default ;
        NotifyPolicy(NotifyPolicy &&) = default ;
        NotifyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotifyPolicy() = default ;
        NotifyPolicy& operator=(const NotifyPolicy &) = default ;
        NotifyPolicy& operator=(NotifyPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline NotifyPolicy& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline NotifyPolicy& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline NotifyPolicy& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline NotifyPolicy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NotifyPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The end of the time range to query.
        // 
        // Unit: milliseconds.
        shared_ptr<int64_t> endTime_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The policy ID.
        shared_ptr<string> id_ {};
        // The beginning of the time range to query.
        // 
        // Unit: milliseconds.
        shared_ptr<int64_t> startTime_ {};
        // The policy type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->notifyPolicy_ == nullptr; };
      // notifyPolicy Field Functions 
      bool hasNotifyPolicy() const { return this->notifyPolicy_ != nullptr;};
      void deleteNotifyPolicy() { this->notifyPolicy_ = nullptr;};
      inline const vector<NotifyPolicyList::NotifyPolicy> & getNotifyPolicy() const { DARABONBA_PTR_GET_CONST(notifyPolicy_, vector<NotifyPolicyList::NotifyPolicy>) };
      inline vector<NotifyPolicyList::NotifyPolicy> getNotifyPolicy() { DARABONBA_PTR_GET(notifyPolicy_, vector<NotifyPolicyList::NotifyPolicy>) };
      inline NotifyPolicyList& setNotifyPolicy(const vector<NotifyPolicyList::NotifyPolicy> & notifyPolicy) { DARABONBA_PTR_SET_VALUE(notifyPolicy_, notifyPolicy) };
      inline NotifyPolicyList& setNotifyPolicy(vector<NotifyPolicyList::NotifyPolicy> && notifyPolicy) { DARABONBA_PTR_SET_RVALUE(notifyPolicy_, notifyPolicy) };


    protected:
      shared_ptr<vector<NotifyPolicyList::NotifyPolicy>> notifyPolicy_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->notifyPolicyList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // notifyPolicyList Field Functions 
    bool hasNotifyPolicyList() const { return this->notifyPolicyList_ != nullptr;};
    void deleteNotifyPolicyList() { this->notifyPolicyList_ = nullptr;};
    inline const DescribeMonitorGroupNotifyPolicyListResponseBody::NotifyPolicyList & getNotifyPolicyList() const { DARABONBA_PTR_GET_CONST(notifyPolicyList_, DescribeMonitorGroupNotifyPolicyListResponseBody::NotifyPolicyList) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody::NotifyPolicyList getNotifyPolicyList() { DARABONBA_PTR_GET(notifyPolicyList_, DescribeMonitorGroupNotifyPolicyListResponseBody::NotifyPolicyList) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setNotifyPolicyList(const DescribeMonitorGroupNotifyPolicyListResponseBody::NotifyPolicyList & notifyPolicyList) { DARABONBA_PTR_SET_VALUE(notifyPolicyList_, notifyPolicyList) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setNotifyPolicyList(DescribeMonitorGroupNotifyPolicyListResponseBody::NotifyPolicyList && notifyPolicyList) { DARABONBA_PTR_SET_RVALUE(notifyPolicyList_, notifyPolicyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The returned policies.
    shared_ptr<DescribeMonitorGroupNotifyPolicyListResponseBody::NotifyPolicyList> notifyPolicyList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
