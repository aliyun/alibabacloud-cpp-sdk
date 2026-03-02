// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPBCAPISCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPBCAPISCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcApiSchemaUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdatePbcApiSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePbcApiSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePbcApiSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePbcApiSchemaRequest() = default ;
    UpdatePbcApiSchemaRequest(const UpdatePbcApiSchemaRequest &) = default ;
    UpdatePbcApiSchemaRequest(UpdatePbcApiSchemaRequest &&) = default ;
    UpdatePbcApiSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePbcApiSchemaRequest() = default ;
    UpdatePbcApiSchemaRequest& operator=(const UpdatePbcApiSchemaRequest &) = default ;
    UpdatePbcApiSchemaRequest& operator=(UpdatePbcApiSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcApiSchemaUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcApiSchemaUpdateCmd) };
    inline PbcApiSchemaUpdateCmd getBody() { DARABONBA_PTR_GET(body_, PbcApiSchemaUpdateCmd) };
    inline UpdatePbcApiSchemaRequest& setBody(const PbcApiSchemaUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePbcApiSchemaRequest& setBody(PbcApiSchemaUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcApiSchemaUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
