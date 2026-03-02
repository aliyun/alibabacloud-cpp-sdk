// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMQGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMQGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MqGroupCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateMqGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMqGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMqGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMqGroupRequest() = default ;
    CreateMqGroupRequest(const CreateMqGroupRequest &) = default ;
    CreateMqGroupRequest(CreateMqGroupRequest &&) = default ;
    CreateMqGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMqGroupRequest() = default ;
    CreateMqGroupRequest& operator=(const CreateMqGroupRequest &) = default ;
    CreateMqGroupRequest& operator=(CreateMqGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MqGroupCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, MqGroupCreateCmd) };
    inline MqGroupCreateCmd getBody() { DARABONBA_PTR_GET(body_, MqGroupCreateCmd) };
    inline CreateMqGroupRequest& setBody(const MqGroupCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMqGroupRequest& setBody(MqGroupCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<MqGroupCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
