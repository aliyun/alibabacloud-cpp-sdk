// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEVELOPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEVELOPERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeveloperInfoUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateDeveloperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeveloperRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeveloperRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateDeveloperRequest() = default ;
    UpdateDeveloperRequest(const UpdateDeveloperRequest &) = default ;
    UpdateDeveloperRequest(UpdateDeveloperRequest &&) = default ;
    UpdateDeveloperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeveloperRequest() = default ;
    UpdateDeveloperRequest& operator=(const UpdateDeveloperRequest &) = default ;
    UpdateDeveloperRequest& operator=(UpdateDeveloperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeveloperInfoUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeveloperInfoUpdateCmd) };
    inline DeveloperInfoUpdateCmd getBody() { DARABONBA_PTR_GET(body_, DeveloperInfoUpdateCmd) };
    inline UpdateDeveloperRequest& setBody(const DeveloperInfoUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateDeveloperRequest& setBody(DeveloperInfoUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<DeveloperInfoUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
