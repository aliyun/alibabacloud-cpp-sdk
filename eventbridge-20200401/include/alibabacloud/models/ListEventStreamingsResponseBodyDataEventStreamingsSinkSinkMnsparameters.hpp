// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(IsBase64Encode, isBase64Encode_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(IsBase64Encode, isBase64Encode_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->isBase64Encode_ != nullptr && this->queueName_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody body() { DARABONBA_PTR_GET(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& setBody(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& setBody(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // isBase64Encode Field Functions 
    bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
    void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode & isBase64Encode() const { DARABONBA_PTR_GET_CONST(isBase64Encode_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode isBase64Encode() { DARABONBA_PTR_GET(isBase64Encode_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& setIsBase64Encode(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode & isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& setIsBase64Encode(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode && isBase64Encode) { DARABONBA_PTR_SET_RVALUE(isBase64Encode_, isBase64Encode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName & queueName() const { DARABONBA_PTR_GET_CONST(queueName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName queueName() { DARABONBA_PTR_GET(queueName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& setQueueName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters& setQueueName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


  protected:
    // The message content.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody> body_ = nullptr;
    // Indicates whether Base64 encoding is enabled.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode> isBase64Encode_ = nullptr;
    // The name of the MNS queue.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName> queueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
