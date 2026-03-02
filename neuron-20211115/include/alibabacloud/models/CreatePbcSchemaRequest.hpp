// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPBCSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPBCSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcSchemaCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePbcSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePbcSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePbcSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePbcSchemaRequest() = default ;
    CreatePbcSchemaRequest(const CreatePbcSchemaRequest &) = default ;
    CreatePbcSchemaRequest(CreatePbcSchemaRequest &&) = default ;
    CreatePbcSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePbcSchemaRequest() = default ;
    CreatePbcSchemaRequest& operator=(const CreatePbcSchemaRequest &) = default ;
    CreatePbcSchemaRequest& operator=(CreatePbcSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcSchemaCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcSchemaCreateCmd) };
    inline PbcSchemaCreateCmd getBody() { DARABONBA_PTR_GET(body_, PbcSchemaCreateCmd) };
    inline CreatePbcSchemaRequest& setBody(const PbcSchemaCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePbcSchemaRequest& setBody(PbcSchemaCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcSchemaCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
