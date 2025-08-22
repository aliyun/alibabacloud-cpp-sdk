// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESILENCEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESILENCEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateSilencePolicyResponseBodySilencePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateSilencePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSilencePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SilencePolicy, silencePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSilencePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SilencePolicy, silencePolicy_);
    };
    CreateOrUpdateSilencePolicyResponseBody() = default ;
    CreateOrUpdateSilencePolicyResponseBody(const CreateOrUpdateSilencePolicyResponseBody &) = default ;
    CreateOrUpdateSilencePolicyResponseBody(CreateOrUpdateSilencePolicyResponseBody &&) = default ;
    CreateOrUpdateSilencePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSilencePolicyResponseBody() = default ;
    CreateOrUpdateSilencePolicyResponseBody& operator=(const CreateOrUpdateSilencePolicyResponseBody &) = default ;
    CreateOrUpdateSilencePolicyResponseBody& operator=(CreateOrUpdateSilencePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->silencePolicy_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateSilencePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // silencePolicy Field Functions 
    bool hasSilencePolicy() const { return this->silencePolicy_ != nullptr;};
    void deleteSilencePolicy() { this->silencePolicy_ = nullptr;};
    inline const CreateOrUpdateSilencePolicyResponseBodySilencePolicy & silencePolicy() const { DARABONBA_PTR_GET_CONST(silencePolicy_, CreateOrUpdateSilencePolicyResponseBodySilencePolicy) };
    inline CreateOrUpdateSilencePolicyResponseBodySilencePolicy silencePolicy() { DARABONBA_PTR_GET(silencePolicy_, CreateOrUpdateSilencePolicyResponseBodySilencePolicy) };
    inline CreateOrUpdateSilencePolicyResponseBody& setSilencePolicy(const CreateOrUpdateSilencePolicyResponseBodySilencePolicy & silencePolicy) { DARABONBA_PTR_SET_VALUE(silencePolicy_, silencePolicy) };
    inline CreateOrUpdateSilencePolicyResponseBody& setSilencePolicy(CreateOrUpdateSilencePolicyResponseBodySilencePolicy && silencePolicy) { DARABONBA_PTR_SET_RVALUE(silencePolicy_, silencePolicy) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The silence policy.
    std::shared_ptr<CreateOrUpdateSilencePolicyResponseBodySilencePolicy> silencePolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
