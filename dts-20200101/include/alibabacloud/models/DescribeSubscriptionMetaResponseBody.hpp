// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubscriptionMetaList, subscriptionMetaList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionMetaList, subscriptionMetaList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSubscriptionMetaResponseBody() = default ;
    DescribeSubscriptionMetaResponseBody(const DescribeSubscriptionMetaResponseBody &) = default ;
    DescribeSubscriptionMetaResponseBody(DescribeSubscriptionMetaResponseBody &&) = default ;
    DescribeSubscriptionMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionMetaResponseBody() = default ;
    DescribeSubscriptionMetaResponseBody& operator=(const DescribeSubscriptionMetaResponseBody &) = default ;
    DescribeSubscriptionMetaResponseBody& operator=(DescribeSubscriptionMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubscriptionMetaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionMetaList& obj) { 
        DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_TO_JSON(DBList, DBList_);
        DARABONBA_PTR_TO_JSON(DProxyUrl, DProxyUrl_);
        DARABONBA_PTR_TO_JSON(Sid, sid_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionMetaList& obj) { 
        DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_FROM_JSON(DBList, DBList_);
        DARABONBA_PTR_FROM_JSON(DProxyUrl, DProxyUrl_);
        DARABONBA_PTR_FROM_JSON(Sid, sid_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
      };
      SubscriptionMetaList() = default ;
      SubscriptionMetaList(const SubscriptionMetaList &) = default ;
      SubscriptionMetaList(SubscriptionMetaList &&) = default ;
      SubscriptionMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionMetaList() = default ;
      SubscriptionMetaList& operator=(const SubscriptionMetaList &) = default ;
      SubscriptionMetaList& operator=(SubscriptionMetaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->DBList_ == nullptr && this->DProxyUrl_ == nullptr && this->sid_ == nullptr && this->topic_ == nullptr; };
      // checkpoint Field Functions 
      bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
      void deleteCheckpoint() { this->checkpoint_ = nullptr;};
      inline int64_t getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, 0L) };
      inline SubscriptionMetaList& setCheckpoint(int64_t checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


      // DBList Field Functions 
      bool hasDBList() const { return this->DBList_ != nullptr;};
      void deleteDBList() { this->DBList_ = nullptr;};
      inline string getDBList() const { DARABONBA_PTR_GET_DEFAULT(DBList_, "") };
      inline SubscriptionMetaList& setDBList(string DBList) { DARABONBA_PTR_SET_VALUE(DBList_, DBList) };


      // DProxyUrl Field Functions 
      bool hasDProxyUrl() const { return this->DProxyUrl_ != nullptr;};
      void deleteDProxyUrl() { this->DProxyUrl_ = nullptr;};
      inline string getDProxyUrl() const { DARABONBA_PTR_GET_DEFAULT(DProxyUrl_, "") };
      inline SubscriptionMetaList& setDProxyUrl(string DProxyUrl) { DARABONBA_PTR_SET_VALUE(DProxyUrl_, DProxyUrl) };


      // sid Field Functions 
      bool hasSid() const { return this->sid_ != nullptr;};
      void deleteSid() { this->sid_ = nullptr;};
      inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
      inline SubscriptionMetaList& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline SubscriptionMetaList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    protected:
      // The consumer offset of the subtask. It is a UNIX timestamp that is generated when the client consumes the first data record. Unit: seconds.
      // 
      // >  You can use a search engine to obtain a UNIX timestamp converter.
      shared_ptr<int64_t> checkpoint_ {};
      // The objects of the subtask. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
      shared_ptr<string> DBList_ {};
      // The endpoint and port number of the change tracking instance.
      shared_ptr<string> DProxyUrl_ {};
      // The consumer group ID of the subtask.
      shared_ptr<string> sid_ {};
      // The topic of the subtask.
      shared_ptr<string> topic_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->subscriptionMetaList_ == nullptr && this->success_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSubscriptionMetaResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSubscriptionMetaResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeSubscriptionMetaResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSubscriptionMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptionMetaList Field Functions 
    bool hasSubscriptionMetaList() const { return this->subscriptionMetaList_ != nullptr;};
    void deleteSubscriptionMetaList() { this->subscriptionMetaList_ = nullptr;};
    inline const vector<DescribeSubscriptionMetaResponseBody::SubscriptionMetaList> & getSubscriptionMetaList() const { DARABONBA_PTR_GET_CONST(subscriptionMetaList_, vector<DescribeSubscriptionMetaResponseBody::SubscriptionMetaList>) };
    inline vector<DescribeSubscriptionMetaResponseBody::SubscriptionMetaList> getSubscriptionMetaList() { DARABONBA_PTR_GET(subscriptionMetaList_, vector<DescribeSubscriptionMetaResponseBody::SubscriptionMetaList>) };
    inline DescribeSubscriptionMetaResponseBody& setSubscriptionMetaList(const vector<DescribeSubscriptionMetaResponseBody::SubscriptionMetaList> & subscriptionMetaList) { DARABONBA_PTR_SET_VALUE(subscriptionMetaList_, subscriptionMetaList) };
    inline DescribeSubscriptionMetaResponseBody& setSubscriptionMetaList(vector<DescribeSubscriptionMetaResponseBody::SubscriptionMetaList> && subscriptionMetaList) { DARABONBA_PTR_SET_RVALUE(subscriptionMetaList_, subscriptionMetaList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSubscriptionMetaResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the subtasks.
    shared_ptr<vector<DescribeSubscriptionMetaResponseBody::SubscriptionMetaList>> subscriptionMetaList_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
