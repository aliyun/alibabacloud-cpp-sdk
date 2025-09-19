// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCRITERIASTRATEGYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCRITERIASTRATEGYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCriteriaStrategyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCriteriaStrategyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListCriteriaStrategyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListCriteriaStrategyResponseBodyData() = default ;
    ListCriteriaStrategyResponseBodyData(const ListCriteriaStrategyResponseBodyData &) = default ;
    ListCriteriaStrategyResponseBodyData(ListCriteriaStrategyResponseBodyData &&) = default ;
    ListCriteriaStrategyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCriteriaStrategyResponseBodyData() = default ;
    ListCriteriaStrategyResponseBodyData& operator=(const ListCriteriaStrategyResponseBodyData &) = default ;
    ListCriteriaStrategyResponseBodyData& operator=(ListCriteriaStrategyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->value_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCriteriaStrategyResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListCriteriaStrategyResponseBodyData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The unique identifier of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
