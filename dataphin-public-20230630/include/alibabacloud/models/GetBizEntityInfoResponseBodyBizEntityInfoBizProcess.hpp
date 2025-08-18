// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZENTITYINFORESPONSEBODYBIZENTITYINFOBIZPROCESS_HPP_
#define ALIBABACLOUD_MODELS_GETBIZENTITYINFORESPONSEBODYBIZENTITYINFOBIZPROCESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizEntityInfoResponseBodyBizEntityInfoBizProcess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_TO_JSON(BizEventEntityIdList, bizEventEntityIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HasDependent, hasDependent_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(PreBizProcessIdList, preBizProcessIdList_);
      DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
      DARABONBA_PTR_TO_JSON(RefFactTableCount, refFactTableCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_FROM_JSON(BizEventEntityIdList, bizEventEntityIdList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HasDependent, hasDependent_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(PreBizProcessIdList, preBizProcessIdList_);
      DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
      DARABONBA_PTR_FROM_JSON(RefFactTableCount, refFactTableCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetBizEntityInfoResponseBodyBizEntityInfoBizProcess() = default ;
    GetBizEntityInfoResponseBodyBizEntityInfoBizProcess(const GetBizEntityInfoResponseBodyBizEntityInfoBizProcess &) = default ;
    GetBizEntityInfoResponseBodyBizEntityInfoBizProcess(GetBizEntityInfoResponseBodyBizEntityInfoBizProcess &&) = default ;
    GetBizEntityInfoResponseBodyBizEntityInfoBizProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizEntityInfoResponseBodyBizEntityInfoBizProcess() = default ;
    GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& operator=(const GetBizEntityInfoResponseBodyBizEntityInfoBizProcess &) = default ;
    GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& operator=(GetBizEntityInfoResponseBodyBizEntityInfoBizProcess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalId_ != nullptr
        && this->approvalStatus_ != nullptr && this->bizEventEntityIdList_ != nullptr && this->description_ != nullptr && this->displayName_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->hasDependent_ != nullptr && this->id_ != nullptr && this->lastModifier_ != nullptr && this->lastModifierName_ != nullptr
        && this->name_ != nullptr && this->onlineStatus_ != nullptr && this->ownerName_ != nullptr && this->ownerUserId_ != nullptr && this->preBizProcessIdList_ != nullptr
        && this->refBizEntityIdList_ != nullptr && this->refFactTableCount_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string approvalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string approvalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // bizEventEntityIdList Field Functions 
    bool hasBizEventEntityIdList() const { return this->bizEventEntityIdList_ != nullptr;};
    void deleteBizEventEntityIdList() { this->bizEventEntityIdList_ = nullptr;};
    inline const vector<int64_t> & bizEventEntityIdList() const { DARABONBA_PTR_GET_CONST(bizEventEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> bizEventEntityIdList() { DARABONBA_PTR_GET(bizEventEntityIdList_, vector<int64_t>) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setBizEventEntityIdList(const vector<int64_t> & bizEventEntityIdList) { DARABONBA_PTR_SET_VALUE(bizEventEntityIdList_, bizEventEntityIdList) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setBizEventEntityIdList(vector<int64_t> && bizEventEntityIdList) { DARABONBA_PTR_SET_RVALUE(bizEventEntityIdList_, bizEventEntityIdList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasDependent Field Functions 
    bool hasHasDependent() const { return this->hasDependent_ != nullptr;};
    void deleteHasDependent() { this->hasDependent_ = nullptr;};
    inline bool hasDependent() const { DARABONBA_PTR_GET_DEFAULT(hasDependent_, false) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setHasDependent(bool hasDependent) { DARABONBA_PTR_SET_VALUE(hasDependent_, hasDependent) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // lastModifierName Field Functions 
    bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
    void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
    inline string lastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // onlineStatus Field Functions 
    bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
    void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
    inline string onlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setOnlineStatus(string onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // preBizProcessIdList Field Functions 
    bool hasPreBizProcessIdList() const { return this->preBizProcessIdList_ != nullptr;};
    void deletePreBizProcessIdList() { this->preBizProcessIdList_ = nullptr;};
    inline const vector<int64_t> & preBizProcessIdList() const { DARABONBA_PTR_GET_CONST(preBizProcessIdList_, vector<int64_t>) };
    inline vector<int64_t> preBizProcessIdList() { DARABONBA_PTR_GET(preBizProcessIdList_, vector<int64_t>) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setPreBizProcessIdList(const vector<int64_t> & preBizProcessIdList) { DARABONBA_PTR_SET_VALUE(preBizProcessIdList_, preBizProcessIdList) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setPreBizProcessIdList(vector<int64_t> && preBizProcessIdList) { DARABONBA_PTR_SET_RVALUE(preBizProcessIdList_, preBizProcessIdList) };


    // refBizEntityIdList Field Functions 
    bool hasRefBizEntityIdList() const { return this->refBizEntityIdList_ != nullptr;};
    void deleteRefBizEntityIdList() { this->refBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & refBizEntityIdList() const { DARABONBA_PTR_GET_CONST(refBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> refBizEntityIdList() { DARABONBA_PTR_GET(refBizEntityIdList_, vector<int64_t>) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setRefBizEntityIdList(const vector<int64_t> & refBizEntityIdList) { DARABONBA_PTR_SET_VALUE(refBizEntityIdList_, refBizEntityIdList) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setRefBizEntityIdList(vector<int64_t> && refBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(refBizEntityIdList_, refBizEntityIdList) };


    // refFactTableCount Field Functions 
    bool hasRefFactTableCount() const { return this->refFactTableCount_ != nullptr;};
    void deleteRefFactTableCount() { this->refFactTableCount_ = nullptr;};
    inline int32_t refFactTableCount() const { DARABONBA_PTR_GET_DEFAULT(refFactTableCount_, 0) };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setRefFactTableCount(int32_t refFactTableCount) { DARABONBA_PTR_SET_VALUE(refFactTableCount_, refFactTableCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfoBizProcess& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> approvalId_ = nullptr;
    std::shared_ptr<string> approvalStatus_ = nullptr;
    std::shared_ptr<vector<int64_t>> bizEventEntityIdList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<bool> hasDependent_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> lastModifierName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> onlineStatus_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<vector<int64_t>> preBizProcessIdList_ = nullptr;
    std::shared_ptr<vector<int64_t>> refBizEntityIdList_ = nullptr;
    std::shared_ptr<int32_t> refFactTableCount_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
