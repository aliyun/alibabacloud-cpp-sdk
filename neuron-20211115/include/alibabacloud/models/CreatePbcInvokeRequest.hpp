// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPBCINVOKEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPBCINVOKEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcInvokeCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePbcInvokeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePbcInvokeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePbcInvokeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePbcInvokeRequest() = default ;
    CreatePbcInvokeRequest(const CreatePbcInvokeRequest &) = default ;
    CreatePbcInvokeRequest(CreatePbcInvokeRequest &&) = default ;
    CreatePbcInvokeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePbcInvokeRequest() = default ;
    CreatePbcInvokeRequest& operator=(const CreatePbcInvokeRequest &) = default ;
    CreatePbcInvokeRequest& operator=(CreatePbcInvokeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcInvokeCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcInvokeCreateCmd) };
    inline PbcInvokeCreateCmd getBody() { DARABONBA_PTR_GET(body_, PbcInvokeCreateCmd) };
    inline CreatePbcInvokeRequest& setBody(const PbcInvokeCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePbcInvokeRequest& setBody(PbcInvokeCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcInvokeCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
