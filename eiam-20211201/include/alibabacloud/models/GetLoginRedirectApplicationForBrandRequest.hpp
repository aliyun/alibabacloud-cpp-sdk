// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINREDIRECTAPPLICATIONFORBRANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINREDIRECTAPPLICATIONFORBRANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetLoginRedirectApplicationForBrandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginRedirectApplicationForBrandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandId, brandId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginRedirectApplicationForBrandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetLoginRedirectApplicationForBrandRequest() = default ;
    GetLoginRedirectApplicationForBrandRequest(const GetLoginRedirectApplicationForBrandRequest &) = default ;
    GetLoginRedirectApplicationForBrandRequest(GetLoginRedirectApplicationForBrandRequest &&) = default ;
    GetLoginRedirectApplicationForBrandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginRedirectApplicationForBrandRequest() = default ;
    GetLoginRedirectApplicationForBrandRequest& operator=(const GetLoginRedirectApplicationForBrandRequest &) = default ;
    GetLoginRedirectApplicationForBrandRequest& operator=(GetLoginRedirectApplicationForBrandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandId_ == nullptr
        && this->instanceId_ == nullptr; };
    // brandId Field Functions 
    bool hasBrandId() const { return this->brandId_ != nullptr;};
    void deleteBrandId() { this->brandId_ = nullptr;};
    inline string getBrandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
    inline GetLoginRedirectApplicationForBrandRequest& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLoginRedirectApplicationForBrandRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
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
