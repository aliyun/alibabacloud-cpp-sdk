// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITHISTORYRESPONSEBODYHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITHISTORYRESPONSEBODYHISTORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditHistoryResponseBodyHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditHistoryResponseBodyHistories& obj) { 
      DARABONBA_PTR_TO_JSON(Auditor, auditor_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditHistoryResponseBodyHistories& obj) { 
      DARABONBA_PTR_FROM_JSON(Auditor, auditor_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetAuditHistoryResponseBodyHistories() = default ;
    GetAuditHistoryResponseBodyHistories(const GetAuditHistoryResponseBodyHistories &) = default ;
    GetAuditHistoryResponseBodyHistories(GetAuditHistoryResponseBodyHistories &&) = default ;
    GetAuditHistoryResponseBodyHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditHistoryResponseBodyHistories() = default ;
    GetAuditHistoryResponseBodyHistories& operator=(const GetAuditHistoryResponseBodyHistories &) = default ;
    GetAuditHistoryResponseBodyHistories& operator=(GetAuditHistoryResponseBodyHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditor_ != nullptr
        && this->comment_ != nullptr && this->creationTime_ != nullptr && this->reason_ != nullptr && this->status_ != nullptr; };
    // auditor Field Functions 
    bool hasAuditor() const { return this->auditor_ != nullptr;};
    void deleteAuditor() { this->auditor_ = nullptr;};
    inline string auditor() const { DARABONBA_PTR_GET_DEFAULT(auditor_, "") };
    inline GetAuditHistoryResponseBodyHistories& setAuditor(string auditor) { DARABONBA_PTR_SET_VALUE(auditor_, auditor) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetAuditHistoryResponseBodyHistories& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetAuditHistoryResponseBodyHistories& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetAuditHistoryResponseBodyHistories& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAuditHistoryResponseBodyHistories& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reviewer.
    std::shared_ptr<string> auditor_ = nullptr;
    // The review comments, which are provided by the reviewer.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the review record was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The reason why the video failed the review. If the video failed the review, specify the reason.
    std::shared_ptr<string> reason_ = nullptr;
    // The manual review result. Valid values:
    // - **Normal**: The video can be played.
    // - **Blocked**: The video is blocked.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
