// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONREQUESTTHREAD_HPP_
#define ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONREQUESTTHREAD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunLegalAdviceConsultationRequestThreadMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunLegalAdviceConsultationRequestThread : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLegalAdviceConsultationRequestThread& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
    };
    friend void from_json(const Darabonba::Json& j, RunLegalAdviceConsultationRequestThread& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
    };
    RunLegalAdviceConsultationRequestThread() = default ;
    RunLegalAdviceConsultationRequestThread(const RunLegalAdviceConsultationRequestThread &) = default ;
    RunLegalAdviceConsultationRequestThread(RunLegalAdviceConsultationRequestThread &&) = default ;
    RunLegalAdviceConsultationRequestThread(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLegalAdviceConsultationRequestThread() = default ;
    RunLegalAdviceConsultationRequestThread& operator=(const RunLegalAdviceConsultationRequestThread &) = default ;
    RunLegalAdviceConsultationRequestThread& operator=(RunLegalAdviceConsultationRequestThread &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::RunLegalAdviceConsultationRequestThreadMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::RunLegalAdviceConsultationRequestThreadMessages>) };
    inline vector<Models::RunLegalAdviceConsultationRequestThreadMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::RunLegalAdviceConsultationRequestThreadMessages>) };
    inline RunLegalAdviceConsultationRequestThread& setMessages(const vector<Models::RunLegalAdviceConsultationRequestThreadMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunLegalAdviceConsultationRequestThread& setMessages(vector<Models::RunLegalAdviceConsultationRequestThreadMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


  protected:
    std::shared_ptr<vector<Models::RunLegalAdviceConsultationRequestThreadMessages>> messages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
