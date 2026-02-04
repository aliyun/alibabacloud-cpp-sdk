// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGUSERPRIMARYORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGUSERPRIMARYORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserPrimaryOrganizationalUnitId, userPrimaryOrganizationalUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserPrimaryOrganizationalUnitId, userPrimaryOrganizationalUnitId_);
    };
    GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody() = default ;
    GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody(const GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody &) = default ;
    GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody(GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody &&) = default ;
    GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody() = default ;
    GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& operator=(const GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody &) = default ;
    GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& operator=(GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userPrimaryOrganizationalUnitId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userPrimaryOrganizationalUnitId Field Functions 
    bool hasUserPrimaryOrganizationalUnitId() const { return this->userPrimaryOrganizationalUnitId_ != nullptr;};
    void deleteUserPrimaryOrganizationalUnitId() { this->userPrimaryOrganizationalUnitId_ = nullptr;};
    inline string getUserPrimaryOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(userPrimaryOrganizationalUnitId_, "") };
    inline GetApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& setUserPrimaryOrganizationalUnitId(string userPrimaryOrganizationalUnitId) { DARABONBA_PTR_SET_VALUE(userPrimaryOrganizationalUnitId_, userPrimaryOrganizationalUnitId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> userPrimaryOrganizationalUnitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
