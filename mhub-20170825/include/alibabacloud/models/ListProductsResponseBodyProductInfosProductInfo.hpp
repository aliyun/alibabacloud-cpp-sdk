// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTINFOSPRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTINFOSPRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ListProductsResponseBodyProductInfosProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyProductInfosProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Platforms, platforms_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(Readonly, readonly_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyProductInfosProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(Readonly, readonly_);
    };
    ListProductsResponseBodyProductInfosProductInfo() = default ;
    ListProductsResponseBodyProductInfosProductInfo(const ListProductsResponseBodyProductInfosProductInfo &) = default ;
    ListProductsResponseBodyProductInfosProductInfo(ListProductsResponseBodyProductInfosProductInfo &&) = default ;
    ListProductsResponseBodyProductInfosProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyProductInfosProductInfo() = default ;
    ListProductsResponseBodyProductInfosProductInfo& operator=(const ListProductsResponseBodyProductInfosProductInfo &) = default ;
    ListProductsResponseBodyProductInfosProductInfo& operator=(ListProductsResponseBodyProductInfosProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->encodedIcon_ != nullptr && this->industryId_ != nullptr && this->name_ != nullptr && this->platforms_ != nullptr
        && this->productId_ != nullptr && this->readonly_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListProductsResponseBodyProductInfosProductInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListProductsResponseBodyProductInfosProductInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encodedIcon Field Functions 
    bool hasEncodedIcon() const { return this->encodedIcon_ != nullptr;};
    void deleteEncodedIcon() { this->encodedIcon_ = nullptr;};
    inline string encodedIcon() const { DARABONBA_PTR_GET_DEFAULT(encodedIcon_, "") };
    inline ListProductsResponseBodyProductInfosProductInfo& setEncodedIcon(string encodedIcon) { DARABONBA_PTR_SET_VALUE(encodedIcon_, encodedIcon) };


    // industryId Field Functions 
    bool hasIndustryId() const { return this->industryId_ != nullptr;};
    void deleteIndustryId() { this->industryId_ = nullptr;};
    inline int32_t industryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, 0) };
    inline ListProductsResponseBodyProductInfosProductInfo& setIndustryId(int32_t industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProductsResponseBodyProductInfosProductInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // platforms Field Functions 
    bool hasPlatforms() const { return this->platforms_ != nullptr;};
    void deletePlatforms() { this->platforms_ = nullptr;};
    inline string platforms() const { DARABONBA_PTR_GET_DEFAULT(platforms_, "") };
    inline ListProductsResponseBodyProductInfosProductInfo& setPlatforms(string platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int32_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0) };
    inline ListProductsResponseBodyProductInfosProductInfo& setProductId(int32_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // readonly Field Functions 
    bool hasReadonly() const { return this->readonly_ != nullptr;};
    void deleteReadonly() { this->readonly_ = nullptr;};
    inline bool readonly() const { DARABONBA_PTR_GET_DEFAULT(readonly_, false) };
    inline ListProductsResponseBodyProductInfosProductInfo& setReadonly(bool readonly) { DARABONBA_PTR_SET_VALUE(readonly_, readonly) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> encodedIcon_ = nullptr;
    std::shared_ptr<int32_t> industryId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> platforms_ = nullptr;
    std::shared_ptr<int32_t> productId_ = nullptr;
    std::shared_ptr<bool> readonly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
