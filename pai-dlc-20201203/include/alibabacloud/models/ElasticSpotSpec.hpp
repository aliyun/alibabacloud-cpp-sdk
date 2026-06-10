// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELASTICSPOTSPEC_HPP_
#define ALIBABACLOUD_MODELS_ELASTICSPOTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ElasticSpotSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElasticSpotSpec& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotDiscountLimit, spotDiscountLimit_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, ElasticSpotSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotDiscountLimit, spotDiscountLimit_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
    };
    ElasticSpotSpec() = default ;
    ElasticSpotSpec(const ElasticSpotSpec &) = default ;
    ElasticSpotSpec(ElasticSpotSpec &&) = default ;
    ElasticSpotSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElasticSpotSpec() = default ;
    ElasticSpotSpec& operator=(const ElasticSpotSpec &) = default ;
    ElasticSpotSpec& operator=(ElasticSpotSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->spotDiscountLimit_ == nullptr && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ElasticSpotSpec& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotDiscountLimit Field Functions 
    bool hasSpotDiscountLimit() const { return this->spotDiscountLimit_ != nullptr;};
    void deleteSpotDiscountLimit() { this->spotDiscountLimit_ = nullptr;};
    inline double getSpotDiscountLimit() const { DARABONBA_PTR_GET_DEFAULT(spotDiscountLimit_, 0.0) };
    inline ElasticSpotSpec& setSpotDiscountLimit(double spotDiscountLimit) { DARABONBA_PTR_SET_VALUE(spotDiscountLimit_, spotDiscountLimit) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline double getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline ElasticSpotSpec& setSpotPriceLimit(double spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline ElasticSpotSpec& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


  protected:
    shared_ptr<string> instanceType_ {};
    shared_ptr<double> spotDiscountLimit_ {};
    shared_ptr<double> spotPriceLimit_ {};
    shared_ptr<string> spotStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
