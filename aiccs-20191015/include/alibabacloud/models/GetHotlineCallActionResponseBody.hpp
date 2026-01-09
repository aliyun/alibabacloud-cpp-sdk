// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINECALLACTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINECALLACTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineCallActionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineCallActionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineCallActionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHotlineCallActionResponseBody() = default ;
    GetHotlineCallActionResponseBody(const GetHotlineCallActionResponseBody &) = default ;
    GetHotlineCallActionResponseBody(GetHotlineCallActionResponseBody &&) = default ;
    GetHotlineCallActionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineCallActionResponseBody() = default ;
    GetHotlineCallActionResponseBody& operator=(const GetHotlineCallActionResponseBody &) = default ;
    GetHotlineCallActionResponseBody& operator=(GetHotlineCallActionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->actionId_ == nullptr
        && this->buId_ == nullptr && this->calloutId_ == nullptr && this->calloutName_ == nullptr && this->caseId_ == nullptr && this->channelId_ == nullptr
        && this->channelType_ == nullptr && this->depId_ == nullptr && this->isTransfer_ == nullptr && this->memberId_ == nullptr && this->memberList_ == nullptr
        && this->memberName_ == nullptr && this->servicerId_ == nullptr && this->servicerName_ == nullptr && this->subTouchId_ == nullptr && this->taskId_ == nullptr
        && this->touchId_ == nullptr; };
      // actionId Field Functions 
      bool hasActionId() const { return this->actionId_ != nullptr;};
      void deleteActionId() { this->actionId_ = nullptr;};
      inline int64_t getActionId() const { DARABONBA_PTR_GET_DEFAULT(actionId_, 0L) };
      inline Data& setActionId(int64_t actionId) { DARABONBA_PTR_SET_VALUE(actionId_, actionId) };


      // buId Field Functions 
      bool hasBuId() const { return this->buId_ != nullptr;};
      void deleteBuId() { this->buId_ = nullptr;};
      inline int64_t getBuId() const { DARABONBA_PTR_GET_DEFAULT(buId_, 0L) };
      inline Data& setBuId(int64_t buId) { DARABONBA_PTR_SET_VALUE(buId_, buId) };


      // calloutId Field Functions 
      bool hasCalloutId() const { return this->calloutId_ != nullptr;};
      void deleteCalloutId() { this->calloutId_ = nullptr;};
      inline int64_t getCalloutId() const { DARABONBA_PTR_GET_DEFAULT(calloutId_, 0L) };
      inline Data& setCalloutId(int64_t calloutId) { DARABONBA_PTR_SET_VALUE(calloutId_, calloutId) };


      // calloutName Field Functions 
      bool hasCalloutName() const { return this->calloutName_ != nullptr;};
      void deleteCalloutName() { this->calloutName_ = nullptr;};
      inline string getCalloutName() const { DARABONBA_PTR_GET_DEFAULT(calloutName_, "") };
      inline Data& setCalloutName(string calloutName) { DARABONBA_PTR_SET_VALUE(calloutName_, calloutName) };


      // caseId Field Functions 
      bool hasCaseId() const { return this->caseId_ != nullptr;};
      void deleteCaseId() { this->caseId_ = nullptr;};
      inline int64_t getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, 0L) };
      inline Data& setCaseId(int64_t caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline Data& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline int64_t getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0L) };
      inline Data& setChannelType(int64_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // depId Field Functions 
      bool hasDepId() const { return this->depId_ != nullptr;};
      void deleteDepId() { this->depId_ = nullptr;};
      inline int64_t getDepId() const { DARABONBA_PTR_GET_DEFAULT(depId_, 0L) };
      inline Data& setDepId(int64_t depId) { DARABONBA_PTR_SET_VALUE(depId_, depId) };


      // isTransfer Field Functions 
      bool hasIsTransfer() const { return this->isTransfer_ != nullptr;};
      void deleteIsTransfer() { this->isTransfer_ = nullptr;};
      inline string getIsTransfer() const { DARABONBA_PTR_GET_DEFAULT(isTransfer_, "") };
      inline Data& setIsTransfer(string isTransfer) { DARABONBA_PTR_SET_VALUE(isTransfer_, isTransfer) };


      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline int64_t getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
      inline Data& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // memberList Field Functions 
      bool hasMemberList() const { return this->memberList_ != nullptr;};
      void deleteMemberList() { this->memberList_ = nullptr;};
      inline string getMemberList() const { DARABONBA_PTR_GET_DEFAULT(memberList_, "") };
      inline Data& setMemberList(string memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };


      // memberName Field Functions 
      bool hasMemberName() const { return this->memberName_ != nullptr;};
      void deleteMemberName() { this->memberName_ = nullptr;};
      inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
      inline Data& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


      // servicerId Field Functions 
      bool hasServicerId() const { return this->servicerId_ != nullptr;};
      void deleteServicerId() { this->servicerId_ = nullptr;};
      inline int64_t getServicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, 0L) };
      inline Data& setServicerId(int64_t servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


      // servicerName Field Functions 
      bool hasServicerName() const { return this->servicerName_ != nullptr;};
      void deleteServicerName() { this->servicerName_ = nullptr;};
      inline string getServicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
      inline Data& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


      // subTouchId Field Functions 
      bool hasSubTouchId() const { return this->subTouchId_ != nullptr;};
      void deleteSubTouchId() { this->subTouchId_ = nullptr;};
      inline int64_t getSubTouchId() const { DARABONBA_PTR_GET_DEFAULT(subTouchId_, 0L) };
      inline Data& setSubTouchId(int64_t subTouchId) { DARABONBA_PTR_SET_VALUE(subTouchId_, subTouchId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // touchId Field Functions 
      bool hasTouchId() const { return this->touchId_ != nullptr;};
      void deleteTouchId() { this->touchId_ = nullptr;};
      inline int64_t getTouchId() const { DARABONBA_PTR_GET_DEFAULT(touchId_, 0L) };
      inline Data& setTouchId(int64_t touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };


    protected:
      shared_ptr<int64_t> actionId_ {};
      shared_ptr<int64_t> buId_ {};
      shared_ptr<int64_t> calloutId_ {};
      shared_ptr<string> calloutName_ {};
      shared_ptr<int64_t> caseId_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<int64_t> channelType_ {};
      shared_ptr<int64_t> depId_ {};
      shared_ptr<string> isTransfer_ {};
      shared_ptr<int64_t> memberId_ {};
      shared_ptr<string> memberList_ {};
      shared_ptr<string> memberName_ {};
      shared_ptr<int64_t> servicerId_ {};
      shared_ptr<string> servicerName_ {};
      shared_ptr<int64_t> subTouchId_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<int64_t> touchId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHotlineCallActionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHotlineCallActionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHotlineCallActionResponseBody::Data) };
    inline GetHotlineCallActionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHotlineCallActionResponseBody::Data) };
    inline GetHotlineCallActionResponseBody& setData(const GetHotlineCallActionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotlineCallActionResponseBody& setData(GetHotlineCallActionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotlineCallActionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotlineCallActionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHotlineCallActionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHotlineCallActionResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
