// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPBCINSTRUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPBCINSTRUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcInstructionUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdatePbcInstructionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePbcInstructionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePbcInstructionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePbcInstructionRequest() = default ;
    UpdatePbcInstructionRequest(const UpdatePbcInstructionRequest &) = default ;
    UpdatePbcInstructionRequest(UpdatePbcInstructionRequest &&) = default ;
    UpdatePbcInstructionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePbcInstructionRequest() = default ;
    UpdatePbcInstructionRequest& operator=(const UpdatePbcInstructionRequest &) = default ;
    UpdatePbcInstructionRequest& operator=(UpdatePbcInstructionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcInstructionUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcInstructionUpdateCmd) };
    inline PbcInstructionUpdateCmd getBody() { DARABONBA_PTR_GET(body_, PbcInstructionUpdateCmd) };
    inline UpdatePbcInstructionRequest& setBody(const PbcInstructionUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePbcInstructionRequest& setBody(PbcInstructionUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcInstructionUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
