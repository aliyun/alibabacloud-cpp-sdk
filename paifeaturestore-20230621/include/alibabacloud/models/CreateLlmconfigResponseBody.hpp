// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELLMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELLMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateLLMConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLLMConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LLMConfigId, LLMConfigId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLLMConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LLMConfigId, LLMConfigId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLLMConfigResponseBody() = default ;
    CreateLLMConfigResponseBody(const CreateLLMConfigResponseBody &) = default ;
    CreateLLMConfigResponseBody(CreateLLMConfigResponseBody &&) = default ;
    CreateLLMConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLLMConfigResponseBody() = default ;
    CreateLLMConfigResponseBody& operator=(const CreateLLMConfigResponseBody &) = default ;
    CreateLLMConfigResponseBody& operator=(CreateLLMConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->LLMConfigId_ != nullptr
        && this->requestId_ != nullptr; };
    // LLMConfigId Field Functions 
    bool hasLLMConfigId() const { return this->LLMConfigId_ != nullptr;};
    void deleteLLMConfigId() { this->LLMConfigId_ = nullptr;};
    inline string LLMConfigId() const { DARABONBA_PTR_GET_DEFAULT(LLMConfigId_, "") };
    inline CreateLLMConfigResponseBody& setLLMConfigId(string LLMConfigId) { DARABONBA_PTR_SET_VALUE(LLMConfigId_, LLMConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLLMConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> LLMConfigId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
