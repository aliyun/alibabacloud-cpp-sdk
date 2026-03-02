// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPDPSERVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPDPSERVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PdpServiceGroupUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdatePdpServiceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePdpServiceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePdpServiceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePdpServiceGroupRequest() = default ;
    UpdatePdpServiceGroupRequest(const UpdatePdpServiceGroupRequest &) = default ;
    UpdatePdpServiceGroupRequest(UpdatePdpServiceGroupRequest &&) = default ;
    UpdatePdpServiceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePdpServiceGroupRequest() = default ;
    UpdatePdpServiceGroupRequest& operator=(const UpdatePdpServiceGroupRequest &) = default ;
    UpdatePdpServiceGroupRequest& operator=(UpdatePdpServiceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PdpServiceGroupUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PdpServiceGroupUpdateCmd) };
    inline PdpServiceGroupUpdateCmd getBody() { DARABONBA_PTR_GET(body_, PdpServiceGroupUpdateCmd) };
    inline UpdatePdpServiceGroupRequest& setBody(const PdpServiceGroupUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePdpServiceGroupRequest& setBody(PdpServiceGroupUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PdpServiceGroupUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
