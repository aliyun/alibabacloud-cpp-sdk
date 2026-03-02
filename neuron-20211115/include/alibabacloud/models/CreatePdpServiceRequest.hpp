// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPDPSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPDPSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PdpService.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePdpServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePdpServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePdpServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePdpServiceRequest() = default ;
    CreatePdpServiceRequest(const CreatePdpServiceRequest &) = default ;
    CreatePdpServiceRequest(CreatePdpServiceRequest &&) = default ;
    CreatePdpServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePdpServiceRequest() = default ;
    CreatePdpServiceRequest& operator=(const CreatePdpServiceRequest &) = default ;
    CreatePdpServiceRequest& operator=(CreatePdpServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PdpService & getBody() const { DARABONBA_PTR_GET_CONST(body_, PdpService) };
    inline PdpService getBody() { DARABONBA_PTR_GET(body_, PdpService) };
    inline CreatePdpServiceRequest& setBody(const PdpService & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePdpServiceRequest& setBody(PdpService && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PdpService> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
