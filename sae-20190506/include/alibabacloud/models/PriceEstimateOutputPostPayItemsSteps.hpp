// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUTPOSTPAYITEMSSTEPS_HPP_
#define ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUTPOSTPAYITEMSSTEPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PriceEstimateOutputPostPayItemsSteps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceEstimateOutputPostPayItemsSteps& obj) { 
      DARABONBA_PTR_TO_JSON(Begin, begin_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, PriceEstimateOutputPostPayItemsSteps& obj) { 
      DARABONBA_PTR_FROM_JSON(Begin, begin_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    PriceEstimateOutputPostPayItemsSteps() = default ;
    PriceEstimateOutputPostPayItemsSteps(const PriceEstimateOutputPostPayItemsSteps &) = default ;
    PriceEstimateOutputPostPayItemsSteps(PriceEstimateOutputPostPayItemsSteps &&) = default ;
    PriceEstimateOutputPostPayItemsSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceEstimateOutputPostPayItemsSteps() = default ;
    PriceEstimateOutputPostPayItemsSteps& operator=(const PriceEstimateOutputPostPayItemsSteps &) = default ;
    PriceEstimateOutputPostPayItemsSteps& operator=(PriceEstimateOutputPostPayItemsSteps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->end_ != nullptr && this->price_ != nullptr && this->regionIds_ != nullptr && this->unit_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int64_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
    inline PriceEstimateOutputPostPayItemsSteps& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline PriceEstimateOutputPostPayItemsSteps& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline float price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline PriceEstimateOutputPostPayItemsSteps& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> regionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline PriceEstimateOutputPostPayItemsSteps& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline PriceEstimateOutputPostPayItemsSteps& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline PriceEstimateOutputPostPayItemsSteps& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<int64_t> begin_ = nullptr;
    std::shared_ptr<int64_t> end_ = nullptr;
    std::shared_ptr<float> price_ = nullptr;
    std::shared_ptr<vector<string>> regionIds_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
