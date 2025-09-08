// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class GetStorageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanOperate, canOperate_);
      DARABONBA_PTR_TO_JSON(DisplayRegion, displayRegion_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanOperate, canOperate_);
      DARABONBA_PTR_FROM_JSON(DisplayRegion, displayRegion_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    GetStorageResponseBodyData() = default ;
    GetStorageResponseBodyData(const GetStorageResponseBodyData &) = default ;
    GetStorageResponseBodyData(GetStorageResponseBodyData &&) = default ;
    GetStorageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageResponseBodyData() = default ;
    GetStorageResponseBodyData& operator=(const GetStorageResponseBodyData &) = default ;
    GetStorageResponseBodyData& operator=(GetStorageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canOperate_ != nullptr
        && this->displayRegion_ != nullptr && this->region_ != nullptr && this->ttl_ != nullptr; };
    // canOperate Field Functions 
    bool hasCanOperate() const { return this->canOperate_ != nullptr;};
    void deleteCanOperate() { this->canOperate_ = nullptr;};
    inline bool canOperate() const { DARABONBA_PTR_GET_DEFAULT(canOperate_, false) };
    inline GetStorageResponseBodyData& setCanOperate(bool canOperate) { DARABONBA_PTR_SET_VALUE(canOperate_, canOperate) };


    // displayRegion Field Functions 
    bool hasDisplayRegion() const { return this->displayRegion_ != nullptr;};
    void deleteDisplayRegion() { this->displayRegion_ = nullptr;};
    inline bool displayRegion() const { DARABONBA_PTR_GET_DEFAULT(displayRegion_, false) };
    inline GetStorageResponseBodyData& setDisplayRegion(bool displayRegion) { DARABONBA_PTR_SET_VALUE(displayRegion_, displayRegion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetStorageResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline GetStorageResponseBodyData& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // Indicates whether the storage region can be changed for once. Default value: false Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> canOperate_ = nullptr;
    // Indicates whether the storage region can be changed. Default value: false Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> displayRegion_ = nullptr;
    // The region where the data is stored.
    // 
    // If the data management center is **cn-hangzhou**, the default value of **Region** is cn-shanghai, which specifies the China (Shanghai) region. If the data management center is **ap-southeast-1**, the default value of **Region** is ap-southeast-1, which specifies the Singapore region.
    std::shared_ptr<string> region_ = nullptr;
    // The storage period of logs. Unit: day. Default value: 180. Valid values: 30 to 3000.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
