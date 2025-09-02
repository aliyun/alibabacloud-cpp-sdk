// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATEREQUESTDESENSRULES_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATEREQUESTDESENSRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanAddOrUpdateRequestDesensRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanAddOrUpdateRequestDesensRules& obj) { 
      DARABONBA_PTR_TO_JSON(CheckWatermark, checkWatermark_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DesensPlan, desensPlan_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SceneIds, sceneIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanAddOrUpdateRequestDesensRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckWatermark, checkWatermark_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DesensPlan, desensPlan_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SceneIds, sceneIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DsgDesensPlanAddOrUpdateRequestDesensRules() = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRules(const DsgDesensPlanAddOrUpdateRequestDesensRules &) = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRules(DsgDesensPlanAddOrUpdateRequestDesensRules &&) = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanAddOrUpdateRequestDesensRules() = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRules& operator=(const DsgDesensPlanAddOrUpdateRequestDesensRules &) = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRules& operator=(DsgDesensPlanAddOrUpdateRequestDesensRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkWatermark_ != nullptr
        && this->dataType_ != nullptr && this->desensPlan_ != nullptr && this->id_ != nullptr && this->owner_ != nullptr && this->ruleName_ != nullptr
        && this->sceneIds_ != nullptr && this->status_ != nullptr; };
    // checkWatermark Field Functions 
    bool hasCheckWatermark() const { return this->checkWatermark_ != nullptr;};
    void deleteCheckWatermark() { this->checkWatermark_ = nullptr;};
    inline bool checkWatermark() const { DARABONBA_PTR_GET_DEFAULT(checkWatermark_, false) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setCheckWatermark(bool checkWatermark) { DARABONBA_PTR_SET_VALUE(checkWatermark_, checkWatermark) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // desensPlan Field Functions 
    bool hasDesensPlan() const { return this->desensPlan_ != nullptr;};
    void deleteDesensPlan() { this->desensPlan_ = nullptr;};
    inline const Models::DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan & desensPlan() const { DARABONBA_PTR_GET_CONST(desensPlan_, Models::DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan) };
    inline Models::DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan desensPlan() { DARABONBA_PTR_GET(desensPlan_, Models::DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setDesensPlan(const Models::DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan & desensPlan) { DARABONBA_PTR_SET_VALUE(desensPlan_, desensPlan) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setDesensPlan(Models::DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan && desensPlan) { DARABONBA_PTR_SET_RVALUE(desensPlan_, desensPlan) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sceneIds Field Functions 
    bool hasSceneIds() const { return this->sceneIds_ != nullptr;};
    void deleteSceneIds() { this->sceneIds_ = nullptr;};
    inline const vector<int32_t> & sceneIds() const { DARABONBA_PTR_GET_CONST(sceneIds_, vector<int32_t>) };
    inline vector<int32_t> sceneIds() { DARABONBA_PTR_GET(sceneIds_, vector<int32_t>) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setSceneIds(const vector<int32_t> & sceneIds) { DARABONBA_PTR_SET_VALUE(sceneIds_, sceneIds) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setSceneIds(vector<int32_t> && sceneIds) { DARABONBA_PTR_SET_RVALUE(sceneIds_, sceneIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Specifies whether to add a watermark. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> checkWatermark_ = nullptr;
    // The sensitive field type.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataType_ = nullptr;
    // The data masking rule.
    // 
    // This parameter is required.
    std::shared_ptr<Models::DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan> desensPlan_ = nullptr;
    // The ID of the data masking rule. You can call the [DsgDesensPlanQueryList](https://help.aliyun.com/document_detail/2786578.html) operation to query the ID of the data masking rule.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The owner of the data masking rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The name of the data masking rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The level-2 data masking scenario.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> sceneIds_ = nullptr;
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
