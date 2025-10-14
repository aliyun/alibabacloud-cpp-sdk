// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserResponseBodyDeptOrderList.hpp>
#include <alibabacloud/models/GetUserResponseBodyLeaderInDept.hpp>
#include <alibabacloud/models/GetUserResponseBodyRoleList.hpp>
#include <alibabacloud/models/GetUserResponseBodyUnionEmpExt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(admin, admin_);
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(boss, boss_);
      DARABONBA_PTR_TO_JSON(deptIdList, deptIdList_);
      DARABONBA_PTR_TO_JSON(deptOrderList, deptOrderList_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(exclusiveAccount, exclusiveAccount_);
      DARABONBA_PTR_TO_JSON(exclusiveAccountCorpId, exclusiveAccountCorpId_);
      DARABONBA_PTR_TO_JSON(exclusiveAccountCorpName, exclusiveAccountCorpName_);
      DARABONBA_PTR_TO_JSON(exclusiveAccountType, exclusiveAccountType_);
      DARABONBA_PTR_TO_JSON(extension, extension_);
      DARABONBA_PTR_TO_JSON(hideMobile, hideMobile_);
      DARABONBA_PTR_TO_JSON(hiredDate, hiredDate_);
      DARABONBA_PTR_TO_JSON(jobNumber, jobNumber_);
      DARABONBA_PTR_TO_JSON(leaderInDept, leaderInDept_);
      DARABONBA_PTR_TO_JSON(loginId, loginId_);
      DARABONBA_PTR_TO_JSON(managerUserid, managerUserid_);
      DARABONBA_PTR_TO_JSON(mobile, mobile_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nickname, nickname_);
      DARABONBA_PTR_TO_JSON(orgEmail, orgEmail_);
      DARABONBA_PTR_TO_JSON(realAuthed, realAuthed_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(roleList, roleList_);
      DARABONBA_PTR_TO_JSON(senior, senior_);
      DARABONBA_PTR_TO_JSON(stateCode, stateCode_);
      DARABONBA_PTR_TO_JSON(telephone, telephone_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(unionEmpExt, unionEmpExt_);
      DARABONBA_PTR_TO_JSON(unionid, unionid_);
      DARABONBA_PTR_TO_JSON(userid, userid_);
      DARABONBA_PTR_TO_JSON(workPlace, workPlace_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(admin, admin_);
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(boss, boss_);
      DARABONBA_PTR_FROM_JSON(deptIdList, deptIdList_);
      DARABONBA_PTR_FROM_JSON(deptOrderList, deptOrderList_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(exclusiveAccount, exclusiveAccount_);
      DARABONBA_PTR_FROM_JSON(exclusiveAccountCorpId, exclusiveAccountCorpId_);
      DARABONBA_PTR_FROM_JSON(exclusiveAccountCorpName, exclusiveAccountCorpName_);
      DARABONBA_PTR_FROM_JSON(exclusiveAccountType, exclusiveAccountType_);
      DARABONBA_PTR_FROM_JSON(extension, extension_);
      DARABONBA_PTR_FROM_JSON(hideMobile, hideMobile_);
      DARABONBA_PTR_FROM_JSON(hiredDate, hiredDate_);
      DARABONBA_PTR_FROM_JSON(jobNumber, jobNumber_);
      DARABONBA_PTR_FROM_JSON(leaderInDept, leaderInDept_);
      DARABONBA_PTR_FROM_JSON(loginId, loginId_);
      DARABONBA_PTR_FROM_JSON(managerUserid, managerUserid_);
      DARABONBA_PTR_FROM_JSON(mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nickname, nickname_);
      DARABONBA_PTR_FROM_JSON(orgEmail, orgEmail_);
      DARABONBA_PTR_FROM_JSON(realAuthed, realAuthed_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(roleList, roleList_);
      DARABONBA_PTR_FROM_JSON(senior, senior_);
      DARABONBA_PTR_FROM_JSON(stateCode, stateCode_);
      DARABONBA_PTR_FROM_JSON(telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(unionEmpExt, unionEmpExt_);
      DARABONBA_PTR_FROM_JSON(unionid, unionid_);
      DARABONBA_PTR_FROM_JSON(userid, userid_);
      DARABONBA_PTR_FROM_JSON(workPlace, workPlace_);
    };
    GetUserResponseBody() = default ;
    GetUserResponseBody(const GetUserResponseBody &) = default ;
    GetUserResponseBody(GetUserResponseBody &&) = default ;
    GetUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBody() = default ;
    GetUserResponseBody& operator=(const GetUserResponseBody &) = default ;
    GetUserResponseBody& operator=(GetUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->admin_ == nullptr && return this->avatar_ == nullptr && return this->boss_ == nullptr && return this->deptIdList_ == nullptr && return this->deptOrderList_ == nullptr
        && return this->email_ == nullptr && return this->exclusiveAccount_ == nullptr && return this->exclusiveAccountCorpId_ == nullptr && return this->exclusiveAccountCorpName_ == nullptr && return this->exclusiveAccountType_ == nullptr
        && return this->extension_ == nullptr && return this->hideMobile_ == nullptr && return this->hiredDate_ == nullptr && return this->jobNumber_ == nullptr && return this->leaderInDept_ == nullptr
        && return this->loginId_ == nullptr && return this->managerUserid_ == nullptr && return this->mobile_ == nullptr && return this->name_ == nullptr && return this->nickname_ == nullptr
        && return this->orgEmail_ == nullptr && return this->realAuthed_ == nullptr && return this->remark_ == nullptr && return this->requestId_ == nullptr && return this->roleList_ == nullptr
        && return this->senior_ == nullptr && return this->stateCode_ == nullptr && return this->telephone_ == nullptr && return this->title_ == nullptr && return this->unionEmpExt_ == nullptr
        && return this->unionid_ == nullptr && return this->userid_ == nullptr && return this->workPlace_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline GetUserResponseBody& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // admin Field Functions 
    bool hasAdmin() const { return this->admin_ != nullptr;};
    void deleteAdmin() { this->admin_ = nullptr;};
    inline bool admin() const { DARABONBA_PTR_GET_DEFAULT(admin_, false) };
    inline GetUserResponseBody& setAdmin(bool admin) { DARABONBA_PTR_SET_VALUE(admin_, admin) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline GetUserResponseBody& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // boss Field Functions 
    bool hasBoss() const { return this->boss_ != nullptr;};
    void deleteBoss() { this->boss_ = nullptr;};
    inline bool boss() const { DARABONBA_PTR_GET_DEFAULT(boss_, false) };
    inline GetUserResponseBody& setBoss(bool boss) { DARABONBA_PTR_SET_VALUE(boss_, boss) };


    // deptIdList Field Functions 
    bool hasDeptIdList() const { return this->deptIdList_ != nullptr;};
    void deleteDeptIdList() { this->deptIdList_ = nullptr;};
    inline const vector<int64_t> & deptIdList() const { DARABONBA_PTR_GET_CONST(deptIdList_, vector<int64_t>) };
    inline vector<int64_t> deptIdList() { DARABONBA_PTR_GET(deptIdList_, vector<int64_t>) };
    inline GetUserResponseBody& setDeptIdList(const vector<int64_t> & deptIdList) { DARABONBA_PTR_SET_VALUE(deptIdList_, deptIdList) };
    inline GetUserResponseBody& setDeptIdList(vector<int64_t> && deptIdList) { DARABONBA_PTR_SET_RVALUE(deptIdList_, deptIdList) };


    // deptOrderList Field Functions 
    bool hasDeptOrderList() const { return this->deptOrderList_ != nullptr;};
    void deleteDeptOrderList() { this->deptOrderList_ = nullptr;};
    inline const vector<GetUserResponseBodyDeptOrderList> & deptOrderList() const { DARABONBA_PTR_GET_CONST(deptOrderList_, vector<GetUserResponseBodyDeptOrderList>) };
    inline vector<GetUserResponseBodyDeptOrderList> deptOrderList() { DARABONBA_PTR_GET(deptOrderList_, vector<GetUserResponseBodyDeptOrderList>) };
    inline GetUserResponseBody& setDeptOrderList(const vector<GetUserResponseBodyDeptOrderList> & deptOrderList) { DARABONBA_PTR_SET_VALUE(deptOrderList_, deptOrderList) };
    inline GetUserResponseBody& setDeptOrderList(vector<GetUserResponseBodyDeptOrderList> && deptOrderList) { DARABONBA_PTR_SET_RVALUE(deptOrderList_, deptOrderList) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // exclusiveAccount Field Functions 
    bool hasExclusiveAccount() const { return this->exclusiveAccount_ != nullptr;};
    void deleteExclusiveAccount() { this->exclusiveAccount_ = nullptr;};
    inline bool exclusiveAccount() const { DARABONBA_PTR_GET_DEFAULT(exclusiveAccount_, false) };
    inline GetUserResponseBody& setExclusiveAccount(bool exclusiveAccount) { DARABONBA_PTR_SET_VALUE(exclusiveAccount_, exclusiveAccount) };


    // exclusiveAccountCorpId Field Functions 
    bool hasExclusiveAccountCorpId() const { return this->exclusiveAccountCorpId_ != nullptr;};
    void deleteExclusiveAccountCorpId() { this->exclusiveAccountCorpId_ = nullptr;};
    inline string exclusiveAccountCorpId() const { DARABONBA_PTR_GET_DEFAULT(exclusiveAccountCorpId_, "") };
    inline GetUserResponseBody& setExclusiveAccountCorpId(string exclusiveAccountCorpId) { DARABONBA_PTR_SET_VALUE(exclusiveAccountCorpId_, exclusiveAccountCorpId) };


    // exclusiveAccountCorpName Field Functions 
    bool hasExclusiveAccountCorpName() const { return this->exclusiveAccountCorpName_ != nullptr;};
    void deleteExclusiveAccountCorpName() { this->exclusiveAccountCorpName_ = nullptr;};
    inline string exclusiveAccountCorpName() const { DARABONBA_PTR_GET_DEFAULT(exclusiveAccountCorpName_, "") };
    inline GetUserResponseBody& setExclusiveAccountCorpName(string exclusiveAccountCorpName) { DARABONBA_PTR_SET_VALUE(exclusiveAccountCorpName_, exclusiveAccountCorpName) };


    // exclusiveAccountType Field Functions 
    bool hasExclusiveAccountType() const { return this->exclusiveAccountType_ != nullptr;};
    void deleteExclusiveAccountType() { this->exclusiveAccountType_ = nullptr;};
    inline string exclusiveAccountType() const { DARABONBA_PTR_GET_DEFAULT(exclusiveAccountType_, "") };
    inline GetUserResponseBody& setExclusiveAccountType(string exclusiveAccountType) { DARABONBA_PTR_SET_VALUE(exclusiveAccountType_, exclusiveAccountType) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline GetUserResponseBody& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // hideMobile Field Functions 
    bool hasHideMobile() const { return this->hideMobile_ != nullptr;};
    void deleteHideMobile() { this->hideMobile_ = nullptr;};
    inline bool hideMobile() const { DARABONBA_PTR_GET_DEFAULT(hideMobile_, false) };
    inline GetUserResponseBody& setHideMobile(bool hideMobile) { DARABONBA_PTR_SET_VALUE(hideMobile_, hideMobile) };


    // hiredDate Field Functions 
    bool hasHiredDate() const { return this->hiredDate_ != nullptr;};
    void deleteHiredDate() { this->hiredDate_ = nullptr;};
    inline int64_t hiredDate() const { DARABONBA_PTR_GET_DEFAULT(hiredDate_, 0L) };
    inline GetUserResponseBody& setHiredDate(int64_t hiredDate) { DARABONBA_PTR_SET_VALUE(hiredDate_, hiredDate) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string jobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline GetUserResponseBody& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


    // leaderInDept Field Functions 
    bool hasLeaderInDept() const { return this->leaderInDept_ != nullptr;};
    void deleteLeaderInDept() { this->leaderInDept_ = nullptr;};
    inline const vector<GetUserResponseBodyLeaderInDept> & leaderInDept() const { DARABONBA_PTR_GET_CONST(leaderInDept_, vector<GetUserResponseBodyLeaderInDept>) };
    inline vector<GetUserResponseBodyLeaderInDept> leaderInDept() { DARABONBA_PTR_GET(leaderInDept_, vector<GetUserResponseBodyLeaderInDept>) };
    inline GetUserResponseBody& setLeaderInDept(const vector<GetUserResponseBodyLeaderInDept> & leaderInDept) { DARABONBA_PTR_SET_VALUE(leaderInDept_, leaderInDept) };
    inline GetUserResponseBody& setLeaderInDept(vector<GetUserResponseBodyLeaderInDept> && leaderInDept) { DARABONBA_PTR_SET_RVALUE(leaderInDept_, leaderInDept) };


    // loginId Field Functions 
    bool hasLoginId() const { return this->loginId_ != nullptr;};
    void deleteLoginId() { this->loginId_ = nullptr;};
    inline string loginId() const { DARABONBA_PTR_GET_DEFAULT(loginId_, "") };
    inline GetUserResponseBody& setLoginId(string loginId) { DARABONBA_PTR_SET_VALUE(loginId_, loginId) };


    // managerUserid Field Functions 
    bool hasManagerUserid() const { return this->managerUserid_ != nullptr;};
    void deleteManagerUserid() { this->managerUserid_ = nullptr;};
    inline string managerUserid() const { DARABONBA_PTR_GET_DEFAULT(managerUserid_, "") };
    inline GetUserResponseBody& setManagerUserid(string managerUserid) { DARABONBA_PTR_SET_VALUE(managerUserid_, managerUserid) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetUserResponseBody& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUserResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string nickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline GetUserResponseBody& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // orgEmail Field Functions 
    bool hasOrgEmail() const { return this->orgEmail_ != nullptr;};
    void deleteOrgEmail() { this->orgEmail_ = nullptr;};
    inline string orgEmail() const { DARABONBA_PTR_GET_DEFAULT(orgEmail_, "") };
    inline GetUserResponseBody& setOrgEmail(string orgEmail) { DARABONBA_PTR_SET_VALUE(orgEmail_, orgEmail) };


    // realAuthed Field Functions 
    bool hasRealAuthed() const { return this->realAuthed_ != nullptr;};
    void deleteRealAuthed() { this->realAuthed_ = nullptr;};
    inline bool realAuthed() const { DARABONBA_PTR_GET_DEFAULT(realAuthed_, false) };
    inline GetUserResponseBody& setRealAuthed(bool realAuthed) { DARABONBA_PTR_SET_VALUE(realAuthed_, realAuthed) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetUserResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<GetUserResponseBodyRoleList> & roleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<GetUserResponseBodyRoleList>) };
    inline vector<GetUserResponseBodyRoleList> roleList() { DARABONBA_PTR_GET(roleList_, vector<GetUserResponseBodyRoleList>) };
    inline GetUserResponseBody& setRoleList(const vector<GetUserResponseBodyRoleList> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline GetUserResponseBody& setRoleList(vector<GetUserResponseBodyRoleList> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


    // senior Field Functions 
    bool hasSenior() const { return this->senior_ != nullptr;};
    void deleteSenior() { this->senior_ = nullptr;};
    inline bool senior() const { DARABONBA_PTR_GET_DEFAULT(senior_, false) };
    inline GetUserResponseBody& setSenior(bool senior) { DARABONBA_PTR_SET_VALUE(senior_, senior) };


    // stateCode Field Functions 
    bool hasStateCode() const { return this->stateCode_ != nullptr;};
    void deleteStateCode() { this->stateCode_ = nullptr;};
    inline string stateCode() const { DARABONBA_PTR_GET_DEFAULT(stateCode_, "") };
    inline GetUserResponseBody& setStateCode(string stateCode) { DARABONBA_PTR_SET_VALUE(stateCode_, stateCode) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline GetUserResponseBody& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetUserResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // unionEmpExt Field Functions 
    bool hasUnionEmpExt() const { return this->unionEmpExt_ != nullptr;};
    void deleteUnionEmpExt() { this->unionEmpExt_ = nullptr;};
    inline const GetUserResponseBodyUnionEmpExt & unionEmpExt() const { DARABONBA_PTR_GET_CONST(unionEmpExt_, GetUserResponseBodyUnionEmpExt) };
    inline GetUserResponseBodyUnionEmpExt unionEmpExt() { DARABONBA_PTR_GET(unionEmpExt_, GetUserResponseBodyUnionEmpExt) };
    inline GetUserResponseBody& setUnionEmpExt(const GetUserResponseBodyUnionEmpExt & unionEmpExt) { DARABONBA_PTR_SET_VALUE(unionEmpExt_, unionEmpExt) };
    inline GetUserResponseBody& setUnionEmpExt(GetUserResponseBodyUnionEmpExt && unionEmpExt) { DARABONBA_PTR_SET_RVALUE(unionEmpExt_, unionEmpExt) };


    // unionid Field Functions 
    bool hasUnionid() const { return this->unionid_ != nullptr;};
    void deleteUnionid() { this->unionid_ = nullptr;};
    inline string unionid() const { DARABONBA_PTR_GET_DEFAULT(unionid_, "") };
    inline GetUserResponseBody& setUnionid(string unionid) { DARABONBA_PTR_SET_VALUE(unionid_, unionid) };


    // userid Field Functions 
    bool hasUserid() const { return this->userid_ != nullptr;};
    void deleteUserid() { this->userid_ = nullptr;};
    inline string userid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
    inline GetUserResponseBody& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


    // workPlace Field Functions 
    bool hasWorkPlace() const { return this->workPlace_ != nullptr;};
    void deleteWorkPlace() { this->workPlace_ = nullptr;};
    inline string workPlace() const { DARABONBA_PTR_GET_DEFAULT(workPlace_, "") };
    inline GetUserResponseBody& setWorkPlace(string workPlace) { DARABONBA_PTR_SET_VALUE(workPlace_, workPlace) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<bool> admin_ = nullptr;
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<bool> boss_ = nullptr;
    std::shared_ptr<vector<int64_t>> deptIdList_ = nullptr;
    std::shared_ptr<vector<GetUserResponseBodyDeptOrderList>> deptOrderList_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<bool> exclusiveAccount_ = nullptr;
    std::shared_ptr<string> exclusiveAccountCorpId_ = nullptr;
    std::shared_ptr<string> exclusiveAccountCorpName_ = nullptr;
    std::shared_ptr<string> exclusiveAccountType_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<bool> hideMobile_ = nullptr;
    std::shared_ptr<int64_t> hiredDate_ = nullptr;
    std::shared_ptr<string> jobNumber_ = nullptr;
    std::shared_ptr<vector<GetUserResponseBodyLeaderInDept>> leaderInDept_ = nullptr;
    std::shared_ptr<string> loginId_ = nullptr;
    std::shared_ptr<string> managerUserid_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nickname_ = nullptr;
    std::shared_ptr<string> orgEmail_ = nullptr;
    std::shared_ptr<bool> realAuthed_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetUserResponseBodyRoleList>> roleList_ = nullptr;
    std::shared_ptr<bool> senior_ = nullptr;
    std::shared_ptr<string> stateCode_ = nullptr;
    std::shared_ptr<string> telephone_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<GetUserResponseBodyUnionEmpExt> unionEmpExt_ = nullptr;
    std::shared_ptr<string> unionid_ = nullptr;
    std::shared_ptr<string> userid_ = nullptr;
    std::shared_ptr<string> workPlace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
