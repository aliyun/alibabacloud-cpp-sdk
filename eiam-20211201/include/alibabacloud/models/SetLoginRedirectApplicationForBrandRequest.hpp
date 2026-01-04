// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLOGINREDIRECTAPPLICATIONFORBRANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLOGINREDIRECTAPPLICATIONFORBRANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetLoginRedirectApplicationForBrandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLoginRedirectApplicationForBrandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(BrandId, brandId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLoginRedirectApplicationForBrandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SetLoginRedirectApplicationForBrandRequest() = default ;
    SetLoginRedirectApplicationForBrandRequest(const SetLoginRedirectApplicationForBrandRequest &) = default ;
    SetLoginRedirectApplicationForBrandRequest(SetLoginRedirectApplicationForBrandRequest &&) = default ;
    SetLoginRedirectApplicationForBrandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLoginRedirectApplicationForBrandRequest() = default ;
    SetLoginRedirectApplicationForBrandRequest& operator=(const SetLoginRedirectApplicationForBrandRequest &) = default ;
    SetLoginRedirectApplicationForBrandRequest& operator=(SetLoginRedirectApplicationForBrandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->brandId_ == nullptr && this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SetLoginRedirectApplicationForBrandRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // brandId Field Functions 
    bool hasBrandId() const { return this->brandId_ != nullptr;};
    void deleteBrandId() { this->brandId_ = nullptr;};
    inline string getBrandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
    inline SetLoginRedirectApplicationForBrandRequest& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetLoginRedirectApplicationForBrandRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 应用ID
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 品牌化Id
    // 
    // This parameter is required.
    shared_ptr<string> brandId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
