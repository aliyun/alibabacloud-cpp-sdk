// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAPPLICATIONPROVISIONINGUSERPRIMARYORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKAPPLICATIONPROVISIONINGUSERPRIMARYORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckApplicationProvisioningUserPrimaryOuResult, checkApplicationProvisioningUserPrimaryOuResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckApplicationProvisioningUserPrimaryOuResult, checkApplicationProvisioningUserPrimaryOuResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody() = default ;
    CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody(const CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody &) = default ;
    CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody(CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody &&) = default ;
    CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody() = default ;
    CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& operator=(const CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody &) = default ;
    CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& operator=(CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckApplicationProvisioningUserPrimaryOuResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckApplicationProvisioningUserPrimaryOuResult& obj) { 
        DARABONBA_PTR_TO_JSON(AllowAuthorization, allowAuthorization_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, CheckApplicationProvisioningUserPrimaryOuResult& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowAuthorization, allowAuthorization_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      CheckApplicationProvisioningUserPrimaryOuResult() = default ;
      CheckApplicationProvisioningUserPrimaryOuResult(const CheckApplicationProvisioningUserPrimaryOuResult &) = default ;
      CheckApplicationProvisioningUserPrimaryOuResult(CheckApplicationProvisioningUserPrimaryOuResult &&) = default ;
      CheckApplicationProvisioningUserPrimaryOuResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckApplicationProvisioningUserPrimaryOuResult() = default ;
      CheckApplicationProvisioningUserPrimaryOuResult& operator=(const CheckApplicationProvisioningUserPrimaryOuResult &) = default ;
      CheckApplicationProvisioningUserPrimaryOuResult& operator=(CheckApplicationProvisioningUserPrimaryOuResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowAuthorization_ == nullptr
        && this->applicationId_ == nullptr && this->instanceId_ == nullptr; };
      // allowAuthorization Field Functions 
      bool hasAllowAuthorization() const { return this->allowAuthorization_ != nullptr;};
      void deleteAllowAuthorization() { this->allowAuthorization_ = nullptr;};
      inline bool getAllowAuthorization() const { DARABONBA_PTR_GET_DEFAULT(allowAuthorization_, false) };
      inline CheckApplicationProvisioningUserPrimaryOuResult& setAllowAuthorization(bool allowAuthorization) { DARABONBA_PTR_SET_VALUE(allowAuthorization_, allowAuthorization) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline CheckApplicationProvisioningUserPrimaryOuResult& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CheckApplicationProvisioningUserPrimaryOuResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // 是否授权
      shared_ptr<bool> allowAuthorization_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> applicationId_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->checkApplicationProvisioningUserPrimaryOuResult_ == nullptr
        && this->requestId_ == nullptr; };
    // checkApplicationProvisioningUserPrimaryOuResult Field Functions 
    bool hasCheckApplicationProvisioningUserPrimaryOuResult() const { return this->checkApplicationProvisioningUserPrimaryOuResult_ != nullptr;};
    void deleteCheckApplicationProvisioningUserPrimaryOuResult() { this->checkApplicationProvisioningUserPrimaryOuResult_ = nullptr;};
    inline const CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody::CheckApplicationProvisioningUserPrimaryOuResult & getCheckApplicationProvisioningUserPrimaryOuResult() const { DARABONBA_PTR_GET_CONST(checkApplicationProvisioningUserPrimaryOuResult_, CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody::CheckApplicationProvisioningUserPrimaryOuResult) };
    inline CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody::CheckApplicationProvisioningUserPrimaryOuResult getCheckApplicationProvisioningUserPrimaryOuResult() { DARABONBA_PTR_GET(checkApplicationProvisioningUserPrimaryOuResult_, CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody::CheckApplicationProvisioningUserPrimaryOuResult) };
    inline CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& setCheckApplicationProvisioningUserPrimaryOuResult(const CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody::CheckApplicationProvisioningUserPrimaryOuResult & checkApplicationProvisioningUserPrimaryOuResult) { DARABONBA_PTR_SET_VALUE(checkApplicationProvisioningUserPrimaryOuResult_, checkApplicationProvisioningUserPrimaryOuResult) };
    inline CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& setCheckApplicationProvisioningUserPrimaryOuResult(CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody::CheckApplicationProvisioningUserPrimaryOuResult && checkApplicationProvisioningUserPrimaryOuResult) { DARABONBA_PTR_SET_RVALUE(checkApplicationProvisioningUserPrimaryOuResult_, checkApplicationProvisioningUserPrimaryOuResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponseBody::CheckApplicationProvisioningUserPrimaryOuResult> checkApplicationProvisioningUserPrimaryOuResult_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
