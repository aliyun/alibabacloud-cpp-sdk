// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTRESPONSEBODYPAGEDATADATA_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTRESPONSEBODYPAGEDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanQueryListResponseBodyPageDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanQueryListResponseBodyPageDataData& obj) { 
      DARABONBA_PTR_TO_JSON(CheckWatermark, checkWatermark_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DesenMode, desenMode_);
      DARABONBA_PTR_TO_JSON(DesensPlan, desensPlan_);
      DARABONBA_PTR_TO_JSON(DesensRule, desensRule_);
      DARABONBA_PTR_TO_JSON(DesensWay, desensWay_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanQueryListResponseBodyPageDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckWatermark, checkWatermark_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DesenMode, desenMode_);
      DARABONBA_PTR_FROM_JSON(DesensPlan, desensPlan_);
      DARABONBA_PTR_FROM_JSON(DesensRule, desensRule_);
      DARABONBA_PTR_FROM_JSON(DesensWay, desensWay_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DsgDesensPlanQueryListResponseBodyPageDataData() = default ;
    DsgDesensPlanQueryListResponseBodyPageDataData(const DsgDesensPlanQueryListResponseBodyPageDataData &) = default ;
    DsgDesensPlanQueryListResponseBodyPageDataData(DsgDesensPlanQueryListResponseBodyPageDataData &&) = default ;
    DsgDesensPlanQueryListResponseBodyPageDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanQueryListResponseBodyPageDataData() = default ;
    DsgDesensPlanQueryListResponseBodyPageDataData& operator=(const DsgDesensPlanQueryListResponseBodyPageDataData &) = default ;
    DsgDesensPlanQueryListResponseBodyPageDataData& operator=(DsgDesensPlanQueryListResponseBodyPageDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkWatermark_ != nullptr
        && this->dataType_ != nullptr && this->desenMode_ != nullptr && this->desensPlan_ != nullptr && this->desensRule_ != nullptr && this->desensWay_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->owner_ != nullptr && this->ruleName_ != nullptr
        && this->sceneCode_ != nullptr && this->sceneName_ != nullptr && this->status_ != nullptr; };
    // checkWatermark Field Functions 
    bool hasCheckWatermark() const { return this->checkWatermark_ != nullptr;};
    void deleteCheckWatermark() { this->checkWatermark_ = nullptr;};
    inline bool checkWatermark() const { DARABONBA_PTR_GET_DEFAULT(checkWatermark_, false) };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setCheckWatermark(bool checkWatermark) { DARABONBA_PTR_SET_VALUE(checkWatermark_, checkWatermark) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // desenMode Field Functions 
    bool hasDesenMode() const { return this->desenMode_ != nullptr;};
    void deleteDesenMode() { this->desenMode_ = nullptr;};
    inline string desenMode() const { DARABONBA_PTR_GET_DEFAULT(desenMode_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setDesenMode(string desenMode) { DARABONBA_PTR_SET_VALUE(desenMode_, desenMode) };


    // desensPlan Field Functions 
    bool hasDesensPlan() const { return this->desensPlan_ != nullptr;};
    void deleteDesensPlan() { this->desensPlan_ = nullptr;};
    inline const Models::DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan & desensPlan() const { DARABONBA_PTR_GET_CONST(desensPlan_, Models::DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan) };
    inline Models::DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan desensPlan() { DARABONBA_PTR_GET(desensPlan_, Models::DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan) };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setDesensPlan(const Models::DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan & desensPlan) { DARABONBA_PTR_SET_VALUE(desensPlan_, desensPlan) };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setDesensPlan(Models::DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan && desensPlan) { DARABONBA_PTR_SET_RVALUE(desensPlan_, desensPlan) };


    // desensRule Field Functions 
    bool hasDesensRule() const { return this->desensRule_ != nullptr;};
    void deleteDesensRule() { this->desensRule_ = nullptr;};
    inline string desensRule() const { DARABONBA_PTR_GET_DEFAULT(desensRule_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setDesensRule(string desensRule) { DARABONBA_PTR_SET_VALUE(desensRule_, desensRule) };


    // desensWay Field Functions 
    bool hasDesensWay() const { return this->desensWay_ != nullptr;};
    void deleteDesensWay() { this->desensWay_ = nullptr;};
    inline string desensWay() const { DARABONBA_PTR_GET_DEFAULT(desensWay_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setDesensWay(string desensWay) { DARABONBA_PTR_SET_VALUE(desensWay_, desensWay) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DsgDesensPlanQueryListResponseBodyPageDataData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether a watermark is added. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> checkWatermark_ = nullptr;
    // The sensitive field type.
    std::shared_ptr<string> dataType_ = nullptr;
    // The type of the data masking method.
    std::shared_ptr<string> desenMode_ = nullptr;
    // The details of the data masking rule.
    std::shared_ptr<Models::DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan> desensPlan_ = nullptr;
    // The data masking rule.
    std::shared_ptr<string> desensRule_ = nullptr;
    // The data masking method.
    std::shared_ptr<string> desensWay_ = nullptr;
    // The time when the data masking rule was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the data masking rule was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the data masking rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The owner of the data masking rule.
    std::shared_ptr<string> owner_ = nullptr;
    // The name of the data masking rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The code of the level-1 data masking scenario to which the rule belongs. Valid values:
    // 
    // *   dataworks_display_desense_code: masking of displayed data in DataStudio and Data Map
    // *   maxcompute_desense_code: data masking at the MaxCompute compute engine layer
    // *   maxcompute_new_desense_code: data masking at the MaxCompute compute engine layer (new)
    // *   hologres_display_desense_code: data masking at the Hologres compute engine layer
    // *   dataworks_data_integration_desense_code: static data masking in Data Integration
    // *   dataworks_analysis_desense_code: masking of displayed data in DataAnalysis
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The name of the level-2 data masking scenario to which the data masking rule belongs.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The status of the data masking rule. Valid values:
    // 
    // *   0: expired
    // *   1: effective
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
