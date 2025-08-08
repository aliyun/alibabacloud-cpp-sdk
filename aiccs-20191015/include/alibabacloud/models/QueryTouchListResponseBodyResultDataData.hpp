// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTOUCHLISTRESPONSEBODYRESULTDATADATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTOUCHLISTRESPONSEBODYRESULTDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTouchListResponseBodyResultDataDataExtAttrs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTouchListResponseBodyResultDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTouchListResponseBodyResultDataData& obj) { 
      DARABONBA_PTR_TO_JSON(BuId, buId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CloseTime, closeTime_);
      DARABONBA_PTR_TO_JSON(CommonQueueName, commonQueueName_);
      DARABONBA_PTR_TO_JSON(DepId, depId_);
      DARABONBA_PTR_TO_JSON(ExtAttrs, extAttrs_);
      DARABONBA_ANY_TO_JSON(ExtAttrsString, extAttrsString_);
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(FromId, fromId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(ParentTouchId, parentTouchId_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchUser, switchUser_);
      DARABONBA_PTR_TO_JSON(ToId, toId_);
      DARABONBA_PTR_TO_JSON(TouchContent, touchContent_);
      DARABONBA_PTR_TO_JSON(TouchEndReason, touchEndReason_);
      DARABONBA_PTR_TO_JSON(TouchId, touchId_);
      DARABONBA_PTR_TO_JSON(TouchTime, touchTime_);
      DARABONBA_PTR_TO_JSON(TouchType, touchType_);
      DARABONBA_PTR_TO_JSON(UserTouchId, userTouchId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTouchListResponseBodyResultDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(BuId, buId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CloseTime, closeTime_);
      DARABONBA_PTR_FROM_JSON(CommonQueueName, commonQueueName_);
      DARABONBA_PTR_FROM_JSON(DepId, depId_);
      DARABONBA_PTR_FROM_JSON(ExtAttrs, extAttrs_);
      DARABONBA_ANY_FROM_JSON(ExtAttrsString, extAttrsString_);
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(FromId, fromId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(ParentTouchId, parentTouchId_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchUser, switchUser_);
      DARABONBA_PTR_FROM_JSON(ToId, toId_);
      DARABONBA_PTR_FROM_JSON(TouchContent, touchContent_);
      DARABONBA_PTR_FROM_JSON(TouchEndReason, touchEndReason_);
      DARABONBA_PTR_FROM_JSON(TouchId, touchId_);
      DARABONBA_PTR_FROM_JSON(TouchTime, touchTime_);
      DARABONBA_PTR_FROM_JSON(TouchType, touchType_);
      DARABONBA_PTR_FROM_JSON(UserTouchId, userTouchId_);
    };
    QueryTouchListResponseBodyResultDataData() = default ;
    QueryTouchListResponseBodyResultDataData(const QueryTouchListResponseBodyResultDataData &) = default ;
    QueryTouchListResponseBodyResultDataData(QueryTouchListResponseBodyResultDataData &&) = default ;
    QueryTouchListResponseBodyResultDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTouchListResponseBodyResultDataData() = default ;
    QueryTouchListResponseBodyResultDataData& operator=(const QueryTouchListResponseBodyResultDataData &) = default ;
    QueryTouchListResponseBodyResultDataData& operator=(QueryTouchListResponseBodyResultDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buId_ != nullptr
        && this->channelId_ != nullptr && this->channelType_ != nullptr && this->closeTime_ != nullptr && this->commonQueueName_ != nullptr && this->depId_ != nullptr
        && this->extAttrs_ != nullptr && this->extAttrsString_ != nullptr && this->feedback_ != nullptr && this->firstTime_ != nullptr && this->fromId_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->memberId_ != nullptr && this->memberName_ != nullptr && this->parentTouchId_ != nullptr
        && this->queueId_ != nullptr && this->servicerId_ != nullptr && this->servicerName_ != nullptr && this->status_ != nullptr && this->switchUser_ != nullptr
        && this->toId_ != nullptr && this->touchContent_ != nullptr && this->touchEndReason_ != nullptr && this->touchId_ != nullptr && this->touchTime_ != nullptr
        && this->touchType_ != nullptr && this->userTouchId_ != nullptr; };
    // buId Field Functions 
    bool hasBuId() const { return this->buId_ != nullptr;};
    void deleteBuId() { this->buId_ = nullptr;};
    inline int64_t buId() const { DARABONBA_PTR_GET_DEFAULT(buId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setBuId(int64_t buId) { DARABONBA_PTR_SET_VALUE(buId_, buId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryTouchListResponseBodyResultDataData& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline int32_t channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0) };
    inline QueryTouchListResponseBodyResultDataData& setChannelType(int32_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // closeTime Field Functions 
    bool hasCloseTime() const { return this->closeTime_ != nullptr;};
    void deleteCloseTime() { this->closeTime_ = nullptr;};
    inline int64_t closeTime() const { DARABONBA_PTR_GET_DEFAULT(closeTime_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setCloseTime(int64_t closeTime) { DARABONBA_PTR_SET_VALUE(closeTime_, closeTime) };


    // commonQueueName Field Functions 
    bool hasCommonQueueName() const { return this->commonQueueName_ != nullptr;};
    void deleteCommonQueueName() { this->commonQueueName_ = nullptr;};
    inline string commonQueueName() const { DARABONBA_PTR_GET_DEFAULT(commonQueueName_, "") };
    inline QueryTouchListResponseBodyResultDataData& setCommonQueueName(string commonQueueName) { DARABONBA_PTR_SET_VALUE(commonQueueName_, commonQueueName) };


    // depId Field Functions 
    bool hasDepId() const { return this->depId_ != nullptr;};
    void deleteDepId() { this->depId_ = nullptr;};
    inline int64_t depId() const { DARABONBA_PTR_GET_DEFAULT(depId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setDepId(int64_t depId) { DARABONBA_PTR_SET_VALUE(depId_, depId) };


    // extAttrs Field Functions 
    bool hasExtAttrs() const { return this->extAttrs_ != nullptr;};
    void deleteExtAttrs() { this->extAttrs_ = nullptr;};
    inline const Models::QueryTouchListResponseBodyResultDataDataExtAttrs & extAttrs() const { DARABONBA_PTR_GET_CONST(extAttrs_, Models::QueryTouchListResponseBodyResultDataDataExtAttrs) };
    inline Models::QueryTouchListResponseBodyResultDataDataExtAttrs extAttrs() { DARABONBA_PTR_GET(extAttrs_, Models::QueryTouchListResponseBodyResultDataDataExtAttrs) };
    inline QueryTouchListResponseBodyResultDataData& setExtAttrs(const Models::QueryTouchListResponseBodyResultDataDataExtAttrs & extAttrs) { DARABONBA_PTR_SET_VALUE(extAttrs_, extAttrs) };
    inline QueryTouchListResponseBodyResultDataData& setExtAttrs(Models::QueryTouchListResponseBodyResultDataDataExtAttrs && extAttrs) { DARABONBA_PTR_SET_RVALUE(extAttrs_, extAttrs) };


    // extAttrsString Field Functions 
    bool hasExtAttrsString() const { return this->extAttrsString_ != nullptr;};
    void deleteExtAttrsString() { this->extAttrsString_ = nullptr;};
    inline     const Darabonba::Json & extAttrsString() const { DARABONBA_GET(extAttrsString_) };
    Darabonba::Json & extAttrsString() { DARABONBA_GET(extAttrsString_) };
    inline QueryTouchListResponseBodyResultDataData& setExtAttrsString(const Darabonba::Json & extAttrsString) { DARABONBA_SET_VALUE(extAttrsString_, extAttrsString) };
    inline QueryTouchListResponseBodyResultDataData& setExtAttrsString(Darabonba::Json & extAttrsString) { DARABONBA_SET_RVALUE(extAttrsString_, extAttrsString) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline QueryTouchListResponseBodyResultDataData& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // fromId Field Functions 
    bool hasFromId() const { return this->fromId_ != nullptr;};
    void deleteFromId() { this->fromId_ = nullptr;};
    inline int64_t fromId() const { DARABONBA_PTR_GET_DEFAULT(fromId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setFromId(int64_t fromId) { DARABONBA_PTR_SET_VALUE(fromId_, fromId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline int64_t memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline QueryTouchListResponseBodyResultDataData& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // parentTouchId Field Functions 
    bool hasParentTouchId() const { return this->parentTouchId_ != nullptr;};
    void deleteParentTouchId() { this->parentTouchId_ = nullptr;};
    inline int64_t parentTouchId() const { DARABONBA_PTR_GET_DEFAULT(parentTouchId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setParentTouchId(int64_t parentTouchId) { DARABONBA_PTR_SET_VALUE(parentTouchId_, parentTouchId) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline int64_t queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setQueueId(int64_t queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // servicerId Field Functions 
    bool hasServicerId() const { return this->servicerId_ != nullptr;};
    void deleteServicerId() { this->servicerId_ = nullptr;};
    inline int64_t servicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setServicerId(int64_t servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline QueryTouchListResponseBodyResultDataData& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryTouchListResponseBodyResultDataData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchUser Field Functions 
    bool hasSwitchUser() const { return this->switchUser_ != nullptr;};
    void deleteSwitchUser() { this->switchUser_ = nullptr;};
    inline string switchUser() const { DARABONBA_PTR_GET_DEFAULT(switchUser_, "") };
    inline QueryTouchListResponseBodyResultDataData& setSwitchUser(string switchUser) { DARABONBA_PTR_SET_VALUE(switchUser_, switchUser) };


    // toId Field Functions 
    bool hasToId() const { return this->toId_ != nullptr;};
    void deleteToId() { this->toId_ = nullptr;};
    inline int64_t toId() const { DARABONBA_PTR_GET_DEFAULT(toId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setToId(int64_t toId) { DARABONBA_PTR_SET_VALUE(toId_, toId) };


    // touchContent Field Functions 
    bool hasTouchContent() const { return this->touchContent_ != nullptr;};
    void deleteTouchContent() { this->touchContent_ = nullptr;};
    inline string touchContent() const { DARABONBA_PTR_GET_DEFAULT(touchContent_, "") };
    inline QueryTouchListResponseBodyResultDataData& setTouchContent(string touchContent) { DARABONBA_PTR_SET_VALUE(touchContent_, touchContent) };


    // touchEndReason Field Functions 
    bool hasTouchEndReason() const { return this->touchEndReason_ != nullptr;};
    void deleteTouchEndReason() { this->touchEndReason_ = nullptr;};
    inline int32_t touchEndReason() const { DARABONBA_PTR_GET_DEFAULT(touchEndReason_, 0) };
    inline QueryTouchListResponseBodyResultDataData& setTouchEndReason(int32_t touchEndReason) { DARABONBA_PTR_SET_VALUE(touchEndReason_, touchEndReason) };


    // touchId Field Functions 
    bool hasTouchId() const { return this->touchId_ != nullptr;};
    void deleteTouchId() { this->touchId_ = nullptr;};
    inline string touchId() const { DARABONBA_PTR_GET_DEFAULT(touchId_, "") };
    inline QueryTouchListResponseBodyResultDataData& setTouchId(string touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };


    // touchTime Field Functions 
    bool hasTouchTime() const { return this->touchTime_ != nullptr;};
    void deleteTouchTime() { this->touchTime_ = nullptr;};
    inline string touchTime() const { DARABONBA_PTR_GET_DEFAULT(touchTime_, "") };
    inline QueryTouchListResponseBodyResultDataData& setTouchTime(string touchTime) { DARABONBA_PTR_SET_VALUE(touchTime_, touchTime) };


    // touchType Field Functions 
    bool hasTouchType() const { return this->touchType_ != nullptr;};
    void deleteTouchType() { this->touchType_ = nullptr;};
    inline int32_t touchType() const { DARABONBA_PTR_GET_DEFAULT(touchType_, 0) };
    inline QueryTouchListResponseBodyResultDataData& setTouchType(int32_t touchType) { DARABONBA_PTR_SET_VALUE(touchType_, touchType) };


    // userTouchId Field Functions 
    bool hasUserTouchId() const { return this->userTouchId_ != nullptr;};
    void deleteUserTouchId() { this->userTouchId_ = nullptr;};
    inline int64_t userTouchId() const { DARABONBA_PTR_GET_DEFAULT(userTouchId_, 0L) };
    inline QueryTouchListResponseBodyResultDataData& setUserTouchId(int64_t userTouchId) { DARABONBA_PTR_SET_VALUE(userTouchId_, userTouchId) };


  protected:
    std::shared_ptr<int64_t> buId_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int32_t> channelType_ = nullptr;
    std::shared_ptr<int64_t> closeTime_ = nullptr;
    std::shared_ptr<string> commonQueueName_ = nullptr;
    std::shared_ptr<int64_t> depId_ = nullptr;
    std::shared_ptr<Models::QueryTouchListResponseBodyResultDataDataExtAttrs> extAttrs_ = nullptr;
    Darabonba::Json extAttrsString_ = nullptr;
    std::shared_ptr<string> feedback_ = nullptr;
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    std::shared_ptr<int64_t> fromId_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> memberId_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<int64_t> parentTouchId_ = nullptr;
    std::shared_ptr<int64_t> queueId_ = nullptr;
    std::shared_ptr<int64_t> servicerId_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> switchUser_ = nullptr;
    std::shared_ptr<int64_t> toId_ = nullptr;
    std::shared_ptr<string> touchContent_ = nullptr;
    std::shared_ptr<int32_t> touchEndReason_ = nullptr;
    std::shared_ptr<string> touchId_ = nullptr;
    std::shared_ptr<string> touchTime_ = nullptr;
    std::shared_ptr<int32_t> touchType_ = nullptr;
    std::shared_ptr<int64_t> userTouchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
