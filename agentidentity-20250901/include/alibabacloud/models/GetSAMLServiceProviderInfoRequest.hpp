// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAMLSERVICEPROVIDERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSAMLSERVICEPROVIDERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetSAMLServiceProviderInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSAMLServiceProviderInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSAMLServiceProviderInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    GetSAMLServiceProviderInfoRequest() = default ;
    GetSAMLServiceProviderInfoRequest(const GetSAMLServiceProviderInfoRequest &) = default ;
    GetSAMLServiceProviderInfoRequest(GetSAMLServiceProviderInfoRequest &&) = default ;
    GetSAMLServiceProviderInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSAMLServiceProviderInfoRequest() = default ;
    GetSAMLServiceProviderInfoRequest& operator=(const GetSAMLServiceProviderInfoRequest &) = default ;
    GetSAMLServiceProviderInfoRequest& operator=(GetSAMLServiceProviderInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPoolName_ == nullptr; };
    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline GetSAMLServiceProviderInfoRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
