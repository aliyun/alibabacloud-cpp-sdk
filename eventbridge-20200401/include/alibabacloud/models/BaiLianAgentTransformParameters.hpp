// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BAILIANAGENTTRANSFORMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_BAILIANAGENTTRANSFORMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BaiLianAgentTransformParametersPrompt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class BaiLianAgentTransformParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BaiLianAgentTransformParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(RequestPerMinute, requestPerMinute_);
      DARABONBA_PTR_TO_JSON(TokenPerMinute, tokenPerMinute_);
    };
    friend void from_json(const Darabonba::Json& j, BaiLianAgentTransformParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(RequestPerMinute, requestPerMinute_);
      DARABONBA_PTR_FROM_JSON(TokenPerMinute, tokenPerMinute_);
    };
    BaiLianAgentTransformParameters() = default ;
    BaiLianAgentTransformParameters(const BaiLianAgentTransformParameters &) = default ;
    BaiLianAgentTransformParameters(BaiLianAgentTransformParameters &&) = default ;
    BaiLianAgentTransformParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BaiLianAgentTransformParameters() = default ;
    BaiLianAgentTransformParameters& operator=(const BaiLianAgentTransformParameters &) = default ;
    BaiLianAgentTransformParameters& operator=(BaiLianAgentTransformParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->applicationId_ == nullptr && return this->prompt_ == nullptr && return this->requestPerMinute_ == nullptr && return this->tokenPerMinute_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline BaiLianAgentTransformParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline BaiLianAgentTransformParameters& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline const BaiLianAgentTransformParametersPrompt & prompt() const { DARABONBA_PTR_GET_CONST(prompt_, BaiLianAgentTransformParametersPrompt) };
    inline BaiLianAgentTransformParametersPrompt prompt() { DARABONBA_PTR_GET(prompt_, BaiLianAgentTransformParametersPrompt) };
    inline BaiLianAgentTransformParameters& setPrompt(const BaiLianAgentTransformParametersPrompt & prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };
    inline BaiLianAgentTransformParameters& setPrompt(BaiLianAgentTransformParametersPrompt && prompt) { DARABONBA_PTR_SET_RVALUE(prompt_, prompt) };


    // requestPerMinute Field Functions 
    bool hasRequestPerMinute() const { return this->requestPerMinute_ != nullptr;};
    void deleteRequestPerMinute() { this->requestPerMinute_ = nullptr;};
    inline int64_t requestPerMinute() const { DARABONBA_PTR_GET_DEFAULT(requestPerMinute_, 0L) };
    inline BaiLianAgentTransformParameters& setRequestPerMinute(int64_t requestPerMinute) { DARABONBA_PTR_SET_VALUE(requestPerMinute_, requestPerMinute) };


    // tokenPerMinute Field Functions 
    bool hasTokenPerMinute() const { return this->tokenPerMinute_ != nullptr;};
    void deleteTokenPerMinute() { this->tokenPerMinute_ = nullptr;};
    inline int64_t tokenPerMinute() const { DARABONBA_PTR_GET_DEFAULT(tokenPerMinute_, 0L) };
    inline BaiLianAgentTransformParameters& setTokenPerMinute(int64_t tokenPerMinute) { DARABONBA_PTR_SET_VALUE(tokenPerMinute_, tokenPerMinute) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<BaiLianAgentTransformParametersPrompt> prompt_ = nullptr;
    std::shared_ptr<int64_t> requestPerMinute_ = nullptr;
    std::shared_ptr<int64_t> tokenPerMinute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
