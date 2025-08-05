// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkMNSParametersBody.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkMNSParametersQueueName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkMNSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkMNSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(IsBase64Encode, isBase64Encode_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkMNSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(IsBase64Encode, isBase64Encode_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
    };
    UpdateEventStreamingRequestSinkSinkMNSParameters() = default ;
    UpdateEventStreamingRequestSinkSinkMNSParameters(const UpdateEventStreamingRequestSinkSinkMNSParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkMNSParameters(UpdateEventStreamingRequestSinkSinkMNSParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkMNSParameters() = default ;
    UpdateEventStreamingRequestSinkSinkMNSParameters& operator=(const UpdateEventStreamingRequestSinkSinkMNSParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkMNSParameters& operator=(UpdateEventStreamingRequestSinkSinkMNSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->isBase64Encode_ != nullptr && this->queueName_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkMNSParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::UpdateEventStreamingRequestSinkSinkMNSParametersBody) };
    inline Models::UpdateEventStreamingRequestSinkSinkMNSParametersBody body() { DARABONBA_PTR_GET(body_, Models::UpdateEventStreamingRequestSinkSinkMNSParametersBody) };
    inline UpdateEventStreamingRequestSinkSinkMNSParameters& setBody(const Models::UpdateEventStreamingRequestSinkSinkMNSParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateEventStreamingRequestSinkSinkMNSParameters& setBody(Models::UpdateEventStreamingRequestSinkSinkMNSParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // isBase64Encode Field Functions 
    bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
    void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode & isBase64Encode() const { DARABONBA_PTR_GET_CONST(isBase64Encode_, Models::UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode) };
    inline Models::UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode isBase64Encode() { DARABONBA_PTR_GET(isBase64Encode_, Models::UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode) };
    inline UpdateEventStreamingRequestSinkSinkMNSParameters& setIsBase64Encode(const Models::UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode & isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };
    inline UpdateEventStreamingRequestSinkSinkMNSParameters& setIsBase64Encode(Models::UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode && isBase64Encode) { DARABONBA_PTR_SET_RVALUE(isBase64Encode_, isBase64Encode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkMNSParametersQueueName & queueName() const { DARABONBA_PTR_GET_CONST(queueName_, Models::UpdateEventStreamingRequestSinkSinkMNSParametersQueueName) };
    inline Models::UpdateEventStreamingRequestSinkSinkMNSParametersQueueName queueName() { DARABONBA_PTR_GET(queueName_, Models::UpdateEventStreamingRequestSinkSinkMNSParametersQueueName) };
    inline UpdateEventStreamingRequestSinkSinkMNSParameters& setQueueName(const Models::UpdateEventStreamingRequestSinkSinkMNSParametersQueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
    inline UpdateEventStreamingRequestSinkSinkMNSParameters& setQueueName(Models::UpdateEventStreamingRequestSinkSinkMNSParametersQueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


  protected:
    // The message body.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkMNSParametersBody> body_ = nullptr;
    // Specifies whether to enable Base64 encoding.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode> isBase64Encode_ = nullptr;
    // The name of the SMQ queue.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkMNSParametersQueueName> queueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
