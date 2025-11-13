// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContractResultGenerationRequestAssistant.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(assistant, assistant_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(assistant, assistant_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
    };
    RunContractResultGenerationRequest() = default ;
    RunContractResultGenerationRequest(const RunContractResultGenerationRequest &) = default ;
    RunContractResultGenerationRequest(RunContractResultGenerationRequest &&) = default ;
    RunContractResultGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationRequest() = default ;
    RunContractResultGenerationRequest& operator=(const RunContractResultGenerationRequest &) = default ;
    RunContractResultGenerationRequest& operator=(RunContractResultGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->assistant_ == nullptr && return this->stream_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunContractResultGenerationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // assistant Field Functions 
    bool hasAssistant() const { return this->assistant_ != nullptr;};
    void deleteAssistant() { this->assistant_ = nullptr;};
    inline const RunContractResultGenerationRequestAssistant & assistant() const { DARABONBA_PTR_GET_CONST(assistant_, RunContractResultGenerationRequestAssistant) };
    inline RunContractResultGenerationRequestAssistant assistant() { DARABONBA_PTR_GET(assistant_, RunContractResultGenerationRequestAssistant) };
    inline RunContractResultGenerationRequest& setAssistant(const RunContractResultGenerationRequestAssistant & assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };
    inline RunContractResultGenerationRequest& setAssistant(RunContractResultGenerationRequestAssistant && assistant) { DARABONBA_PTR_SET_RVALUE(assistant_, assistant) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunContractResultGenerationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<RunContractResultGenerationRequestAssistant> assistant_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
