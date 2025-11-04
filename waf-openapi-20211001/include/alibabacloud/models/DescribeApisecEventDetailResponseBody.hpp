// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_TO_JSON(AttackerList, attackerList_);
      DARABONBA_PTR_TO_JSON(DetailValue, detailValue_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventScope, eventScope_);
      DARABONBA_PTR_TO_JSON(EventTag, eventTag_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_FROM_JSON(AttackerList, attackerList_);
      DARABONBA_PTR_FROM_JSON(DetailValue, detailValue_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventScope, eventScope_);
      DARABONBA_PTR_FROM_JSON(EventTag, eventTag_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeApisecEventDetailResponseBody() = default ;
    DescribeApisecEventDetailResponseBody(const DescribeApisecEventDetailResponseBody &) = default ;
    DescribeApisecEventDetailResponseBody(DescribeApisecEventDetailResponseBody &&) = default ;
    DescribeApisecEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecEventDetailResponseBody() = default ;
    DescribeApisecEventDetailResponseBody& operator=(const DescribeApisecEventDetailResponseBody &) = default ;
    DescribeApisecEventDetailResponseBody& operator=(DescribeApisecEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackCnt_ == nullptr
        && return this->attackerList_ == nullptr && return this->detailValue_ == nullptr && return this->endTs_ == nullptr && return this->eventId_ == nullptr && return this->eventLevel_ == nullptr
        && return this->eventScope_ == nullptr && return this->eventTag_ == nullptr && return this->note_ == nullptr && return this->origin_ == nullptr && return this->requestId_ == nullptr
        && return this->startTs_ == nullptr && return this->userStatus_ == nullptr; };
    // attackCnt Field Functions 
    bool hasAttackCnt() const { return this->attackCnt_ != nullptr;};
    void deleteAttackCnt() { this->attackCnt_ = nullptr;};
    inline string attackCnt() const { DARABONBA_PTR_GET_DEFAULT(attackCnt_, "") };
    inline DescribeApisecEventDetailResponseBody& setAttackCnt(string attackCnt) { DARABONBA_PTR_SET_VALUE(attackCnt_, attackCnt) };


    // attackerList Field Functions 
    bool hasAttackerList() const { return this->attackerList_ != nullptr;};
    void deleteAttackerList() { this->attackerList_ = nullptr;};
    inline const vector<string> & attackerList() const { DARABONBA_PTR_GET_CONST(attackerList_, vector<string>) };
    inline vector<string> attackerList() { DARABONBA_PTR_GET(attackerList_, vector<string>) };
    inline DescribeApisecEventDetailResponseBody& setAttackerList(const vector<string> & attackerList) { DARABONBA_PTR_SET_VALUE(attackerList_, attackerList) };
    inline DescribeApisecEventDetailResponseBody& setAttackerList(vector<string> && attackerList) { DARABONBA_PTR_SET_RVALUE(attackerList_, attackerList) };


    // detailValue Field Functions 
    bool hasDetailValue() const { return this->detailValue_ != nullptr;};
    void deleteDetailValue() { this->detailValue_ = nullptr;};
    inline string detailValue() const { DARABONBA_PTR_GET_DEFAULT(detailValue_, "") };
    inline DescribeApisecEventDetailResponseBody& setDetailValue(string detailValue) { DARABONBA_PTR_SET_VALUE(detailValue_, detailValue) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline string endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, "") };
    inline DescribeApisecEventDetailResponseBody& setEndTs(string endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeApisecEventDetailResponseBody& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeApisecEventDetailResponseBody& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventScope Field Functions 
    bool hasEventScope() const { return this->eventScope_ != nullptr;};
    void deleteEventScope() { this->eventScope_ = nullptr;};
    inline string eventScope() const { DARABONBA_PTR_GET_DEFAULT(eventScope_, "") };
    inline DescribeApisecEventDetailResponseBody& setEventScope(string eventScope) { DARABONBA_PTR_SET_VALUE(eventScope_, eventScope) };


    // eventTag Field Functions 
    bool hasEventTag() const { return this->eventTag_ != nullptr;};
    void deleteEventTag() { this->eventTag_ = nullptr;};
    inline string eventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
    inline DescribeApisecEventDetailResponseBody& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeApisecEventDetailResponseBody& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeApisecEventDetailResponseBody& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline string startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, "") };
    inline DescribeApisecEventDetailResponseBody& setStartTs(string startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline DescribeApisecEventDetailResponseBody& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    std::shared_ptr<string> attackCnt_ = nullptr;
    std::shared_ptr<vector<string>> attackerList_ = nullptr;
    std::shared_ptr<string> detailValue_ = nullptr;
    std::shared_ptr<string> endTs_ = nullptr;
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> eventLevel_ = nullptr;
    std::shared_ptr<string> eventScope_ = nullptr;
    std::shared_ptr<string> eventTag_ = nullptr;
    std::shared_ptr<string> note_ = nullptr;
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTs_ = nullptr;
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
