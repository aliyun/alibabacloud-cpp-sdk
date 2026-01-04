// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBRANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBRANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetBrandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBrandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBrandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBrandResponseBody() = default ;
    GetBrandResponseBody(const GetBrandResponseBody &) = default ;
    GetBrandResponseBody(GetBrandResponseBody &&) = default ;
    GetBrandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBrandResponseBody() = default ;
    GetBrandResponseBody& operator=(const GetBrandResponseBody &) = default ;
    GetBrandResponseBody& operator=(GetBrandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Brand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Brand& obj) { 
        DARABONBA_PTR_TO_JSON(BrandId, brandId_);
        DARABONBA_PTR_TO_JSON(BrandName, brandName_);
        DARABONBA_PTR_TO_JSON(BrandType, brandType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Brand& obj) { 
        DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
        DARABONBA_PTR_FROM_JSON(BrandName, brandName_);
        DARABONBA_PTR_FROM_JSON(BrandType, brandType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Brand() = default ;
      Brand(const Brand &) = default ;
      Brand(Brand &&) = default ;
      Brand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Brand() = default ;
      Brand& operator=(const Brand &) = default ;
      Brand& operator=(Brand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->brandId_ == nullptr
        && this->brandName_ == nullptr && this->brandType_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr; };
      // brandId Field Functions 
      bool hasBrandId() const { return this->brandId_ != nullptr;};
      void deleteBrandId() { this->brandId_ = nullptr;};
      inline string getBrandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
      inline Brand& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


      // brandName Field Functions 
      bool hasBrandName() const { return this->brandName_ != nullptr;};
      void deleteBrandName() { this->brandName_ = nullptr;};
      inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
      inline Brand& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


      // brandType Field Functions 
      bool hasBrandType() const { return this->brandType_ != nullptr;};
      void deleteBrandType() { this->brandType_ = nullptr;};
      inline string getBrandType() const { DARABONBA_PTR_GET_DEFAULT(brandType_, "") };
      inline Brand& setBrandType(string brandType) { DARABONBA_PTR_SET_VALUE(brandType_, brandType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Brand& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Brand& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // 品牌ID
      shared_ptr<string> brandId_ {};
      // 品牌名称
      shared_ptr<string> brandName_ {};
      // 品牌类型
      shared_ptr<string> brandType_ {};
      // 实例ID。
      shared_ptr<string> instanceId_ {};
      // 品牌状态
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->brand_ == nullptr
        && this->requestId_ == nullptr; };
    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline const GetBrandResponseBody::Brand & getBrand() const { DARABONBA_PTR_GET_CONST(brand_, GetBrandResponseBody::Brand) };
    inline GetBrandResponseBody::Brand getBrand() { DARABONBA_PTR_GET(brand_, GetBrandResponseBody::Brand) };
    inline GetBrandResponseBody& setBrand(const GetBrandResponseBody::Brand & brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };
    inline GetBrandResponseBody& setBrand(GetBrandResponseBody::Brand && brand) { DARABONBA_PTR_SET_RVALUE(brand_, brand) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBrandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetBrandResponseBody::Brand> brand_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
