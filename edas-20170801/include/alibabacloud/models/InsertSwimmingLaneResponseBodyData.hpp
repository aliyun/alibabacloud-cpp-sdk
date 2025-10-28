// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTSWIMMINGLANERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INSERTSWIMMINGLANERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsertSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertSwimmingLaneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_TO_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SwimmingLaneAppRelationShipList, swimmingLaneAppRelationShipList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, InsertSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_FROM_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SwimmingLaneAppRelationShipList, swimmingLaneAppRelationShipList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    InsertSwimmingLaneResponseBodyData() = default ;
    InsertSwimmingLaneResponseBodyData(const InsertSwimmingLaneResponseBodyData &) = default ;
    InsertSwimmingLaneResponseBodyData(InsertSwimmingLaneResponseBodyData &&) = default ;
    InsertSwimmingLaneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertSwimmingLaneResponseBodyData() = default ;
    InsertSwimmingLaneResponseBodyData& operator=(const InsertSwimmingLaneResponseBodyData &) = default ;
    InsertSwimmingLaneResponseBodyData& operator=(InsertSwimmingLaneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInfos_ == nullptr
        && return this->entryRule_ == nullptr && return this->groupId_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr
        && return this->swimmingLaneAppRelationShipList_ == nullptr && return this->tag_ == nullptr; };
    // appInfos Field Functions 
    bool hasAppInfos() const { return this->appInfos_ != nullptr;};
    void deleteAppInfos() { this->appInfos_ = nullptr;};
    inline string appInfos() const { DARABONBA_PTR_GET_DEFAULT(appInfos_, "") };
    inline InsertSwimmingLaneResponseBodyData& setAppInfos(string appInfos) { DARABONBA_PTR_SET_VALUE(appInfos_, appInfos) };


    // entryRule Field Functions 
    bool hasEntryRule() const { return this->entryRule_ != nullptr;};
    void deleteEntryRule() { this->entryRule_ = nullptr;};
    inline string entryRule() const { DARABONBA_PTR_GET_DEFAULT(entryRule_, "") };
    inline InsertSwimmingLaneResponseBodyData& setEntryRule(string entryRule) { DARABONBA_PTR_SET_VALUE(entryRule_, entryRule) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline InsertSwimmingLaneResponseBodyData& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline InsertSwimmingLaneResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InsertSwimmingLaneResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline InsertSwimmingLaneResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // swimmingLaneAppRelationShipList Field Functions 
    bool hasSwimmingLaneAppRelationShipList() const { return this->swimmingLaneAppRelationShipList_ != nullptr;};
    void deleteSwimmingLaneAppRelationShipList() { this->swimmingLaneAppRelationShipList_ = nullptr;};
    inline const vector<Models::InsertSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> & swimmingLaneAppRelationShipList() const { DARABONBA_PTR_GET_CONST(swimmingLaneAppRelationShipList_, vector<Models::InsertSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>) };
    inline vector<Models::InsertSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> swimmingLaneAppRelationShipList() { DARABONBA_PTR_GET(swimmingLaneAppRelationShipList_, vector<Models::InsertSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>) };
    inline InsertSwimmingLaneResponseBodyData& setSwimmingLaneAppRelationShipList(const vector<Models::InsertSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> & swimmingLaneAppRelationShipList) { DARABONBA_PTR_SET_VALUE(swimmingLaneAppRelationShipList_, swimmingLaneAppRelationShipList) };
    inline InsertSwimmingLaneResponseBodyData& setSwimmingLaneAppRelationShipList(vector<Models::InsertSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> && swimmingLaneAppRelationShipList) { DARABONBA_PTR_SET_RVALUE(swimmingLaneAppRelationShipList_, swimmingLaneAppRelationShipList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline InsertSwimmingLaneResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The applications that are associated with lanes.
    std::shared_ptr<string> appInfos_ = nullptr;
    // The throttling rule for the lane.
    // 
    // priority: the priority of the throttling rule for the lane. Valid values: 1 to 100.
    // 
    // path: the path that is matched by the throttling rule for the lane.
    // 
    // restItems: conditions to be met.
    // 
    // condition: the relationship among the conditions to be met.
    // 
    // *   AND: all conditions
    // *   OR: one of the conditions
    // 
    // restItems.type: the type of the rule. Valid values:
    // 
    // *   header: matches by request header.
    // *   cookie: matches by request cookie.
    // *   param: matches by request parameters.
    // 
    // restItems.name: the key that matches the rule.
    // 
    // restItems.value: the value that matches the rule.
    // 
    // restItems.cond: the condition that matches the rule. Valid values:
    // 
    // *   "==": The parameter value is equal to the value that you enter in the Value field.
    // *   "!=": The parameter value is not equal to the value that you enter in the Value field.
    // *   ">": The parameter value is greater than the value that you enter in the Value field.
    // *   "<": The parameter value is less than the value that you enter in the Value field.
    // *   ">=": The parameter value is greater than or equal to the value that you enter in the Value field.
    // *   "<=": The parameter value is less than or equal to the value that you enter in the Value field.
    // *   "in": The parameter value is within the values that you enter in the Value field.
    // 
    // restItems.operator: the type of the value. Valid values:
    // 
    // *   rawvalue: the initial value
    // *   mod: the reminder obtained by performing modulo operation
    // *   list: the value from the list
    std::shared_ptr<string> entryRule_ = nullptr;
    // The ID of the lane group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the lane.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the lane.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The association relationships between lanes and applications.
    std::shared_ptr<vector<Models::InsertSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>> swimmingLaneAppRelationShipList_ = nullptr;
    // The tag of the lane.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
