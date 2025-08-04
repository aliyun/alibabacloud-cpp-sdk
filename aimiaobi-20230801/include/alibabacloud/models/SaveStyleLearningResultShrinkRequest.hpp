// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESTYLELEARNINGRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESTYLELEARNINGRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SaveStyleLearningResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveStyleLearningResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AigcResult, aigcResult_);
      DARABONBA_PTR_TO_JSON(CustomTextIdList, customTextIdListShrink_);
      DARABONBA_PTR_TO_JSON(MaterialIdList, materialIdListShrink_);
      DARABONBA_PTR_TO_JSON(RewriteResult, rewriteResult_);
      DARABONBA_PTR_TO_JSON(StyleName, styleName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveStyleLearningResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AigcResult, aigcResult_);
      DARABONBA_PTR_FROM_JSON(CustomTextIdList, customTextIdListShrink_);
      DARABONBA_PTR_FROM_JSON(MaterialIdList, materialIdListShrink_);
      DARABONBA_PTR_FROM_JSON(RewriteResult, rewriteResult_);
      DARABONBA_PTR_FROM_JSON(StyleName, styleName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SaveStyleLearningResultShrinkRequest() = default ;
    SaveStyleLearningResultShrinkRequest(const SaveStyleLearningResultShrinkRequest &) = default ;
    SaveStyleLearningResultShrinkRequest(SaveStyleLearningResultShrinkRequest &&) = default ;
    SaveStyleLearningResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveStyleLearningResultShrinkRequest() = default ;
    SaveStyleLearningResultShrinkRequest& operator=(const SaveStyleLearningResultShrinkRequest &) = default ;
    SaveStyleLearningResultShrinkRequest& operator=(SaveStyleLearningResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->aigcResult_ != nullptr && this->customTextIdListShrink_ != nullptr && this->materialIdListShrink_ != nullptr && this->rewriteResult_ != nullptr && this->styleName_ != nullptr
        && this->taskId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SaveStyleLearningResultShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // aigcResult Field Functions 
    bool hasAigcResult() const { return this->aigcResult_ != nullptr;};
    void deleteAigcResult() { this->aigcResult_ = nullptr;};
    inline string aigcResult() const { DARABONBA_PTR_GET_DEFAULT(aigcResult_, "") };
    inline SaveStyleLearningResultShrinkRequest& setAigcResult(string aigcResult) { DARABONBA_PTR_SET_VALUE(aigcResult_, aigcResult) };


    // customTextIdListShrink Field Functions 
    bool hasCustomTextIdListShrink() const { return this->customTextIdListShrink_ != nullptr;};
    void deleteCustomTextIdListShrink() { this->customTextIdListShrink_ = nullptr;};
    inline string customTextIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(customTextIdListShrink_, "") };
    inline SaveStyleLearningResultShrinkRequest& setCustomTextIdListShrink(string customTextIdListShrink) { DARABONBA_PTR_SET_VALUE(customTextIdListShrink_, customTextIdListShrink) };


    // materialIdListShrink Field Functions 
    bool hasMaterialIdListShrink() const { return this->materialIdListShrink_ != nullptr;};
    void deleteMaterialIdListShrink() { this->materialIdListShrink_ = nullptr;};
    inline string materialIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(materialIdListShrink_, "") };
    inline SaveStyleLearningResultShrinkRequest& setMaterialIdListShrink(string materialIdListShrink) { DARABONBA_PTR_SET_VALUE(materialIdListShrink_, materialIdListShrink) };


    // rewriteResult Field Functions 
    bool hasRewriteResult() const { return this->rewriteResult_ != nullptr;};
    void deleteRewriteResult() { this->rewriteResult_ = nullptr;};
    inline string rewriteResult() const { DARABONBA_PTR_GET_DEFAULT(rewriteResult_, "") };
    inline SaveStyleLearningResultShrinkRequest& setRewriteResult(string rewriteResult) { DARABONBA_PTR_SET_VALUE(rewriteResult_, rewriteResult) };


    // styleName Field Functions 
    bool hasStyleName() const { return this->styleName_ != nullptr;};
    void deleteStyleName() { this->styleName_ = nullptr;};
    inline string styleName() const { DARABONBA_PTR_GET_DEFAULT(styleName_, "") };
    inline SaveStyleLearningResultShrinkRequest& setStyleName(string styleName) { DARABONBA_PTR_SET_VALUE(styleName_, styleName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SaveStyleLearningResultShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> aigcResult_ = nullptr;
    std::shared_ptr<string> customTextIdListShrink_ = nullptr;
    std::shared_ptr<string> materialIdListShrink_ = nullptr;
    std::shared_ptr<string> rewriteResult_ = nullptr;
    std::shared_ptr<string> styleName_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
