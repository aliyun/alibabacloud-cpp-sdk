// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZENTITIESRESPONSEBODYPAGERESULTBIZENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZENTITIESRESPONSEBODYPAGERESULTBIZENTITYLIST_HPP_
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
  class ListBizEntitiesResponseBodyPageResultBizEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizEntitiesResponseBodyPageResultBizEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(BelongToBizEntityIdList, belongToBizEntityIdList_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(ChildBizEntityIdList, childBizEntityIdList_);
      DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HasChildBizEntity, hasChildBizEntity_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_TO_JSON(LevelSubBizObject, levelSubBizObject_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
      DARABONBA_PTR_TO_JSON(RefTableCount, refTableCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(SuffixBizEntityIdList, suffixBizEntityIdList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizEntitiesResponseBodyPageResultBizEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongToBizEntityIdList, belongToBizEntityIdList_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(ChildBizEntityIdList, childBizEntityIdList_);
      DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HasChildBizEntity, hasChildBizEntity_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_FROM_JSON(LevelSubBizObject, levelSubBizObject_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
      DARABONBA_PTR_FROM_JSON(RefTableCount, refTableCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(SuffixBizEntityIdList, suffixBizEntityIdList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListBizEntitiesResponseBodyPageResultBizEntityList() = default ;
    ListBizEntitiesResponseBodyPageResultBizEntityList(const ListBizEntitiesResponseBodyPageResultBizEntityList &) = default ;
    ListBizEntitiesResponseBodyPageResultBizEntityList(ListBizEntitiesResponseBodyPageResultBizEntityList &&) = default ;
    ListBizEntitiesResponseBodyPageResultBizEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizEntitiesResponseBodyPageResultBizEntityList() = default ;
    ListBizEntitiesResponseBodyPageResultBizEntityList& operator=(const ListBizEntitiesResponseBodyPageResultBizEntityList &) = default ;
    ListBizEntitiesResponseBodyPageResultBizEntityList& operator=(ListBizEntitiesResponseBodyPageResultBizEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->belongToBizEntityIdList_ != nullptr
        && this->bizUnitId_ != nullptr && this->childBizEntityIdList_ != nullptr && this->dataDomainId_ != nullptr && this->description_ != nullptr && this->displayName_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->hasChildBizEntity_ != nullptr && this->id_ != nullptr && this->lastModifier_ != nullptr
        && this->lastModifierName_ != nullptr && this->levelSubBizObject_ != nullptr && this->name_ != nullptr && this->onlineStatus_ != nullptr && this->ownerName_ != nullptr
        && this->ownerUserId_ != nullptr && this->refBizEntityIdList_ != nullptr && this->refTableCount_ != nullptr && this->status_ != nullptr && this->subType_ != nullptr
        && this->suffixBizEntityIdList_ != nullptr && this->type_ != nullptr; };
    // belongToBizEntityIdList Field Functions 
    bool hasBelongToBizEntityIdList() const { return this->belongToBizEntityIdList_ != nullptr;};
    void deleteBelongToBizEntityIdList() { this->belongToBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & belongToBizEntityIdList() const { DARABONBA_PTR_GET_CONST(belongToBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> belongToBizEntityIdList() { DARABONBA_PTR_GET(belongToBizEntityIdList_, vector<int64_t>) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setBelongToBizEntityIdList(const vector<int64_t> & belongToBizEntityIdList) { DARABONBA_PTR_SET_VALUE(belongToBizEntityIdList_, belongToBizEntityIdList) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setBelongToBizEntityIdList(vector<int64_t> && belongToBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(belongToBizEntityIdList_, belongToBizEntityIdList) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // childBizEntityIdList Field Functions 
    bool hasChildBizEntityIdList() const { return this->childBizEntityIdList_ != nullptr;};
    void deleteChildBizEntityIdList() { this->childBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & childBizEntityIdList() const { DARABONBA_PTR_GET_CONST(childBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> childBizEntityIdList() { DARABONBA_PTR_GET(childBizEntityIdList_, vector<int64_t>) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setChildBizEntityIdList(const vector<int64_t> & childBizEntityIdList) { DARABONBA_PTR_SET_VALUE(childBizEntityIdList_, childBizEntityIdList) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setChildBizEntityIdList(vector<int64_t> && childBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(childBizEntityIdList_, childBizEntityIdList) };


    // dataDomainId Field Functions 
    bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
    void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
    inline int64_t dataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasChildBizEntity Field Functions 
    bool hasHasChildBizEntity() const { return this->hasChildBizEntity_ != nullptr;};
    void deleteHasChildBizEntity() { this->hasChildBizEntity_ = nullptr;};
    inline bool hasChildBizEntity() const { DARABONBA_PTR_GET_DEFAULT(hasChildBizEntity_, false) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setHasChildBizEntity(bool hasChildBizEntity) { DARABONBA_PTR_SET_VALUE(hasChildBizEntity_, hasChildBizEntity) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // lastModifierName Field Functions 
    bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
    void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
    inline string lastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


    // levelSubBizObject Field Functions 
    bool hasLevelSubBizObject() const { return this->levelSubBizObject_ != nullptr;};
    void deleteLevelSubBizObject() { this->levelSubBizObject_ = nullptr;};
    inline bool levelSubBizObject() const { DARABONBA_PTR_GET_DEFAULT(levelSubBizObject_, false) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setLevelSubBizObject(bool levelSubBizObject) { DARABONBA_PTR_SET_VALUE(levelSubBizObject_, levelSubBizObject) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // onlineStatus Field Functions 
    bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
    void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
    inline string onlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setOnlineStatus(string onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // refBizEntityIdList Field Functions 
    bool hasRefBizEntityIdList() const { return this->refBizEntityIdList_ != nullptr;};
    void deleteRefBizEntityIdList() { this->refBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & refBizEntityIdList() const { DARABONBA_PTR_GET_CONST(refBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> refBizEntityIdList() { DARABONBA_PTR_GET(refBizEntityIdList_, vector<int64_t>) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setRefBizEntityIdList(const vector<int64_t> & refBizEntityIdList) { DARABONBA_PTR_SET_VALUE(refBizEntityIdList_, refBizEntityIdList) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setRefBizEntityIdList(vector<int64_t> && refBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(refBizEntityIdList_, refBizEntityIdList) };


    // refTableCount Field Functions 
    bool hasRefTableCount() const { return this->refTableCount_ != nullptr;};
    void deleteRefTableCount() { this->refTableCount_ = nullptr;};
    inline int32_t refTableCount() const { DARABONBA_PTR_GET_DEFAULT(refTableCount_, 0) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setRefTableCount(int32_t refTableCount) { DARABONBA_PTR_SET_VALUE(refTableCount_, refTableCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // suffixBizEntityIdList Field Functions 
    bool hasSuffixBizEntityIdList() const { return this->suffixBizEntityIdList_ != nullptr;};
    void deleteSuffixBizEntityIdList() { this->suffixBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & suffixBizEntityIdList() const { DARABONBA_PTR_GET_CONST(suffixBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> suffixBizEntityIdList() { DARABONBA_PTR_GET(suffixBizEntityIdList_, vector<int64_t>) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setSuffixBizEntityIdList(const vector<int64_t> & suffixBizEntityIdList) { DARABONBA_PTR_SET_VALUE(suffixBizEntityIdList_, suffixBizEntityIdList) };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setSuffixBizEntityIdList(vector<int64_t> && suffixBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(suffixBizEntityIdList_, suffixBizEntityIdList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListBizEntitiesResponseBodyPageResultBizEntityList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<int64_t>> belongToBizEntityIdList_ = nullptr;
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    std::shared_ptr<vector<int64_t>> childBizEntityIdList_ = nullptr;
    std::shared_ptr<int64_t> dataDomainId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<bool> hasChildBizEntity_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> lastModifierName_ = nullptr;
    std::shared_ptr<bool> levelSubBizObject_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> onlineStatus_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<vector<int64_t>> refBizEntityIdList_ = nullptr;
    std::shared_ptr<int32_t> refTableCount_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<vector<int64_t>> suffixBizEntityIdList_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
