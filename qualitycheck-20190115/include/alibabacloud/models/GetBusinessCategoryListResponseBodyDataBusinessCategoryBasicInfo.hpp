// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUSINESSCATEGORYLISTRESPONSEBODYDATABUSINESSCATEGORYBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_GETBUSINESSCATEGORYLISTRESPONSEBODYDATABUSINESSCATEGORYBASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo() = default ;
    GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo(const GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo &) = default ;
    GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo(GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo &&) = default ;
    GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo() = default ;
    GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo& operator=(const GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo &) = default ;
    GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo& operator=(GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bid_ != nullptr
        && this->businessName_ != nullptr && this->serviceType_ != nullptr; };
    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline int32_t bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, 0) };
    inline GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo& setBid(int32_t bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // businessName Field Functions 
    bool hasBusinessName() const { return this->businessName_ != nullptr;};
    void deleteBusinessName() { this->businessName_ = nullptr;};
    inline string businessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
    inline GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline int32_t serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
    inline GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    std::shared_ptr<int32_t> bid_ = nullptr;
    std::shared_ptr<string> businessName_ = nullptr;
    std::shared_ptr<int32_t> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
