// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkMNSParametersBody.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkMNSParametersQueueName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkMNSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkMNSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(IsBase64Encode, isBase64Encode_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkMNSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(IsBase64Encode, isBase64Encode_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
    };
    CreateEventStreamingRequestSinkSinkMNSParameters() = default ;
    CreateEventStreamingRequestSinkSinkMNSParameters(const CreateEventStreamingRequestSinkSinkMNSParameters &) = default ;
    CreateEventStreamingRequestSinkSinkMNSParameters(CreateEventStreamingRequestSinkSinkMNSParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkMNSParameters() = default ;
    CreateEventStreamingRequestSinkSinkMNSParameters& operator=(const CreateEventStreamingRequestSinkSinkMNSParameters &) = default ;
    CreateEventStreamingRequestSinkSinkMNSParameters& operator=(CreateEventStreamingRequestSinkSinkMNSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->isBase64Encode_ != nullptr && this->queueName_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkMNSParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::CreateEventStreamingRequestSinkSinkMNSParametersBody) };
    inline Models::CreateEventStreamingRequestSinkSinkMNSParametersBody body() { DARABONBA_PTR_GET(body_, Models::CreateEventStreamingRequestSinkSinkMNSParametersBody) };
    inline CreateEventStreamingRequestSinkSinkMNSParameters& setBody(const Models::CreateEventStreamingRequestSinkSinkMNSParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateEventStreamingRequestSinkSinkMNSParameters& setBody(Models::CreateEventStreamingRequestSinkSinkMNSParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // isBase64Encode Field Functions 
    bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
    void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode & isBase64Encode() const { DARABONBA_PTR_GET_CONST(isBase64Encode_, Models::CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode) };
    inline Models::CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode isBase64Encode() { DARABONBA_PTR_GET(isBase64Encode_, Models::CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode) };
    inline CreateEventStreamingRequestSinkSinkMNSParameters& setIsBase64Encode(const Models::CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode & isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };
    inline CreateEventStreamingRequestSinkSinkMNSParameters& setIsBase64Encode(Models::CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode && isBase64Encode) { DARABONBA_PTR_SET_RVALUE(isBase64Encode_, isBase64Encode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkMNSParametersQueueName & queueName() const { DARABONBA_PTR_GET_CONST(queueName_, Models::CreateEventStreamingRequestSinkSinkMNSParametersQueueName) };
    inline Models::CreateEventStreamingRequestSinkSinkMNSParametersQueueName queueName() { DARABONBA_PTR_GET(queueName_, Models::CreateEventStreamingRequestSinkSinkMNSParametersQueueName) };
    inline CreateEventStreamingRequestSinkSinkMNSParameters& setQueueName(const Models::CreateEventStreamingRequestSinkSinkMNSParametersQueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
    inline CreateEventStreamingRequestSinkSinkMNSParameters& setQueueName(Models::CreateEventStreamingRequestSinkSinkMNSParametersQueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


  protected:
    // The message content.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkMNSParametersBody> body_ = nullptr;
    // Specifies whether to enable Base64 encoding.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode> isBase64Encode_ = nullptr;
    // The name of the MNS queue.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkMNSParametersQueueName> queueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
