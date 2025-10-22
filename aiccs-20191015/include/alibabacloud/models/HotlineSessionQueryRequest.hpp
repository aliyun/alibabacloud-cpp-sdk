// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTLINESESSIONQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTLINESESSIONQUERYREQUEST_HPP_
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
  class HotlineSessionQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotlineSessionQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(AcidList, acidList_);
      DARABONBA_PTR_TO_JSON(CallResult, callResult_);
      DARABONBA_PTR_TO_JSON(CallResultList, callResultList_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(CallTypeList, callTypeList_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalledNumberList, calledNumberList_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumberList, callingNumberList_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberIdList, memberIdList_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(QueryEndTime, queryEndTime_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_TO_JSON(ServicerIdList, servicerIdList_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
    };
    friend void from_json(const Darabonba::Json& j, HotlineSessionQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(AcidList, acidList_);
      DARABONBA_PTR_FROM_JSON(CallResult, callResult_);
      DARABONBA_PTR_FROM_JSON(CallResultList, callResultList_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(CallTypeList, callTypeList_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalledNumberList, calledNumberList_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumberList, callingNumberList_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberIdList, memberIdList_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(QueryEndTime, queryEndTime_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_FROM_JSON(ServicerIdList, servicerIdList_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
    };
    HotlineSessionQueryRequest() = default ;
    HotlineSessionQueryRequest(const HotlineSessionQueryRequest &) = default ;
    HotlineSessionQueryRequest(HotlineSessionQueryRequest &&) = default ;
    HotlineSessionQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotlineSessionQueryRequest() = default ;
    HotlineSessionQueryRequest& operator=(const HotlineSessionQueryRequest &) = default ;
    HotlineSessionQueryRequest& operator=(HotlineSessionQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acid_ == nullptr
        && return this->acidList_ == nullptr && return this->callResult_ == nullptr && return this->callResultList_ == nullptr && return this->callType_ == nullptr && return this->callTypeList_ == nullptr
        && return this->calledNumber_ == nullptr && return this->calledNumberList_ == nullptr && return this->callingNumber_ == nullptr && return this->callingNumberList_ == nullptr && return this->groupId_ == nullptr
        && return this->groupIdList_ == nullptr && return this->groupName_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->memberId_ == nullptr
        && return this->memberIdList_ == nullptr && return this->memberName_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->params_ == nullptr
        && return this->queryEndTime_ == nullptr && return this->queryStartTime_ == nullptr && return this->requestId_ == nullptr && return this->servicerId_ == nullptr && return this->servicerIdList_ == nullptr
        && return this->servicerName_ == nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline HotlineSessionQueryRequest& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // acidList Field Functions 
    bool hasAcidList() const { return this->acidList_ != nullptr;};
    void deleteAcidList() { this->acidList_ = nullptr;};
    inline const vector<string> & acidList() const { DARABONBA_PTR_GET_CONST(acidList_, vector<string>) };
    inline vector<string> acidList() { DARABONBA_PTR_GET(acidList_, vector<string>) };
    inline HotlineSessionQueryRequest& setAcidList(const vector<string> & acidList) { DARABONBA_PTR_SET_VALUE(acidList_, acidList) };
    inline HotlineSessionQueryRequest& setAcidList(vector<string> && acidList) { DARABONBA_PTR_SET_RVALUE(acidList_, acidList) };


    // callResult Field Functions 
    bool hasCallResult() const { return this->callResult_ != nullptr;};
    void deleteCallResult() { this->callResult_ = nullptr;};
    inline string callResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
    inline HotlineSessionQueryRequest& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


    // callResultList Field Functions 
    bool hasCallResultList() const { return this->callResultList_ != nullptr;};
    void deleteCallResultList() { this->callResultList_ = nullptr;};
    inline const vector<string> & callResultList() const { DARABONBA_PTR_GET_CONST(callResultList_, vector<string>) };
    inline vector<string> callResultList() { DARABONBA_PTR_GET(callResultList_, vector<string>) };
    inline HotlineSessionQueryRequest& setCallResultList(const vector<string> & callResultList) { DARABONBA_PTR_SET_VALUE(callResultList_, callResultList) };
    inline HotlineSessionQueryRequest& setCallResultList(vector<string> && callResultList) { DARABONBA_PTR_SET_RVALUE(callResultList_, callResultList) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int32_t callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
    inline HotlineSessionQueryRequest& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // callTypeList Field Functions 
    bool hasCallTypeList() const { return this->callTypeList_ != nullptr;};
    void deleteCallTypeList() { this->callTypeList_ = nullptr;};
    inline const vector<int32_t> & callTypeList() const { DARABONBA_PTR_GET_CONST(callTypeList_, vector<int32_t>) };
    inline vector<int32_t> callTypeList() { DARABONBA_PTR_GET(callTypeList_, vector<int32_t>) };
    inline HotlineSessionQueryRequest& setCallTypeList(const vector<int32_t> & callTypeList) { DARABONBA_PTR_SET_VALUE(callTypeList_, callTypeList) };
    inline HotlineSessionQueryRequest& setCallTypeList(vector<int32_t> && callTypeList) { DARABONBA_PTR_SET_RVALUE(callTypeList_, callTypeList) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline HotlineSessionQueryRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledNumberList Field Functions 
    bool hasCalledNumberList() const { return this->calledNumberList_ != nullptr;};
    void deleteCalledNumberList() { this->calledNumberList_ = nullptr;};
    inline const vector<string> & calledNumberList() const { DARABONBA_PTR_GET_CONST(calledNumberList_, vector<string>) };
    inline vector<string> calledNumberList() { DARABONBA_PTR_GET(calledNumberList_, vector<string>) };
    inline HotlineSessionQueryRequest& setCalledNumberList(const vector<string> & calledNumberList) { DARABONBA_PTR_SET_VALUE(calledNumberList_, calledNumberList) };
    inline HotlineSessionQueryRequest& setCalledNumberList(vector<string> && calledNumberList) { DARABONBA_PTR_SET_RVALUE(calledNumberList_, calledNumberList) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline HotlineSessionQueryRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // callingNumberList Field Functions 
    bool hasCallingNumberList() const { return this->callingNumberList_ != nullptr;};
    void deleteCallingNumberList() { this->callingNumberList_ = nullptr;};
    inline const vector<string> & callingNumberList() const { DARABONBA_PTR_GET_CONST(callingNumberList_, vector<string>) };
    inline vector<string> callingNumberList() { DARABONBA_PTR_GET(callingNumberList_, vector<string>) };
    inline HotlineSessionQueryRequest& setCallingNumberList(const vector<string> & callingNumberList) { DARABONBA_PTR_SET_VALUE(callingNumberList_, callingNumberList) };
    inline HotlineSessionQueryRequest& setCallingNumberList(vector<string> && callingNumberList) { DARABONBA_PTR_SET_RVALUE(callingNumberList_, callingNumberList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline HotlineSessionQueryRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupIdList Field Functions 
    bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
    void deleteGroupIdList() { this->groupIdList_ = nullptr;};
    inline const vector<int64_t> & groupIdList() const { DARABONBA_PTR_GET_CONST(groupIdList_, vector<int64_t>) };
    inline vector<int64_t> groupIdList() { DARABONBA_PTR_GET(groupIdList_, vector<int64_t>) };
    inline HotlineSessionQueryRequest& setGroupIdList(const vector<int64_t> & groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };
    inline HotlineSessionQueryRequest& setGroupIdList(vector<int64_t> && groupIdList) { DARABONBA_PTR_SET_RVALUE(groupIdList_, groupIdList) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline HotlineSessionQueryRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline HotlineSessionQueryRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline HotlineSessionQueryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline HotlineSessionQueryRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberIdList Field Functions 
    bool hasMemberIdList() const { return this->memberIdList_ != nullptr;};
    void deleteMemberIdList() { this->memberIdList_ = nullptr;};
    inline const vector<string> & memberIdList() const { DARABONBA_PTR_GET_CONST(memberIdList_, vector<string>) };
    inline vector<string> memberIdList() { DARABONBA_PTR_GET(memberIdList_, vector<string>) };
    inline HotlineSessionQueryRequest& setMemberIdList(const vector<string> & memberIdList) { DARABONBA_PTR_SET_VALUE(memberIdList_, memberIdList) };
    inline HotlineSessionQueryRequest& setMemberIdList(vector<string> && memberIdList) { DARABONBA_PTR_SET_RVALUE(memberIdList_, memberIdList) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline HotlineSessionQueryRequest& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline HotlineSessionQueryRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline HotlineSessionQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline HotlineSessionQueryRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // queryEndTime Field Functions 
    bool hasQueryEndTime() const { return this->queryEndTime_ != nullptr;};
    void deleteQueryEndTime() { this->queryEndTime_ = nullptr;};
    inline int64_t queryEndTime() const { DARABONBA_PTR_GET_DEFAULT(queryEndTime_, 0L) };
    inline HotlineSessionQueryRequest& setQueryEndTime(int64_t queryEndTime) { DARABONBA_PTR_SET_VALUE(queryEndTime_, queryEndTime) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline int64_t queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, 0L) };
    inline HotlineSessionQueryRequest& setQueryStartTime(int64_t queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotlineSessionQueryRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // servicerId Field Functions 
    bool hasServicerId() const { return this->servicerId_ != nullptr;};
    void deleteServicerId() { this->servicerId_ = nullptr;};
    inline string servicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, "") };
    inline HotlineSessionQueryRequest& setServicerId(string servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


    // servicerIdList Field Functions 
    bool hasServicerIdList() const { return this->servicerIdList_ != nullptr;};
    void deleteServicerIdList() { this->servicerIdList_ = nullptr;};
    inline const vector<string> & servicerIdList() const { DARABONBA_PTR_GET_CONST(servicerIdList_, vector<string>) };
    inline vector<string> servicerIdList() { DARABONBA_PTR_GET(servicerIdList_, vector<string>) };
    inline HotlineSessionQueryRequest& setServicerIdList(const vector<string> & servicerIdList) { DARABONBA_PTR_SET_VALUE(servicerIdList_, servicerIdList) };
    inline HotlineSessionQueryRequest& setServicerIdList(vector<string> && servicerIdList) { DARABONBA_PTR_SET_RVALUE(servicerIdList_, servicerIdList) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline HotlineSessionQueryRequest& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
    std::shared_ptr<vector<string>> acidList_ = nullptr;
    std::shared_ptr<string> callResult_ = nullptr;
    std::shared_ptr<vector<string>> callResultList_ = nullptr;
    std::shared_ptr<int32_t> callType_ = nullptr;
    std::shared_ptr<vector<int32_t>> callTypeList_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<vector<string>> calledNumberList_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<vector<string>> callingNumberList_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<vector<int64_t>> groupIdList_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<vector<string>> memberIdList_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<int64_t> queryEndTime_ = nullptr;
    std::shared_ptr<int64_t> queryStartTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> servicerId_ = nullptr;
    std::shared_ptr<vector<string>> servicerIdList_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
