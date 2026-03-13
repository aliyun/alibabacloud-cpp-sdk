// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTER_HPP_
#define ALIBABACLOUD_MODELS_FILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class Filter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Filter& obj) { 
      DARABONBA_PTR_TO_JSON(FilterBy, filterBy_);
      DARABONBA_PTR_TO_JSON(FilterCondition, filterCondition_);
      DARABONBA_PTR_TO_JSON(FilterOperation, filterOperation_);
    };
    friend void from_json(const Darabonba::Json& j, Filter& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterBy, filterBy_);
      DARABONBA_PTR_FROM_JSON(FilterCondition, filterCondition_);
      DARABONBA_PTR_FROM_JSON(FilterOperation, filterOperation_);
    };
    Filter() = default ;
    Filter(const Filter &) = default ;
    Filter(Filter &&) = default ;
    Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Filter() = default ;
    Filter& operator=(const Filter &) = default ;
    Filter& operator=(Filter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterBy_ == nullptr
        && this->filterCondition_ == nullptr && this->filterOperation_ == nullptr; };
    // filterBy Field Functions 
    bool hasFilterBy() const { return this->filterBy_ != nullptr;};
    void deleteFilterBy() { this->filterBy_ = nullptr;};
    inline string getFilterBy() const { DARABONBA_PTR_GET_DEFAULT(filterBy_, "") };
    inline Filter& setFilterBy(string filterBy) { DARABONBA_PTR_SET_VALUE(filterBy_, filterBy) };


    // filterCondition Field Functions 
    bool hasFilterCondition() const { return this->filterCondition_ != nullptr;};
    void deleteFilterCondition() { this->filterCondition_ = nullptr;};
    inline string getFilterCondition() const { DARABONBA_PTR_GET_DEFAULT(filterCondition_, "") };
    inline Filter& setFilterCondition(string filterCondition) { DARABONBA_PTR_SET_VALUE(filterCondition_, filterCondition) };


    // filterOperation Field Functions 
    bool hasFilterOperation() const { return this->filterOperation_ != nullptr;};
    void deleteFilterOperation() { this->filterOperation_ = nullptr;};
    inline string getFilterOperation() const { DARABONBA_PTR_GET_DEFAULT(filterOperation_, "") };
    inline Filter& setFilterOperation(string filterOperation) { DARABONBA_PTR_SET_VALUE(filterOperation_, filterOperation) };


  protected:
    shared_ptr<string> filterBy_ {};
    shared_ptr<string> filterCondition_ {};
    shared_ptr<string> filterOperation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
