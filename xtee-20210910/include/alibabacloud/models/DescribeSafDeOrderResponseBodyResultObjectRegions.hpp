// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFDEORDERRESPONSEBODYRESULTOBJECTREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFDEORDERRESPONSEBODYRESULTOBJECTREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafDeOrderResponseBodyResultObjectRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafDeOrderResponseBodyResultObjectRegions& obj) { 
      DARABONBA_PTR_TO_JSON(expirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(specification, specification_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafDeOrderResponseBodyResultObjectRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(expirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(specification, specification_);
    };
    DescribeSafDeOrderResponseBodyResultObjectRegions() = default ;
    DescribeSafDeOrderResponseBodyResultObjectRegions(const DescribeSafDeOrderResponseBodyResultObjectRegions &) = default ;
    DescribeSafDeOrderResponseBodyResultObjectRegions(DescribeSafDeOrderResponseBodyResultObjectRegions &&) = default ;
    DescribeSafDeOrderResponseBodyResultObjectRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafDeOrderResponseBodyResultObjectRegions() = default ;
    DescribeSafDeOrderResponseBodyResultObjectRegions& operator=(const DescribeSafDeOrderResponseBodyResultObjectRegions &) = default ;
    DescribeSafDeOrderResponseBodyResultObjectRegions& operator=(DescribeSafDeOrderResponseBodyResultObjectRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expirationDate_ == nullptr
        && return this->region_ == nullptr && return this->specification_ == nullptr; };
    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline int64_t expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, 0L) };
    inline DescribeSafDeOrderResponseBodyResultObjectRegions& setExpirationDate(int64_t expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSafDeOrderResponseBodyResultObjectRegions& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline int32_t specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, 0) };
    inline DescribeSafDeOrderResponseBodyResultObjectRegions& setSpecification(int32_t specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


  protected:
    // Expiration date (timestamp).
    std::shared_ptr<int64_t> expirationDate_ = nullptr;
    // Region ID.
    std::shared_ptr<string> region_ = nullptr;
    // Specification model:
    // 
    // 1: Basic Edition 
    // 2: Advanced Edition 
    // 3: Premium Edition 
    // 4: Flagship Edition
    std::shared_ptr<int32_t> specification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
