// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANSRESPONSEBODYGEOGRAPHICSPANMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANSRESPONSEBODYGEOGRAPHICSPANMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenGeographicSpansResponseBodyGeographicSpanModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenGeographicSpansResponseBodyGeographicSpanModels& obj) { 
      DARABONBA_PTR_TO_JSON(GeographicSpanModel, geographicSpanModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenGeographicSpansResponseBodyGeographicSpanModels& obj) { 
      DARABONBA_PTR_FROM_JSON(GeographicSpanModel, geographicSpanModel_);
    };
    DescribeCenGeographicSpansResponseBodyGeographicSpanModels() = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModels(const DescribeCenGeographicSpansResponseBodyGeographicSpanModels &) = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModels(DescribeCenGeographicSpansResponseBodyGeographicSpanModels &&) = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenGeographicSpansResponseBodyGeographicSpanModels() = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModels& operator=(const DescribeCenGeographicSpansResponseBodyGeographicSpanModels &) = default ;
    DescribeCenGeographicSpansResponseBodyGeographicSpanModels& operator=(DescribeCenGeographicSpansResponseBodyGeographicSpanModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->geographicSpanModel_ != nullptr; };
    // geographicSpanModel Field Functions 
    bool hasGeographicSpanModel() const { return this->geographicSpanModel_ != nullptr;};
    void deleteGeographicSpanModel() { this->geographicSpanModel_ = nullptr;};
    inline const vector<Models::DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel> & geographicSpanModel() const { DARABONBA_PTR_GET_CONST(geographicSpanModel_, vector<Models::DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel>) };
    inline vector<Models::DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel> geographicSpanModel() { DARABONBA_PTR_GET(geographicSpanModel_, vector<Models::DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel>) };
    inline DescribeCenGeographicSpansResponseBodyGeographicSpanModels& setGeographicSpanModel(const vector<Models::DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel> & geographicSpanModel) { DARABONBA_PTR_SET_VALUE(geographicSpanModel_, geographicSpanModel) };
    inline DescribeCenGeographicSpansResponseBodyGeographicSpanModels& setGeographicSpanModel(vector<Models::DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel> && geographicSpanModel) { DARABONBA_PTR_SET_RVALUE(geographicSpanModel_, geographicSpanModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel>> geographicSpanModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
