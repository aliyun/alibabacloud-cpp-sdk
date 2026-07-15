// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETPRODUCTFEATURE_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETPRODUCTFEATURE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HiMarketModelFeature.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketProductFeature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketProductFeature& obj) { 
      DARABONBA_PTR_TO_JSON(modelFeature, modelFeature_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketProductFeature& obj) { 
      DARABONBA_PTR_FROM_JSON(modelFeature, modelFeature_);
    };
    HiMarketProductFeature() = default ;
    HiMarketProductFeature(const HiMarketProductFeature &) = default ;
    HiMarketProductFeature(HiMarketProductFeature &&) = default ;
    HiMarketProductFeature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketProductFeature() = default ;
    HiMarketProductFeature& operator=(const HiMarketProductFeature &) = default ;
    HiMarketProductFeature& operator=(HiMarketProductFeature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelFeature_ == nullptr; };
    // modelFeature Field Functions 
    bool hasModelFeature() const { return this->modelFeature_ != nullptr;};
    void deleteModelFeature() { this->modelFeature_ = nullptr;};
    inline const HiMarketModelFeature & getModelFeature() const { DARABONBA_PTR_GET_CONST(modelFeature_, HiMarketModelFeature) };
    inline HiMarketModelFeature getModelFeature() { DARABONBA_PTR_GET(modelFeature_, HiMarketModelFeature) };
    inline HiMarketProductFeature& setModelFeature(const HiMarketModelFeature & modelFeature) { DARABONBA_PTR_SET_VALUE(modelFeature_, modelFeature) };
    inline HiMarketProductFeature& setModelFeature(HiMarketModelFeature && modelFeature) { DARABONBA_PTR_SET_RVALUE(modelFeature_, modelFeature) };


  protected:
    // The model feature.
    shared_ptr<HiMarketModelFeature> modelFeature_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
