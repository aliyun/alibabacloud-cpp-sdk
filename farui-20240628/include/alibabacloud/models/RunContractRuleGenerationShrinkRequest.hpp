// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractRuleGenerationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractRuleGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(assistant, assistantShrink_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractRuleGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(assistant, assistantShrink_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
    };
    RunContractRuleGenerationShrinkRequest() = default ;
    RunContractRuleGenerationShrinkRequest(const RunContractRuleGenerationShrinkRequest &) = default ;
    RunContractRuleGenerationShrinkRequest(RunContractRuleGenerationShrinkRequest &&) = default ;
    RunContractRuleGenerationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractRuleGenerationShrinkRequest() = default ;
    RunContractRuleGenerationShrinkRequest& operator=(const RunContractRuleGenerationShrinkRequest &) = default ;
    RunContractRuleGenerationShrinkRequest& operator=(RunContractRuleGenerationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->assistantShrink_ == nullptr && return this->stream_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunContractRuleGenerationShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // assistantShrink Field Functions 
    bool hasAssistantShrink() const { return this->assistantShrink_ != nullptr;};
    void deleteAssistantShrink() { this->assistantShrink_ = nullptr;};
    inline string assistantShrink() const { DARABONBA_PTR_GET_DEFAULT(assistantShrink_, "") };
    inline RunContractRuleGenerationShrinkRequest& setAssistantShrink(string assistantShrink) { DARABONBA_PTR_SET_VALUE(assistantShrink_, assistantShrink) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunContractRuleGenerationShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> assistantShrink_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
