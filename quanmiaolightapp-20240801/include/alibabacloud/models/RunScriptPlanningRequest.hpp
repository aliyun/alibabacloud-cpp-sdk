// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTPLANNINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTPLANNINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptPlanningRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptPlanningRequest& obj) { 
      DARABONBA_PTR_TO_JSON(additionalNote, additionalNote_);
      DARABONBA_PTR_TO_JSON(dialogueInScene, dialogueInScene_);
      DARABONBA_PTR_TO_JSON(plotConflict, plotConflict_);
      DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(scriptShotCount, scriptShotCount_);
      DARABONBA_PTR_TO_JSON(scriptSummary, scriptSummary_);
      DARABONBA_PTR_TO_JSON(scriptTypeKeyword, scriptTypeKeyword_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptPlanningRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalNote, additionalNote_);
      DARABONBA_PTR_FROM_JSON(dialogueInScene, dialogueInScene_);
      DARABONBA_PTR_FROM_JSON(plotConflict, plotConflict_);
      DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(scriptShotCount, scriptShotCount_);
      DARABONBA_PTR_FROM_JSON(scriptSummary, scriptSummary_);
      DARABONBA_PTR_FROM_JSON(scriptTypeKeyword, scriptTypeKeyword_);
    };
    RunScriptPlanningRequest() = default ;
    RunScriptPlanningRequest(const RunScriptPlanningRequest &) = default ;
    RunScriptPlanningRequest(RunScriptPlanningRequest &&) = default ;
    RunScriptPlanningRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptPlanningRequest() = default ;
    RunScriptPlanningRequest& operator=(const RunScriptPlanningRequest &) = default ;
    RunScriptPlanningRequest& operator=(RunScriptPlanningRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalNote_ == nullptr
        && return this->dialogueInScene_ == nullptr && return this->plotConflict_ == nullptr && return this->scriptName_ == nullptr && return this->scriptShotCount_ == nullptr && return this->scriptSummary_ == nullptr
        && return this->scriptTypeKeyword_ == nullptr; };
    // additionalNote Field Functions 
    bool hasAdditionalNote() const { return this->additionalNote_ != nullptr;};
    void deleteAdditionalNote() { this->additionalNote_ = nullptr;};
    inline string additionalNote() const { DARABONBA_PTR_GET_DEFAULT(additionalNote_, "") };
    inline RunScriptPlanningRequest& setAdditionalNote(string additionalNote) { DARABONBA_PTR_SET_VALUE(additionalNote_, additionalNote) };


    // dialogueInScene Field Functions 
    bool hasDialogueInScene() const { return this->dialogueInScene_ != nullptr;};
    void deleteDialogueInScene() { this->dialogueInScene_ = nullptr;};
    inline bool dialogueInScene() const { DARABONBA_PTR_GET_DEFAULT(dialogueInScene_, false) };
    inline RunScriptPlanningRequest& setDialogueInScene(bool dialogueInScene) { DARABONBA_PTR_SET_VALUE(dialogueInScene_, dialogueInScene) };


    // plotConflict Field Functions 
    bool hasPlotConflict() const { return this->plotConflict_ != nullptr;};
    void deletePlotConflict() { this->plotConflict_ = nullptr;};
    inline bool plotConflict() const { DARABONBA_PTR_GET_DEFAULT(plotConflict_, false) };
    inline RunScriptPlanningRequest& setPlotConflict(bool plotConflict) { DARABONBA_PTR_SET_VALUE(plotConflict_, plotConflict) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline RunScriptPlanningRequest& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptShotCount Field Functions 
    bool hasScriptShotCount() const { return this->scriptShotCount_ != nullptr;};
    void deleteScriptShotCount() { this->scriptShotCount_ = nullptr;};
    inline int32_t scriptShotCount() const { DARABONBA_PTR_GET_DEFAULT(scriptShotCount_, 0) };
    inline RunScriptPlanningRequest& setScriptShotCount(int32_t scriptShotCount) { DARABONBA_PTR_SET_VALUE(scriptShotCount_, scriptShotCount) };


    // scriptSummary Field Functions 
    bool hasScriptSummary() const { return this->scriptSummary_ != nullptr;};
    void deleteScriptSummary() { this->scriptSummary_ = nullptr;};
    inline string scriptSummary() const { DARABONBA_PTR_GET_DEFAULT(scriptSummary_, "") };
    inline RunScriptPlanningRequest& setScriptSummary(string scriptSummary) { DARABONBA_PTR_SET_VALUE(scriptSummary_, scriptSummary) };


    // scriptTypeKeyword Field Functions 
    bool hasScriptTypeKeyword() const { return this->scriptTypeKeyword_ != nullptr;};
    void deleteScriptTypeKeyword() { this->scriptTypeKeyword_ = nullptr;};
    inline string scriptTypeKeyword() const { DARABONBA_PTR_GET_DEFAULT(scriptTypeKeyword_, "") };
    inline RunScriptPlanningRequest& setScriptTypeKeyword(string scriptTypeKeyword) { DARABONBA_PTR_SET_VALUE(scriptTypeKeyword_, scriptTypeKeyword) };


  protected:
    std::shared_ptr<string> additionalNote_ = nullptr;
    std::shared_ptr<bool> dialogueInScene_ = nullptr;
    std::shared_ptr<bool> plotConflict_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<int32_t> scriptShotCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptSummary_ = nullptr;
    std::shared_ptr<string> scriptTypeKeyword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
