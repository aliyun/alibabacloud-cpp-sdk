// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSRESPONSEBODYQUOTADIMENSIONSDIMENSIONVALUEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSRESPONSEBODYQUOTADIMENSIONSDIMENSIONVALUEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DependentDimensions, dependentDimensions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DependentDimensions, dependentDimensions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail() = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail(const ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail &) = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail(ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail &&) = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail() = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail& operator=(const ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail &) = default ;
    ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail& operator=(ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dependentDimensions_ != nullptr
        && this->name_ != nullptr && this->value_ != nullptr; };
    // dependentDimensions Field Functions 
    bool hasDependentDimensions() const { return this->dependentDimensions_ != nullptr;};
    void deleteDependentDimensions() { this->dependentDimensions_ = nullptr;};
    inline const vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions> & dependentDimensions() const { DARABONBA_PTR_GET_CONST(dependentDimensions_, vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions>) };
    inline vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions> dependentDimensions() { DARABONBA_PTR_GET(dependentDimensions_, vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions>) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail& setDependentDimensions(const vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions> & dependentDimensions) { DARABONBA_PTR_SET_VALUE(dependentDimensions_, dependentDimensions) };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail& setDependentDimensions(vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions> && dependentDimensions) { DARABONBA_PTR_SET_RVALUE(dependentDimensions_, dependentDimensions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The quota dimensions on which the quota dimension that you want to query is dependent.
    std::shared_ptr<vector<Models::ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions>> dependentDimensions_ = nullptr;
    // The name of the quota dimension.
    std::shared_ptr<string> name_ = nullptr;
    // The value of the quota dimension.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
