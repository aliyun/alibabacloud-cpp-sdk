// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContractRuleGenerationRequestAssistant.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractRuleGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractRuleGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(assistant, assistant_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractRuleGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(assistant, assistant_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
    };
    RunContractRuleGenerationRequest() = default ;
    RunContractRuleGenerationRequest(const RunContractRuleGenerationRequest &) = default ;
    RunContractRuleGenerationRequest(RunContractRuleGenerationRequest &&) = default ;
    RunContractRuleGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractRuleGenerationRequest() = default ;
    RunContractRuleGenerationRequest& operator=(const RunContractRuleGenerationRequest &) = default ;
    RunContractRuleGenerationRequest& operator=(RunContractRuleGenerationRequest &&) = default ;
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
    inline RunContractRuleGenerationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // assistant Field Functions 
    bool hasAssistant() const { return this->assistant_ != nullptr;};
    void deleteAssistant() { this->assistant_ = nullptr;};
    inline const RunContractRuleGenerationRequestAssistant & assistant() const { DARABONBA_PTR_GET_CONST(assistant_, RunContractRuleGenerationRequestAssistant) };
    inline RunContractRuleGenerationRequestAssistant assistant() { DARABONBA_PTR_GET(assistant_, RunContractRuleGenerationRequestAssistant) };
    inline RunContractRuleGenerationRequest& setAssistant(const RunContractRuleGenerationRequestAssistant & assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };
    inline RunContractRuleGenerationRequest& setAssistant(RunContractRuleGenerationRequestAssistant && assistant) { DARABONBA_PTR_SET_RVALUE(assistant_, assistant) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunContractRuleGenerationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<RunContractRuleGenerationRequestAssistant> assistant_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
