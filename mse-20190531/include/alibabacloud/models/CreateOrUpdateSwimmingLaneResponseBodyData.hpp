// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(enableRules, enableRules_);
      DARABONBA_PTR_TO_JSON(entryRule, entryRule_);
      DARABONBA_PTR_TO_JSON(entryRules, entryRules_);
      DARABONBA_PTR_TO_JSON(gatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pathIndependentPercentageEnable, pathIndependentPercentageEnable_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(enableRules, enableRules_);
      DARABONBA_PTR_FROM_JSON(entryRule, entryRule_);
      DARABONBA_PTR_FROM_JSON(entryRules, entryRules_);
      DARABONBA_PTR_FROM_JSON(gatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pathIndependentPercentageEnable, pathIndependentPercentageEnable_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    CreateOrUpdateSwimmingLaneResponseBodyData() = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData(const CreateOrUpdateSwimmingLaneResponseBodyData &) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData(CreateOrUpdateSwimmingLaneResponseBodyData &&) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneResponseBodyData() = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData& operator=(const CreateOrUpdateSwimmingLaneResponseBodyData &) = default ;
    CreateOrUpdateSwimmingLaneResponseBodyData& operator=(CreateOrUpdateSwimmingLaneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->enableRules_ != nullptr && this->entryRule_ != nullptr && this->entryRules_ != nullptr && this->gatewaySwimmingLaneRouteJson_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->groupId_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->pathIndependentPercentageEnable_ != nullptr
        && this->regionId_ != nullptr && this->status_ != nullptr && this->tag_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool enableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // entryRule Field Functions 
    bool hasEntryRule() const { return this->entryRule_ != nullptr;};
    void deleteEntryRule() { this->entryRule_ = nullptr;};
    inline string entryRule() const { DARABONBA_PTR_GET_DEFAULT(entryRule_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setEntryRule(string entryRule) { DARABONBA_PTR_SET_VALUE(entryRule_, entryRule) };


    // entryRules Field Functions 
    bool hasEntryRules() const { return this->entryRules_ != nullptr;};
    void deleteEntryRules() { this->entryRules_ = nullptr;};
    inline const vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules> & entryRules() const { DARABONBA_PTR_GET_CONST(entryRules_, vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules>) };
    inline vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules> entryRules() { DARABONBA_PTR_GET(entryRules_, vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules>) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setEntryRules(const vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules> & entryRules) { DARABONBA_PTR_SET_VALUE(entryRules_, entryRules) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setEntryRules(vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules> && entryRules) { DARABONBA_PTR_SET_RVALUE(entryRules_, entryRules) };


    // gatewaySwimmingLaneRouteJson Field Functions 
    bool hasGatewaySwimmingLaneRouteJson() const { return this->gatewaySwimmingLaneRouteJson_ != nullptr;};
    void deleteGatewaySwimmingLaneRouteJson() { this->gatewaySwimmingLaneRouteJson_ = nullptr;};
    inline string gatewaySwimmingLaneRouteJson() const { DARABONBA_PTR_GET_DEFAULT(gatewaySwimmingLaneRouteJson_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setGatewaySwimmingLaneRouteJson(string gatewaySwimmingLaneRouteJson) { DARABONBA_PTR_SET_VALUE(gatewaySwimmingLaneRouteJson_, gatewaySwimmingLaneRouteJson) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathIndependentPercentageEnable Field Functions 
    bool hasPathIndependentPercentageEnable() const { return this->pathIndependentPercentageEnable_ != nullptr;};
    void deletePathIndependentPercentageEnable() { this->pathIndependentPercentageEnable_ = nullptr;};
    inline bool pathIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(pathIndependentPercentageEnable_, false) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setPathIndependentPercentageEnable(bool pathIndependentPercentageEnable) { DARABONBA_PTR_SET_VALUE(pathIndependentPercentageEnable_, pathIndependentPercentageEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateOrUpdateSwimmingLaneResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<bool> enableRules_ = nullptr;
    std::shared_ptr<string> entryRule_ = nullptr;
    std::shared_ptr<vector<Models::CreateOrUpdateSwimmingLaneResponseBodyDataEntryRules>> entryRules_ = nullptr;
    std::shared_ptr<string> gatewaySwimmingLaneRouteJson_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> pathIndependentPercentageEnable_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
