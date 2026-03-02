// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPDPSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPDPSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PdpServiceUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdatePdpServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePdpServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePdpServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePdpServiceRequest() = default ;
    UpdatePdpServiceRequest(const UpdatePdpServiceRequest &) = default ;
    UpdatePdpServiceRequest(UpdatePdpServiceRequest &&) = default ;
    UpdatePdpServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePdpServiceRequest() = default ;
    UpdatePdpServiceRequest& operator=(const UpdatePdpServiceRequest &) = default ;
    UpdatePdpServiceRequest& operator=(UpdatePdpServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PdpServiceUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PdpServiceUpdateCmd) };
    inline PdpServiceUpdateCmd getBody() { DARABONBA_PTR_GET(body_, PdpServiceUpdateCmd) };
    inline UpdatePdpServiceRequest& setBody(const PdpServiceUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePdpServiceRequest& setBody(PdpServiceUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PdpServiceUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
