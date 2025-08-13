// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGVALUESREQUESTTAGFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGVALUESREQUESTTAGFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagValuesRequestTagFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagValuesRequestTagFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagValuesRequestTagFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTagValuesRequestTagFilter() = default ;
    ListTagValuesRequestTagFilter(const ListTagValuesRequestTagFilter &) = default ;
    ListTagValuesRequestTagFilter(ListTagValuesRequestTagFilter &&) = default ;
    ListTagValuesRequestTagFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagValuesRequestTagFilter() = default ;
    ListTagValuesRequestTagFilter& operator=(const ListTagValuesRequestTagFilter &) = default ;
    ListTagValuesRequestTagFilter& operator=(ListTagValuesRequestTagFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTagValuesRequestTagFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag value for a fuzzy query.
    // 
    // This parameter is used together with the `FuzzyType` parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
