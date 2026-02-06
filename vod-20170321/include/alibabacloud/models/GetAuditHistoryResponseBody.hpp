// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Histories, histories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Histories, histories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetAuditHistoryResponseBody() = default ;
    GetAuditHistoryResponseBody(const GetAuditHistoryResponseBody &) = default ;
    GetAuditHistoryResponseBody(GetAuditHistoryResponseBody &&) = default ;
    GetAuditHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditHistoryResponseBody() = default ;
    GetAuditHistoryResponseBody& operator=(const GetAuditHistoryResponseBody &) = default ;
    GetAuditHistoryResponseBody& operator=(GetAuditHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Histories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Histories& obj) { 
        DARABONBA_PTR_TO_JSON(Auditor, auditor_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Histories& obj) { 
        DARABONBA_PTR_FROM_JSON(Auditor, auditor_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Histories() = default ;
      Histories(const Histories &) = default ;
      Histories(Histories &&) = default ;
      Histories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Histories() = default ;
      Histories& operator=(const Histories &) = default ;
      Histories& operator=(Histories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditor_ == nullptr
        && this->comment_ == nullptr && this->creationTime_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr; };
      // auditor Field Functions 
      bool hasAuditor() const { return this->auditor_ != nullptr;};
      void deleteAuditor() { this->auditor_ = nullptr;};
      inline string getAuditor() const { DARABONBA_PTR_GET_DEFAULT(auditor_, "") };
      inline Histories& setAuditor(string auditor) { DARABONBA_PTR_SET_VALUE(auditor_, auditor) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Histories& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Histories& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Histories& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Histories& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The reviewer.
      shared_ptr<string> auditor_ {};
      // The review comments, which are provided by the reviewer.
      shared_ptr<string> comment_ {};
      // The time when the review record was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The reason why the video failed the review. If the video failed the review, specify the reason.
      shared_ptr<string> reason_ {};
      // The manual review result. Valid values:
      // - **Normal**: The video can be played.
      // - **Blocked**: The video is blocked.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->histories_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->total_ == nullptr; };
    // histories Field Functions 
    bool hasHistories() const { return this->histories_ != nullptr;};
    void deleteHistories() { this->histories_ = nullptr;};
    inline const vector<GetAuditHistoryResponseBody::Histories> & getHistories() const { DARABONBA_PTR_GET_CONST(histories_, vector<GetAuditHistoryResponseBody::Histories>) };
    inline vector<GetAuditHistoryResponseBody::Histories> getHistories() { DARABONBA_PTR_GET(histories_, vector<GetAuditHistoryResponseBody::Histories>) };
    inline GetAuditHistoryResponseBody& setHistories(const vector<GetAuditHistoryResponseBody::Histories> & histories) { DARABONBA_PTR_SET_VALUE(histories_, histories) };
    inline GetAuditHistoryResponseBody& setHistories(vector<GetAuditHistoryResponseBody::Histories> && histories) { DARABONBA_PTR_SET_RVALUE(histories_, histories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAuditHistoryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetAuditHistoryResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The review records.
    shared_ptr<vector<GetAuditHistoryResponseBody::Histories>> histories_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The manual review result. Valid values:
    // - **Normal**: The video can be played.
    // - **Blocked**: The video is blocked.
    shared_ptr<string> status_ {};
    // The total number of review records.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
