// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class UnionEmpExt : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnionEmpExt& obj) { 
        DARABONBA_PTR_TO_JSON(corpId, corpId_);
        DARABONBA_PTR_TO_JSON(unionEmpMapList, unionEmpMapList_);
        DARABONBA_PTR_TO_JSON(userid, userid_);
      };
      friend void from_json(const Darabonba::Json& j, UnionEmpExt& obj) { 
        DARABONBA_PTR_FROM_JSON(corpId, corpId_);
        DARABONBA_PTR_FROM_JSON(unionEmpMapList, unionEmpMapList_);
        DARABONBA_PTR_FROM_JSON(userid, userid_);
      };
      UnionEmpExt() = default ;
      UnionEmpExt(const UnionEmpExt &) = default ;
      UnionEmpExt(UnionEmpExt &&) = default ;
      UnionEmpExt(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnionEmpExt() = default ;
      UnionEmpExt& operator=(const UnionEmpExt &) = default ;
      UnionEmpExt& operator=(UnionEmpExt &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UnionEmpMapList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UnionEmpMapList& obj) { 
          DARABONBA_PTR_TO_JSON(cropId, cropId_);
          DARABONBA_PTR_TO_JSON(userid, userid_);
        };
        friend void from_json(const Darabonba::Json& j, UnionEmpMapList& obj) { 
          DARABONBA_PTR_FROM_JSON(cropId, cropId_);
          DARABONBA_PTR_FROM_JSON(userid, userid_);
        };
        UnionEmpMapList() = default ;
        UnionEmpMapList(const UnionEmpMapList &) = default ;
        UnionEmpMapList(UnionEmpMapList &&) = default ;
        UnionEmpMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UnionEmpMapList() = default ;
        UnionEmpMapList& operator=(const UnionEmpMapList &) = default ;
        UnionEmpMapList& operator=(UnionEmpMapList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cropId_ == nullptr
        && this->userid_ == nullptr; };
        // cropId Field Functions 
        bool hasCropId() const { return this->cropId_ != nullptr;};
        void deleteCropId() { this->cropId_ = nullptr;};
        inline string getCropId() const { DARABONBA_PTR_GET_DEFAULT(cropId_, "") };
        inline UnionEmpMapList& setCropId(string cropId) { DARABONBA_PTR_SET_VALUE(cropId_, cropId) };


        // userid Field Functions 
        bool hasUserid() const { return this->userid_ != nullptr;};
        void deleteUserid() { this->userid_ = nullptr;};
        inline string getUserid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
        inline UnionEmpMapList& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


      protected:
        shared_ptr<string> cropId_ {};
        shared_ptr<string> userid_ {};
      };

      virtual bool empty() const override { return this->corpId_ == nullptr
        && this->unionEmpMapList_ == nullptr && this->userid_ == nullptr; };
      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline UnionEmpExt& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // unionEmpMapList Field Functions 
      bool hasUnionEmpMapList() const { return this->unionEmpMapList_ != nullptr;};
      void deleteUnionEmpMapList() { this->unionEmpMapList_ = nullptr;};
      inline const vector<UnionEmpExt::UnionEmpMapList> & getUnionEmpMapList() const { DARABONBA_PTR_GET_CONST(unionEmpMapList_, vector<UnionEmpExt::UnionEmpMapList>) };
      inline vector<UnionEmpExt::UnionEmpMapList> getUnionEmpMapList() { DARABONBA_PTR_GET(unionEmpMapList_, vector<UnionEmpExt::UnionEmpMapList>) };
      inline UnionEmpExt& setUnionEmpMapList(const vector<UnionEmpExt::UnionEmpMapList> & unionEmpMapList) { DARABONBA_PTR_SET_VALUE(unionEmpMapList_, unionEmpMapList) };
      inline UnionEmpExt& setUnionEmpMapList(vector<UnionEmpExt::UnionEmpMapList> && unionEmpMapList) { DARABONBA_PTR_SET_RVALUE(unionEmpMapList_, unionEmpMapList) };


      // userid Field Functions 
      bool hasUserid() const { return this->userid_ != nullptr;};
      void deleteUserid() { this->userid_ = nullptr;};
      inline string getUserid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
      inline UnionEmpExt& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


    protected:
      shared_ptr<string> corpId_ {};
      shared_ptr<vector<UnionEmpExt::UnionEmpMapList>> unionEmpMapList_ {};
      shared_ptr<string> userid_ {};
    };

    class RoleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleList& obj) { 
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, RoleList& obj) { 
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      RoleList() = default ;
      RoleList(const RoleList &) = default ;
      RoleList(RoleList &&) = default ;
      RoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleList() = default ;
      RoleList& operator=(const RoleList &) = default ;
      RoleList& operator=(RoleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline RoleList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline RoleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RoleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> groupName_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
    };

    class LeaderInDept : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LeaderInDept& obj) { 
        DARABONBA_PTR_TO_JSON(deptId, deptId_);
        DARABONBA_PTR_TO_JSON(leader, leader_);
      };
      friend void from_json(const Darabonba::Json& j, LeaderInDept& obj) { 
        DARABONBA_PTR_FROM_JSON(deptId, deptId_);
        DARABONBA_PTR_FROM_JSON(leader, leader_);
      };
      LeaderInDept() = default ;
      LeaderInDept(const LeaderInDept &) = default ;
      LeaderInDept(LeaderInDept &&) = default ;
      LeaderInDept(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LeaderInDept() = default ;
      LeaderInDept& operator=(const LeaderInDept &) = default ;
      LeaderInDept& operator=(LeaderInDept &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deptId_ == nullptr
        && this->leader_ == nullptr; };
      // deptId Field Functions 
      bool hasDeptId() const { return this->deptId_ != nullptr;};
      void deleteDeptId() { this->deptId_ = nullptr;};
      inline int64_t getDeptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, 0L) };
      inline LeaderInDept& setDeptId(int64_t deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


      // leader Field Functions 
      bool hasLeader() const { return this->leader_ != nullptr;};
      void deleteLeader() { this->leader_ = nullptr;};
      inline bool getLeader() const { DARABONBA_PTR_GET_DEFAULT(leader_, false) };
      inline LeaderInDept& setLeader(bool leader) { DARABONBA_PTR_SET_VALUE(leader_, leader) };


    protected:
      shared_ptr<int64_t> deptId_ {};
      shared_ptr<bool> leader_ {};
    };

    class DeptOrderList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeptOrderList& obj) { 
        DARABONBA_PTR_TO_JSON(deptId, deptId_);
        DARABONBA_PTR_TO_JSON(order, order_);
      };
      friend void from_json(const Darabonba::Json& j, DeptOrderList& obj) { 
        DARABONBA_PTR_FROM_JSON(deptId, deptId_);
        DARABONBA_PTR_FROM_JSON(order, order_);
      };
      DeptOrderList() = default ;
      DeptOrderList(const DeptOrderList &) = default ;
      DeptOrderList(DeptOrderList &&) = default ;
      DeptOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeptOrderList() = default ;
      DeptOrderList& operator=(const DeptOrderList &) = default ;
      DeptOrderList& operator=(DeptOrderList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deptId_ == nullptr
        && this->order_ == nullptr; };
      // deptId Field Functions 
      bool hasDeptId() const { return this->deptId_ != nullptr;};
      void deleteDeptId() { this->deptId_ = nullptr;};
      inline int64_t getDeptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, 0L) };
      inline DeptOrderList& setDeptId(int64_t deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline int64_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0L) };
      inline DeptOrderList& setOrder(int64_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    protected:
      shared_ptr<int64_t> deptId_ {};
      shared_ptr<int64_t> order_ {};
    };

    virtual bool empty() const override { return this->active_ == nullptr
        && this->admin_ == nullptr && this->avatar_ == nullptr && this->boss_ == nullptr && this->deptIdList_ == nullptr && this->deptOrderList_ == nullptr
        && this->email_ == nullptr && this->exclusiveAccount_ == nullptr && this->exclusiveAccountCorpId_ == nullptr && this->exclusiveAccountCorpName_ == nullptr && this->exclusiveAccountType_ == nullptr
        && this->extension_ == nullptr && this->hideMobile_ == nullptr && this->hiredDate_ == nullptr && this->jobNumber_ == nullptr && this->leaderInDept_ == nullptr
        && this->loginId_ == nullptr && this->managerUserid_ == nullptr && this->mobile_ == nullptr && this->name_ == nullptr && this->nickname_ == nullptr
        && this->orgEmail_ == nullptr && this->realAuthed_ == nullptr && this->remark_ == nullptr && this->requestId_ == nullptr && this->roleList_ == nullptr
        && this->senior_ == nullptr && this->stateCode_ == nullptr && this->telephone_ == nullptr && this->title_ == nullptr && this->unionEmpExt_ == nullptr
        && this->unionid_ == nullptr && this->userid_ == nullptr && this->workPlace_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline GetUserResponseBody& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // admin Field Functions 
    bool hasAdmin() const { return this->admin_ != nullptr;};
    void deleteAdmin() { this->admin_ = nullptr;};
    inline bool getAdmin() const { DARABONBA_PTR_GET_DEFAULT(admin_, false) };
    inline GetUserResponseBody& setAdmin(bool admin) { DARABONBA_PTR_SET_VALUE(admin_, admin) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline GetUserResponseBody& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // boss Field Functions 
    bool hasBoss() const { return this->boss_ != nullptr;};
    void deleteBoss() { this->boss_ = nullptr;};
    inline bool getBoss() const { DARABONBA_PTR_GET_DEFAULT(boss_, false) };
    inline GetUserResponseBody& setBoss(bool boss) { DARABONBA_PTR_SET_VALUE(boss_, boss) };


    // deptIdList Field Functions 
    bool hasDeptIdList() const { return this->deptIdList_ != nullptr;};
    void deleteDeptIdList() { this->deptIdList_ = nullptr;};
    inline const vector<int64_t> & getDeptIdList() const { DARABONBA_PTR_GET_CONST(deptIdList_, vector<int64_t>) };
    inline vector<int64_t> getDeptIdList() { DARABONBA_PTR_GET(deptIdList_, vector<int64_t>) };
    inline GetUserResponseBody& setDeptIdList(const vector<int64_t> & deptIdList) { DARABONBA_PTR_SET_VALUE(deptIdList_, deptIdList) };
    inline GetUserResponseBody& setDeptIdList(vector<int64_t> && deptIdList) { DARABONBA_PTR_SET_RVALUE(deptIdList_, deptIdList) };


    // deptOrderList Field Functions 
    bool hasDeptOrderList() const { return this->deptOrderList_ != nullptr;};
    void deleteDeptOrderList() { this->deptOrderList_ = nullptr;};
    inline const vector<GetUserResponseBody::DeptOrderList> & getDeptOrderList() const { DARABONBA_PTR_GET_CONST(deptOrderList_, vector<GetUserResponseBody::DeptOrderList>) };
    inline vector<GetUserResponseBody::DeptOrderList> getDeptOrderList() { DARABONBA_PTR_GET(deptOrderList_, vector<GetUserResponseBody::DeptOrderList>) };
    inline GetUserResponseBody& setDeptOrderList(const vector<GetUserResponseBody::DeptOrderList> & deptOrderList) { DARABONBA_PTR_SET_VALUE(deptOrderList_, deptOrderList) };
    inline GetUserResponseBody& setDeptOrderList(vector<GetUserResponseBody::DeptOrderList> && deptOrderList) { DARABONBA_PTR_SET_RVALUE(deptOrderList_, deptOrderList) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // exclusiveAccount Field Functions 
    bool hasExclusiveAccount() const { return this->exclusiveAccount_ != nullptr;};
    void deleteExclusiveAccount() { this->exclusiveAccount_ = nullptr;};
    inline bool getExclusiveAccount() const { DARABONBA_PTR_GET_DEFAULT(exclusiveAccount_, false) };
    inline GetUserResponseBody& setExclusiveAccount(bool exclusiveAccount) { DARABONBA_PTR_SET_VALUE(exclusiveAccount_, exclusiveAccount) };


    // exclusiveAccountCorpId Field Functions 
    bool hasExclusiveAccountCorpId() const { return this->exclusiveAccountCorpId_ != nullptr;};
    void deleteExclusiveAccountCorpId() { this->exclusiveAccountCorpId_ = nullptr;};
    inline string getExclusiveAccountCorpId() const { DARABONBA_PTR_GET_DEFAULT(exclusiveAccountCorpId_, "") };
    inline GetUserResponseBody& setExclusiveAccountCorpId(string exclusiveAccountCorpId) { DARABONBA_PTR_SET_VALUE(exclusiveAccountCorpId_, exclusiveAccountCorpId) };


    // exclusiveAccountCorpName Field Functions 
    bool hasExclusiveAccountCorpName() const { return this->exclusiveAccountCorpName_ != nullptr;};
    void deleteExclusiveAccountCorpName() { this->exclusiveAccountCorpName_ = nullptr;};
    inline string getExclusiveAccountCorpName() const { DARABONBA_PTR_GET_DEFAULT(exclusiveAccountCorpName_, "") };
    inline GetUserResponseBody& setExclusiveAccountCorpName(string exclusiveAccountCorpName) { DARABONBA_PTR_SET_VALUE(exclusiveAccountCorpName_, exclusiveAccountCorpName) };


    // exclusiveAccountType Field Functions 
    bool hasExclusiveAccountType() const { return this->exclusiveAccountType_ != nullptr;};
    void deleteExclusiveAccountType() { this->exclusiveAccountType_ = nullptr;};
    inline string getExclusiveAccountType() const { DARABONBA_PTR_GET_DEFAULT(exclusiveAccountType_, "") };
    inline GetUserResponseBody& setExclusiveAccountType(string exclusiveAccountType) { DARABONBA_PTR_SET_VALUE(exclusiveAccountType_, exclusiveAccountType) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline GetUserResponseBody& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // hideMobile Field Functions 
    bool hasHideMobile() const { return this->hideMobile_ != nullptr;};
    void deleteHideMobile() { this->hideMobile_ = nullptr;};
    inline bool getHideMobile() const { DARABONBA_PTR_GET_DEFAULT(hideMobile_, false) };
    inline GetUserResponseBody& setHideMobile(bool hideMobile) { DARABONBA_PTR_SET_VALUE(hideMobile_, hideMobile) };


    // hiredDate Field Functions 
    bool hasHiredDate() const { return this->hiredDate_ != nullptr;};
    void deleteHiredDate() { this->hiredDate_ = nullptr;};
    inline int64_t getHiredDate() const { DARABONBA_PTR_GET_DEFAULT(hiredDate_, 0L) };
    inline GetUserResponseBody& setHiredDate(int64_t hiredDate) { DARABONBA_PTR_SET_VALUE(hiredDate_, hiredDate) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string getJobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline GetUserResponseBody& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


    // leaderInDept Field Functions 
    bool hasLeaderInDept() const { return this->leaderInDept_ != nullptr;};
    void deleteLeaderInDept() { this->leaderInDept_ = nullptr;};
    inline const vector<GetUserResponseBody::LeaderInDept> & getLeaderInDept() const { DARABONBA_PTR_GET_CONST(leaderInDept_, vector<GetUserResponseBody::LeaderInDept>) };
    inline vector<GetUserResponseBody::LeaderInDept> getLeaderInDept() { DARABONBA_PTR_GET(leaderInDept_, vector<GetUserResponseBody::LeaderInDept>) };
    inline GetUserResponseBody& setLeaderInDept(const vector<GetUserResponseBody::LeaderInDept> & leaderInDept) { DARABONBA_PTR_SET_VALUE(leaderInDept_, leaderInDept) };
    inline GetUserResponseBody& setLeaderInDept(vector<GetUserResponseBody::LeaderInDept> && leaderInDept) { DARABONBA_PTR_SET_RVALUE(leaderInDept_, leaderInDept) };


    // loginId Field Functions 
    bool hasLoginId() const { return this->loginId_ != nullptr;};
    void deleteLoginId() { this->loginId_ = nullptr;};
    inline string getLoginId() const { DARABONBA_PTR_GET_DEFAULT(loginId_, "") };
    inline GetUserResponseBody& setLoginId(string loginId) { DARABONBA_PTR_SET_VALUE(loginId_, loginId) };


    // managerUserid Field Functions 
    bool hasManagerUserid() const { return this->managerUserid_ != nullptr;};
    void deleteManagerUserid() { this->managerUserid_ = nullptr;};
    inline string getManagerUserid() const { DARABONBA_PTR_GET_DEFAULT(managerUserid_, "") };
    inline GetUserResponseBody& setManagerUserid(string managerUserid) { DARABONBA_PTR_SET_VALUE(managerUserid_, managerUserid) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetUserResponseBody& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUserResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline GetUserResponseBody& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // orgEmail Field Functions 
    bool hasOrgEmail() const { return this->orgEmail_ != nullptr;};
    void deleteOrgEmail() { this->orgEmail_ = nullptr;};
    inline string getOrgEmail() const { DARABONBA_PTR_GET_DEFAULT(orgEmail_, "") };
    inline GetUserResponseBody& setOrgEmail(string orgEmail) { DARABONBA_PTR_SET_VALUE(orgEmail_, orgEmail) };


    // realAuthed Field Functions 
    bool hasRealAuthed() const { return this->realAuthed_ != nullptr;};
    void deleteRealAuthed() { this->realAuthed_ = nullptr;};
    inline bool getRealAuthed() const { DARABONBA_PTR_GET_DEFAULT(realAuthed_, false) };
    inline GetUserResponseBody& setRealAuthed(bool realAuthed) { DARABONBA_PTR_SET_VALUE(realAuthed_, realAuthed) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetUserResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<GetUserResponseBody::RoleList> & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<GetUserResponseBody::RoleList>) };
    inline vector<GetUserResponseBody::RoleList> getRoleList() { DARABONBA_PTR_GET(roleList_, vector<GetUserResponseBody::RoleList>) };
    inline GetUserResponseBody& setRoleList(const vector<GetUserResponseBody::RoleList> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline GetUserResponseBody& setRoleList(vector<GetUserResponseBody::RoleList> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


    // senior Field Functions 
    bool hasSenior() const { return this->senior_ != nullptr;};
    void deleteSenior() { this->senior_ = nullptr;};
    inline bool getSenior() const { DARABONBA_PTR_GET_DEFAULT(senior_, false) };
    inline GetUserResponseBody& setSenior(bool senior) { DARABONBA_PTR_SET_VALUE(senior_, senior) };


    // stateCode Field Functions 
    bool hasStateCode() const { return this->stateCode_ != nullptr;};
    void deleteStateCode() { this->stateCode_ = nullptr;};
    inline string getStateCode() const { DARABONBA_PTR_GET_DEFAULT(stateCode_, "") };
    inline GetUserResponseBody& setStateCode(string stateCode) { DARABONBA_PTR_SET_VALUE(stateCode_, stateCode) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline GetUserResponseBody& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetUserResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // unionEmpExt Field Functions 
    bool hasUnionEmpExt() const { return this->unionEmpExt_ != nullptr;};
    void deleteUnionEmpExt() { this->unionEmpExt_ = nullptr;};
    inline const GetUserResponseBody::UnionEmpExt & getUnionEmpExt() const { DARABONBA_PTR_GET_CONST(unionEmpExt_, GetUserResponseBody::UnionEmpExt) };
    inline GetUserResponseBody::UnionEmpExt getUnionEmpExt() { DARABONBA_PTR_GET(unionEmpExt_, GetUserResponseBody::UnionEmpExt) };
    inline GetUserResponseBody& setUnionEmpExt(const GetUserResponseBody::UnionEmpExt & unionEmpExt) { DARABONBA_PTR_SET_VALUE(unionEmpExt_, unionEmpExt) };
    inline GetUserResponseBody& setUnionEmpExt(GetUserResponseBody::UnionEmpExt && unionEmpExt) { DARABONBA_PTR_SET_RVALUE(unionEmpExt_, unionEmpExt) };


    // unionid Field Functions 
    bool hasUnionid() const { return this->unionid_ != nullptr;};
    void deleteUnionid() { this->unionid_ = nullptr;};
    inline string getUnionid() const { DARABONBA_PTR_GET_DEFAULT(unionid_, "") };
    inline GetUserResponseBody& setUnionid(string unionid) { DARABONBA_PTR_SET_VALUE(unionid_, unionid) };


    // userid Field Functions 
    bool hasUserid() const { return this->userid_ != nullptr;};
    void deleteUserid() { this->userid_ = nullptr;};
    inline string getUserid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
    inline GetUserResponseBody& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


    // workPlace Field Functions 
    bool hasWorkPlace() const { return this->workPlace_ != nullptr;};
    void deleteWorkPlace() { this->workPlace_ = nullptr;};
    inline string getWorkPlace() const { DARABONBA_PTR_GET_DEFAULT(workPlace_, "") };
    inline GetUserResponseBody& setWorkPlace(string workPlace) { DARABONBA_PTR_SET_VALUE(workPlace_, workPlace) };


  protected:
    shared_ptr<bool> active_ {};
    shared_ptr<bool> admin_ {};
    shared_ptr<string> avatar_ {};
    shared_ptr<bool> boss_ {};
    shared_ptr<vector<int64_t>> deptIdList_ {};
    shared_ptr<vector<GetUserResponseBody::DeptOrderList>> deptOrderList_ {};
    shared_ptr<string> email_ {};
    shared_ptr<bool> exclusiveAccount_ {};
    shared_ptr<string> exclusiveAccountCorpId_ {};
    shared_ptr<string> exclusiveAccountCorpName_ {};
    shared_ptr<string> exclusiveAccountType_ {};
    shared_ptr<string> extension_ {};
    shared_ptr<bool> hideMobile_ {};
    shared_ptr<int64_t> hiredDate_ {};
    shared_ptr<string> jobNumber_ {};
    shared_ptr<vector<GetUserResponseBody::LeaderInDept>> leaderInDept_ {};
    shared_ptr<string> loginId_ {};
    shared_ptr<string> managerUserid_ {};
    shared_ptr<string> mobile_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> nickname_ {};
    shared_ptr<string> orgEmail_ {};
    shared_ptr<bool> realAuthed_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetUserResponseBody::RoleList>> roleList_ {};
    shared_ptr<bool> senior_ {};
    shared_ptr<string> stateCode_ {};
    shared_ptr<string> telephone_ {};
    shared_ptr<string> title_ {};
    shared_ptr<GetUserResponseBody::UnionEmpExt> unionEmpExt_ {};
    shared_ptr<string> unionid_ {};
    shared_ptr<string> userid_ {};
    shared_ptr<string> workPlace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
