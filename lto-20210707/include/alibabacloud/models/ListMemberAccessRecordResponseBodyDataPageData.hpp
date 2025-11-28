// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERACCESSRECORDRESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERACCESSRECORDRESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListMemberAccessRecordResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemberAccessRecordResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDate, accessDate_);
      DARABONBA_PTR_TO_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_TO_JSON(AdminName, adminName_);
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(AuthorizedDeviceCount, authorizedDeviceCount_);
      DARABONBA_PTR_TO_JSON(Contactor, contactor_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberResponseDate, memberResponseDate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Telephony, telephony_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemberAccessRecordResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDate, accessDate_);
      DARABONBA_PTR_FROM_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_FROM_JSON(AdminName, adminName_);
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(AuthorizedDeviceCount, authorizedDeviceCount_);
      DARABONBA_PTR_FROM_JSON(Contactor, contactor_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberResponseDate, memberResponseDate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Telephony, telephony_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListMemberAccessRecordResponseBodyDataPageData() = default ;
    ListMemberAccessRecordResponseBodyDataPageData(const ListMemberAccessRecordResponseBodyDataPageData &) = default ;
    ListMemberAccessRecordResponseBodyDataPageData(ListMemberAccessRecordResponseBodyDataPageData &&) = default ;
    ListMemberAccessRecordResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemberAccessRecordResponseBodyDataPageData() = default ;
    ListMemberAccessRecordResponseBodyDataPageData& operator=(const ListMemberAccessRecordResponseBodyDataPageData &) = default ;
    ListMemberAccessRecordResponseBodyDataPageData& operator=(ListMemberAccessRecordResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDate_ == nullptr
        && return this->accessStatus_ == nullptr && return this->adminName_ == nullptr && return this->authorizedCount_ == nullptr && return this->authorizedDeviceCount_ == nullptr && return this->contactor_ == nullptr
        && return this->memberId_ == nullptr && return this->memberResponseDate_ == nullptr && return this->name_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr
        && return this->telephony_ == nullptr && return this->uid_ == nullptr; };
    // accessDate Field Functions 
    bool hasAccessDate() const { return this->accessDate_ != nullptr;};
    void deleteAccessDate() { this->accessDate_ = nullptr;};
    inline int64_t accessDate() const { DARABONBA_PTR_GET_DEFAULT(accessDate_, 0L) };
    inline ListMemberAccessRecordResponseBodyDataPageData& setAccessDate(int64_t accessDate) { DARABONBA_PTR_SET_VALUE(accessDate_, accessDate) };


    // accessStatus Field Functions 
    bool hasAccessStatus() const { return this->accessStatus_ != nullptr;};
    void deleteAccessStatus() { this->accessStatus_ = nullptr;};
    inline string accessStatus() const { DARABONBA_PTR_GET_DEFAULT(accessStatus_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setAccessStatus(string accessStatus) { DARABONBA_PTR_SET_VALUE(accessStatus_, accessStatus) };


    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string adminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline int64_t authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, 0L) };
    inline ListMemberAccessRecordResponseBodyDataPageData& setAuthorizedCount(int64_t authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // authorizedDeviceCount Field Functions 
    bool hasAuthorizedDeviceCount() const { return this->authorizedDeviceCount_ != nullptr;};
    void deleteAuthorizedDeviceCount() { this->authorizedDeviceCount_ = nullptr;};
    inline int32_t authorizedDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedDeviceCount_, 0) };
    inline ListMemberAccessRecordResponseBodyDataPageData& setAuthorizedDeviceCount(int32_t authorizedDeviceCount) { DARABONBA_PTR_SET_VALUE(authorizedDeviceCount_, authorizedDeviceCount) };


    // contactor Field Functions 
    bool hasContactor() const { return this->contactor_ != nullptr;};
    void deleteContactor() { this->contactor_ = nullptr;};
    inline string contactor() const { DARABONBA_PTR_GET_DEFAULT(contactor_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setContactor(string contactor) { DARABONBA_PTR_SET_VALUE(contactor_, contactor) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberResponseDate Field Functions 
    bool hasMemberResponseDate() const { return this->memberResponseDate_ != nullptr;};
    void deleteMemberResponseDate() { this->memberResponseDate_ = nullptr;};
    inline int64_t memberResponseDate() const { DARABONBA_PTR_GET_DEFAULT(memberResponseDate_, 0L) };
    inline ListMemberAccessRecordResponseBodyDataPageData& setMemberResponseDate(int64_t memberResponseDate) { DARABONBA_PTR_SET_VALUE(memberResponseDate_, memberResponseDate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // telephony Field Functions 
    bool hasTelephony() const { return this->telephony_ != nullptr;};
    void deleteTelephony() { this->telephony_ = nullptr;};
    inline string telephony() const { DARABONBA_PTR_GET_DEFAULT(telephony_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setTelephony(string telephony) { DARABONBA_PTR_SET_VALUE(telephony_, telephony) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListMemberAccessRecordResponseBodyDataPageData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<int64_t> accessDate_ = nullptr;
    std::shared_ptr<string> accessStatus_ = nullptr;
    std::shared_ptr<string> adminName_ = nullptr;
    std::shared_ptr<int64_t> authorizedCount_ = nullptr;
    std::shared_ptr<int32_t> authorizedDeviceCount_ = nullptr;
    std::shared_ptr<string> contactor_ = nullptr;
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<int64_t> memberResponseDate_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> telephony_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
