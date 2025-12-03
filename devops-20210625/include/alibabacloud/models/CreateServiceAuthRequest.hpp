// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateServiceAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(serviceAuthType, serviceAuthType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceAuthType, serviceAuthType_);
    };
    CreateServiceAuthRequest() = default ;
    CreateServiceAuthRequest(const CreateServiceAuthRequest &) = default ;
    CreateServiceAuthRequest(CreateServiceAuthRequest &&) = default ;
    CreateServiceAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAuthRequest() = default ;
    CreateServiceAuthRequest& operator=(const CreateServiceAuthRequest &) = default ;
    CreateServiceAuthRequest& operator=(CreateServiceAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceAuthType_ == nullptr; };
    // serviceAuthType Field Functions 
    bool hasServiceAuthType() const { return this->serviceAuthType_ != nullptr;};
    void deleteServiceAuthType() { this->serviceAuthType_ = nullptr;};
    inline string serviceAuthType() const { DARABONBA_PTR_GET_DEFAULT(serviceAuthType_, "") };
    inline CreateServiceAuthRequest& setServiceAuthType(string serviceAuthType) { DARABONBA_PTR_SET_VALUE(serviceAuthType_, serviceAuthType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> serviceAuthType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
