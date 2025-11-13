// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunLegalAdviceConsultationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLegalAdviceConsultationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(assistant, assistantShrink_);
      DARABONBA_PTR_TO_JSON(extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(thread, threadShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RunLegalAdviceConsultationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(assistant, assistantShrink_);
      DARABONBA_PTR_FROM_JSON(extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(thread, threadShrink_);
    };
    RunLegalAdviceConsultationShrinkRequest() = default ;
    RunLegalAdviceConsultationShrinkRequest(const RunLegalAdviceConsultationShrinkRequest &) = default ;
    RunLegalAdviceConsultationShrinkRequest(RunLegalAdviceConsultationShrinkRequest &&) = default ;
    RunLegalAdviceConsultationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLegalAdviceConsultationShrinkRequest() = default ;
    RunLegalAdviceConsultationShrinkRequest& operator=(const RunLegalAdviceConsultationShrinkRequest &) = default ;
    RunLegalAdviceConsultationShrinkRequest& operator=(RunLegalAdviceConsultationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->assistantShrink_ == nullptr && return this->extraShrink_ == nullptr && return this->stream_ == nullptr && return this->threadShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunLegalAdviceConsultationShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // assistantShrink Field Functions 
    bool hasAssistantShrink() const { return this->assistantShrink_ != nullptr;};
    void deleteAssistantShrink() { this->assistantShrink_ = nullptr;};
    inline string assistantShrink() const { DARABONBA_PTR_GET_DEFAULT(assistantShrink_, "") };
    inline RunLegalAdviceConsultationShrinkRequest& setAssistantShrink(string assistantShrink) { DARABONBA_PTR_SET_VALUE(assistantShrink_, assistantShrink) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string extraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline RunLegalAdviceConsultationShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunLegalAdviceConsultationShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // threadShrink Field Functions 
    bool hasThreadShrink() const { return this->threadShrink_ != nullptr;};
    void deleteThreadShrink() { this->threadShrink_ = nullptr;};
    inline string threadShrink() const { DARABONBA_PTR_GET_DEFAULT(threadShrink_, "") };
    inline RunLegalAdviceConsultationShrinkRequest& setThreadShrink(string threadShrink) { DARABONBA_PTR_SET_VALUE(threadShrink_, threadShrink) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> assistantShrink_ = nullptr;
    std::shared_ptr<string> extraShrink_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<string> threadShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
