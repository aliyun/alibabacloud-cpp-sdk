// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINECALLACTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINECALLACTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineCallActionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineCallActionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActionId, actionId_);
      DARABONBA_PTR_TO_JSON(BuId, buId_);
      DARABONBA_PTR_TO_JSON(CalloutId, calloutId_);
      DARABONBA_PTR_TO_JSON(CalloutName, calloutName_);
      DARABONBA_PTR_TO_JSON(CaseId, caseId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(DepId, depId_);
      DARABONBA_PTR_TO_JSON(IsTransfer, isTransfer_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_TO_JSON(SubTouchId, subTouchId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TouchId, touchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineCallActionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionId, actionId_);
      DARABONBA_PTR_FROM_JSON(BuId, buId_);
      DARABONBA_PTR_FROM_JSON(CalloutId, calloutId_);
      DARABONBA_PTR_FROM_JSON(CalloutName, calloutName_);
      DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(DepId, depId_);
      DARABONBA_PTR_FROM_JSON(IsTransfer, isTransfer_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_FROM_JSON(SubTouchId, subTouchId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TouchId, touchId_);
    };
    GetHotlineCallActionResponseBodyData() = default ;
    GetHotlineCallActionResponseBodyData(const GetHotlineCallActionResponseBodyData &) = default ;
    GetHotlineCallActionResponseBodyData(GetHotlineCallActionResponseBodyData &&) = default ;
    GetHotlineCallActionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineCallActionResponseBodyData() = default ;
    GetHotlineCallActionResponseBodyData& operator=(const GetHotlineCallActionResponseBodyData &) = default ;
    GetHotlineCallActionResponseBodyData& operator=(GetHotlineCallActionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionId_ != nullptr
        && this->buId_ != nullptr && this->calloutId_ != nullptr && this->calloutName_ != nullptr && this->caseId_ != nullptr && this->channelId_ != nullptr
        && this->channelType_ != nullptr && this->depId_ != nullptr && this->isTransfer_ != nullptr && this->memberId_ != nullptr && this->memberList_ != nullptr
        && this->memberName_ != nullptr && this->servicerId_ != nullptr && this->servicerName_ != nullptr && this->subTouchId_ != nullptr && this->taskId_ != nullptr
        && this->touchId_ != nullptr; };
    // actionId Field Functions 
    bool hasActionId() const { return this->actionId_ != nullptr;};
    void deleteActionId() { this->actionId_ = nullptr;};
    inline int64_t actionId() const { DARABONBA_PTR_GET_DEFAULT(actionId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setActionId(int64_t actionId) { DARABONBA_PTR_SET_VALUE(actionId_, actionId) };


    // buId Field Functions 
    bool hasBuId() const { return this->buId_ != nullptr;};
    void deleteBuId() { this->buId_ = nullptr;};
    inline int64_t buId() const { DARABONBA_PTR_GET_DEFAULT(buId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setBuId(int64_t buId) { DARABONBA_PTR_SET_VALUE(buId_, buId) };


    // calloutId Field Functions 
    bool hasCalloutId() const { return this->calloutId_ != nullptr;};
    void deleteCalloutId() { this->calloutId_ = nullptr;};
    inline int64_t calloutId() const { DARABONBA_PTR_GET_DEFAULT(calloutId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setCalloutId(int64_t calloutId) { DARABONBA_PTR_SET_VALUE(calloutId_, calloutId) };


    // calloutName Field Functions 
    bool hasCalloutName() const { return this->calloutName_ != nullptr;};
    void deleteCalloutName() { this->calloutName_ = nullptr;};
    inline string calloutName() const { DARABONBA_PTR_GET_DEFAULT(calloutName_, "") };
    inline GetHotlineCallActionResponseBodyData& setCalloutName(string calloutName) { DARABONBA_PTR_SET_VALUE(calloutName_, calloutName) };


    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline int64_t caseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setCaseId(int64_t caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline GetHotlineCallActionResponseBodyData& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline int64_t channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setChannelType(int64_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // depId Field Functions 
    bool hasDepId() const { return this->depId_ != nullptr;};
    void deleteDepId() { this->depId_ = nullptr;};
    inline int64_t depId() const { DARABONBA_PTR_GET_DEFAULT(depId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setDepId(int64_t depId) { DARABONBA_PTR_SET_VALUE(depId_, depId) };


    // isTransfer Field Functions 
    bool hasIsTransfer() const { return this->isTransfer_ != nullptr;};
    void deleteIsTransfer() { this->isTransfer_ = nullptr;};
    inline string isTransfer() const { DARABONBA_PTR_GET_DEFAULT(isTransfer_, "") };
    inline GetHotlineCallActionResponseBodyData& setIsTransfer(string isTransfer) { DARABONBA_PTR_SET_VALUE(isTransfer_, isTransfer) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline int64_t memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline string memberList() const { DARABONBA_PTR_GET_DEFAULT(memberList_, "") };
    inline GetHotlineCallActionResponseBodyData& setMemberList(string memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline GetHotlineCallActionResponseBodyData& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // servicerId Field Functions 
    bool hasServicerId() const { return this->servicerId_ != nullptr;};
    void deleteServicerId() { this->servicerId_ = nullptr;};
    inline int64_t servicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setServicerId(int64_t servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline GetHotlineCallActionResponseBodyData& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


    // subTouchId Field Functions 
    bool hasSubTouchId() const { return this->subTouchId_ != nullptr;};
    void deleteSubTouchId() { this->subTouchId_ = nullptr;};
    inline int64_t subTouchId() const { DARABONBA_PTR_GET_DEFAULT(subTouchId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setSubTouchId(int64_t subTouchId) { DARABONBA_PTR_SET_VALUE(subTouchId_, subTouchId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // touchId Field Functions 
    bool hasTouchId() const { return this->touchId_ != nullptr;};
    void deleteTouchId() { this->touchId_ = nullptr;};
    inline int64_t touchId() const { DARABONBA_PTR_GET_DEFAULT(touchId_, 0L) };
    inline GetHotlineCallActionResponseBodyData& setTouchId(int64_t touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };


  protected:
    std::shared_ptr<int64_t> actionId_ = nullptr;
    std::shared_ptr<int64_t> buId_ = nullptr;
    std::shared_ptr<int64_t> calloutId_ = nullptr;
    std::shared_ptr<string> calloutName_ = nullptr;
    std::shared_ptr<int64_t> caseId_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> channelType_ = nullptr;
    std::shared_ptr<int64_t> depId_ = nullptr;
    std::shared_ptr<string> isTransfer_ = nullptr;
    std::shared_ptr<int64_t> memberId_ = nullptr;
    std::shared_ptr<string> memberList_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<int64_t> servicerId_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
    std::shared_ptr<int64_t> subTouchId_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<int64_t> touchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
