// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateGatewayNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateGatewayNameRequest() = default ;
    UpdateGatewayNameRequest(const UpdateGatewayNameRequest &) = default ;
    UpdateGatewayNameRequest(UpdateGatewayNameRequest &&) = default ;
    UpdateGatewayNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayNameRequest() = default ;
    UpdateGatewayNameRequest& operator=(const UpdateGatewayNameRequest &) = default ;
    UpdateGatewayNameRequest& operator=(UpdateGatewayNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayNameRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Gateway name.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
