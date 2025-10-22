// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTOUCHLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTOUCHLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTouchListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTouchListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CloseTimeEnd, closeTimeEnd_);
      DARABONBA_PTR_TO_JSON(CloseTimeStart, closeTimeStart_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EvaluationLevel, evaluationLevel_);
      DARABONBA_PTR_TO_JSON(EvaluationScore, evaluationScore_);
      DARABONBA_PTR_TO_JSON(EvaluationStatus, evaluationStatus_);
      DARABONBA_PTR_TO_JSON(FirstTimeEnd, firstTimeEnd_);
      DARABONBA_PTR_TO_JSON(FirstTimeStart, firstTimeStart_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_TO_JSON(TouchId, touchId_);
      DARABONBA_PTR_TO_JSON(TouchType, touchType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTouchListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CloseTimeEnd, closeTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CloseTimeStart, closeTimeStart_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EvaluationLevel, evaluationLevel_);
      DARABONBA_PTR_FROM_JSON(EvaluationScore, evaluationScore_);
      DARABONBA_PTR_FROM_JSON(EvaluationStatus, evaluationStatus_);
      DARABONBA_PTR_FROM_JSON(FirstTimeEnd, firstTimeEnd_);
      DARABONBA_PTR_FROM_JSON(FirstTimeStart, firstTimeStart_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_FROM_JSON(TouchId, touchId_);
      DARABONBA_PTR_FROM_JSON(TouchType, touchType_);
    };
    QueryTouchListRequest() = default ;
    QueryTouchListRequest(const QueryTouchListRequest &) = default ;
    QueryTouchListRequest(QueryTouchListRequest &&) = default ;
    QueryTouchListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTouchListRequest() = default ;
    QueryTouchListRequest& operator=(const QueryTouchListRequest &) = default ;
    QueryTouchListRequest& operator=(QueryTouchListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->channelType_ == nullptr && return this->closeTimeEnd_ == nullptr && return this->closeTimeStart_ == nullptr && return this->currentPage_ == nullptr && return this->evaluationLevel_ == nullptr
        && return this->evaluationScore_ == nullptr && return this->evaluationStatus_ == nullptr && return this->firstTimeEnd_ == nullptr && return this->firstTimeStart_ == nullptr && return this->instanceId_ == nullptr
        && return this->memberId_ == nullptr && return this->memberName_ == nullptr && return this->pageSize_ == nullptr && return this->queueId_ == nullptr && return this->servicerId_ == nullptr
        && return this->servicerName_ == nullptr && return this->touchId_ == nullptr && return this->touchType_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline const vector<string> & channelId() const { DARABONBA_PTR_GET_CONST(channelId_, vector<string>) };
    inline vector<string> channelId() { DARABONBA_PTR_GET(channelId_, vector<string>) };
    inline QueryTouchListRequest& setChannelId(const vector<string> & channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };
    inline QueryTouchListRequest& setChannelId(vector<string> && channelId) { DARABONBA_PTR_SET_RVALUE(channelId_, channelId) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline const vector<int32_t> & channelType() const { DARABONBA_PTR_GET_CONST(channelType_, vector<int32_t>) };
    inline vector<int32_t> channelType() { DARABONBA_PTR_GET(channelType_, vector<int32_t>) };
    inline QueryTouchListRequest& setChannelType(const vector<int32_t> & channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };
    inline QueryTouchListRequest& setChannelType(vector<int32_t> && channelType) { DARABONBA_PTR_SET_RVALUE(channelType_, channelType) };


    // closeTimeEnd Field Functions 
    bool hasCloseTimeEnd() const { return this->closeTimeEnd_ != nullptr;};
    void deleteCloseTimeEnd() { this->closeTimeEnd_ = nullptr;};
    inline int64_t closeTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(closeTimeEnd_, 0L) };
    inline QueryTouchListRequest& setCloseTimeEnd(int64_t closeTimeEnd) { DARABONBA_PTR_SET_VALUE(closeTimeEnd_, closeTimeEnd) };


    // closeTimeStart Field Functions 
    bool hasCloseTimeStart() const { return this->closeTimeStart_ != nullptr;};
    void deleteCloseTimeStart() { this->closeTimeStart_ = nullptr;};
    inline int64_t closeTimeStart() const { DARABONBA_PTR_GET_DEFAULT(closeTimeStart_, 0L) };
    inline QueryTouchListRequest& setCloseTimeStart(int64_t closeTimeStart) { DARABONBA_PTR_SET_VALUE(closeTimeStart_, closeTimeStart) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryTouchListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // evaluationLevel Field Functions 
    bool hasEvaluationLevel() const { return this->evaluationLevel_ != nullptr;};
    void deleteEvaluationLevel() { this->evaluationLevel_ = nullptr;};
    inline const vector<int32_t> & evaluationLevel() const { DARABONBA_PTR_GET_CONST(evaluationLevel_, vector<int32_t>) };
    inline vector<int32_t> evaluationLevel() { DARABONBA_PTR_GET(evaluationLevel_, vector<int32_t>) };
    inline QueryTouchListRequest& setEvaluationLevel(const vector<int32_t> & evaluationLevel) { DARABONBA_PTR_SET_VALUE(evaluationLevel_, evaluationLevel) };
    inline QueryTouchListRequest& setEvaluationLevel(vector<int32_t> && evaluationLevel) { DARABONBA_PTR_SET_RVALUE(evaluationLevel_, evaluationLevel) };


    // evaluationScore Field Functions 
    bool hasEvaluationScore() const { return this->evaluationScore_ != nullptr;};
    void deleteEvaluationScore() { this->evaluationScore_ = nullptr;};
    inline const vector<int32_t> & evaluationScore() const { DARABONBA_PTR_GET_CONST(evaluationScore_, vector<int32_t>) };
    inline vector<int32_t> evaluationScore() { DARABONBA_PTR_GET(evaluationScore_, vector<int32_t>) };
    inline QueryTouchListRequest& setEvaluationScore(const vector<int32_t> & evaluationScore) { DARABONBA_PTR_SET_VALUE(evaluationScore_, evaluationScore) };
    inline QueryTouchListRequest& setEvaluationScore(vector<int32_t> && evaluationScore) { DARABONBA_PTR_SET_RVALUE(evaluationScore_, evaluationScore) };


    // evaluationStatus Field Functions 
    bool hasEvaluationStatus() const { return this->evaluationStatus_ != nullptr;};
    void deleteEvaluationStatus() { this->evaluationStatus_ = nullptr;};
    inline const vector<int32_t> & evaluationStatus() const { DARABONBA_PTR_GET_CONST(evaluationStatus_, vector<int32_t>) };
    inline vector<int32_t> evaluationStatus() { DARABONBA_PTR_GET(evaluationStatus_, vector<int32_t>) };
    inline QueryTouchListRequest& setEvaluationStatus(const vector<int32_t> & evaluationStatus) { DARABONBA_PTR_SET_VALUE(evaluationStatus_, evaluationStatus) };
    inline QueryTouchListRequest& setEvaluationStatus(vector<int32_t> && evaluationStatus) { DARABONBA_PTR_SET_RVALUE(evaluationStatus_, evaluationStatus) };


    // firstTimeEnd Field Functions 
    bool hasFirstTimeEnd() const { return this->firstTimeEnd_ != nullptr;};
    void deleteFirstTimeEnd() { this->firstTimeEnd_ = nullptr;};
    inline int64_t firstTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(firstTimeEnd_, 0L) };
    inline QueryTouchListRequest& setFirstTimeEnd(int64_t firstTimeEnd) { DARABONBA_PTR_SET_VALUE(firstTimeEnd_, firstTimeEnd) };


    // firstTimeStart Field Functions 
    bool hasFirstTimeStart() const { return this->firstTimeStart_ != nullptr;};
    void deleteFirstTimeStart() { this->firstTimeStart_ = nullptr;};
    inline int64_t firstTimeStart() const { DARABONBA_PTR_GET_DEFAULT(firstTimeStart_, 0L) };
    inline QueryTouchListRequest& setFirstTimeStart(int64_t firstTimeStart) { DARABONBA_PTR_SET_VALUE(firstTimeStart_, firstTimeStart) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTouchListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline const vector<int64_t> & memberId() const { DARABONBA_PTR_GET_CONST(memberId_, vector<int64_t>) };
    inline vector<int64_t> memberId() { DARABONBA_PTR_GET(memberId_, vector<int64_t>) };
    inline QueryTouchListRequest& setMemberId(const vector<int64_t> & memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };
    inline QueryTouchListRequest& setMemberId(vector<int64_t> && memberId) { DARABONBA_PTR_SET_RVALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline const vector<string> & memberName() const { DARABONBA_PTR_GET_CONST(memberName_, vector<string>) };
    inline vector<string> memberName() { DARABONBA_PTR_GET(memberName_, vector<string>) };
    inline QueryTouchListRequest& setMemberName(const vector<string> & memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };
    inline QueryTouchListRequest& setMemberName(vector<string> && memberName) { DARABONBA_PTR_SET_RVALUE(memberName_, memberName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTouchListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline const vector<int64_t> & queueId() const { DARABONBA_PTR_GET_CONST(queueId_, vector<int64_t>) };
    inline vector<int64_t> queueId() { DARABONBA_PTR_GET(queueId_, vector<int64_t>) };
    inline QueryTouchListRequest& setQueueId(const vector<int64_t> & queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };
    inline QueryTouchListRequest& setQueueId(vector<int64_t> && queueId) { DARABONBA_PTR_SET_RVALUE(queueId_, queueId) };


    // servicerId Field Functions 
    bool hasServicerId() const { return this->servicerId_ != nullptr;};
    void deleteServicerId() { this->servicerId_ = nullptr;};
    inline const vector<int64_t> & servicerId() const { DARABONBA_PTR_GET_CONST(servicerId_, vector<int64_t>) };
    inline vector<int64_t> servicerId() { DARABONBA_PTR_GET(servicerId_, vector<int64_t>) };
    inline QueryTouchListRequest& setServicerId(const vector<int64_t> & servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };
    inline QueryTouchListRequest& setServicerId(vector<int64_t> && servicerId) { DARABONBA_PTR_SET_RVALUE(servicerId_, servicerId) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline const vector<string> & servicerName() const { DARABONBA_PTR_GET_CONST(servicerName_, vector<string>) };
    inline vector<string> servicerName() { DARABONBA_PTR_GET(servicerName_, vector<string>) };
    inline QueryTouchListRequest& setServicerName(const vector<string> & servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };
    inline QueryTouchListRequest& setServicerName(vector<string> && servicerName) { DARABONBA_PTR_SET_RVALUE(servicerName_, servicerName) };


    // touchId Field Functions 
    bool hasTouchId() const { return this->touchId_ != nullptr;};
    void deleteTouchId() { this->touchId_ = nullptr;};
    inline const vector<int64_t> & touchId() const { DARABONBA_PTR_GET_CONST(touchId_, vector<int64_t>) };
    inline vector<int64_t> touchId() { DARABONBA_PTR_GET(touchId_, vector<int64_t>) };
    inline QueryTouchListRequest& setTouchId(const vector<int64_t> & touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };
    inline QueryTouchListRequest& setTouchId(vector<int64_t> && touchId) { DARABONBA_PTR_SET_RVALUE(touchId_, touchId) };


    // touchType Field Functions 
    bool hasTouchType() const { return this->touchType_ != nullptr;};
    void deleteTouchType() { this->touchType_ = nullptr;};
    inline const vector<int32_t> & touchType() const { DARABONBA_PTR_GET_CONST(touchType_, vector<int32_t>) };
    inline vector<int32_t> touchType() { DARABONBA_PTR_GET(touchType_, vector<int32_t>) };
    inline QueryTouchListRequest& setTouchType(const vector<int32_t> & touchType) { DARABONBA_PTR_SET_VALUE(touchType_, touchType) };
    inline QueryTouchListRequest& setTouchType(vector<int32_t> && touchType) { DARABONBA_PTR_SET_RVALUE(touchType_, touchType) };


  protected:
    std::shared_ptr<vector<string>> channelId_ = nullptr;
    std::shared_ptr<vector<int32_t>> channelType_ = nullptr;
    std::shared_ptr<int64_t> closeTimeEnd_ = nullptr;
    std::shared_ptr<int64_t> closeTimeStart_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<int32_t>> evaluationLevel_ = nullptr;
    std::shared_ptr<vector<int32_t>> evaluationScore_ = nullptr;
    std::shared_ptr<vector<int32_t>> evaluationStatus_ = nullptr;
    std::shared_ptr<int64_t> firstTimeEnd_ = nullptr;
    std::shared_ptr<int64_t> firstTimeStart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<int64_t>> memberId_ = nullptr;
    std::shared_ptr<vector<string>> memberName_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<int64_t>> queueId_ = nullptr;
    std::shared_ptr<vector<int64_t>> servicerId_ = nullptr;
    std::shared_ptr<vector<string>> servicerName_ = nullptr;
    std::shared_ptr<vector<int64_t>> touchId_ = nullptr;
    std::shared_ptr<vector<int32_t>> touchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
