// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUTITEMS_HPP_
#define ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PriceEstimateOutputItemsSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PriceEstimateOutputItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceEstimateOutputItems& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, PriceEstimateOutputItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    PriceEstimateOutputItems() = default ;
    PriceEstimateOutputItems(const PriceEstimateOutputItems &) = default ;
    PriceEstimateOutputItems(PriceEstimateOutputItems &&) = default ;
    PriceEstimateOutputItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceEstimateOutputItems() = default ;
    PriceEstimateOutputItems& operator=(const PriceEstimateOutputItems &) = default ;
    PriceEstimateOutputItems& operator=(PriceEstimateOutputItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->count_ == nullptr && return this->id_ == nullptr && return this->price_ == nullptr && return this->steps_ == nullptr && return this->type_ == nullptr
        && return this->unit_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline float amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline PriceEstimateOutputItems& setAmount(float amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline PriceEstimateOutputItems& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PriceEstimateOutputItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline float price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline PriceEstimateOutputItems& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<Models::PriceEstimateOutputItemsSteps> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Models::PriceEstimateOutputItemsSteps>) };
    inline vector<Models::PriceEstimateOutputItemsSteps> steps() { DARABONBA_PTR_GET(steps_, vector<Models::PriceEstimateOutputItemsSteps>) };
    inline PriceEstimateOutputItems& setSteps(const vector<Models::PriceEstimateOutputItemsSteps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline PriceEstimateOutputItems& setSteps(vector<Models::PriceEstimateOutputItemsSteps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PriceEstimateOutputItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline PriceEstimateOutputItems& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<float> amount_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<float> price_ = nullptr;
    std::shared_ptr<vector<Models::PriceEstimateOutputItemsSteps>> steps_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
