// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class CreateServiceLinkedRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdkRequest, sdkRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdkRequest, sdkRequest_);
    };
    CreateServiceLinkedRoleRequest() = default ;
    CreateServiceLinkedRoleRequest(const CreateServiceLinkedRoleRequest &) = default ;
    CreateServiceLinkedRoleRequest(CreateServiceLinkedRoleRequest &&) = default ;
    CreateServiceLinkedRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceLinkedRoleRequest() = default ;
    CreateServiceLinkedRoleRequest& operator=(const CreateServiceLinkedRoleRequest &) = default ;
    CreateServiceLinkedRoleRequest& operator=(CreateServiceLinkedRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdkRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdkRequest& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceLinkedRole, serviceLinkedRole_);
      };
      friend void from_json(const Darabonba::Json& j, SdkRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceLinkedRole, serviceLinkedRole_);
      };
      SdkRequest() = default ;
      SdkRequest(const SdkRequest &) = default ;
      SdkRequest(SdkRequest &&) = default ;
      SdkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdkRequest() = default ;
      SdkRequest& operator=(const SdkRequest &) = default ;
      SdkRequest& operator=(SdkRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serviceLinkedRole_ == nullptr; };
      // serviceLinkedRole Field Functions 
      bool hasServiceLinkedRole() const { return this->serviceLinkedRole_ != nullptr;};
      void deleteServiceLinkedRole() { this->serviceLinkedRole_ = nullptr;};
      inline string getServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(serviceLinkedRole_, "") };
      inline SdkRequest& setServiceLinkedRole(string serviceLinkedRole) { DARABONBA_PTR_SET_VALUE(serviceLinkedRole_, serviceLinkedRole) };


    protected:
      shared_ptr<string> serviceLinkedRole_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sdkRequest_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceLinkedRoleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdkRequest Field Functions 
    bool hasSdkRequest() const { return this->sdkRequest_ != nullptr;};
    void deleteSdkRequest() { this->sdkRequest_ = nullptr;};
    inline const CreateServiceLinkedRoleRequest::SdkRequest & getSdkRequest() const { DARABONBA_PTR_GET_CONST(sdkRequest_, CreateServiceLinkedRoleRequest::SdkRequest) };
    inline CreateServiceLinkedRoleRequest::SdkRequest getSdkRequest() { DARABONBA_PTR_GET(sdkRequest_, CreateServiceLinkedRoleRequest::SdkRequest) };
    inline CreateServiceLinkedRoleRequest& setSdkRequest(const CreateServiceLinkedRoleRequest::SdkRequest & sdkRequest) { DARABONBA_PTR_SET_VALUE(sdkRequest_, sdkRequest) };
    inline CreateServiceLinkedRoleRequest& setSdkRequest(CreateServiceLinkedRoleRequest::SdkRequest && sdkRequest) { DARABONBA_PTR_SET_RVALUE(sdkRequest_, sdkRequest) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<CreateServiceLinkedRoleRequest::SdkRequest> sdkRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
