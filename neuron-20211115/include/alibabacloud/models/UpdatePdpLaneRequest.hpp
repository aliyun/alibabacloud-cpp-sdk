// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPDPLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPDPLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PdpLaneUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdatePdpLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePdpLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePdpLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePdpLaneRequest() = default ;
    UpdatePdpLaneRequest(const UpdatePdpLaneRequest &) = default ;
    UpdatePdpLaneRequest(UpdatePdpLaneRequest &&) = default ;
    UpdatePdpLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePdpLaneRequest() = default ;
    UpdatePdpLaneRequest& operator=(const UpdatePdpLaneRequest &) = default ;
    UpdatePdpLaneRequest& operator=(UpdatePdpLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PdpLaneUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PdpLaneUpdateCmd) };
    inline PdpLaneUpdateCmd getBody() { DARABONBA_PTR_GET(body_, PdpLaneUpdateCmd) };
    inline UpdatePdpLaneRequest& setBody(const PdpLaneUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePdpLaneRequest& setBody(PdpLaneUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<PdpLaneUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
