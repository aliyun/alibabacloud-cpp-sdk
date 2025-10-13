// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUTAPPSUSAGES_HPP_
#define ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUTAPPSUSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PriceEstimateOutputAppsUsages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceEstimateOutputAppsUsages& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, PriceEstimateOutputAppsUsages& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    PriceEstimateOutputAppsUsages() = default ;
    PriceEstimateOutputAppsUsages(const PriceEstimateOutputAppsUsages &) = default ;
    PriceEstimateOutputAppsUsages(PriceEstimateOutputAppsUsages &&) = default ;
    PriceEstimateOutputAppsUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceEstimateOutputAppsUsages() = default ;
    PriceEstimateOutputAppsUsages& operator=(const PriceEstimateOutputAppsUsages &) = default ;
    PriceEstimateOutputAppsUsages& operator=(PriceEstimateOutputAppsUsages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->id_ == nullptr && return this->unit_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline float amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline PriceEstimateOutputAppsUsages& setAmount(float amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PriceEstimateOutputAppsUsages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline PriceEstimateOutputAppsUsages& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<float> amount_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
