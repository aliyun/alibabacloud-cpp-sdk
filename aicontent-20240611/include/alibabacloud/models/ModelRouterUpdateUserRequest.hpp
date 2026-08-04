// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERUPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERUPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterUpdateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterUpdateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterUpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
    };
    ModelRouterUpdateUserRequest() = default ;
    ModelRouterUpdateUserRequest(const ModelRouterUpdateUserRequest &) = default ;
    ModelRouterUpdateUserRequest(ModelRouterUpdateUserRequest &&) = default ;
    ModelRouterUpdateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterUpdateUserRequest() = default ;
    ModelRouterUpdateUserRequest& operator=(const ModelRouterUpdateUserRequest &) = default ;
    ModelRouterUpdateUserRequest& operator=(ModelRouterUpdateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->phone_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelRouterUpdateUserRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ModelRouterUpdateUserRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    // The name of the user.
    shared_ptr<string> name_ {};
    // The phone number of the user.
    shared_ptr<string> phone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
