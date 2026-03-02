// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPDPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPDPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PdpConfigUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdatePdpConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePdpConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePdpConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePdpConfigRequest() = default ;
    UpdatePdpConfigRequest(const UpdatePdpConfigRequest &) = default ;
    UpdatePdpConfigRequest(UpdatePdpConfigRequest &&) = default ;
    UpdatePdpConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePdpConfigRequest() = default ;
    UpdatePdpConfigRequest& operator=(const UpdatePdpConfigRequest &) = default ;
    UpdatePdpConfigRequest& operator=(UpdatePdpConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PdpConfigUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PdpConfigUpdateCmd) };
    inline PdpConfigUpdateCmd getBody() { DARABONBA_PTR_GET(body_, PdpConfigUpdateCmd) };
    inline UpdatePdpConfigRequest& setBody(const PdpConfigUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePdpConfigRequest& setBody(PdpConfigUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PdpConfigUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
