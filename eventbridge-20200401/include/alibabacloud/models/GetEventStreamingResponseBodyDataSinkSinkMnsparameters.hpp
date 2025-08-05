// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkMNSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkMNSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(IsBase64Encode, isBase64Encode_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkMNSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(IsBase64Encode, isBase64Encode_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
    };
    GetEventStreamingResponseBodyDataSinkSinkMNSParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkMNSParameters(const GetEventStreamingResponseBodyDataSinkSinkMNSParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkMNSParameters(GetEventStreamingResponseBodyDataSinkSinkMNSParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkMNSParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkMNSParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkMNSParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkMNSParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkMNSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->isBase64Encode_ != nullptr && this->queueName_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody body() { DARABONBA_PTR_GET(body_, Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody) };
    inline GetEventStreamingResponseBodyDataSinkSinkMNSParameters& setBody(const Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetEventStreamingResponseBodyDataSinkSinkMNSParameters& setBody(Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // isBase64Encode Field Functions 
    bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
    void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode & isBase64Encode() const { DARABONBA_PTR_GET_CONST(isBase64Encode_, Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode isBase64Encode() { DARABONBA_PTR_GET(isBase64Encode_, Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode) };
    inline GetEventStreamingResponseBodyDataSinkSinkMNSParameters& setIsBase64Encode(const Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode & isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };
    inline GetEventStreamingResponseBodyDataSinkSinkMNSParameters& setIsBase64Encode(Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode && isBase64Encode) { DARABONBA_PTR_SET_RVALUE(isBase64Encode_, isBase64Encode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName & queueName() const { DARABONBA_PTR_GET_CONST(queueName_, Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName queueName() { DARABONBA_PTR_GET(queueName_, Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName) };
    inline GetEventStreamingResponseBodyDataSinkSinkMNSParameters& setQueueName(const Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
    inline GetEventStreamingResponseBodyDataSinkSinkMNSParameters& setQueueName(Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


  protected:
    // The message content.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody> body_ = nullptr;
    // Indicates whether Base64 encoding is enabled.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode> isBase64Encode_ = nullptr;
    // The target service type is MNS.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName> queueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
