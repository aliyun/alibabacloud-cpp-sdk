// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODYDATAQUALITYCHECKLIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODYDATAQUALITYCHECKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetQualityCheckTaskResultResponseBodyDataQualityCheckList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckTaskResultResponseBodyDataQualityCheckList& obj) { 
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(checkExplanation, checkExplanation_);
      DARABONBA_PTR_TO_JSON(checkPassed, checkPassed_);
      DARABONBA_PTR_TO_JSON(checkProcess, checkProcess_);
      DARABONBA_PTR_TO_JSON(checked, checked_);
      DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(originDialogue, originDialogue_);
      DARABONBA_PTR_TO_JSON(qualityGroupId, qualityGroupId_);
      DARABONBA_PTR_TO_JSON(ruleDescription, ruleDescription_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
      DARABONBA_PTR_TO_JSON(subNodeCol, subNodeCol_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckTaskResultResponseBodyDataQualityCheckList& obj) { 
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(checkExplanation, checkExplanation_);
      DARABONBA_PTR_FROM_JSON(checkPassed, checkPassed_);
      DARABONBA_PTR_FROM_JSON(checkProcess, checkProcess_);
      DARABONBA_PTR_FROM_JSON(checked, checked_);
      DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(originDialogue, originDialogue_);
      DARABONBA_PTR_FROM_JSON(qualityGroupId, qualityGroupId_);
      DARABONBA_PTR_FROM_JSON(ruleDescription, ruleDescription_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(subNodeCol, subNodeCol_);
    };
    GetQualityCheckTaskResultResponseBodyDataQualityCheckList() = default ;
    GetQualityCheckTaskResultResponseBodyDataQualityCheckList(const GetQualityCheckTaskResultResponseBodyDataQualityCheckList &) = default ;
    GetQualityCheckTaskResultResponseBodyDataQualityCheckList(GetQualityCheckTaskResultResponseBodyDataQualityCheckList &&) = default ;
    GetQualityCheckTaskResultResponseBodyDataQualityCheckList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckTaskResultResponseBodyDataQualityCheckList() = default ;
    GetQualityCheckTaskResultResponseBodyDataQualityCheckList& operator=(const GetQualityCheckTaskResultResponseBodyDataQualityCheckList &) = default ;
    GetQualityCheckTaskResultResponseBodyDataQualityCheckList& operator=(GetQualityCheckTaskResultResponseBodyDataQualityCheckList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->checkExplanation_ != nullptr && this->checkPassed_ != nullptr && this->checkProcess_ != nullptr && this->checked_ != nullptr && this->gmtEnd_ != nullptr
        && this->gmtStart_ != nullptr && this->mode_ != nullptr && this->originDialogue_ != nullptr && this->qualityGroupId_ != nullptr && this->ruleDescription_ != nullptr
        && this->ruleId_ != nullptr && this->ruleType_ != nullptr && this->subNodeCol_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // checkExplanation Field Functions 
    bool hasCheckExplanation() const { return this->checkExplanation_ != nullptr;};
    void deleteCheckExplanation() { this->checkExplanation_ = nullptr;};
    inline string checkExplanation() const { DARABONBA_PTR_GET_DEFAULT(checkExplanation_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setCheckExplanation(string checkExplanation) { DARABONBA_PTR_SET_VALUE(checkExplanation_, checkExplanation) };


    // checkPassed Field Functions 
    bool hasCheckPassed() const { return this->checkPassed_ != nullptr;};
    void deleteCheckPassed() { this->checkPassed_ = nullptr;};
    inline string checkPassed() const { DARABONBA_PTR_GET_DEFAULT(checkPassed_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setCheckPassed(string checkPassed) { DARABONBA_PTR_SET_VALUE(checkPassed_, checkPassed) };


    // checkProcess Field Functions 
    bool hasCheckProcess() const { return this->checkProcess_ != nullptr;};
    void deleteCheckProcess() { this->checkProcess_ = nullptr;};
    inline string checkProcess() const { DARABONBA_PTR_GET_DEFAULT(checkProcess_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setCheckProcess(string checkProcess) { DARABONBA_PTR_SET_VALUE(checkProcess_, checkProcess) };


    // checked Field Functions 
    bool hasChecked() const { return this->checked_ != nullptr;};
    void deleteChecked() { this->checked_ = nullptr;};
    inline string checked() const { DARABONBA_PTR_GET_DEFAULT(checked_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setChecked(string checked) { DARABONBA_PTR_SET_VALUE(checked_, checked) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline string gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setGmtEnd(string gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline string gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setGmtStart(string gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // originDialogue Field Functions 
    bool hasOriginDialogue() const { return this->originDialogue_ != nullptr;};
    void deleteOriginDialogue() { this->originDialogue_ = nullptr;};
    inline const vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue> & originDialogue() const { DARABONBA_PTR_GET_CONST(originDialogue_, vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue>) };
    inline vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue> originDialogue() { DARABONBA_PTR_GET(originDialogue_, vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue>) };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setOriginDialogue(const vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue> & originDialogue) { DARABONBA_PTR_SET_VALUE(originDialogue_, originDialogue) };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setOriginDialogue(vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue> && originDialogue) { DARABONBA_PTR_SET_RVALUE(originDialogue_, originDialogue) };


    // qualityGroupId Field Functions 
    bool hasQualityGroupId() const { return this->qualityGroupId_ != nullptr;};
    void deleteQualityGroupId() { this->qualityGroupId_ = nullptr;};
    inline string qualityGroupId() const { DARABONBA_PTR_GET_DEFAULT(qualityGroupId_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setQualityGroupId(string qualityGroupId) { DARABONBA_PTR_SET_VALUE(qualityGroupId_, qualityGroupId) };


    // ruleDescription Field Functions 
    bool hasRuleDescription() const { return this->ruleDescription_ != nullptr;};
    void deleteRuleDescription() { this->ruleDescription_ = nullptr;};
    inline string ruleDescription() const { DARABONBA_PTR_GET_DEFAULT(ruleDescription_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setRuleDescription(string ruleDescription) { DARABONBA_PTR_SET_VALUE(ruleDescription_, ruleDescription) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // subNodeCol Field Functions 
    bool hasSubNodeCol() const { return this->subNodeCol_ != nullptr;};
    void deleteSubNodeCol() { this->subNodeCol_ = nullptr;};
    inline const vector<Darabonba::Json> & subNodeCol() const { DARABONBA_PTR_GET_CONST(subNodeCol_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> subNodeCol() { DARABONBA_PTR_GET(subNodeCol_, vector<Darabonba::Json>) };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setSubNodeCol(const vector<Darabonba::Json> & subNodeCol) { DARABONBA_PTR_SET_VALUE(subNodeCol_, subNodeCol) };
    inline GetQualityCheckTaskResultResponseBodyDataQualityCheckList& setSubNodeCol(vector<Darabonba::Json> && subNodeCol) { DARABONBA_PTR_SET_RVALUE(subNodeCol_, subNodeCol) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> checkExplanation_ = nullptr;
    std::shared_ptr<string> checkPassed_ = nullptr;
    std::shared_ptr<string> checkProcess_ = nullptr;
    std::shared_ptr<string> checked_ = nullptr;
    std::shared_ptr<string> gmtEnd_ = nullptr;
    std::shared_ptr<string> gmtStart_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckListOriginDialogue>> originDialogue_ = nullptr;
    std::shared_ptr<string> qualityGroupId_ = nullptr;
    std::shared_ptr<string> ruleDescription_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> subNodeCol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
