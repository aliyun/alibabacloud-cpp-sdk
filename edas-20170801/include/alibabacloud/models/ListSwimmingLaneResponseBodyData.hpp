// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSwimmingLaneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_TO_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(ScenarioSign, scenarioSign_);
      DARABONBA_PTR_TO_JSON(SwimmingLaneAppRelationShipList, swimmingLaneAppRelationShipList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_FROM_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(ScenarioSign, scenarioSign_);
      DARABONBA_PTR_FROM_JSON(SwimmingLaneAppRelationShipList, swimmingLaneAppRelationShipList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListSwimmingLaneResponseBodyData() = default ;
    ListSwimmingLaneResponseBodyData(const ListSwimmingLaneResponseBodyData &) = default ;
    ListSwimmingLaneResponseBodyData(ListSwimmingLaneResponseBodyData &&) = default ;
    ListSwimmingLaneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneResponseBodyData() = default ;
    ListSwimmingLaneResponseBodyData& operator=(const ListSwimmingLaneResponseBodyData &) = default ;
    ListSwimmingLaneResponseBodyData& operator=(ListSwimmingLaneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableRules_ == nullptr
        && return this->entryRule_ == nullptr && return this->groupId_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr
        && return this->scenarioSign_ == nullptr && return this->swimmingLaneAppRelationShipList_ == nullptr && return this->tag_ == nullptr; };
    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool enableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline ListSwimmingLaneResponseBodyData& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // entryRule Field Functions 
    bool hasEntryRule() const { return this->entryRule_ != nullptr;};
    void deleteEntryRule() { this->entryRule_ = nullptr;};
    inline string entryRule() const { DARABONBA_PTR_GET_DEFAULT(entryRule_, "") };
    inline ListSwimmingLaneResponseBodyData& setEntryRule(string entryRule) { DARABONBA_PTR_SET_VALUE(entryRule_, entryRule) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListSwimmingLaneResponseBodyData& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListSwimmingLaneResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSwimmingLaneResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListSwimmingLaneResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // scenarioSign Field Functions 
    bool hasScenarioSign() const { return this->scenarioSign_ != nullptr;};
    void deleteScenarioSign() { this->scenarioSign_ = nullptr;};
    inline string scenarioSign() const { DARABONBA_PTR_GET_DEFAULT(scenarioSign_, "") };
    inline ListSwimmingLaneResponseBodyData& setScenarioSign(string scenarioSign) { DARABONBA_PTR_SET_VALUE(scenarioSign_, scenarioSign) };


    // swimmingLaneAppRelationShipList Field Functions 
    bool hasSwimmingLaneAppRelationShipList() const { return this->swimmingLaneAppRelationShipList_ != nullptr;};
    void deleteSwimmingLaneAppRelationShipList() { this->swimmingLaneAppRelationShipList_ = nullptr;};
    inline const vector<Models::ListSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> & swimmingLaneAppRelationShipList() const { DARABONBA_PTR_GET_CONST(swimmingLaneAppRelationShipList_, vector<Models::ListSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>) };
    inline vector<Models::ListSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> swimmingLaneAppRelationShipList() { DARABONBA_PTR_GET(swimmingLaneAppRelationShipList_, vector<Models::ListSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>) };
    inline ListSwimmingLaneResponseBodyData& setSwimmingLaneAppRelationShipList(const vector<Models::ListSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> & swimmingLaneAppRelationShipList) { DARABONBA_PTR_SET_VALUE(swimmingLaneAppRelationShipList_, swimmingLaneAppRelationShipList) };
    inline ListSwimmingLaneResponseBodyData& setSwimmingLaneAppRelationShipList(vector<Models::ListSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> && swimmingLaneAppRelationShipList) { DARABONBA_PTR_SET_RVALUE(swimmingLaneAppRelationShipList_, swimmingLaneAppRelationShipList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListSwimmingLaneResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // Indicates whether the throttling rule is enabled.
    std::shared_ptr<bool> enableRules_ = nullptr;
    // The conditions.
    std::shared_ptr<string> entryRule_ = nullptr;
    // The ID of the lane group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the lane.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the lane.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the microservices namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The expected tag.
    std::shared_ptr<string> scenarioSign_ = nullptr;
    // The applications that are related to the lane.
    std::shared_ptr<vector<Models::ListSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>> swimmingLaneAppRelationShipList_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
