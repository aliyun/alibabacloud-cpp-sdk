// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PriceEstimateOutputApps.hpp>
#include <alibabacloud/models/PriceEstimateOutputItems.hpp>
#include <alibabacloud/models/PriceEstimateOutputPostPayItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PriceEstimateOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceEstimateOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PostPayItems, postPayItems_);
      DARABONBA_PTR_TO_JSON(PostPayTotalPrice, postPayTotalPrice_);
      DARABONBA_PTR_TO_JSON(TotalPrice, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, PriceEstimateOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PostPayItems, postPayItems_);
      DARABONBA_PTR_FROM_JSON(PostPayTotalPrice, postPayTotalPrice_);
      DARABONBA_PTR_FROM_JSON(TotalPrice, totalPrice_);
    };
    PriceEstimateOutput() = default ;
    PriceEstimateOutput(const PriceEstimateOutput &) = default ;
    PriceEstimateOutput(PriceEstimateOutput &&) = default ;
    PriceEstimateOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceEstimateOutput() = default ;
    PriceEstimateOutput& operator=(const PriceEstimateOutput &) = default ;
    PriceEstimateOutput& operator=(PriceEstimateOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apps_ == nullptr
        && return this->items_ == nullptr && return this->postPayItems_ == nullptr && return this->postPayTotalPrice_ == nullptr && return this->totalPrice_ == nullptr; };
    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<PriceEstimateOutputApps> & apps() const { DARABONBA_PTR_GET_CONST(apps_, vector<PriceEstimateOutputApps>) };
    inline vector<PriceEstimateOutputApps> apps() { DARABONBA_PTR_GET(apps_, vector<PriceEstimateOutputApps>) };
    inline PriceEstimateOutput& setApps(const vector<PriceEstimateOutputApps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline PriceEstimateOutput& setApps(vector<PriceEstimateOutputApps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<PriceEstimateOutputItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<PriceEstimateOutputItems>) };
    inline vector<PriceEstimateOutputItems> items() { DARABONBA_PTR_GET(items_, vector<PriceEstimateOutputItems>) };
    inline PriceEstimateOutput& setItems(const vector<PriceEstimateOutputItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline PriceEstimateOutput& setItems(vector<PriceEstimateOutputItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // postPayItems Field Functions 
    bool hasPostPayItems() const { return this->postPayItems_ != nullptr;};
    void deletePostPayItems() { this->postPayItems_ = nullptr;};
    inline const vector<PriceEstimateOutputPostPayItems> & postPayItems() const { DARABONBA_PTR_GET_CONST(postPayItems_, vector<PriceEstimateOutputPostPayItems>) };
    inline vector<PriceEstimateOutputPostPayItems> postPayItems() { DARABONBA_PTR_GET(postPayItems_, vector<PriceEstimateOutputPostPayItems>) };
    inline PriceEstimateOutput& setPostPayItems(const vector<PriceEstimateOutputPostPayItems> & postPayItems) { DARABONBA_PTR_SET_VALUE(postPayItems_, postPayItems) };
    inline PriceEstimateOutput& setPostPayItems(vector<PriceEstimateOutputPostPayItems> && postPayItems) { DARABONBA_PTR_SET_RVALUE(postPayItems_, postPayItems) };


    // postPayTotalPrice Field Functions 
    bool hasPostPayTotalPrice() const { return this->postPayTotalPrice_ != nullptr;};
    void deletePostPayTotalPrice() { this->postPayTotalPrice_ = nullptr;};
    inline float postPayTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(postPayTotalPrice_, 0.0) };
    inline PriceEstimateOutput& setPostPayTotalPrice(float postPayTotalPrice) { DARABONBA_PTR_SET_VALUE(postPayTotalPrice_, postPayTotalPrice) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline float totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
    inline PriceEstimateOutput& setTotalPrice(float totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    std::shared_ptr<vector<PriceEstimateOutputApps>> apps_ = nullptr;
    std::shared_ptr<vector<PriceEstimateOutputItems>> items_ = nullptr;
    std::shared_ptr<vector<PriceEstimateOutputPostPayItems>> postPayItems_ = nullptr;
    std::shared_ptr<float> postPayTotalPrice_ = nullptr;
    std::shared_ptr<float> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
