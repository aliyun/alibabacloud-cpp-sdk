// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPBCVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPBCVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcVersionCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdatePbcVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePbcVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePbcVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePbcVersionRequest() = default ;
    UpdatePbcVersionRequest(const UpdatePbcVersionRequest &) = default ;
    UpdatePbcVersionRequest(UpdatePbcVersionRequest &&) = default ;
    UpdatePbcVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePbcVersionRequest() = default ;
    UpdatePbcVersionRequest& operator=(const UpdatePbcVersionRequest &) = default ;
    UpdatePbcVersionRequest& operator=(UpdatePbcVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcVersionCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcVersionCmd) };
    inline PbcVersionCmd getBody() { DARABONBA_PTR_GET(body_, PbcVersionCmd) };
    inline UpdatePbcVersionRequest& setBody(const PbcVersionCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePbcVersionRequest& setBody(PbcVersionCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcVersionCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
