// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateModelServiceInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateModelServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateModelServiceRequest() = default ;
    UpdateModelServiceRequest(const UpdateModelServiceRequest &) = default ;
    UpdateModelServiceRequest(UpdateModelServiceRequest &&) = default ;
    UpdateModelServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelServiceRequest() = default ;
    UpdateModelServiceRequest& operator=(const UpdateModelServiceRequest &) = default ;
    UpdateModelServiceRequest& operator=(UpdateModelServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateModelServiceInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateModelServiceInput) };
    inline UpdateModelServiceInput getBody() { DARABONBA_PTR_GET(body_, UpdateModelServiceInput) };
    inline UpdateModelServiceRequest& setBody(const UpdateModelServiceInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateModelServiceRequest& setBody(UpdateModelServiceInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateModelServiceInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
