// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVITESTATUSRESPONSEBODYDATAINVITESTATUSINVITESTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETINVITESTATUSRESPONSEBODYDATAINVITESTATUSINVITESTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetInviteStatusResponseBodyDataInviteStatusInviteStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationSuccessTime, associationSuccessTime_);
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubAccountType, subAccountType_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationSuccessTime, associationSuccessTime_);
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubAccountType, subAccountType_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetInviteStatusResponseBodyDataInviteStatusInviteStatusList() = default ;
    GetInviteStatusResponseBodyDataInviteStatusInviteStatusList(const GetInviteStatusResponseBodyDataInviteStatusInviteStatusList &) = default ;
    GetInviteStatusResponseBodyDataInviteStatusInviteStatusList(GetInviteStatusResponseBodyDataInviteStatusInviteStatusList &&) = default ;
    GetInviteStatusResponseBodyDataInviteStatusInviteStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInviteStatusResponseBodyDataInviteStatusInviteStatusList() = default ;
    GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& operator=(const GetInviteStatusResponseBodyDataInviteStatusInviteStatusList &) = default ;
    GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& operator=(GetInviteStatusResponseBodyDataInviteStatusInviteStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associationSuccessTime_ == nullptr
        && return this->cid_ == nullptr && return this->gmtCreate_ == nullptr && return this->parentId_ == nullptr && return this->status_ == nullptr && return this->subAccountType_ == nullptr
        && return this->uid_ == nullptr; };
    // associationSuccessTime Field Functions 
    bool hasAssociationSuccessTime() const { return this->associationSuccessTime_ != nullptr;};
    void deleteAssociationSuccessTime() { this->associationSuccessTime_ = nullptr;};
    inline string associationSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(associationSuccessTime_, "") };
    inline GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& setAssociationSuccessTime(string associationSuccessTime) { DARABONBA_PTR_SET_VALUE(associationSuccessTime_, associationSuccessTime) };


    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline int64_t cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, 0L) };
    inline GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& setCid(int64_t cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subAccountType Field Functions 
    bool hasSubAccountType() const { return this->subAccountType_ != nullptr;};
    void deleteSubAccountType() { this->subAccountType_ = nullptr;};
    inline string subAccountType() const { DARABONBA_PTR_GET_DEFAULT(subAccountType_, "") };
    inline GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& setSubAccountType(string subAccountType) { DARABONBA_PTR_SET_VALUE(subAccountType_, subAccountType) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline GetInviteStatusResponseBodyDataInviteStatusInviteStatusList& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The time that Distribution Customer successfully associated with Distributor.</br>
    // This value will be empty if there is no existing association.
    std::shared_ptr<string> associationSuccessTime_ = nullptr;
    // Distribution Customer\\"s CID
    std::shared_ptr<int64_t> cid_ = nullptr;
    // The time of email been sent out.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The parent organization ID.
    std::shared_ptr<string> parentId_ = nullptr;
    // Invitation Status:
    // * 0 No visit on registration URL
    // * 1 Successful Registration
    // * 2 Unsuccessful Registration
    // * 3 Registration URL have been visited, but no submitted sheet/ticket.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Account Type:
    // - 1 Agency\\"s End User
    // - 2 Reseller\\"s End User
    // - 5 T2 Reseller Partner
    std::shared_ptr<string> subAccountType_ = nullptr;
    // Distribution Customer\\"s UID
    std::shared_ptr<int64_t> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
