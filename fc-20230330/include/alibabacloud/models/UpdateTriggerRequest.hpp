// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTriggerInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateTriggerRequest() = default ;
    UpdateTriggerRequest(const UpdateTriggerRequest &) = default ;
    UpdateTriggerRequest(UpdateTriggerRequest &&) = default ;
    UpdateTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTriggerRequest() = default ;
    UpdateTriggerRequest& operator=(const UpdateTriggerRequest &) = default ;
    UpdateTriggerRequest& operator=(UpdateTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateTriggerInput & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateTriggerInput) };
    inline UpdateTriggerInput body() { DARABONBA_PTR_GET(body_, UpdateTriggerInput) };
    inline UpdateTriggerRequest& setBody(const UpdateTriggerInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTriggerRequest& setBody(UpdateTriggerInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The trigger configurations.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateTriggerInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
