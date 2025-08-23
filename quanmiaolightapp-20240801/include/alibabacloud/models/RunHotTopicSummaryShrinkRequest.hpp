// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicSummaryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(stepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfigShrink_);
      DARABONBA_PTR_TO_JSON(topicIds, topicIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicSummaryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(stepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(topicIds, topicIdsShrink_);
    };
    RunHotTopicSummaryShrinkRequest() = default ;
    RunHotTopicSummaryShrinkRequest(const RunHotTopicSummaryShrinkRequest &) = default ;
    RunHotTopicSummaryShrinkRequest(RunHotTopicSummaryShrinkRequest &&) = default ;
    RunHotTopicSummaryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicSummaryShrinkRequest() = default ;
    RunHotTopicSummaryShrinkRequest& operator=(const RunHotTopicSummaryShrinkRequest &) = default ;
    RunHotTopicSummaryShrinkRequest& operator=(RunHotTopicSummaryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotTopicVersion_ != nullptr
        && this->stepForCustomSummaryStyleConfigShrink_ != nullptr && this->topicIdsShrink_ != nullptr; };
    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline RunHotTopicSummaryShrinkRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // stepForCustomSummaryStyleConfigShrink Field Functions 
    bool hasStepForCustomSummaryStyleConfigShrink() const { return this->stepForCustomSummaryStyleConfigShrink_ != nullptr;};
    void deleteStepForCustomSummaryStyleConfigShrink() { this->stepForCustomSummaryStyleConfigShrink_ = nullptr;};
    inline string stepForCustomSummaryStyleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(stepForCustomSummaryStyleConfigShrink_, "") };
    inline RunHotTopicSummaryShrinkRequest& setStepForCustomSummaryStyleConfigShrink(string stepForCustomSummaryStyleConfigShrink) { DARABONBA_PTR_SET_VALUE(stepForCustomSummaryStyleConfigShrink_, stepForCustomSummaryStyleConfigShrink) };


    // topicIdsShrink Field Functions 
    bool hasTopicIdsShrink() const { return this->topicIdsShrink_ != nullptr;};
    void deleteTopicIdsShrink() { this->topicIdsShrink_ = nullptr;};
    inline string topicIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicIdsShrink_, "") };
    inline RunHotTopicSummaryShrinkRequest& setTopicIdsShrink(string topicIdsShrink) { DARABONBA_PTR_SET_VALUE(topicIdsShrink_, topicIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> stepForCustomSummaryStyleConfigShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topicIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
