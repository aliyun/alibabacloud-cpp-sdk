// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPBCAPISCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPBCAPISCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcApiSchemaCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePbcApiSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePbcApiSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePbcApiSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePbcApiSchemaRequest() = default ;
    CreatePbcApiSchemaRequest(const CreatePbcApiSchemaRequest &) = default ;
    CreatePbcApiSchemaRequest(CreatePbcApiSchemaRequest &&) = default ;
    CreatePbcApiSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePbcApiSchemaRequest() = default ;
    CreatePbcApiSchemaRequest& operator=(const CreatePbcApiSchemaRequest &) = default ;
    CreatePbcApiSchemaRequest& operator=(CreatePbcApiSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcApiSchemaCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcApiSchemaCreateCmd) };
    inline PbcApiSchemaCreateCmd getBody() { DARABONBA_PTR_GET(body_, PbcApiSchemaCreateCmd) };
    inline CreatePbcApiSchemaRequest& setBody(const PbcApiSchemaCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePbcApiSchemaRequest& setBody(PbcApiSchemaCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcApiSchemaCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
