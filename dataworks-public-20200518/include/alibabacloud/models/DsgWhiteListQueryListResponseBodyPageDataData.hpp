// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGWHITELISTQUERYLISTRESPONSEBODYPAGEDATADATA_HPP_
#define ALIBABACLOUD_MODELS_DSGWHITELISTQUERYLISTRESPONSEBODYPAGEDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgWhiteListQueryListResponseBodyPageDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgWhiteListQueryListResponseBodyPageDataData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DsgWhiteListQueryListResponseBodyPageDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    DsgWhiteListQueryListResponseBodyPageDataData() = default ;
    DsgWhiteListQueryListResponseBodyPageDataData(const DsgWhiteListQueryListResponseBodyPageDataData &) = default ;
    DsgWhiteListQueryListResponseBodyPageDataData(DsgWhiteListQueryListResponseBodyPageDataData &&) = default ;
    DsgWhiteListQueryListResponseBodyPageDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgWhiteListQueryListResponseBodyPageDataData() = default ;
    DsgWhiteListQueryListResponseBodyPageDataData& operator=(const DsgWhiteListQueryListResponseBodyPageDataData &) = default ;
    DsgWhiteListQueryListResponseBodyPageDataData& operator=(DsgWhiteListQueryListResponseBodyPageDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->ruleId_ != nullptr && this->sceneId_ != nullptr
        && this->startTime_ != nullptr && this->type_ != nullptr && this->userGroups_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<string> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<string>) };
    inline vector<string> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<string>) };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setUserGroups(const vector<string> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline DsgWhiteListQueryListResponseBodyPageDataData& setUserGroups(vector<string> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    // The expiration time of the data masking whitelist cannot be earlier than the time when the data masking whitelist takes effect. Unit: days.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time when the whitelist was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the whitelist was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the data masking whitelist.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the data masking rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The ID of the level-2 data masking scenario.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // The time when the data masking whitelist takes effect cannot be earlier than the current time. Unit: days.
    std::shared_ptr<string> startTime_ = nullptr;
    // The sensitive field type.
    std::shared_ptr<string> type_ = nullptr;
    // A collection of user group names.
    std::shared_ptr<vector<string>> userGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
