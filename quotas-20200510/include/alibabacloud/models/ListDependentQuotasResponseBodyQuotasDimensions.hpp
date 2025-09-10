// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASRESPONSEBODYQUOTASDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASRESPONSEBODYQUOTASDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListDependentQuotasResponseBodyQuotasDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDependentQuotasResponseBodyQuotasDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(DependentDimension, dependentDimension_);
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(DimensionValues, dimensionValues_);
    };
    friend void from_json(const Darabonba::Json& j, ListDependentQuotasResponseBodyQuotasDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DependentDimension, dependentDimension_);
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(DimensionValues, dimensionValues_);
    };
    ListDependentQuotasResponseBodyQuotasDimensions() = default ;
    ListDependentQuotasResponseBodyQuotasDimensions(const ListDependentQuotasResponseBodyQuotasDimensions &) = default ;
    ListDependentQuotasResponseBodyQuotasDimensions(ListDependentQuotasResponseBodyQuotasDimensions &&) = default ;
    ListDependentQuotasResponseBodyQuotasDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDependentQuotasResponseBodyQuotasDimensions() = default ;
    ListDependentQuotasResponseBodyQuotasDimensions& operator=(const ListDependentQuotasResponseBodyQuotasDimensions &) = default ;
    ListDependentQuotasResponseBodyQuotasDimensions& operator=(ListDependentQuotasResponseBodyQuotasDimensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dependentDimension_ != nullptr
        && this->dimensionKey_ != nullptr && this->dimensionValues_ != nullptr; };
    // dependentDimension Field Functions 
    bool hasDependentDimension() const { return this->dependentDimension_ != nullptr;};
    void deleteDependentDimension() { this->dependentDimension_ = nullptr;};
    inline const vector<string> & dependentDimension() const { DARABONBA_PTR_GET_CONST(dependentDimension_, vector<string>) };
    inline vector<string> dependentDimension() { DARABONBA_PTR_GET(dependentDimension_, vector<string>) };
    inline ListDependentQuotasResponseBodyQuotasDimensions& setDependentDimension(const vector<string> & dependentDimension) { DARABONBA_PTR_SET_VALUE(dependentDimension_, dependentDimension) };
    inline ListDependentQuotasResponseBodyQuotasDimensions& setDependentDimension(vector<string> && dependentDimension) { DARABONBA_PTR_SET_RVALUE(dependentDimension_, dependentDimension) };


    // dimensionKey Field Functions 
    bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
    void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
    inline string dimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
    inline ListDependentQuotasResponseBodyQuotasDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // dimensionValues Field Functions 
    bool hasDimensionValues() const { return this->dimensionValues_ != nullptr;};
    void deleteDimensionValues() { this->dimensionValues_ = nullptr;};
    inline const vector<string> & dimensionValues() const { DARABONBA_PTR_GET_CONST(dimensionValues_, vector<string>) };
    inline vector<string> dimensionValues() { DARABONBA_PTR_GET(dimensionValues_, vector<string>) };
    inline ListDependentQuotasResponseBodyQuotasDimensions& setDimensionValues(const vector<string> & dimensionValues) { DARABONBA_PTR_SET_VALUE(dimensionValues_, dimensionValues) };
    inline ListDependentQuotasResponseBodyQuotasDimensions& setDimensionValues(vector<string> && dimensionValues) { DARABONBA_PTR_SET_RVALUE(dimensionValues_, dimensionValues) };


  protected:
    // The dimensions of the quotas on which the specified quota depends.
    std::shared_ptr<vector<string>> dependentDimension_ = nullptr;
    // The key of the quota dimension.
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The dimension values.
    std::shared_ptr<vector<string>> dimensionValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
