// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPDPPBCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPDPPBCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PdpPbcUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdatePdpPbcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePdpPbcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePdpPbcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePdpPbcRequest() = default ;
    UpdatePdpPbcRequest(const UpdatePdpPbcRequest &) = default ;
    UpdatePdpPbcRequest(UpdatePdpPbcRequest &&) = default ;
    UpdatePdpPbcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePdpPbcRequest() = default ;
    UpdatePdpPbcRequest& operator=(const UpdatePdpPbcRequest &) = default ;
    UpdatePdpPbcRequest& operator=(UpdatePdpPbcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PdpPbcUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PdpPbcUpdateCmd) };
    inline PdpPbcUpdateCmd getBody() { DARABONBA_PTR_GET(body_, PdpPbcUpdateCmd) };
    inline UpdatePdpPbcRequest& setBody(const PdpPbcUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePdpPbcRequest& setBody(PdpPbcUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PdpPbcUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
