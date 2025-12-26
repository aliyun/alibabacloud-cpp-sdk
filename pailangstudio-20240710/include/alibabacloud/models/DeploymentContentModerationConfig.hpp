// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTCONTENTMODERATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTCONTENTMODERATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeploymentContentModerationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentContentModerationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableInputModeration, enableInputModeration_);
      DARABONBA_PTR_TO_JSON(EnableOutputModeration, enableOutputModeration_);
      DARABONBA_PTR_TO_JSON(StreamingModerationThreshold, streamingModerationThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentContentModerationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableInputModeration, enableInputModeration_);
      DARABONBA_PTR_FROM_JSON(EnableOutputModeration, enableOutputModeration_);
      DARABONBA_PTR_FROM_JSON(StreamingModerationThreshold, streamingModerationThreshold_);
    };
    DeploymentContentModerationConfig() = default ;
    DeploymentContentModerationConfig(const DeploymentContentModerationConfig &) = default ;
    DeploymentContentModerationConfig(DeploymentContentModerationConfig &&) = default ;
    DeploymentContentModerationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentContentModerationConfig() = default ;
    DeploymentContentModerationConfig& operator=(const DeploymentContentModerationConfig &) = default ;
    DeploymentContentModerationConfig& operator=(DeploymentContentModerationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableInputModeration_ == nullptr
        && return this->enableOutputModeration_ == nullptr && return this->streamingModerationThreshold_ == nullptr; };
    // enableInputModeration Field Functions 
    bool hasEnableInputModeration() const { return this->enableInputModeration_ != nullptr;};
    void deleteEnableInputModeration() { this->enableInputModeration_ = nullptr;};
    inline bool enableInputModeration() const { DARABONBA_PTR_GET_DEFAULT(enableInputModeration_, false) };
    inline DeploymentContentModerationConfig& setEnableInputModeration(bool enableInputModeration) { DARABONBA_PTR_SET_VALUE(enableInputModeration_, enableInputModeration) };


    // enableOutputModeration Field Functions 
    bool hasEnableOutputModeration() const { return this->enableOutputModeration_ != nullptr;};
    void deleteEnableOutputModeration() { this->enableOutputModeration_ = nullptr;};
    inline bool enableOutputModeration() const { DARABONBA_PTR_GET_DEFAULT(enableOutputModeration_, false) };
    inline DeploymentContentModerationConfig& setEnableOutputModeration(bool enableOutputModeration) { DARABONBA_PTR_SET_VALUE(enableOutputModeration_, enableOutputModeration) };


    // streamingModerationThreshold Field Functions 
    bool hasStreamingModerationThreshold() const { return this->streamingModerationThreshold_ != nullptr;};
    void deleteStreamingModerationThreshold() { this->streamingModerationThreshold_ = nullptr;};
    inline int32_t streamingModerationThreshold() const { DARABONBA_PTR_GET_DEFAULT(streamingModerationThreshold_, 0) };
    inline DeploymentContentModerationConfig& setStreamingModerationThreshold(int32_t streamingModerationThreshold) { DARABONBA_PTR_SET_VALUE(streamingModerationThreshold_, streamingModerationThreshold) };


  protected:
    // 启用输入内容审查
    std::shared_ptr<bool> enableInputModeration_ = nullptr;
    // 启用输出内容审查
    std::shared_ptr<bool> enableOutputModeration_ = nullptr;
    // 流式输出内容送审缓存大小
    std::shared_ptr<int32_t> streamingModerationThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
