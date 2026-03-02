// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPDPLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPDPLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PdpLaneCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePdpLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePdpLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePdpLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePdpLaneRequest() = default ;
    CreatePdpLaneRequest(const CreatePdpLaneRequest &) = default ;
    CreatePdpLaneRequest(CreatePdpLaneRequest &&) = default ;
    CreatePdpLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePdpLaneRequest() = default ;
    CreatePdpLaneRequest& operator=(const CreatePdpLaneRequest &) = default ;
    CreatePdpLaneRequest& operator=(CreatePdpLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PdpLaneCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PdpLaneCreateCmd) };
    inline PdpLaneCreateCmd getBody() { DARABONBA_PTR_GET(body_, PdpLaneCreateCmd) };
    inline CreatePdpLaneRequest& setBody(const PdpLaneCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePdpLaneRequest& setBody(PdpLaneCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PdpLaneCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
