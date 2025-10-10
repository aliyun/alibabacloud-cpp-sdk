// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTINFORESPONSEBODYPRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTINFORESPONSEBODYPRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryProductInfoResponseBodyProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductInfoResponseBodyProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_TO_JSON(IconName, iconName_);
      DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Platforms, platforms_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(Readonly, readonly_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductInfoResponseBodyProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_FROM_JSON(IconName, iconName_);
      DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(Readonly, readonly_);
    };
    QueryProductInfoResponseBodyProductInfo() = default ;
    QueryProductInfoResponseBodyProductInfo(const QueryProductInfoResponseBodyProductInfo &) = default ;
    QueryProductInfoResponseBodyProductInfo(QueryProductInfoResponseBodyProductInfo &&) = default ;
    QueryProductInfoResponseBodyProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductInfoResponseBodyProductInfo() = default ;
    QueryProductInfoResponseBodyProductInfo& operator=(const QueryProductInfoResponseBodyProductInfo &) = default ;
    QueryProductInfoResponseBodyProductInfo& operator=(QueryProductInfoResponseBodyProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->encodedIcon_ != nullptr && this->iconName_ != nullptr && this->industryId_ != nullptr && this->name_ != nullptr
        && this->platforms_ != nullptr && this->productId_ != nullptr && this->readonly_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryProductInfoResponseBodyProductInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryProductInfoResponseBodyProductInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encodedIcon Field Functions 
    bool hasEncodedIcon() const { return this->encodedIcon_ != nullptr;};
    void deleteEncodedIcon() { this->encodedIcon_ = nullptr;};
    inline string encodedIcon() const { DARABONBA_PTR_GET_DEFAULT(encodedIcon_, "") };
    inline QueryProductInfoResponseBodyProductInfo& setEncodedIcon(string encodedIcon) { DARABONBA_PTR_SET_VALUE(encodedIcon_, encodedIcon) };


    // iconName Field Functions 
    bool hasIconName() const { return this->iconName_ != nullptr;};
    void deleteIconName() { this->iconName_ = nullptr;};
    inline string iconName() const { DARABONBA_PTR_GET_DEFAULT(iconName_, "") };
    inline QueryProductInfoResponseBodyProductInfo& setIconName(string iconName) { DARABONBA_PTR_SET_VALUE(iconName_, iconName) };


    // industryId Field Functions 
    bool hasIndustryId() const { return this->industryId_ != nullptr;};
    void deleteIndustryId() { this->industryId_ = nullptr;};
    inline int32_t industryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, 0) };
    inline QueryProductInfoResponseBodyProductInfo& setIndustryId(int32_t industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryProductInfoResponseBodyProductInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // platforms Field Functions 
    bool hasPlatforms() const { return this->platforms_ != nullptr;};
    void deletePlatforms() { this->platforms_ = nullptr;};
    inline string platforms() const { DARABONBA_PTR_GET_DEFAULT(platforms_, "") };
    inline QueryProductInfoResponseBodyProductInfo& setPlatforms(string platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int32_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0) };
    inline QueryProductInfoResponseBodyProductInfo& setProductId(int32_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // readonly Field Functions 
    bool hasReadonly() const { return this->readonly_ != nullptr;};
    void deleteReadonly() { this->readonly_ = nullptr;};
    inline bool readonly() const { DARABONBA_PTR_GET_DEFAULT(readonly_, false) };
    inline QueryProductInfoResponseBodyProductInfo& setReadonly(bool readonly) { DARABONBA_PTR_SET_VALUE(readonly_, readonly) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> encodedIcon_ = nullptr;
    std::shared_ptr<string> iconName_ = nullptr;
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
