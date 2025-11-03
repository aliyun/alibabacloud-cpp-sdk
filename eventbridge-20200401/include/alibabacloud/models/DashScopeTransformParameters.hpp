// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DASHSCOPETRANSFORMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DASHSCOPETRANSFORMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DashScopeTransformParametersMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DashScopeTransformParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DashScopeTransformParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestPerMinute, requestPerMinute_);
      DARABONBA_PTR_TO_JSON(StructuredOutputJsonSchema, structuredOutputJsonSchema_);
      DARABONBA_PTR_TO_JSON(TokenPerMinute, tokenPerMinute_);
    };
    friend void from_json(const Darabonba::Json& j, DashScopeTransformParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestPerMinute, requestPerMinute_);
      DARABONBA_PTR_FROM_JSON(StructuredOutputJsonSchema, structuredOutputJsonSchema_);
      DARABONBA_PTR_FROM_JSON(TokenPerMinute, tokenPerMinute_);
    };
    DashScopeTransformParameters() = default ;
    DashScopeTransformParameters(const DashScopeTransformParameters &) = default ;
    DashScopeTransformParameters(DashScopeTransformParameters &&) = default ;
    DashScopeTransformParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DashScopeTransformParameters() = default ;
    DashScopeTransformParameters& operator=(const DashScopeTransformParameters &) = default ;
    DashScopeTransformParameters& operator=(DashScopeTransformParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->messages_ == nullptr && return this->model_ == nullptr && return this->requestPerMinute_ == nullptr && return this->structuredOutputJsonSchema_ == nullptr && return this->tokenPerMinute_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DashScopeTransformParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<DashScopeTransformParametersMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<DashScopeTransformParametersMessages>) };
    inline vector<DashScopeTransformParametersMessages> messages() { DARABONBA_PTR_GET(messages_, vector<DashScopeTransformParametersMessages>) };
    inline DashScopeTransformParameters& setMessages(const vector<DashScopeTransformParametersMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline DashScopeTransformParameters& setMessages(vector<DashScopeTransformParametersMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DashScopeTransformParameters& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // requestPerMinute Field Functions 
    bool hasRequestPerMinute() const { return this->requestPerMinute_ != nullptr;};
    void deleteRequestPerMinute() { this->requestPerMinute_ = nullptr;};
    inline int64_t requestPerMinute() const { DARABONBA_PTR_GET_DEFAULT(requestPerMinute_, 0L) };
    inline DashScopeTransformParameters& setRequestPerMinute(int64_t requestPerMinute) { DARABONBA_PTR_SET_VALUE(requestPerMinute_, requestPerMinute) };


    // structuredOutputJsonSchema Field Functions 
    bool hasStructuredOutputJsonSchema() const { return this->structuredOutputJsonSchema_ != nullptr;};
    void deleteStructuredOutputJsonSchema() { this->structuredOutputJsonSchema_ = nullptr;};
    inline string structuredOutputJsonSchema() const { DARABONBA_PTR_GET_DEFAULT(structuredOutputJsonSchema_, "") };
    inline DashScopeTransformParameters& setStructuredOutputJsonSchema(string structuredOutputJsonSchema) { DARABONBA_PTR_SET_VALUE(structuredOutputJsonSchema_, structuredOutputJsonSchema) };


    // tokenPerMinute Field Functions 
    bool hasTokenPerMinute() const { return this->tokenPerMinute_ != nullptr;};
    void deleteTokenPerMinute() { this->tokenPerMinute_ = nullptr;};
    inline int64_t tokenPerMinute() const { DARABONBA_PTR_GET_DEFAULT(tokenPerMinute_, 0L) };
    inline DashScopeTransformParameters& setTokenPerMinute(int64_t tokenPerMinute) { DARABONBA_PTR_SET_VALUE(tokenPerMinute_, tokenPerMinute) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<vector<DashScopeTransformParametersMessages>> messages_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<int64_t> requestPerMinute_ = nullptr;
    std::shared_ptr<string> structuredOutputJsonSchema_ = nullptr;
    std::shared_ptr<int64_t> tokenPerMinute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
