// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSRESPONSEBODYQUOTADIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSRESPONSEBODYQUOTADIMENSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductQuotaDimensionsResponseBodyQuotaDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotaDimensionsResponseBodyQuotaDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(DependentDimensions, dependentDimensions_);
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(DimensionValueDetail, dimensionValueDetail_);
      DARABONBA_PTR_TO_JSON(DimensionValues, dimensionValues_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Requisite, requisite_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotaDimensionsResponseBodyQuotaDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DependentDimensions, dependentDimensions_);
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(DimensionValueDetail, dimensionValueDetail_);
      DARABONBA_PTR_FROM_JSON(DimensionValues, dimensionValues_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Requisite, requisite_);
    };
    ListProductQuotaDimensionsResponseBodyQuotaDimensions() = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensions(const ListProductQuotaDimensionsResponseBodyQuotaDimensions &) = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensions(ListProductQuotaDimensionsResponseBodyQuotaDimensions &&) = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotaDimensionsResponseBodyQuotaDimensions() = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensions& operator=(const ListProductQuotaDimensionsResponseBodyQuotaDimensions &) = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensions& operator=(ListProductQuotaDimensionsResponseBodyQuotaDimensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dependentDimensions_ != nullptr
        && this->dimensionKey_ != nullptr && this->dimensionValueDetail_ != nullptr && this->dimensionValues_ != nullptr && this->name_ != nullptr && this->requisite_ != nullptr; };
    // dependentDimensions Field Functions 
    bool hasDependentDimensions() const { return this->dependentDimensions_ != nullptr;};
    void deleteDependentDimensions() { this->dependentDimensions_ = nullptr;};
    inline const vector<string> & dependentDimensions() const { DARABONBA_PTR_GET_CONST(dependentDimensions_, vector<string>) };
    inline vector<string> dependentDimensions() { DARABONBA_PTR_GET(dependentDimensions_, vector<string>) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setDependentDimensions(const vector<string> & dependentDimensions) { DARABONBA_PTR_SET_VALUE(dependentDimensions_, dependentDimensions) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setDependentDimensions(vector<string> && dependentDimensions) { DARABONBA_PTR_SET_RVALUE(dependentDimensions_, dependentDimensions) };


    // dimensionKey Field Functions 
    bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
    void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
    inline string dimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // dimensionValueDetail Field Functions 
    bool hasDimensionValueDetail() const { return this->dimensionValueDetail_ != nullptr;};
    void deleteDimensionValueDetail() { this->dimensionValueDetail_ = nullptr;};
    inline const vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail> & dimensionValueDetail() const { DARABONBA_PTR_GET_CONST(dimensionValueDetail_, vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail>) };
    inline vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail> dimensionValueDetail() { DARABONBA_PTR_GET(dimensionValueDetail_, vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail>) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setDimensionValueDetail(const vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail> & dimensionValueDetail) { DARABONBA_PTR_SET_VALUE(dimensionValueDetail_, dimensionValueDetail) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setDimensionValueDetail(vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail> && dimensionValueDetail) { DARABONBA_PTR_SET_RVALUE(dimensionValueDetail_, dimensionValueDetail) };


    // dimensionValues Field Functions 
    bool hasDimensionValues() const { return this->dimensionValues_ != nullptr;};
    void deleteDimensionValues() { this->dimensionValues_ = nullptr;};
    inline const vector<string> & dimensionValues() const { DARABONBA_PTR_GET_CONST(dimensionValues_, vector<string>) };
    inline vector<string> dimensionValues() { DARABONBA_PTR_GET(dimensionValues_, vector<string>) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setDimensionValues(const vector<string> & dimensionValues) { DARABONBA_PTR_SET_VALUE(dimensionValues_, dimensionValues) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setDimensionValues(vector<string> && dimensionValues) { DARABONBA_PTR_SET_RVALUE(dimensionValues_, dimensionValues) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requisite Field Functions 
    bool hasRequisite() const { return this->requisite_ != nullptr;};
    void deleteRequisite() { this->requisite_ = nullptr;};
    inline bool requisite() const { DARABONBA_PTR_GET_DEFAULT(requisite_, false) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensions& setRequisite(bool requisite) { DARABONBA_PTR_SET_VALUE(requisite_, requisite) };


  protected:
    // The quota dimensions on which the quota dimension that you want to query is dependent.
    std::shared_ptr<vector<string>> dependentDimensions_ = nullptr;
    // The key of the quota dimension. Valid values:
    // 
    // *   regionId: the region ID.
    // *   zoneId: the zone ID.
    // *   chargeType: the billing method.
    // *   networkType: the network type.
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The details about the dimension value.
    std::shared_ptr<vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail>> dimensionValueDetail_ = nullptr;
    // The dimension values.
    std::shared_ptr<vector<string>> dimensionValues_ = nullptr;
    // The name of the quota dimension.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the quota dimension is required when you query quota dimensions. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> requisite_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
