// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ComponentUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateComponentRequest() = default ;
    UpdateComponentRequest(const UpdateComponentRequest &) = default ;
    UpdateComponentRequest(UpdateComponentRequest &&) = default ;
    UpdateComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComponentRequest() = default ;
    UpdateComponentRequest& operator=(const UpdateComponentRequest &) = default ;
    UpdateComponentRequest& operator=(UpdateComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ComponentUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ComponentUpdateCmd) };
    inline ComponentUpdateCmd getBody() { DARABONBA_PTR_GET(body_, ComponentUpdateCmd) };
    inline UpdateComponentRequest& setBody(const ComponentUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateComponentRequest& setBody(ComponentUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<ComponentUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
