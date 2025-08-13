// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLEDETAILRESPONSEBODYRESULTOBJECTBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLEDETAILRESPONSEBODYRESULTOBJECTBASEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableDetailResponseBodyResultObjectBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableDetailResponseBodyResultObjectBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(allowBind, allowBind_);
      DARABONBA_PTR_TO_JSON(chargingMode, chargingMode_);
      DARABONBA_PTR_TO_JSON(chargingModeDesc, chargingModeDesc_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(dataDisplay, dataDisplay_);
      DARABONBA_PTR_TO_JSON(dataThreshold, dataThreshold_);
      DARABONBA_PTR_TO_JSON(deductionFactor, deductionFactor_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(frontAllowBind, frontAllowBind_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(inputRequired, inputRequired_);
      DARABONBA_PTR_TO_JSON(inputs, inputs_);
      DARABONBA_PTR_TO_JSON(inputsDesc, inputsDesc_);
      DARABONBA_PTR_TO_JSON(invokeKey, invokeKey_);
      DARABONBA_PTR_TO_JSON(invokeRt, invokeRt_);
      DARABONBA_PTR_TO_JSON(invokeSuccessRate, invokeSuccessRate_);
      DARABONBA_PTR_TO_JSON(invokeTimes, invokeTimes_);
      DARABONBA_PTR_TO_JSON(lastModifiedOperator, lastModifiedOperator_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(outputsDesc, outputsDesc_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sceneDesc, sceneDesc_);
      DARABONBA_PTR_TO_JSON(showOrder, showOrder_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourceDesc, sourceDesc_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(supportRegions, supportRegions_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(typeDesc, typeDesc_);
      DARABONBA_PTR_TO_JSON(xLabel, xLabel_);
      DARABONBA_PTR_TO_JSON(yLabel, yLabel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableDetailResponseBodyResultObjectBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(allowBind, allowBind_);
      DARABONBA_PTR_FROM_JSON(chargingMode, chargingMode_);
      DARABONBA_PTR_FROM_JSON(chargingModeDesc, chargingModeDesc_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(dataDisplay, dataDisplay_);
      DARABONBA_PTR_FROM_JSON(dataThreshold, dataThreshold_);
      DARABONBA_PTR_FROM_JSON(deductionFactor, deductionFactor_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(frontAllowBind, frontAllowBind_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(inputRequired, inputRequired_);
      DARABONBA_PTR_FROM_JSON(inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(inputsDesc, inputsDesc_);
      DARABONBA_PTR_FROM_JSON(invokeKey, invokeKey_);
      DARABONBA_PTR_FROM_JSON(invokeRt, invokeRt_);
      DARABONBA_PTR_FROM_JSON(invokeSuccessRate, invokeSuccessRate_);
      DARABONBA_PTR_FROM_JSON(invokeTimes, invokeTimes_);
      DARABONBA_PTR_FROM_JSON(lastModifiedOperator, lastModifiedOperator_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(outputsDesc, outputsDesc_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sceneDesc, sceneDesc_);
      DARABONBA_PTR_FROM_JSON(showOrder, showOrder_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourceDesc, sourceDesc_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(supportRegions, supportRegions_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(typeDesc, typeDesc_);
      DARABONBA_PTR_FROM_JSON(xLabel, xLabel_);
      DARABONBA_PTR_FROM_JSON(yLabel, yLabel_);
    };
    DescribeVariableDetailResponseBodyResultObjectBaseInfo() = default ;
    DescribeVariableDetailResponseBodyResultObjectBaseInfo(const DescribeVariableDetailResponseBodyResultObjectBaseInfo &) = default ;
    DescribeVariableDetailResponseBodyResultObjectBaseInfo(DescribeVariableDetailResponseBodyResultObjectBaseInfo &&) = default ;
    DescribeVariableDetailResponseBodyResultObjectBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableDetailResponseBodyResultObjectBaseInfo() = default ;
    DescribeVariableDetailResponseBodyResultObjectBaseInfo& operator=(const DescribeVariableDetailResponseBodyResultObjectBaseInfo &) = default ;
    DescribeVariableDetailResponseBodyResultObjectBaseInfo& operator=(DescribeVariableDetailResponseBodyResultObjectBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowBind_ != nullptr
        && this->chargingMode_ != nullptr && this->chargingModeDesc_ != nullptr && this->creator_ != nullptr && this->dataDisplay_ != nullptr && this->dataThreshold_ != nullptr
        && this->deductionFactor_ != nullptr && this->description_ != nullptr && this->frontAllowBind_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->inputRequired_ != nullptr && this->inputs_ != nullptr && this->inputsDesc_ != nullptr && this->invokeKey_ != nullptr
        && this->invokeRt_ != nullptr && this->invokeSuccessRate_ != nullptr && this->invokeTimes_ != nullptr && this->lastModifiedOperator_ != nullptr && this->name_ != nullptr
        && this->outputs_ != nullptr && this->outputsDesc_ != nullptr && this->scene_ != nullptr && this->sceneDesc_ != nullptr && this->showOrder_ != nullptr
        && this->source_ != nullptr && this->sourceDesc_ != nullptr && this->status_ != nullptr && this->supportRegions_ != nullptr && this->title_ != nullptr
        && this->type_ != nullptr && this->typeDesc_ != nullptr && this->xLabel_ != nullptr && this->yLabel_ != nullptr; };
    // allowBind Field Functions 
    bool hasAllowBind() const { return this->allowBind_ != nullptr;};
    void deleteAllowBind() { this->allowBind_ = nullptr;};
    inline string allowBind() const { DARABONBA_PTR_GET_DEFAULT(allowBind_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setAllowBind(string allowBind) { DARABONBA_PTR_SET_VALUE(allowBind_, allowBind) };


    // chargingMode Field Functions 
    bool hasChargingMode() const { return this->chargingMode_ != nullptr;};
    void deleteChargingMode() { this->chargingMode_ = nullptr;};
    inline string chargingMode() const { DARABONBA_PTR_GET_DEFAULT(chargingMode_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setChargingMode(string chargingMode) { DARABONBA_PTR_SET_VALUE(chargingMode_, chargingMode) };


    // chargingModeDesc Field Functions 
    bool hasChargingModeDesc() const { return this->chargingModeDesc_ != nullptr;};
    void deleteChargingModeDesc() { this->chargingModeDesc_ = nullptr;};
    inline string chargingModeDesc() const { DARABONBA_PTR_GET_DEFAULT(chargingModeDesc_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setChargingModeDesc(string chargingModeDesc) { DARABONBA_PTR_SET_VALUE(chargingModeDesc_, chargingModeDesc) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataDisplay Field Functions 
    bool hasDataDisplay() const { return this->dataDisplay_ != nullptr;};
    void deleteDataDisplay() { this->dataDisplay_ = nullptr;};
    inline string dataDisplay() const { DARABONBA_PTR_GET_DEFAULT(dataDisplay_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setDataDisplay(string dataDisplay) { DARABONBA_PTR_SET_VALUE(dataDisplay_, dataDisplay) };


    // dataThreshold Field Functions 
    bool hasDataThreshold() const { return this->dataThreshold_ != nullptr;};
    void deleteDataThreshold() { this->dataThreshold_ = nullptr;};
    inline string dataThreshold() const { DARABONBA_PTR_GET_DEFAULT(dataThreshold_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setDataThreshold(string dataThreshold) { DARABONBA_PTR_SET_VALUE(dataThreshold_, dataThreshold) };


    // deductionFactor Field Functions 
    bool hasDeductionFactor() const { return this->deductionFactor_ != nullptr;};
    void deleteDeductionFactor() { this->deductionFactor_ = nullptr;};
    inline int32_t deductionFactor() const { DARABONBA_PTR_GET_DEFAULT(deductionFactor_, 0) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setDeductionFactor(int32_t deductionFactor) { DARABONBA_PTR_SET_VALUE(deductionFactor_, deductionFactor) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frontAllowBind Field Functions 
    bool hasFrontAllowBind() const { return this->frontAllowBind_ != nullptr;};
    void deleteFrontAllowBind() { this->frontAllowBind_ = nullptr;};
    inline string frontAllowBind() const { DARABONBA_PTR_GET_DEFAULT(frontAllowBind_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setFrontAllowBind(string frontAllowBind) { DARABONBA_PTR_SET_VALUE(frontAllowBind_, frontAllowBind) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputRequired Field Functions 
    bool hasInputRequired() const { return this->inputRequired_ != nullptr;};
    void deleteInputRequired() { this->inputRequired_ = nullptr;};
    inline string inputRequired() const { DARABONBA_PTR_GET_DEFAULT(inputRequired_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setInputRequired(string inputRequired) { DARABONBA_PTR_SET_VALUE(inputRequired_, inputRequired) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // inputsDesc Field Functions 
    bool hasInputsDesc() const { return this->inputsDesc_ != nullptr;};
    void deleteInputsDesc() { this->inputsDesc_ = nullptr;};
    inline string inputsDesc() const { DARABONBA_PTR_GET_DEFAULT(inputsDesc_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setInputsDesc(string inputsDesc) { DARABONBA_PTR_SET_VALUE(inputsDesc_, inputsDesc) };


    // invokeKey Field Functions 
    bool hasInvokeKey() const { return this->invokeKey_ != nullptr;};
    void deleteInvokeKey() { this->invokeKey_ = nullptr;};
    inline string invokeKey() const { DARABONBA_PTR_GET_DEFAULT(invokeKey_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setInvokeKey(string invokeKey) { DARABONBA_PTR_SET_VALUE(invokeKey_, invokeKey) };


    // invokeRt Field Functions 
    bool hasInvokeRt() const { return this->invokeRt_ != nullptr;};
    void deleteInvokeRt() { this->invokeRt_ = nullptr;};
    inline int32_t invokeRt() const { DARABONBA_PTR_GET_DEFAULT(invokeRt_, 0) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setInvokeRt(int32_t invokeRt) { DARABONBA_PTR_SET_VALUE(invokeRt_, invokeRt) };


    // invokeSuccessRate Field Functions 
    bool hasInvokeSuccessRate() const { return this->invokeSuccessRate_ != nullptr;};
    void deleteInvokeSuccessRate() { this->invokeSuccessRate_ = nullptr;};
    inline string invokeSuccessRate() const { DARABONBA_PTR_GET_DEFAULT(invokeSuccessRate_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setInvokeSuccessRate(string invokeSuccessRate) { DARABONBA_PTR_SET_VALUE(invokeSuccessRate_, invokeSuccessRate) };


    // invokeTimes Field Functions 
    bool hasInvokeTimes() const { return this->invokeTimes_ != nullptr;};
    void deleteInvokeTimes() { this->invokeTimes_ = nullptr;};
    inline int64_t invokeTimes() const { DARABONBA_PTR_GET_DEFAULT(invokeTimes_, 0L) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setInvokeTimes(int64_t invokeTimes) { DARABONBA_PTR_SET_VALUE(invokeTimes_, invokeTimes) };


    // lastModifiedOperator Field Functions 
    bool hasLastModifiedOperator() const { return this->lastModifiedOperator_ != nullptr;};
    void deleteLastModifiedOperator() { this->lastModifiedOperator_ = nullptr;};
    inline string lastModifiedOperator() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedOperator_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setLastModifiedOperator(string lastModifiedOperator) { DARABONBA_PTR_SET_VALUE(lastModifiedOperator_, lastModifiedOperator) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // outputsDesc Field Functions 
    bool hasOutputsDesc() const { return this->outputsDesc_ != nullptr;};
    void deleteOutputsDesc() { this->outputsDesc_ = nullptr;};
    inline string outputsDesc() const { DARABONBA_PTR_GET_DEFAULT(outputsDesc_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setOutputsDesc(string outputsDesc) { DARABONBA_PTR_SET_VALUE(outputsDesc_, outputsDesc) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline const vector<string> & scene() const { DARABONBA_PTR_GET_CONST(scene_, vector<string>) };
    inline vector<string> scene() { DARABONBA_PTR_GET(scene_, vector<string>) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setScene(const vector<string> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setScene(vector<string> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


    // sceneDesc Field Functions 
    bool hasSceneDesc() const { return this->sceneDesc_ != nullptr;};
    void deleteSceneDesc() { this->sceneDesc_ = nullptr;};
    inline const vector<string> & sceneDesc() const { DARABONBA_PTR_GET_CONST(sceneDesc_, vector<string>) };
    inline vector<string> sceneDesc() { DARABONBA_PTR_GET(sceneDesc_, vector<string>) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setSceneDesc(const vector<string> & sceneDesc) { DARABONBA_PTR_SET_VALUE(sceneDesc_, sceneDesc) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setSceneDesc(vector<string> && sceneDesc) { DARABONBA_PTR_SET_RVALUE(sceneDesc_, sceneDesc) };


    // showOrder Field Functions 
    bool hasShowOrder() const { return this->showOrder_ != nullptr;};
    void deleteShowOrder() { this->showOrder_ = nullptr;};
    inline string showOrder() const { DARABONBA_PTR_GET_DEFAULT(showOrder_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setShowOrder(string showOrder) { DARABONBA_PTR_SET_VALUE(showOrder_, showOrder) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceDesc Field Functions 
    bool hasSourceDesc() const { return this->sourceDesc_ != nullptr;};
    void deleteSourceDesc() { this->sourceDesc_ = nullptr;};
    inline string sourceDesc() const { DARABONBA_PTR_GET_DEFAULT(sourceDesc_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setSourceDesc(string sourceDesc) { DARABONBA_PTR_SET_VALUE(sourceDesc_, sourceDesc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportRegions Field Functions 
    bool hasSupportRegions() const { return this->supportRegions_ != nullptr;};
    void deleteSupportRegions() { this->supportRegions_ = nullptr;};
    inline const vector<string> & supportRegions() const { DARABONBA_PTR_GET_CONST(supportRegions_, vector<string>) };
    inline vector<string> supportRegions() { DARABONBA_PTR_GET(supportRegions_, vector<string>) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setSupportRegions(const vector<string> & supportRegions) { DARABONBA_PTR_SET_VALUE(supportRegions_, supportRegions) };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setSupportRegions(vector<string> && supportRegions) { DARABONBA_PTR_SET_RVALUE(supportRegions_, supportRegions) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeDesc Field Functions 
    bool hasTypeDesc() const { return this->typeDesc_ != nullptr;};
    void deleteTypeDesc() { this->typeDesc_ = nullptr;};
    inline string typeDesc() const { DARABONBA_PTR_GET_DEFAULT(typeDesc_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setTypeDesc(string typeDesc) { DARABONBA_PTR_SET_VALUE(typeDesc_, typeDesc) };


    // xLabel Field Functions 
    bool hasXLabel() const { return this->xLabel_ != nullptr;};
    void deleteXLabel() { this->xLabel_ = nullptr;};
    inline string xLabel() const { DARABONBA_PTR_GET_DEFAULT(xLabel_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setXLabel(string xLabel) { DARABONBA_PTR_SET_VALUE(xLabel_, xLabel) };


    // yLabel Field Functions 
    bool hasYLabel() const { return this->yLabel_ != nullptr;};
    void deleteYLabel() { this->yLabel_ = nullptr;};
    inline string yLabel() const { DARABONBA_PTR_GET_DEFAULT(yLabel_, "") };
    inline DescribeVariableDetailResponseBodyResultObjectBaseInfo& setYLabel(string yLabel) { DARABONBA_PTR_SET_VALUE(yLabel_, yLabel) };


  protected:
    // Whether variable binding is allowed
    std::shared_ptr<string> allowBind_ = nullptr;
    // Charging mode
    std::shared_ptr<string> chargingMode_ = nullptr;
    // Charging mode description
    std::shared_ptr<string> chargingModeDesc_ = nullptr;
    // Creator.
    std::shared_ptr<string> creator_ = nullptr;
    // Data distribution display, in JSON format
    std::shared_ptr<string> dataDisplay_ = nullptr;
    // Data valid range, left-closed and right-closed
    std::shared_ptr<string> dataThreshold_ = nullptr;
    // Deduction factor
    std::shared_ptr<int32_t> deductionFactor_ = nullptr;
    // Description.
    std::shared_ptr<string> description_ = nullptr;
    // Front-end binding allowed
    std::shared_ptr<string> frontAllowBind_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Required parameters
    //      
    //      When inputRequired=__all__, it means all parameters are required
    //      When inputRequired=__one__, it means only one input is needed
    //      Required fields are separated by commas, e.g., mobile,ip,email
    std::shared_ptr<string> inputRequired_ = nullptr;
    // Input parameters.
    std::shared_ptr<string> inputs_ = nullptr;
    // Input parameter description.
    std::shared_ptr<string> inputsDesc_ = nullptr;
    // Invoke key
    std::shared_ptr<string> invokeKey_ = nullptr;
    // Invoke RT, unit: milliseconds
    std::shared_ptr<int32_t> invokeRt_ = nullptr;
    // Invocation success rate
    std::shared_ptr<string> invokeSuccessRate_ = nullptr;
    // Number of invocations
    std::shared_ptr<int64_t> invokeTimes_ = nullptr;
    // Last modifier.
    std::shared_ptr<string> lastModifiedOperator_ = nullptr;
    // Variable name
    std::shared_ptr<string> name_ = nullptr;
    // Output
    std::shared_ptr<string> outputs_ = nullptr;
    // Output description
    std::shared_ptr<string> outputsDesc_ = nullptr;
    // Code of applicable scenarios
    std::shared_ptr<vector<string>> scene_ = nullptr;
    // Applicable scenario description
    std::shared_ptr<vector<string>> sceneDesc_ = nullptr;
    // Display order
    std::shared_ptr<string> showOrder_ = nullptr;
    // Source
    std::shared_ptr<string> source_ = nullptr;
    // Source description
    std::shared_ptr<string> sourceDesc_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // List of supported regions.
    std::shared_ptr<vector<string>> supportRegions_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Type
    std::shared_ptr<string> type_ = nullptr;
    // Category description
    std::shared_ptr<string> typeDesc_ = nullptr;
    // X-axis label for data distribution display
    std::shared_ptr<string> xLabel_ = nullptr;
    // Data distribution display y-axis label
    std::shared_ptr<string> yLabel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
