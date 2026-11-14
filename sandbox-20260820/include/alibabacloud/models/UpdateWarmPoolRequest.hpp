// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWARMPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWARMPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWarmPoolInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class UpdateWarmPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWarmPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWarmPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateWarmPoolRequest() = default ;
    UpdateWarmPoolRequest(const UpdateWarmPoolRequest &) = default ;
    UpdateWarmPoolRequest(UpdateWarmPoolRequest &&) = default ;
    UpdateWarmPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWarmPoolRequest() = default ;
    UpdateWarmPoolRequest& operator=(const UpdateWarmPoolRequest &) = default ;
    UpdateWarmPoolRequest& operator=(UpdateWarmPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateWarmPoolInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateWarmPoolInput) };
    inline UpdateWarmPoolInput getBody() { DARABONBA_PTR_GET(body_, UpdateWarmPoolInput) };
    inline UpdateWarmPoolRequest& setBody(const UpdateWarmPoolInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateWarmPoolRequest& setBody(UpdateWarmPoolInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body, which contains the warm pool configuration.
    shared_ptr<UpdateWarmPoolInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
