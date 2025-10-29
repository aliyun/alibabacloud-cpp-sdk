// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDCOSTCREDITS_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDCOSTCREDITS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchCredits.hpp>
#include <alibabacloud/models/ValueAddedCredits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedCostCredits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedCostCredits& obj) { 
      DARABONBA_PTR_TO_JSON(search, search_);
      DARABONBA_PTR_TO_JSON(valueAdded, valueAdded_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedCostCredits& obj) { 
      DARABONBA_PTR_FROM_JSON(search, search_);
      DARABONBA_PTR_FROM_JSON(valueAdded, valueAdded_);
    };
    UnifiedCostCredits() = default ;
    UnifiedCostCredits(const UnifiedCostCredits &) = default ;
    UnifiedCostCredits(UnifiedCostCredits &&) = default ;
    UnifiedCostCredits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedCostCredits() = default ;
    UnifiedCostCredits& operator=(const UnifiedCostCredits &) = default ;
    UnifiedCostCredits& operator=(UnifiedCostCredits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->search_ == nullptr
        && return this->valueAdded_ == nullptr; };
    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline const SearchCredits & search() const { DARABONBA_PTR_GET_CONST(search_, SearchCredits) };
    inline SearchCredits search() { DARABONBA_PTR_GET(search_, SearchCredits) };
    inline UnifiedCostCredits& setSearch(const SearchCredits & search) { DARABONBA_PTR_SET_VALUE(search_, search) };
    inline UnifiedCostCredits& setSearch(SearchCredits && search) { DARABONBA_PTR_SET_RVALUE(search_, search) };


    // valueAdded Field Functions 
    bool hasValueAdded() const { return this->valueAdded_ != nullptr;};
    void deleteValueAdded() { this->valueAdded_ = nullptr;};
    inline const ValueAddedCredits & valueAdded() const { DARABONBA_PTR_GET_CONST(valueAdded_, ValueAddedCredits) };
    inline ValueAddedCredits valueAdded() { DARABONBA_PTR_GET(valueAdded_, ValueAddedCredits) };
    inline UnifiedCostCredits& setValueAdded(const ValueAddedCredits & valueAdded) { DARABONBA_PTR_SET_VALUE(valueAdded_, valueAdded) };
    inline UnifiedCostCredits& setValueAdded(ValueAddedCredits && valueAdded) { DARABONBA_PTR_SET_RVALUE(valueAdded_, valueAdded) };


  protected:
    std::shared_ptr<SearchCredits> search_ = nullptr;
    std::shared_ptr<ValueAddedCredits> valueAdded_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
