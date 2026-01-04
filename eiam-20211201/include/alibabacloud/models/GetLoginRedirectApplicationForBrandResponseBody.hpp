// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINREDIRECTAPPLICATIONFORBRANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINREDIRECTAPPLICATIONFORBRANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetLoginRedirectApplicationForBrandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginRedirectApplicationForBrandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BrandLoginRedirectApplication, brandLoginRedirectApplication_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginRedirectApplicationForBrandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandLoginRedirectApplication, brandLoginRedirectApplication_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLoginRedirectApplicationForBrandResponseBody() = default ;
    GetLoginRedirectApplicationForBrandResponseBody(const GetLoginRedirectApplicationForBrandResponseBody &) = default ;
    GetLoginRedirectApplicationForBrandResponseBody(GetLoginRedirectApplicationForBrandResponseBody &&) = default ;
    GetLoginRedirectApplicationForBrandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginRedirectApplicationForBrandResponseBody() = default ;
    GetLoginRedirectApplicationForBrandResponseBody& operator=(const GetLoginRedirectApplicationForBrandResponseBody &) = default ;
    GetLoginRedirectApplicationForBrandResponseBody& operator=(GetLoginRedirectApplicationForBrandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BrandLoginRedirectApplication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BrandLoginRedirectApplication& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(BrandId, brandId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, BrandLoginRedirectApplication& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      BrandLoginRedirectApplication() = default ;
      BrandLoginRedirectApplication(const BrandLoginRedirectApplication &) = default ;
      BrandLoginRedirectApplication(BrandLoginRedirectApplication &&) = default ;
      BrandLoginRedirectApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BrandLoginRedirectApplication() = default ;
      BrandLoginRedirectApplication& operator=(const BrandLoginRedirectApplication &) = default ;
      BrandLoginRedirectApplication& operator=(BrandLoginRedirectApplication &&) = default ;
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
      inline BrandLoginRedirectApplication& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // brandId Field Functions 
      bool hasBrandId() const { return this->brandId_ != nullptr;};
      void deleteBrandId() { this->brandId_ = nullptr;};
      inline string getBrandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
      inline BrandLoginRedirectApplication& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline BrandLoginRedirectApplication& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // 应用ID
      shared_ptr<string> applicationId_ {};
      // 品牌ID
      shared_ptr<string> brandId_ {};
      // 实例ID
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->brandLoginRedirectApplication_ == nullptr
        && this->requestId_ == nullptr; };
    // brandLoginRedirectApplication Field Functions 
    bool hasBrandLoginRedirectApplication() const { return this->brandLoginRedirectApplication_ != nullptr;};
    void deleteBrandLoginRedirectApplication() { this->brandLoginRedirectApplication_ = nullptr;};
    inline const GetLoginRedirectApplicationForBrandResponseBody::BrandLoginRedirectApplication & getBrandLoginRedirectApplication() const { DARABONBA_PTR_GET_CONST(brandLoginRedirectApplication_, GetLoginRedirectApplicationForBrandResponseBody::BrandLoginRedirectApplication) };
    inline GetLoginRedirectApplicationForBrandResponseBody::BrandLoginRedirectApplication getBrandLoginRedirectApplication() { DARABONBA_PTR_GET(brandLoginRedirectApplication_, GetLoginRedirectApplicationForBrandResponseBody::BrandLoginRedirectApplication) };
    inline GetLoginRedirectApplicationForBrandResponseBody& setBrandLoginRedirectApplication(const GetLoginRedirectApplicationForBrandResponseBody::BrandLoginRedirectApplication & brandLoginRedirectApplication) { DARABONBA_PTR_SET_VALUE(brandLoginRedirectApplication_, brandLoginRedirectApplication) };
    inline GetLoginRedirectApplicationForBrandResponseBody& setBrandLoginRedirectApplication(GetLoginRedirectApplicationForBrandResponseBody::BrandLoginRedirectApplication && brandLoginRedirectApplication) { DARABONBA_PTR_SET_RVALUE(brandLoginRedirectApplication_, brandLoginRedirectApplication) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginRedirectApplicationForBrandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetLoginRedirectApplicationForBrandResponseBody::BrandLoginRedirectApplication> brandLoginRedirectApplication_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
