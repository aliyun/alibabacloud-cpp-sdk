// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPBCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPBCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePbcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePbcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePbcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePbcRequest() = default ;
    CreatePbcRequest(const CreatePbcRequest &) = default ;
    CreatePbcRequest(CreatePbcRequest &&) = default ;
    CreatePbcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePbcRequest() = default ;
    CreatePbcRequest& operator=(const CreatePbcRequest &) = default ;
    CreatePbcRequest& operator=(CreatePbcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcCreateCmd) };
    inline PbcCreateCmd getBody() { DARABONBA_PTR_GET(body_, PbcCreateCmd) };
    inline CreatePbcRequest& setBody(const PbcCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePbcRequest& setBody(PbcCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
