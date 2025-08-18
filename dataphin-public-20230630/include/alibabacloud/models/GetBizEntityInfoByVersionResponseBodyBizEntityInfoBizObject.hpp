// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZENTITYINFOBYVERSIONRESPONSEBODYBIZENTITYINFOBIZOBJECT_HPP_
#define ALIBABACLOUD_MODELS_GETBIZENTITYINFOBYVERSIONRESPONSEBODYBIZENTITYINFOBIZOBJECT_HPP_
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
  class GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_TO_JSON(ChildBizEntityIdList, childBizEntityIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
      DARABONBA_PTR_TO_JSON(RefDimTableCount, refDimTableCount_);
      DARABONBA_PTR_TO_JSON(RefSummaryTableCount, refSummaryTableCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_FROM_JSON(ChildBizEntityIdList, childBizEntityIdList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
      DARABONBA_PTR_FROM_JSON(RefDimTableCount, refDimTableCount_);
      DARABONBA_PTR_FROM_JSON(RefSummaryTableCount, refSummaryTableCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject() = default ;
    GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject(const GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject &) = default ;
    GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject(GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject &&) = default ;
    GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject() = default ;
    GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& operator=(const GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject &) = default ;
    GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& operator=(GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalId_ != nullptr
        && this->approvalStatus_ != nullptr && this->childBizEntityIdList_ != nullptr && this->description_ != nullptr && this->displayName_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->id_ != nullptr && this->lastModifier_ != nullptr && this->lastModifierName_ != nullptr && this->name_ != nullptr
        && this->onlineStatus_ != nullptr && this->ownerName_ != nullptr && this->ownerUserId_ != nullptr && this->parentId_ != nullptr && this->refBizEntityIdList_ != nullptr
        && this->refDimTableCount_ != nullptr && this->refSummaryTableCount_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string approvalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string approvalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // childBizEntityIdList Field Functions 
    bool hasChildBizEntityIdList() const { return this->childBizEntityIdList_ != nullptr;};
    void deleteChildBizEntityIdList() { this->childBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & childBizEntityIdList() const { DARABONBA_PTR_GET_CONST(childBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> childBizEntityIdList() { DARABONBA_PTR_GET(childBizEntityIdList_, vector<int64_t>) };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setChildBizEntityIdList(const vector<int64_t> & childBizEntityIdList) { DARABONBA_PTR_SET_VALUE(childBizEntityIdList_, childBizEntityIdList) };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setChildBizEntityIdList(vector<int64_t> && childBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(childBizEntityIdList_, childBizEntityIdList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // lastModifierName Field Functions 
    bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
    void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
    inline string lastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // onlineStatus Field Functions 
    bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
    void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
    inline string onlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setOnlineStatus(string onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // refBizEntityIdList Field Functions 
    bool hasRefBizEntityIdList() const { return this->refBizEntityIdList_ != nullptr;};
    void deleteRefBizEntityIdList() { this->refBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & refBizEntityIdList() const { DARABONBA_PTR_GET_CONST(refBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> refBizEntityIdList() { DARABONBA_PTR_GET(refBizEntityIdList_, vector<int64_t>) };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setRefBizEntityIdList(const vector<int64_t> & refBizEntityIdList) { DARABONBA_PTR_SET_VALUE(refBizEntityIdList_, refBizEntityIdList) };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setRefBizEntityIdList(vector<int64_t> && refBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(refBizEntityIdList_, refBizEntityIdList) };


    // refDimTableCount Field Functions 
    bool hasRefDimTableCount() const { return this->refDimTableCount_ != nullptr;};
    void deleteRefDimTableCount() { this->refDimTableCount_ = nullptr;};
    inline int32_t refDimTableCount() const { DARABONBA_PTR_GET_DEFAULT(refDimTableCount_, 0) };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setRefDimTableCount(int32_t refDimTableCount) { DARABONBA_PTR_SET_VALUE(refDimTableCount_, refDimTableCount) };


    // refSummaryTableCount Field Functions 
    bool hasRefSummaryTableCount() const { return this->refSummaryTableCount_ != nullptr;};
    void deleteRefSummaryTableCount() { this->refSummaryTableCount_ = nullptr;};
    inline int32_t refSummaryTableCount() const { DARABONBA_PTR_GET_DEFAULT(refSummaryTableCount_, 0) };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setRefSummaryTableCount(int32_t refSummaryTableCount) { DARABONBA_PTR_SET_VALUE(refSummaryTableCount_, refSummaryTableCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetBizEntityInfoByVersionResponseBodyBizEntityInfoBizObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> approvalId_ = nullptr;
    std::shared_ptr<string> approvalStatus_ = nullptr;
    std::shared_ptr<vector<int64_t>> childBizEntityIdList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> lastModifierName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> onlineStatus_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<int64_t> parentId_ = nullptr;
    std::shared_ptr<vector<int64_t>> refBizEntityIdList_ = nullptr;
    std::shared_ptr<int32_t> refDimTableCount_ = nullptr;
    std::shared_ptr<int32_t> refSummaryTableCount_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
