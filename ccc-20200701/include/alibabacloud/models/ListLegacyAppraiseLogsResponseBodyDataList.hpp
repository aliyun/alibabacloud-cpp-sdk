// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLEGACYAPPRAISELOGSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLEGACYAPPRAISELOGSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListLegacyAppraiseLogsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLegacyAppraiseLogsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyMarkRelation, keyMarkRelation_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ParentNote, parentNote_);
      DARABONBA_PTR_TO_JSON(PressKey, pressKey_);
      DARABONBA_PTR_TO_JSON(RamId, ramId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLegacyAppraiseLogsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyMarkRelation, keyMarkRelation_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ParentNote, parentNote_);
      DARABONBA_PTR_FROM_JSON(PressKey, pressKey_);
      DARABONBA_PTR_FROM_JSON(RamId, ramId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLegacyAppraiseLogsResponseBodyDataList() = default ;
    ListLegacyAppraiseLogsResponseBodyDataList(const ListLegacyAppraiseLogsResponseBodyDataList &) = default ;
    ListLegacyAppraiseLogsResponseBodyDataList(ListLegacyAppraiseLogsResponseBodyDataList &&) = default ;
    ListLegacyAppraiseLogsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLegacyAppraiseLogsResponseBodyDataList() = default ;
    ListLegacyAppraiseLogsResponseBodyDataList& operator=(const ListLegacyAppraiseLogsResponseBodyDataList &) = default ;
    ListLegacyAppraiseLogsResponseBodyDataList& operator=(ListLegacyAppraiseLogsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acid_ != nullptr
        && this->contactType_ != nullptr && this->id_ != nullptr && this->instanceId_ != nullptr && this->keyMarkRelation_ != nullptr && this->note_ != nullptr
        && this->parentNote_ != nullptr && this->pressKey_ != nullptr && this->ramId_ != nullptr && this->skillGroupId_ != nullptr && this->statisticDate_ != nullptr
        && this->type_ != nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyMarkRelation Field Functions 
    bool hasKeyMarkRelation() const { return this->keyMarkRelation_ != nullptr;};
    void deleteKeyMarkRelation() { this->keyMarkRelation_ = nullptr;};
    inline string keyMarkRelation() const { DARABONBA_PTR_GET_DEFAULT(keyMarkRelation_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setKeyMarkRelation(string keyMarkRelation) { DARABONBA_PTR_SET_VALUE(keyMarkRelation_, keyMarkRelation) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // parentNote Field Functions 
    bool hasParentNote() const { return this->parentNote_ != nullptr;};
    void deleteParentNote() { this->parentNote_ = nullptr;};
    inline string parentNote() const { DARABONBA_PTR_GET_DEFAULT(parentNote_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setParentNote(string parentNote) { DARABONBA_PTR_SET_VALUE(parentNote_, parentNote) };


    // pressKey Field Functions 
    bool hasPressKey() const { return this->pressKey_ != nullptr;};
    void deletePressKey() { this->pressKey_ = nullptr;};
    inline string pressKey() const { DARABONBA_PTR_GET_DEFAULT(pressKey_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setPressKey(string pressKey) { DARABONBA_PTR_SET_VALUE(pressKey_, pressKey) };


    // ramId Field Functions 
    bool hasRamId() const { return this->ramId_ != nullptr;};
    void deleteRamId() { this->ramId_ = nullptr;};
    inline string ramId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setRamId(string ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // statisticDate Field Functions 
    bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
    void deleteStatisticDate() { this->statisticDate_ = nullptr;};
    inline string statisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLegacyAppraiseLogsResponseBodyDataList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
    std::shared_ptr<string> contactType_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> keyMarkRelation_ = nullptr;
    std::shared_ptr<string> note_ = nullptr;
    std::shared_ptr<string> parentNote_ = nullptr;
    std::shared_ptr<string> pressKey_ = nullptr;
    std::shared_ptr<string> ramId_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> statisticDate_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
