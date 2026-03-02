// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMQTOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMQTOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MqTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateMqTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMqTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMqTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMqTopicRequest() = default ;
    CreateMqTopicRequest(const CreateMqTopicRequest &) = default ;
    CreateMqTopicRequest(CreateMqTopicRequest &&) = default ;
    CreateMqTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMqTopicRequest() = default ;
    CreateMqTopicRequest& operator=(const CreateMqTopicRequest &) = default ;
    CreateMqTopicRequest& operator=(CreateMqTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MqTopic & getBody() const { DARABONBA_PTR_GET_CONST(body_, MqTopic) };
    inline MqTopic getBody() { DARABONBA_PTR_GET(body_, MqTopic) };
    inline CreateMqTopicRequest& setBody(const MqTopic & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMqTopicRequest& setBody(MqTopic && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MqTopic> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
