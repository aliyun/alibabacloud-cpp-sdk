// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGREYPDPSERVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGREYPDPSERVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PdpGreyServiceGroupCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateGreyPdpServiceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGreyPdpServiceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGreyPdpServiceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateGreyPdpServiceGroupRequest() = default ;
    CreateGreyPdpServiceGroupRequest(const CreateGreyPdpServiceGroupRequest &) = default ;
    CreateGreyPdpServiceGroupRequest(CreateGreyPdpServiceGroupRequest &&) = default ;
    CreateGreyPdpServiceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGreyPdpServiceGroupRequest() = default ;
    CreateGreyPdpServiceGroupRequest& operator=(const CreateGreyPdpServiceGroupRequest &) = default ;
    CreateGreyPdpServiceGroupRequest& operator=(CreateGreyPdpServiceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PdpGreyServiceGroupCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PdpGreyServiceGroupCreateCmd) };
    inline PdpGreyServiceGroupCreateCmd getBody() { DARABONBA_PTR_GET(body_, PdpGreyServiceGroupCreateCmd) };
    inline CreateGreyPdpServiceGroupRequest& setBody(const PdpGreyServiceGroupCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateGreyPdpServiceGroupRequest& setBody(PdpGreyServiceGroupCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PdpGreyServiceGroupCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
