// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSLATIONTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSLATIONTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
namespace Models
{
  class SubmitTranslationTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranslationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIKey, APIKey_);
      DARABONBA_PTR_TO_JSON(BaseTaskId, baseTaskId_);
      DARABONBA_PTR_TO_JSON(Config, configShrink_);
      DARABONBA_PTR_TO_JSON(CustomTerms, customTermsShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranslationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKey, APIKey_);
      DARABONBA_PTR_FROM_JSON(BaseTaskId, baseTaskId_);
      DARABONBA_PTR_FROM_JSON(Config, configShrink_);
      DARABONBA_PTR_FROM_JSON(CustomTerms, customTermsShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SubmitTranslationTaskShrinkRequest() = default ;
    SubmitTranslationTaskShrinkRequest(const SubmitTranslationTaskShrinkRequest &) = default ;
    SubmitTranslationTaskShrinkRequest(SubmitTranslationTaskShrinkRequest &&) = default ;
    SubmitTranslationTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranslationTaskShrinkRequest() = default ;
    SubmitTranslationTaskShrinkRequest& operator=(const SubmitTranslationTaskShrinkRequest &) = default ;
    SubmitTranslationTaskShrinkRequest& operator=(SubmitTranslationTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKey_ == nullptr
        && this->baseTaskId_ == nullptr && this->configShrink_ == nullptr && this->customTermsShrink_ == nullptr && this->taskId_ == nullptr; };
    // APIKey Field Functions 
    bool hasAPIKey() const { return this->APIKey_ != nullptr;};
    void deleteAPIKey() { this->APIKey_ = nullptr;};
    inline string getAPIKey() const { DARABONBA_PTR_GET_DEFAULT(APIKey_, "") };
    inline SubmitTranslationTaskShrinkRequest& setAPIKey(string APIKey) { DARABONBA_PTR_SET_VALUE(APIKey_, APIKey) };


    // baseTaskId Field Functions 
    bool hasBaseTaskId() const { return this->baseTaskId_ != nullptr;};
    void deleteBaseTaskId() { this->baseTaskId_ = nullptr;};
    inline string getBaseTaskId() const { DARABONBA_PTR_GET_DEFAULT(baseTaskId_, "") };
    inline SubmitTranslationTaskShrinkRequest& setBaseTaskId(string baseTaskId) { DARABONBA_PTR_SET_VALUE(baseTaskId_, baseTaskId) };


    // configShrink Field Functions 
    bool hasConfigShrink() const { return this->configShrink_ != nullptr;};
    void deleteConfigShrink() { this->configShrink_ = nullptr;};
    inline string getConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(configShrink_, "") };
    inline SubmitTranslationTaskShrinkRequest& setConfigShrink(string configShrink) { DARABONBA_PTR_SET_VALUE(configShrink_, configShrink) };


    // customTermsShrink Field Functions 
    bool hasCustomTermsShrink() const { return this->customTermsShrink_ != nullptr;};
    void deleteCustomTermsShrink() { this->customTermsShrink_ = nullptr;};
    inline string getCustomTermsShrink() const { DARABONBA_PTR_GET_DEFAULT(customTermsShrink_, "") };
    inline SubmitTranslationTaskShrinkRequest& setCustomTermsShrink(string customTermsShrink) { DARABONBA_PTR_SET_VALUE(customTermsShrink_, customTermsShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitTranslationTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> APIKey_ {};
    shared_ptr<string> baseTaskId_ {};
    // This parameter is required.
    shared_ptr<string> configShrink_ {};
    shared_ptr<string> customTermsShrink_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif
