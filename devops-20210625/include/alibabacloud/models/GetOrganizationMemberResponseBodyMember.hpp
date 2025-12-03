// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONMEMBERRESPONSEBODYMEMBER_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONMEMBERRESPONSEBODYMEMBER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOrganizationMemberResponseBodyMemberIdentities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetOrganizationMemberResponseBodyMember : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationMemberResponseBodyMember& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(deptLists, deptLists_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(hiredDate, hiredDate_);
      DARABONBA_PTR_TO_JSON(identities, identities_);
      DARABONBA_PTR_TO_JSON(jobNumber, jobNumber_);
      DARABONBA_PTR_TO_JSON(joinTime, joinTime_);
      DARABONBA_PTR_TO_JSON(lastVisitTime, lastVisitTime_);
      DARABONBA_PTR_TO_JSON(mobile, mobile_);
      DARABONBA_PTR_TO_JSON(organizationMemberName, organizationMemberName_);
      DARABONBA_PTR_TO_JSON(organizationRoleId, organizationRoleId_);
      DARABONBA_PTR_TO_JSON(organizationRoleName, organizationRoleName_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationMemberResponseBodyMember& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(deptLists, deptLists_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(hiredDate, hiredDate_);
      DARABONBA_PTR_FROM_JSON(identities, identities_);
      DARABONBA_PTR_FROM_JSON(jobNumber, jobNumber_);
      DARABONBA_PTR_FROM_JSON(joinTime, joinTime_);
      DARABONBA_PTR_FROM_JSON(lastVisitTime, lastVisitTime_);
      DARABONBA_PTR_FROM_JSON(mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(organizationMemberName, organizationMemberName_);
      DARABONBA_PTR_FROM_JSON(organizationRoleId, organizationRoleId_);
      DARABONBA_PTR_FROM_JSON(organizationRoleName, organizationRoleName_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    GetOrganizationMemberResponseBodyMember() = default ;
    GetOrganizationMemberResponseBodyMember(const GetOrganizationMemberResponseBodyMember &) = default ;
    GetOrganizationMemberResponseBodyMember(GetOrganizationMemberResponseBodyMember &&) = default ;
    GetOrganizationMemberResponseBodyMember(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationMemberResponseBodyMember() = default ;
    GetOrganizationMemberResponseBodyMember& operator=(const GetOrganizationMemberResponseBodyMember &) = default ;
    GetOrganizationMemberResponseBodyMember& operator=(GetOrganizationMemberResponseBodyMember &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->birthday_ == nullptr && return this->deptLists_ == nullptr && return this->email_ == nullptr && return this->hiredDate_ == nullptr && return this->identities_ == nullptr
        && return this->jobNumber_ == nullptr && return this->joinTime_ == nullptr && return this->lastVisitTime_ == nullptr && return this->mobile_ == nullptr && return this->organizationMemberName_ == nullptr
        && return this->organizationRoleId_ == nullptr && return this->organizationRoleName_ == nullptr && return this->state_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetOrganizationMemberResponseBodyMember& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline int64_t birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, 0L) };
    inline GetOrganizationMemberResponseBodyMember& setBirthday(int64_t birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // deptLists Field Functions 
    bool hasDeptLists() const { return this->deptLists_ != nullptr;};
    void deleteDeptLists() { this->deptLists_ = nullptr;};
    inline const vector<string> & deptLists() const { DARABONBA_PTR_GET_CONST(deptLists_, vector<string>) };
    inline vector<string> deptLists() { DARABONBA_PTR_GET(deptLists_, vector<string>) };
    inline GetOrganizationMemberResponseBodyMember& setDeptLists(const vector<string> & deptLists) { DARABONBA_PTR_SET_VALUE(deptLists_, deptLists) };
    inline GetOrganizationMemberResponseBodyMember& setDeptLists(vector<string> && deptLists) { DARABONBA_PTR_SET_RVALUE(deptLists_, deptLists) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetOrganizationMemberResponseBodyMember& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // hiredDate Field Functions 
    bool hasHiredDate() const { return this->hiredDate_ != nullptr;};
    void deleteHiredDate() { this->hiredDate_ = nullptr;};
    inline int64_t hiredDate() const { DARABONBA_PTR_GET_DEFAULT(hiredDate_, 0L) };
    inline GetOrganizationMemberResponseBodyMember& setHiredDate(int64_t hiredDate) { DARABONBA_PTR_SET_VALUE(hiredDate_, hiredDate) };


    // identities Field Functions 
    bool hasIdentities() const { return this->identities_ != nullptr;};
    void deleteIdentities() { this->identities_ = nullptr;};
    inline const Models::GetOrganizationMemberResponseBodyMemberIdentities & identities() const { DARABONBA_PTR_GET_CONST(identities_, Models::GetOrganizationMemberResponseBodyMemberIdentities) };
    inline Models::GetOrganizationMemberResponseBodyMemberIdentities identities() { DARABONBA_PTR_GET(identities_, Models::GetOrganizationMemberResponseBodyMemberIdentities) };
    inline GetOrganizationMemberResponseBodyMember& setIdentities(const Models::GetOrganizationMemberResponseBodyMemberIdentities & identities) { DARABONBA_PTR_SET_VALUE(identities_, identities) };
    inline GetOrganizationMemberResponseBodyMember& setIdentities(Models::GetOrganizationMemberResponseBodyMemberIdentities && identities) { DARABONBA_PTR_SET_RVALUE(identities_, identities) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string jobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline GetOrganizationMemberResponseBodyMember& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


    // joinTime Field Functions 
    bool hasJoinTime() const { return this->joinTime_ != nullptr;};
    void deleteJoinTime() { this->joinTime_ = nullptr;};
    inline int64_t joinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
    inline GetOrganizationMemberResponseBodyMember& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


    // lastVisitTime Field Functions 
    bool hasLastVisitTime() const { return this->lastVisitTime_ != nullptr;};
    void deleteLastVisitTime() { this->lastVisitTime_ = nullptr;};
    inline int64_t lastVisitTime() const { DARABONBA_PTR_GET_DEFAULT(lastVisitTime_, 0L) };
    inline GetOrganizationMemberResponseBodyMember& setLastVisitTime(int64_t lastVisitTime) { DARABONBA_PTR_SET_VALUE(lastVisitTime_, lastVisitTime) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetOrganizationMemberResponseBodyMember& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // organizationMemberName Field Functions 
    bool hasOrganizationMemberName() const { return this->organizationMemberName_ != nullptr;};
    void deleteOrganizationMemberName() { this->organizationMemberName_ = nullptr;};
    inline string organizationMemberName() const { DARABONBA_PTR_GET_DEFAULT(organizationMemberName_, "") };
    inline GetOrganizationMemberResponseBodyMember& setOrganizationMemberName(string organizationMemberName) { DARABONBA_PTR_SET_VALUE(organizationMemberName_, organizationMemberName) };


    // organizationRoleId Field Functions 
    bool hasOrganizationRoleId() const { return this->organizationRoleId_ != nullptr;};
    void deleteOrganizationRoleId() { this->organizationRoleId_ = nullptr;};
    inline string organizationRoleId() const { DARABONBA_PTR_GET_DEFAULT(organizationRoleId_, "") };
    inline GetOrganizationMemberResponseBodyMember& setOrganizationRoleId(string organizationRoleId) { DARABONBA_PTR_SET_VALUE(organizationRoleId_, organizationRoleId) };


    // organizationRoleName Field Functions 
    bool hasOrganizationRoleName() const { return this->organizationRoleName_ != nullptr;};
    void deleteOrganizationRoleName() { this->organizationRoleName_ = nullptr;};
    inline string organizationRoleName() const { DARABONBA_PTR_GET_DEFAULT(organizationRoleName_, "") };
    inline GetOrganizationMemberResponseBodyMember& setOrganizationRoleName(string organizationRoleName) { DARABONBA_PTR_SET_VALUE(organizationRoleName_, organizationRoleName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetOrganizationMemberResponseBodyMember& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<int64_t> birthday_ = nullptr;
    std::shared_ptr<vector<string>> deptLists_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int64_t> hiredDate_ = nullptr;
    std::shared_ptr<Models::GetOrganizationMemberResponseBodyMemberIdentities> identities_ = nullptr;
    std::shared_ptr<string> jobNumber_ = nullptr;
    std::shared_ptr<int64_t> joinTime_ = nullptr;
    std::shared_ptr<int64_t> lastVisitTime_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> organizationMemberName_ = nullptr;
    std::shared_ptr<string> organizationRoleId_ = nullptr;
    std::shared_ptr<string> organizationRoleName_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
