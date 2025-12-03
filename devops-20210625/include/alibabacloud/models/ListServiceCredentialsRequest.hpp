// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListServiceCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(serviceCredentialType, serviceCredentialType_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceCredentialType, serviceCredentialType_);
    };
    ListServiceCredentialsRequest() = default ;
    ListServiceCredentialsRequest(const ListServiceCredentialsRequest &) = default ;
    ListServiceCredentialsRequest(ListServiceCredentialsRequest &&) = default ;
    ListServiceCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceCredentialsRequest() = default ;
    ListServiceCredentialsRequest& operator=(const ListServiceCredentialsRequest &) = default ;
    ListServiceCredentialsRequest& operator=(ListServiceCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceCredentialType_ == nullptr; };
    // serviceCredentialType Field Functions 
    bool hasServiceCredentialType() const { return this->serviceCredentialType_ != nullptr;};
    void deleteServiceCredentialType() { this->serviceCredentialType_ = nullptr;};
    inline string serviceCredentialType() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialType_, "") };
    inline ListServiceCredentialsRequest& setServiceCredentialType(string serviceCredentialType) { DARABONBA_PTR_SET_VALUE(serviceCredentialType_, serviceCredentialType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> serviceCredentialType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
