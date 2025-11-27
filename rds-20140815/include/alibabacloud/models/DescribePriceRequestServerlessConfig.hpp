// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTSERVERLESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTSERVERLESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceRequestServerlessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequestServerlessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequestServerlessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
    };
    DescribePriceRequestServerlessConfig() = default ;
    DescribePriceRequestServerlessConfig(const DescribePriceRequestServerlessConfig &) = default ;
    DescribePriceRequestServerlessConfig(DescribePriceRequestServerlessConfig &&) = default ;
    DescribePriceRequestServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequestServerlessConfig() = default ;
    DescribePriceRequestServerlessConfig& operator=(const DescribePriceRequestServerlessConfig &) = default ;
    DescribePriceRequestServerlessConfig& operator=(DescribePriceRequestServerlessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxCapacity_ == nullptr
        && return this->minCapacity_ == nullptr; };
    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline double maxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0.0) };
    inline DescribePriceRequestServerlessConfig& setMaxCapacity(double maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // minCapacity Field Functions 
    bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
    void deleteMinCapacity() { this->minCapacity_ = nullptr;};
    inline double minCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0.0) };
    inline DescribePriceRequestServerlessConfig& setMinCapacity(double minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


  protected:
    // The maximum number of RDS Capacity Units (RCUs).
    std::shared_ptr<double> maxCapacity_ = nullptr;
    // The minimum number of RCUs.
    std::shared_ptr<double> minCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
