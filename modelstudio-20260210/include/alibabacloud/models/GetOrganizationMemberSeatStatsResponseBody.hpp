// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONMEMBERSEATSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONMEMBERSEATSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetOrganizationMemberSeatStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationMemberSeatStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdminRoleUserCount, adminRoleUserCount_);
      DARABONBA_PTR_TO_JSON(MemberRoleUserCount, memberRoleUserCount_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OwnerRoleUserCount, ownerRoleUserCount_);
      DARABONBA_PTR_TO_JSON(SeatedMemberCount, seatedMemberCount_);
      DARABONBA_PTR_TO_JSON(TotalMemberCount, totalMemberCount_);
      DARABONBA_PTR_TO_JSON(UnseatedMemberCount, unseatedMemberCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationMemberSeatStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminRoleUserCount, adminRoleUserCount_);
      DARABONBA_PTR_FROM_JSON(MemberRoleUserCount, memberRoleUserCount_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OwnerRoleUserCount, ownerRoleUserCount_);
      DARABONBA_PTR_FROM_JSON(SeatedMemberCount, seatedMemberCount_);
      DARABONBA_PTR_FROM_JSON(TotalMemberCount, totalMemberCount_);
      DARABONBA_PTR_FROM_JSON(UnseatedMemberCount, unseatedMemberCount_);
    };
    GetOrganizationMemberSeatStatsResponseBody() = default ;
    GetOrganizationMemberSeatStatsResponseBody(const GetOrganizationMemberSeatStatsResponseBody &) = default ;
    GetOrganizationMemberSeatStatsResponseBody(GetOrganizationMemberSeatStatsResponseBody &&) = default ;
    GetOrganizationMemberSeatStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationMemberSeatStatsResponseBody() = default ;
    GetOrganizationMemberSeatStatsResponseBody& operator=(const GetOrganizationMemberSeatStatsResponseBody &) = default ;
    GetOrganizationMemberSeatStatsResponseBody& operator=(GetOrganizationMemberSeatStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminRoleUserCount_ == nullptr
        && this->memberRoleUserCount_ == nullptr && this->orgId_ == nullptr && this->ownerRoleUserCount_ == nullptr && this->seatedMemberCount_ == nullptr && this->totalMemberCount_ == nullptr
        && this->unseatedMemberCount_ == nullptr; };
    // adminRoleUserCount Field Functions 
    bool hasAdminRoleUserCount() const { return this->adminRoleUserCount_ != nullptr;};
    void deleteAdminRoleUserCount() { this->adminRoleUserCount_ = nullptr;};
    inline int32_t getAdminRoleUserCount() const { DARABONBA_PTR_GET_DEFAULT(adminRoleUserCount_, 0) };
    inline GetOrganizationMemberSeatStatsResponseBody& setAdminRoleUserCount(int32_t adminRoleUserCount) { DARABONBA_PTR_SET_VALUE(adminRoleUserCount_, adminRoleUserCount) };


    // memberRoleUserCount Field Functions 
    bool hasMemberRoleUserCount() const { return this->memberRoleUserCount_ != nullptr;};
    void deleteMemberRoleUserCount() { this->memberRoleUserCount_ = nullptr;};
    inline int32_t getMemberRoleUserCount() const { DARABONBA_PTR_GET_DEFAULT(memberRoleUserCount_, 0) };
    inline GetOrganizationMemberSeatStatsResponseBody& setMemberRoleUserCount(int32_t memberRoleUserCount) { DARABONBA_PTR_SET_VALUE(memberRoleUserCount_, memberRoleUserCount) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GetOrganizationMemberSeatStatsResponseBody& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // ownerRoleUserCount Field Functions 
    bool hasOwnerRoleUserCount() const { return this->ownerRoleUserCount_ != nullptr;};
    void deleteOwnerRoleUserCount() { this->ownerRoleUserCount_ = nullptr;};
    inline int32_t getOwnerRoleUserCount() const { DARABONBA_PTR_GET_DEFAULT(ownerRoleUserCount_, 0) };
    inline GetOrganizationMemberSeatStatsResponseBody& setOwnerRoleUserCount(int32_t ownerRoleUserCount) { DARABONBA_PTR_SET_VALUE(ownerRoleUserCount_, ownerRoleUserCount) };


    // seatedMemberCount Field Functions 
    bool hasSeatedMemberCount() const { return this->seatedMemberCount_ != nullptr;};
    void deleteSeatedMemberCount() { this->seatedMemberCount_ = nullptr;};
    inline int32_t getSeatedMemberCount() const { DARABONBA_PTR_GET_DEFAULT(seatedMemberCount_, 0) };
    inline GetOrganizationMemberSeatStatsResponseBody& setSeatedMemberCount(int32_t seatedMemberCount) { DARABONBA_PTR_SET_VALUE(seatedMemberCount_, seatedMemberCount) };


    // totalMemberCount Field Functions 
    bool hasTotalMemberCount() const { return this->totalMemberCount_ != nullptr;};
    void deleteTotalMemberCount() { this->totalMemberCount_ = nullptr;};
    inline int32_t getTotalMemberCount() const { DARABONBA_PTR_GET_DEFAULT(totalMemberCount_, 0) };
    inline GetOrganizationMemberSeatStatsResponseBody& setTotalMemberCount(int32_t totalMemberCount) { DARABONBA_PTR_SET_VALUE(totalMemberCount_, totalMemberCount) };


    // unseatedMemberCount Field Functions 
    bool hasUnseatedMemberCount() const { return this->unseatedMemberCount_ != nullptr;};
    void deleteUnseatedMemberCount() { this->unseatedMemberCount_ = nullptr;};
    inline int32_t getUnseatedMemberCount() const { DARABONBA_PTR_GET_DEFAULT(unseatedMemberCount_, 0) };
    inline GetOrganizationMemberSeatStatsResponseBody& setUnseatedMemberCount(int32_t unseatedMemberCount) { DARABONBA_PTR_SET_VALUE(unseatedMemberCount_, unseatedMemberCount) };


  protected:
    // The number of administrators (ORG_ADMIN role).
    shared_ptr<int32_t> adminRoleUserCount_ {};
    // The number of regular members (ORG_MEMBER role).
    shared_ptr<int32_t> memberRoleUserCount_ {};
    // The organization ID.
    shared_ptr<string> orgId_ {};
    // The number of owner accounts (ORG_OWNER role).
    shared_ptr<int32_t> ownerRoleUserCount_ {};
    // The number of members with assigned seats.
    shared_ptr<int32_t> seatedMemberCount_ {};
    // The total number of members.
    shared_ptr<int32_t> totalMemberCount_ {};
    // The number of members without assigned seats.
    shared_ptr<int32_t> unseatedMemberCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
