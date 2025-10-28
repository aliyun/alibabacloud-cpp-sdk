// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESWIMMINGLANERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATESWIMMINGLANERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateSwimmingLaneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SwimmingLaneAppRelationShipList, swimmingLaneAppRelationShipList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SwimmingLaneAppRelationShipList, swimmingLaneAppRelationShipList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    UpdateSwimmingLaneResponseBodyData() = default ;
    UpdateSwimmingLaneResponseBodyData(const UpdateSwimmingLaneResponseBodyData &) = default ;
    UpdateSwimmingLaneResponseBodyData(UpdateSwimmingLaneResponseBodyData &&) = default ;
    UpdateSwimmingLaneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSwimmingLaneResponseBodyData() = default ;
    UpdateSwimmingLaneResponseBodyData& operator=(const UpdateSwimmingLaneResponseBodyData &) = default ;
    UpdateSwimmingLaneResponseBodyData& operator=(UpdateSwimmingLaneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entryRule_ == nullptr
        && return this->groupId_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr && return this->swimmingLaneAppRelationShipList_ == nullptr
        && return this->tag_ == nullptr; };
    // entryRule Field Functions 
    bool hasEntryRule() const { return this->entryRule_ != nullptr;};
    void deleteEntryRule() { this->entryRule_ = nullptr;};
    inline string entryRule() const { DARABONBA_PTR_GET_DEFAULT(entryRule_, "") };
    inline UpdateSwimmingLaneResponseBodyData& setEntryRule(string entryRule) { DARABONBA_PTR_SET_VALUE(entryRule_, entryRule) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline UpdateSwimmingLaneResponseBodyData& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateSwimmingLaneResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSwimmingLaneResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateSwimmingLaneResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // swimmingLaneAppRelationShipList Field Functions 
    bool hasSwimmingLaneAppRelationShipList() const { return this->swimmingLaneAppRelationShipList_ != nullptr;};
    void deleteSwimmingLaneAppRelationShipList() { this->swimmingLaneAppRelationShipList_ = nullptr;};
    inline const vector<Models::UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> & swimmingLaneAppRelationShipList() const { DARABONBA_PTR_GET_CONST(swimmingLaneAppRelationShipList_, vector<Models::UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>) };
    inline vector<Models::UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> swimmingLaneAppRelationShipList() { DARABONBA_PTR_GET(swimmingLaneAppRelationShipList_, vector<Models::UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>) };
    inline UpdateSwimmingLaneResponseBodyData& setSwimmingLaneAppRelationShipList(const vector<Models::UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> & swimmingLaneAppRelationShipList) { DARABONBA_PTR_SET_VALUE(swimmingLaneAppRelationShipList_, swimmingLaneAppRelationShipList) };
    inline UpdateSwimmingLaneResponseBodyData& setSwimmingLaneAppRelationShipList(vector<Models::UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList> && swimmingLaneAppRelationShipList) { DARABONBA_PTR_SET_RVALUE(swimmingLaneAppRelationShipList_, swimmingLaneAppRelationShipList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline UpdateSwimmingLaneResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The rule of the lane.
    std::shared_ptr<string> entryRule_ = nullptr;
    // The ID of the lane group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the lane.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the lane.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The list of associations between the lane and the related application.
    std::shared_ptr<vector<Models::UpdateSwimmingLaneResponseBodyDataSwimmingLaneAppRelationShipList>> swimmingLaneAppRelationShipList_ = nullptr;
    // The tag of the lane.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
