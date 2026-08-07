// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORIZATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORIZATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetAuthorizationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorizationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiresInHours, expiresInHours_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorizationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiresInHours, expiresInHours_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetAuthorizationTokenRequest() = default ;
    GetAuthorizationTokenRequest(const GetAuthorizationTokenRequest &) = default ;
    GetAuthorizationTokenRequest(GetAuthorizationTokenRequest &&) = default ;
    GetAuthorizationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorizationTokenRequest() = default ;
    GetAuthorizationTokenRequest& operator=(const GetAuthorizationTokenRequest &) = default ;
    GetAuthorizationTokenRequest& operator=(GetAuthorizationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiresInHours_ == nullptr
        && this->instanceId_ == nullptr; };
    // expiresInHours Field Functions 
    bool hasExpiresInHours() const { return this->expiresInHours_ != nullptr;};
    void deleteExpiresInHours() { this->expiresInHours_ = nullptr;};
    inline int32_t getExpiresInHours() const { DARABONBA_PTR_GET_DEFAULT(expiresInHours_, 0) };
    inline GetAuthorizationTokenRequest& setExpiresInHours(int32_t expiresInHours) { DARABONBA_PTR_SET_VALUE(expiresInHours_, expiresInHours) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAuthorizationTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The validity period of the temporary credential in hours. Valid values: 1 to 24. When you use STS to call this operation, the actual validity period is the minimum of the STS token validity period and this parameter value.
    shared_ptr<int32_t> expiresInHours_ {};
    // The repository instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
