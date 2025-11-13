// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunLegalAdviceConsultationRequestAssistant.hpp>
#include <alibabacloud/models/RunLegalAdviceConsultationRequestExtra.hpp>
#include <alibabacloud/models/RunLegalAdviceConsultationRequestThread.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunLegalAdviceConsultationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLegalAdviceConsultationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(assistant, assistant_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(thread, thread_);
    };
    friend void from_json(const Darabonba::Json& j, RunLegalAdviceConsultationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(assistant, assistant_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(thread, thread_);
    };
    RunLegalAdviceConsultationRequest() = default ;
    RunLegalAdviceConsultationRequest(const RunLegalAdviceConsultationRequest &) = default ;
    RunLegalAdviceConsultationRequest(RunLegalAdviceConsultationRequest &&) = default ;
    RunLegalAdviceConsultationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLegalAdviceConsultationRequest() = default ;
    RunLegalAdviceConsultationRequest& operator=(const RunLegalAdviceConsultationRequest &) = default ;
    RunLegalAdviceConsultationRequest& operator=(RunLegalAdviceConsultationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->assistant_ == nullptr && return this->extra_ == nullptr && return this->stream_ == nullptr && return this->thread_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunLegalAdviceConsultationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // assistant Field Functions 
    bool hasAssistant() const { return this->assistant_ != nullptr;};
    void deleteAssistant() { this->assistant_ = nullptr;};
    inline const RunLegalAdviceConsultationRequestAssistant & assistant() const { DARABONBA_PTR_GET_CONST(assistant_, RunLegalAdviceConsultationRequestAssistant) };
    inline RunLegalAdviceConsultationRequestAssistant assistant() { DARABONBA_PTR_GET(assistant_, RunLegalAdviceConsultationRequestAssistant) };
    inline RunLegalAdviceConsultationRequest& setAssistant(const RunLegalAdviceConsultationRequestAssistant & assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };
    inline RunLegalAdviceConsultationRequest& setAssistant(RunLegalAdviceConsultationRequestAssistant && assistant) { DARABONBA_PTR_SET_RVALUE(assistant_, assistant) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const RunLegalAdviceConsultationRequestExtra & extra() const { DARABONBA_PTR_GET_CONST(extra_, RunLegalAdviceConsultationRequestExtra) };
    inline RunLegalAdviceConsultationRequestExtra extra() { DARABONBA_PTR_GET(extra_, RunLegalAdviceConsultationRequestExtra) };
    inline RunLegalAdviceConsultationRequest& setExtra(const RunLegalAdviceConsultationRequestExtra & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline RunLegalAdviceConsultationRequest& setExtra(RunLegalAdviceConsultationRequestExtra && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunLegalAdviceConsultationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline const RunLegalAdviceConsultationRequestThread & thread() const { DARABONBA_PTR_GET_CONST(thread_, RunLegalAdviceConsultationRequestThread) };
    inline RunLegalAdviceConsultationRequestThread thread() { DARABONBA_PTR_GET(thread_, RunLegalAdviceConsultationRequestThread) };
    inline RunLegalAdviceConsultationRequest& setThread(const RunLegalAdviceConsultationRequestThread & thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };
    inline RunLegalAdviceConsultationRequest& setThread(RunLegalAdviceConsultationRequestThread && thread) { DARABONBA_PTR_SET_RVALUE(thread_, thread) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<RunLegalAdviceConsultationRequestAssistant> assistant_ = nullptr;
    std::shared_ptr<RunLegalAdviceConsultationRequestExtra> extra_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<RunLegalAdviceConsultationRequestThread> thread_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
