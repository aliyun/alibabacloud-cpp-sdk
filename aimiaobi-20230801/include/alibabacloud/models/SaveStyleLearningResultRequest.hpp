// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESTYLELEARNINGRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESTYLELEARNINGRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SaveStyleLearningResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveStyleLearningResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AigcResult, aigcResult_);
      DARABONBA_PTR_TO_JSON(CustomTextIdList, customTextIdList_);
      DARABONBA_PTR_TO_JSON(MaterialIdList, materialIdList_);
      DARABONBA_PTR_TO_JSON(RewriteResult, rewriteResult_);
      DARABONBA_PTR_TO_JSON(StyleName, styleName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveStyleLearningResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AigcResult, aigcResult_);
      DARABONBA_PTR_FROM_JSON(CustomTextIdList, customTextIdList_);
      DARABONBA_PTR_FROM_JSON(MaterialIdList, materialIdList_);
      DARABONBA_PTR_FROM_JSON(RewriteResult, rewriteResult_);
      DARABONBA_PTR_FROM_JSON(StyleName, styleName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SaveStyleLearningResultRequest() = default ;
    SaveStyleLearningResultRequest(const SaveStyleLearningResultRequest &) = default ;
    SaveStyleLearningResultRequest(SaveStyleLearningResultRequest &&) = default ;
    SaveStyleLearningResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveStyleLearningResultRequest() = default ;
    SaveStyleLearningResultRequest& operator=(const SaveStyleLearningResultRequest &) = default ;
    SaveStyleLearningResultRequest& operator=(SaveStyleLearningResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->aigcResult_ != nullptr && this->customTextIdList_ != nullptr && this->materialIdList_ != nullptr && this->rewriteResult_ != nullptr && this->styleName_ != nullptr
        && this->taskId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SaveStyleLearningResultRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // aigcResult Field Functions 
    bool hasAigcResult() const { return this->aigcResult_ != nullptr;};
    void deleteAigcResult() { this->aigcResult_ = nullptr;};
    inline string aigcResult() const { DARABONBA_PTR_GET_DEFAULT(aigcResult_, "") };
    inline SaveStyleLearningResultRequest& setAigcResult(string aigcResult) { DARABONBA_PTR_SET_VALUE(aigcResult_, aigcResult) };


    // customTextIdList Field Functions 
    bool hasCustomTextIdList() const { return this->customTextIdList_ != nullptr;};
    void deleteCustomTextIdList() { this->customTextIdList_ = nullptr;};
    inline const vector<int64_t> & customTextIdList() const { DARABONBA_PTR_GET_CONST(customTextIdList_, vector<int64_t>) };
    inline vector<int64_t> customTextIdList() { DARABONBA_PTR_GET(customTextIdList_, vector<int64_t>) };
    inline SaveStyleLearningResultRequest& setCustomTextIdList(const vector<int64_t> & customTextIdList) { DARABONBA_PTR_SET_VALUE(customTextIdList_, customTextIdList) };
    inline SaveStyleLearningResultRequest& setCustomTextIdList(vector<int64_t> && customTextIdList) { DARABONBA_PTR_SET_RVALUE(customTextIdList_, customTextIdList) };


    // materialIdList Field Functions 
    bool hasMaterialIdList() const { return this->materialIdList_ != nullptr;};
    void deleteMaterialIdList() { this->materialIdList_ = nullptr;};
    inline const vector<int64_t> & materialIdList() const { DARABONBA_PTR_GET_CONST(materialIdList_, vector<int64_t>) };
    inline vector<int64_t> materialIdList() { DARABONBA_PTR_GET(materialIdList_, vector<int64_t>) };
    inline SaveStyleLearningResultRequest& setMaterialIdList(const vector<int64_t> & materialIdList) { DARABONBA_PTR_SET_VALUE(materialIdList_, materialIdList) };
    inline SaveStyleLearningResultRequest& setMaterialIdList(vector<int64_t> && materialIdList) { DARABONBA_PTR_SET_RVALUE(materialIdList_, materialIdList) };


    // rewriteResult Field Functions 
    bool hasRewriteResult() const { return this->rewriteResult_ != nullptr;};
    void deleteRewriteResult() { this->rewriteResult_ = nullptr;};
    inline string rewriteResult() const { DARABONBA_PTR_GET_DEFAULT(rewriteResult_, "") };
    inline SaveStyleLearningResultRequest& setRewriteResult(string rewriteResult) { DARABONBA_PTR_SET_VALUE(rewriteResult_, rewriteResult) };


    // styleName Field Functions 
    bool hasStyleName() const { return this->styleName_ != nullptr;};
    void deleteStyleName() { this->styleName_ = nullptr;};
    inline string styleName() const { DARABONBA_PTR_GET_DEFAULT(styleName_, "") };
    inline SaveStyleLearningResultRequest& setStyleName(string styleName) { DARABONBA_PTR_SET_VALUE(styleName_, styleName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SaveStyleLearningResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> aigcResult_ = nullptr;
    std::shared_ptr<vector<int64_t>> customTextIdList_ = nullptr;
    std::shared_ptr<vector<int64_t>> materialIdList_ = nullptr;
    std::shared_ptr<string> rewriteResult_ = nullptr;
    std::shared_ptr<string> styleName_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
