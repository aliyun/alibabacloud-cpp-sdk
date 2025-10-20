// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBRANDSRESPONSEBODYBRANDS_HPP_
#define ALIBABACLOUD_MODELS_LISTBRANDSRESPONSEBODYBRANDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListBrandsResponseBodyBrands : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrandsResponseBodyBrands& obj) { 
      DARABONBA_PTR_TO_JSON(BrandId, brandId_);
      DARABONBA_PTR_TO_JSON(BrandName, brandName_);
      DARABONBA_PTR_TO_JSON(BrandType, brandType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrandsResponseBodyBrands& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
      DARABONBA_PTR_FROM_JSON(BrandName, brandName_);
      DARABONBA_PTR_FROM_JSON(BrandType, brandType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListBrandsResponseBodyBrands() = default ;
    ListBrandsResponseBodyBrands(const ListBrandsResponseBodyBrands &) = default ;
    ListBrandsResponseBodyBrands(ListBrandsResponseBodyBrands &&) = default ;
    ListBrandsResponseBodyBrands(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrandsResponseBodyBrands() = default ;
    ListBrandsResponseBodyBrands& operator=(const ListBrandsResponseBodyBrands &) = default ;
    ListBrandsResponseBodyBrands& operator=(ListBrandsResponseBodyBrands &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandId_ == nullptr
        && return this->brandName_ == nullptr && return this->brandType_ == nullptr && return this->instanceId_ == nullptr && return this->status_ == nullptr; };
    // brandId Field Functions 
    bool hasBrandId() const { return this->brandId_ != nullptr;};
    void deleteBrandId() { this->brandId_ = nullptr;};
    inline string brandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
    inline ListBrandsResponseBodyBrands& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


    // brandName Field Functions 
    bool hasBrandName() const { return this->brandName_ != nullptr;};
    void deleteBrandName() { this->brandName_ = nullptr;};
    inline string brandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
    inline ListBrandsResponseBodyBrands& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


    // brandType Field Functions 
    bool hasBrandType() const { return this->brandType_ != nullptr;};
    void deleteBrandType() { this->brandType_ = nullptr;};
    inline string brandType() const { DARABONBA_PTR_GET_DEFAULT(brandType_, "") };
    inline ListBrandsResponseBodyBrands& setBrandType(string brandType) { DARABONBA_PTR_SET_VALUE(brandType_, brandType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListBrandsResponseBodyBrands& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBrandsResponseBodyBrands& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 品牌ID
    std::shared_ptr<string> brandId_ = nullptr;
    // 品牌名称
    std::shared_ptr<string> brandName_ = nullptr;
    // 品牌类型
    std::shared_ptr<string> brandType_ = nullptr;
    // 实例ID。
    std::shared_ptr<string> instanceId_ = nullptr;
    // 品牌状态
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
