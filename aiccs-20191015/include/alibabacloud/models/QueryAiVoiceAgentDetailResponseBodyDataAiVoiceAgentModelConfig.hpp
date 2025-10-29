// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList.hpp>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList.hpp>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose.hpp>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig.hpp>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BasicTaskDescription, basicTaskDescription_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ChildTaskList, childTaskList_);
      DARABONBA_PTR_TO_JSON(CustomExceptionEnable, customExceptionEnable_);
      DARABONBA_PTR_TO_JSON(CustomExceptionFileId, customExceptionFileId_);
      DARABONBA_PTR_TO_JSON(CustomExceptionFileName, customExceptionFileName_);
      DARABONBA_PTR_TO_JSON(CustomExceptionList, customExceptionList_);
      DARABONBA_PTR_TO_JSON(CustomExceptionUrlPath, customExceptionUrlPath_);
      DARABONBA_PTR_TO_JSON(CustomExceptionVoiceStyle, customExceptionVoiceStyle_);
      DARABONBA_PTR_TO_JSON(FlowDesc, flowDesc_);
      DARABONBA_PTR_TO_JSON(KnowledgeDocIdList, knowledgeDocIdList_);
      DARABONBA_PTR_TO_JSON(KnowledgeDocNameList, knowledgeDocNameList_);
      DARABONBA_PTR_TO_JSON(KnowledgeDocOriginalNameList, knowledgeDocOriginalNameList_);
      DARABONBA_PTR_TO_JSON(KnowledgeEnable, knowledgeEnable_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(MainPurpose, mainPurpose_);
      DARABONBA_PTR_TO_JSON(OutputTagConfig, outputTagConfig_);
      DARABONBA_PTR_TO_JSON(PhoneTagConfig, phoneTagConfig_);
      DARABONBA_PTR_TO_JSON(Prologue, prologue_);
      DARABONBA_PTR_TO_JSON(SysRole, sysRole_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UserRole, userRole_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicTaskDescription, basicTaskDescription_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ChildTaskList, childTaskList_);
      DARABONBA_PTR_FROM_JSON(CustomExceptionEnable, customExceptionEnable_);
      DARABONBA_PTR_FROM_JSON(CustomExceptionFileId, customExceptionFileId_);
      DARABONBA_PTR_FROM_JSON(CustomExceptionFileName, customExceptionFileName_);
      DARABONBA_PTR_FROM_JSON(CustomExceptionList, customExceptionList_);
      DARABONBA_PTR_FROM_JSON(CustomExceptionUrlPath, customExceptionUrlPath_);
      DARABONBA_PTR_FROM_JSON(CustomExceptionVoiceStyle, customExceptionVoiceStyle_);
      DARABONBA_PTR_FROM_JSON(FlowDesc, flowDesc_);
      DARABONBA_PTR_FROM_JSON(KnowledgeDocIdList, knowledgeDocIdList_);
      DARABONBA_PTR_FROM_JSON(KnowledgeDocNameList, knowledgeDocNameList_);
      DARABONBA_PTR_FROM_JSON(KnowledgeDocOriginalNameList, knowledgeDocOriginalNameList_);
      DARABONBA_PTR_FROM_JSON(KnowledgeEnable, knowledgeEnable_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(MainPurpose, mainPurpose_);
      DARABONBA_PTR_FROM_JSON(OutputTagConfig, outputTagConfig_);
      DARABONBA_PTR_FROM_JSON(PhoneTagConfig, phoneTagConfig_);
      DARABONBA_PTR_FROM_JSON(Prologue, prologue_);
      DARABONBA_PTR_FROM_JSON(SysRole, sysRole_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UserRole, userRole_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicTaskDescription_ == nullptr
        && return this->businessType_ == nullptr && return this->childTaskList_ == nullptr && return this->customExceptionEnable_ == nullptr && return this->customExceptionFileId_ == nullptr && return this->customExceptionFileName_ == nullptr
        && return this->customExceptionList_ == nullptr && return this->customExceptionUrlPath_ == nullptr && return this->customExceptionVoiceStyle_ == nullptr && return this->flowDesc_ == nullptr && return this->knowledgeDocIdList_ == nullptr
        && return this->knowledgeDocNameList_ == nullptr && return this->knowledgeDocOriginalNameList_ == nullptr && return this->knowledgeEnable_ == nullptr && return this->knowledgeId_ == nullptr && return this->mainPurpose_ == nullptr
        && return this->outputTagConfig_ == nullptr && return this->phoneTagConfig_ == nullptr && return this->prologue_ == nullptr && return this->sysRole_ == nullptr && return this->taskType_ == nullptr
        && return this->userRole_ == nullptr; };
    // basicTaskDescription Field Functions 
    bool hasBasicTaskDescription() const { return this->basicTaskDescription_ != nullptr;};
    void deleteBasicTaskDescription() { this->basicTaskDescription_ = nullptr;};
    inline string basicTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(basicTaskDescription_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setBasicTaskDescription(string basicTaskDescription) { DARABONBA_PTR_SET_VALUE(basicTaskDescription_, basicTaskDescription) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline int64_t businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setBusinessType(int64_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // childTaskList Field Functions 
    bool hasChildTaskList() const { return this->childTaskList_ != nullptr;};
    void deleteChildTaskList() { this->childTaskList_ = nullptr;};
    inline const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList> & childTaskList() const { DARABONBA_PTR_GET_CONST(childTaskList_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList>) };
    inline vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList> childTaskList() { DARABONBA_PTR_GET(childTaskList_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setChildTaskList(const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList> & childTaskList) { DARABONBA_PTR_SET_VALUE(childTaskList_, childTaskList) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setChildTaskList(vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList> && childTaskList) { DARABONBA_PTR_SET_RVALUE(childTaskList_, childTaskList) };


    // customExceptionEnable Field Functions 
    bool hasCustomExceptionEnable() const { return this->customExceptionEnable_ != nullptr;};
    void deleteCustomExceptionEnable() { this->customExceptionEnable_ = nullptr;};
    inline bool customExceptionEnable() const { DARABONBA_PTR_GET_DEFAULT(customExceptionEnable_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setCustomExceptionEnable(bool customExceptionEnable) { DARABONBA_PTR_SET_VALUE(customExceptionEnable_, customExceptionEnable) };


    // customExceptionFileId Field Functions 
    bool hasCustomExceptionFileId() const { return this->customExceptionFileId_ != nullptr;};
    void deleteCustomExceptionFileId() { this->customExceptionFileId_ = nullptr;};
    inline string customExceptionFileId() const { DARABONBA_PTR_GET_DEFAULT(customExceptionFileId_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setCustomExceptionFileId(string customExceptionFileId) { DARABONBA_PTR_SET_VALUE(customExceptionFileId_, customExceptionFileId) };


    // customExceptionFileName Field Functions 
    bool hasCustomExceptionFileName() const { return this->customExceptionFileName_ != nullptr;};
    void deleteCustomExceptionFileName() { this->customExceptionFileName_ = nullptr;};
    inline string customExceptionFileName() const { DARABONBA_PTR_GET_DEFAULT(customExceptionFileName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setCustomExceptionFileName(string customExceptionFileName) { DARABONBA_PTR_SET_VALUE(customExceptionFileName_, customExceptionFileName) };


    // customExceptionList Field Functions 
    bool hasCustomExceptionList() const { return this->customExceptionList_ != nullptr;};
    void deleteCustomExceptionList() { this->customExceptionList_ = nullptr;};
    inline const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList> & customExceptionList() const { DARABONBA_PTR_GET_CONST(customExceptionList_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList>) };
    inline vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList> customExceptionList() { DARABONBA_PTR_GET(customExceptionList_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setCustomExceptionList(const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList> & customExceptionList) { DARABONBA_PTR_SET_VALUE(customExceptionList_, customExceptionList) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setCustomExceptionList(vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList> && customExceptionList) { DARABONBA_PTR_SET_RVALUE(customExceptionList_, customExceptionList) };


    // customExceptionUrlPath Field Functions 
    bool hasCustomExceptionUrlPath() const { return this->customExceptionUrlPath_ != nullptr;};
    void deleteCustomExceptionUrlPath() { this->customExceptionUrlPath_ = nullptr;};
    inline string customExceptionUrlPath() const { DARABONBA_PTR_GET_DEFAULT(customExceptionUrlPath_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setCustomExceptionUrlPath(string customExceptionUrlPath) { DARABONBA_PTR_SET_VALUE(customExceptionUrlPath_, customExceptionUrlPath) };


    // customExceptionVoiceStyle Field Functions 
    bool hasCustomExceptionVoiceStyle() const { return this->customExceptionVoiceStyle_ != nullptr;};
    void deleteCustomExceptionVoiceStyle() { this->customExceptionVoiceStyle_ = nullptr;};
    inline int64_t customExceptionVoiceStyle() const { DARABONBA_PTR_GET_DEFAULT(customExceptionVoiceStyle_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setCustomExceptionVoiceStyle(int64_t customExceptionVoiceStyle) { DARABONBA_PTR_SET_VALUE(customExceptionVoiceStyle_, customExceptionVoiceStyle) };


    // flowDesc Field Functions 
    bool hasFlowDesc() const { return this->flowDesc_ != nullptr;};
    void deleteFlowDesc() { this->flowDesc_ = nullptr;};
    inline string flowDesc() const { DARABONBA_PTR_GET_DEFAULT(flowDesc_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setFlowDesc(string flowDesc) { DARABONBA_PTR_SET_VALUE(flowDesc_, flowDesc) };


    // knowledgeDocIdList Field Functions 
    bool hasKnowledgeDocIdList() const { return this->knowledgeDocIdList_ != nullptr;};
    void deleteKnowledgeDocIdList() { this->knowledgeDocIdList_ = nullptr;};
    inline const vector<string> & knowledgeDocIdList() const { DARABONBA_PTR_GET_CONST(knowledgeDocIdList_, vector<string>) };
    inline vector<string> knowledgeDocIdList() { DARABONBA_PTR_GET(knowledgeDocIdList_, vector<string>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setKnowledgeDocIdList(const vector<string> & knowledgeDocIdList) { DARABONBA_PTR_SET_VALUE(knowledgeDocIdList_, knowledgeDocIdList) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setKnowledgeDocIdList(vector<string> && knowledgeDocIdList) { DARABONBA_PTR_SET_RVALUE(knowledgeDocIdList_, knowledgeDocIdList) };


    // knowledgeDocNameList Field Functions 
    bool hasKnowledgeDocNameList() const { return this->knowledgeDocNameList_ != nullptr;};
    void deleteKnowledgeDocNameList() { this->knowledgeDocNameList_ = nullptr;};
    inline const vector<string> & knowledgeDocNameList() const { DARABONBA_PTR_GET_CONST(knowledgeDocNameList_, vector<string>) };
    inline vector<string> knowledgeDocNameList() { DARABONBA_PTR_GET(knowledgeDocNameList_, vector<string>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setKnowledgeDocNameList(const vector<string> & knowledgeDocNameList) { DARABONBA_PTR_SET_VALUE(knowledgeDocNameList_, knowledgeDocNameList) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setKnowledgeDocNameList(vector<string> && knowledgeDocNameList) { DARABONBA_PTR_SET_RVALUE(knowledgeDocNameList_, knowledgeDocNameList) };


    // knowledgeDocOriginalNameList Field Functions 
    bool hasKnowledgeDocOriginalNameList() const { return this->knowledgeDocOriginalNameList_ != nullptr;};
    void deleteKnowledgeDocOriginalNameList() { this->knowledgeDocOriginalNameList_ = nullptr;};
    inline const vector<string> & knowledgeDocOriginalNameList() const { DARABONBA_PTR_GET_CONST(knowledgeDocOriginalNameList_, vector<string>) };
    inline vector<string> knowledgeDocOriginalNameList() { DARABONBA_PTR_GET(knowledgeDocOriginalNameList_, vector<string>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setKnowledgeDocOriginalNameList(const vector<string> & knowledgeDocOriginalNameList) { DARABONBA_PTR_SET_VALUE(knowledgeDocOriginalNameList_, knowledgeDocOriginalNameList) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setKnowledgeDocOriginalNameList(vector<string> && knowledgeDocOriginalNameList) { DARABONBA_PTR_SET_RVALUE(knowledgeDocOriginalNameList_, knowledgeDocOriginalNameList) };


    // knowledgeEnable Field Functions 
    bool hasKnowledgeEnable() const { return this->knowledgeEnable_ != nullptr;};
    void deleteKnowledgeEnable() { this->knowledgeEnable_ = nullptr;};
    inline bool knowledgeEnable() const { DARABONBA_PTR_GET_DEFAULT(knowledgeEnable_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setKnowledgeEnable(bool knowledgeEnable) { DARABONBA_PTR_SET_VALUE(knowledgeEnable_, knowledgeEnable) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline string knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // mainPurpose Field Functions 
    bool hasMainPurpose() const { return this->mainPurpose_ != nullptr;};
    void deleteMainPurpose() { this->mainPurpose_ = nullptr;};
    inline const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose & mainPurpose() const { DARABONBA_PTR_GET_CONST(mainPurpose_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose) };
    inline Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose mainPurpose() { DARABONBA_PTR_GET(mainPurpose_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setMainPurpose(const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose & mainPurpose) { DARABONBA_PTR_SET_VALUE(mainPurpose_, mainPurpose) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setMainPurpose(Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose && mainPurpose) { DARABONBA_PTR_SET_RVALUE(mainPurpose_, mainPurpose) };


    // outputTagConfig Field Functions 
    bool hasOutputTagConfig() const { return this->outputTagConfig_ != nullptr;};
    void deleteOutputTagConfig() { this->outputTagConfig_ = nullptr;};
    inline const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig> & outputTagConfig() const { DARABONBA_PTR_GET_CONST(outputTagConfig_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig>) };
    inline vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig> outputTagConfig() { DARABONBA_PTR_GET(outputTagConfig_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setOutputTagConfig(const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig> & outputTagConfig) { DARABONBA_PTR_SET_VALUE(outputTagConfig_, outputTagConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setOutputTagConfig(vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig> && outputTagConfig) { DARABONBA_PTR_SET_RVALUE(outputTagConfig_, outputTagConfig) };


    // phoneTagConfig Field Functions 
    bool hasPhoneTagConfig() const { return this->phoneTagConfig_ != nullptr;};
    void deletePhoneTagConfig() { this->phoneTagConfig_ = nullptr;};
    inline const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig> & phoneTagConfig() const { DARABONBA_PTR_GET_CONST(phoneTagConfig_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig>) };
    inline vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig> phoneTagConfig() { DARABONBA_PTR_GET(phoneTagConfig_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setPhoneTagConfig(const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig> & phoneTagConfig) { DARABONBA_PTR_SET_VALUE(phoneTagConfig_, phoneTagConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setPhoneTagConfig(vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig> && phoneTagConfig) { DARABONBA_PTR_SET_RVALUE(phoneTagConfig_, phoneTagConfig) };


    // prologue Field Functions 
    bool hasPrologue() const { return this->prologue_ != nullptr;};
    void deletePrologue() { this->prologue_ = nullptr;};
    inline string prologue() const { DARABONBA_PTR_GET_DEFAULT(prologue_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setPrologue(string prologue) { DARABONBA_PTR_SET_VALUE(prologue_, prologue) };


    // sysRole Field Functions 
    bool hasSysRole() const { return this->sysRole_ != nullptr;};
    void deleteSysRole() { this->sysRole_ = nullptr;};
    inline string sysRole() const { DARABONBA_PTR_GET_DEFAULT(sysRole_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setSysRole(string sysRole) { DARABONBA_PTR_SET_VALUE(sysRole_, sysRole) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userRole Field Functions 
    bool hasUserRole() const { return this->userRole_ != nullptr;};
    void deleteUserRole() { this->userRole_ = nullptr;};
    inline string userRole() const { DARABONBA_PTR_GET_DEFAULT(userRole_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfig& setUserRole(string userRole) { DARABONBA_PTR_SET_VALUE(userRole_, userRole) };


  protected:
    std::shared_ptr<string> basicTaskDescription_ = nullptr;
    std::shared_ptr<int64_t> businessType_ = nullptr;
    std::shared_ptr<vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList>> childTaskList_ = nullptr;
    std::shared_ptr<bool> customExceptionEnable_ = nullptr;
    std::shared_ptr<string> customExceptionFileId_ = nullptr;
    std::shared_ptr<string> customExceptionFileName_ = nullptr;
    std::shared_ptr<vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList>> customExceptionList_ = nullptr;
    std::shared_ptr<string> customExceptionUrlPath_ = nullptr;
    std::shared_ptr<int64_t> customExceptionVoiceStyle_ = nullptr;
    std::shared_ptr<string> flowDesc_ = nullptr;
    std::shared_ptr<vector<string>> knowledgeDocIdList_ = nullptr;
    std::shared_ptr<vector<string>> knowledgeDocNameList_ = nullptr;
    std::shared_ptr<vector<string>> knowledgeDocOriginalNameList_ = nullptr;
    std::shared_ptr<bool> knowledgeEnable_ = nullptr;
    std::shared_ptr<string> knowledgeId_ = nullptr;
    std::shared_ptr<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose> mainPurpose_ = nullptr;
    std::shared_ptr<vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig>> outputTagConfig_ = nullptr;
    std::shared_ptr<vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig>> phoneTagConfig_ = nullptr;
    std::shared_ptr<string> prologue_ = nullptr;
    std::shared_ptr<string> sysRole_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> userRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
