// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALINSTANCERESPONSEBODYINSTANCENODEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALINSTANCERESPONSEBODYINSTANCENODEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator.hpp>
#include <alibabacloud/models/GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier.hpp>
#include <vector>
#include <alibabacloud/models/GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalInstanceResponseBodyInstanceNodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalInstanceResponseBodyInstanceNodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(HasDev, hasDev_);
      DARABONBA_PTR_TO_JSON(HasProd, hasProd_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_TO_JSON(PriorityList, priorityList_);
      DARABONBA_PTR_TO_JSON(ResourceGroupList, resourceGroupList_);
      DARABONBA_PTR_TO_JSON(SchedulePaused, schedulePaused_);
      DARABONBA_PTR_TO_JSON(SchedulePeriodList, schedulePeriodList_);
      DARABONBA_PTR_TO_JSON(SubDetailType, subDetailType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalInstanceResponseBodyInstanceNodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(HasDev, hasDev_);
      DARABONBA_PTR_FROM_JSON(HasProd, hasProd_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_FROM_JSON(PriorityList, priorityList_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupList, resourceGroupList_);
      DARABONBA_PTR_FROM_JSON(SchedulePaused, schedulePaused_);
      DARABONBA_PTR_FROM_JSON(SchedulePeriodList, schedulePeriodList_);
      DARABONBA_PTR_FROM_JSON(SubDetailType, subDetailType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetPhysicalInstanceResponseBodyInstanceNodeInfo() = default ;
    GetPhysicalInstanceResponseBodyInstanceNodeInfo(const GetPhysicalInstanceResponseBodyInstanceNodeInfo &) = default ;
    GetPhysicalInstanceResponseBodyInstanceNodeInfo(GetPhysicalInstanceResponseBodyInstanceNodeInfo &&) = default ;
    GetPhysicalInstanceResponseBodyInstanceNodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalInstanceResponseBodyInstanceNodeInfo() = default ;
    GetPhysicalInstanceResponseBodyInstanceNodeInfo& operator=(const GetPhysicalInstanceResponseBodyInstanceNodeInfo &) = default ;
    GetPhysicalInstanceResponseBodyInstanceNodeInfo& operator=(GetPhysicalInstanceResponseBodyInstanceNodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizUnitName_ == nullptr
        && return this->createTime_ == nullptr && return this->creator_ == nullptr && return this->description_ == nullptr && return this->dryRun_ == nullptr && return this->from_ == nullptr
        && return this->hasDev_ == nullptr && return this->hasProd_ == nullptr && return this->id_ == nullptr && return this->lastModifiedTime_ == nullptr && return this->modifier_ == nullptr
        && return this->name_ == nullptr && return this->ownerList_ == nullptr && return this->priorityList_ == nullptr && return this->resourceGroupList_ == nullptr && return this->schedulePaused_ == nullptr
        && return this->schedulePeriodList_ == nullptr && return this->subDetailType_ == nullptr && return this->type_ == nullptr; };
    // bizUnitName Field Functions 
    bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
    void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
    inline string bizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator) };
    inline Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator creator() { DARABONBA_PTR_GET(creator_, Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setCreator(const Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setCreator(Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // hasDev Field Functions 
    bool hasHasDev() const { return this->hasDev_ != nullptr;};
    void deleteHasDev() { this->hasDev_ = nullptr;};
    inline bool hasDev() const { DARABONBA_PTR_GET_DEFAULT(hasDev_, false) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setHasDev(bool hasDev) { DARABONBA_PTR_SET_VALUE(hasDev_, hasDev) };


    // hasProd Field Functions 
    bool hasHasProd() const { return this->hasProd_ != nullptr;};
    void deleteHasProd() { this->hasProd_ = nullptr;};
    inline bool hasProd() const { DARABONBA_PTR_GET_DEFAULT(hasProd_, false) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setHasProd(bool hasProd) { DARABONBA_PTR_SET_VALUE(hasProd_, hasProd) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline const Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier & modifier() const { DARABONBA_PTR_GET_CONST(modifier_, Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier) };
    inline Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier modifier() { DARABONBA_PTR_GET(modifier_, Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setModifier(const Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setModifier(Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerList Field Functions 
    bool hasOwnerList() const { return this->ownerList_ != nullptr;};
    void deleteOwnerList() { this->ownerList_ = nullptr;};
    inline const vector<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList> & ownerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList>) };
    inline vector<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList> ownerList() { DARABONBA_PTR_GET(ownerList_, vector<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList>) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setOwnerList(const vector<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setOwnerList(vector<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


    // priorityList Field Functions 
    bool hasPriorityList() const { return this->priorityList_ != nullptr;};
    void deletePriorityList() { this->priorityList_ = nullptr;};
    inline const vector<string> & priorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<string>) };
    inline vector<string> priorityList() { DARABONBA_PTR_GET(priorityList_, vector<string>) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setPriorityList(const vector<string> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setPriorityList(vector<string> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


    // resourceGroupList Field Functions 
    bool hasResourceGroupList() const { return this->resourceGroupList_ != nullptr;};
    void deleteResourceGroupList() { this->resourceGroupList_ = nullptr;};
    inline const vector<string> & resourceGroupList() const { DARABONBA_PTR_GET_CONST(resourceGroupList_, vector<string>) };
    inline vector<string> resourceGroupList() { DARABONBA_PTR_GET(resourceGroupList_, vector<string>) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setResourceGroupList(const vector<string> & resourceGroupList) { DARABONBA_PTR_SET_VALUE(resourceGroupList_, resourceGroupList) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setResourceGroupList(vector<string> && resourceGroupList) { DARABONBA_PTR_SET_RVALUE(resourceGroupList_, resourceGroupList) };


    // schedulePaused Field Functions 
    bool hasSchedulePaused() const { return this->schedulePaused_ != nullptr;};
    void deleteSchedulePaused() { this->schedulePaused_ = nullptr;};
    inline bool schedulePaused() const { DARABONBA_PTR_GET_DEFAULT(schedulePaused_, false) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setSchedulePaused(bool schedulePaused) { DARABONBA_PTR_SET_VALUE(schedulePaused_, schedulePaused) };


    // schedulePeriodList Field Functions 
    bool hasSchedulePeriodList() const { return this->schedulePeriodList_ != nullptr;};
    void deleteSchedulePeriodList() { this->schedulePeriodList_ = nullptr;};
    inline const vector<string> & schedulePeriodList() const { DARABONBA_PTR_GET_CONST(schedulePeriodList_, vector<string>) };
    inline vector<string> schedulePeriodList() { DARABONBA_PTR_GET(schedulePeriodList_, vector<string>) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setSchedulePeriodList(const vector<string> & schedulePeriodList) { DARABONBA_PTR_SET_VALUE(schedulePeriodList_, schedulePeriodList) };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setSchedulePeriodList(vector<string> && schedulePeriodList) { DARABONBA_PTR_SET_RVALUE(schedulePeriodList_, schedulePeriodList) };


    // subDetailType Field Functions 
    bool hasSubDetailType() const { return this->subDetailType_ != nullptr;};
    void deleteSubDetailType() { this->subDetailType_ = nullptr;};
    inline string subDetailType() const { DARABONBA_PTR_GET_DEFAULT(subDetailType_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setSubDetailType(string subDetailType) { DARABONBA_PTR_SET_VALUE(subDetailType_, subDetailType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetPhysicalInstanceResponseBodyInstanceNodeInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> bizUnitName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> from_ = nullptr;
    std::shared_ptr<bool> hasDev_ = nullptr;
    std::shared_ptr<bool> hasProd_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    std::shared_ptr<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList>> ownerList_ = nullptr;
    std::shared_ptr<vector<string>> priorityList_ = nullptr;
    std::shared_ptr<vector<string>> resourceGroupList_ = nullptr;
    std::shared_ptr<bool> schedulePaused_ = nullptr;
    std::shared_ptr<vector<string>> schedulePeriodList_ = nullptr;
    std::shared_ptr<string> subDetailType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
