// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUSINESSCATEGORYBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_BUSINESSCATEGORYBASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class BusinessCategoryBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BusinessCategoryBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OriginalId, originalId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, BusinessCategoryBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OriginalId, originalId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    BusinessCategoryBasicInfo() = default ;
    BusinessCategoryBasicInfo(const BusinessCategoryBasicInfo &) = default ;
    BusinessCategoryBasicInfo(BusinessCategoryBasicInfo &&) = default ;
    BusinessCategoryBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BusinessCategoryBasicInfo() = default ;
    BusinessCategoryBasicInfo& operator=(const BusinessCategoryBasicInfo &) = default ;
    BusinessCategoryBasicInfo& operator=(BusinessCategoryBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bid_ != nullptr
        && this->name_ != nullptr && this->originalId_ != nullptr && this->serviceType_ != nullptr; };
    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline int32_t bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, 0) };
    inline BusinessCategoryBasicInfo& setBid(int32_t bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BusinessCategoryBasicInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // originalId Field Functions 
    bool hasOriginalId() const { return this->originalId_ != nullptr;};
    void deleteOriginalId() { this->originalId_ = nullptr;};
    inline int64_t originalId() const { DARABONBA_PTR_GET_DEFAULT(originalId_, 0L) };
    inline BusinessCategoryBasicInfo& setOriginalId(int64_t originalId) { DARABONBA_PTR_SET_VALUE(originalId_, originalId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline int32_t serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
    inline BusinessCategoryBasicInfo& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    std::shared_ptr<int32_t> bid_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> originalId_ = nullptr;
    std::shared_ptr<int32_t> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
