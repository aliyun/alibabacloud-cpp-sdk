// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILTERSRESPONSEBODYFILTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTFILTERSRESPONSEBODYFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListFiltersResponseBodyFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFiltersResponseBodyFilters& obj) { 
      DARABONBA_PTR_TO_JSON(FilterConfiguration, filterConfiguration_);
      DARABONBA_PTR_TO_JSON(FilterName, filterName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFiltersResponseBodyFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterConfiguration, filterConfiguration_);
      DARABONBA_PTR_FROM_JSON(FilterName, filterName_);
    };
    ListFiltersResponseBodyFilters() = default ;
    ListFiltersResponseBodyFilters(const ListFiltersResponseBodyFilters &) = default ;
    ListFiltersResponseBodyFilters(ListFiltersResponseBodyFilters &&) = default ;
    ListFiltersResponseBodyFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFiltersResponseBodyFilters() = default ;
    ListFiltersResponseBodyFilters& operator=(const ListFiltersResponseBodyFilters &) = default ;
    ListFiltersResponseBodyFilters& operator=(ListFiltersResponseBodyFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterConfiguration_ == nullptr
        && return this->filterName_ == nullptr; };
    // filterConfiguration Field Functions 
    bool hasFilterConfiguration() const { return this->filterConfiguration_ != nullptr;};
    void deleteFilterConfiguration() { this->filterConfiguration_ = nullptr;};
    inline string filterConfiguration() const { DARABONBA_PTR_GET_DEFAULT(filterConfiguration_, "") };
    inline ListFiltersResponseBodyFilters& setFilterConfiguration(string filterConfiguration) { DARABONBA_PTR_SET_VALUE(filterConfiguration_, filterConfiguration) };


    // filterName Field Functions 
    bool hasFilterName() const { return this->filterName_ != nullptr;};
    void deleteFilterName() { this->filterName_ = nullptr;};
    inline string filterName() const { DARABONBA_PTR_GET_DEFAULT(filterName_, "") };
    inline ListFiltersResponseBodyFilters& setFilterName(string filterName) { DARABONBA_PTR_SET_VALUE(filterName_, filterName) };


  protected:
    // The configurations of the filter.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterConfiguration_ = nullptr;
    // The name of the filter.
    std::shared_ptr<string> filterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
