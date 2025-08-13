// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGVALUESRESPONSEBODYVALUES_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGVALUESRESPONSEBODYVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagValuesResponseBodyValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagValuesResponseBodyValues& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagValuesResponseBodyValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTagValuesResponseBodyValues() = default ;
    ListTagValuesResponseBodyValues(const ListTagValuesResponseBodyValues &) = default ;
    ListTagValuesResponseBodyValues(ListTagValuesResponseBodyValues &&) = default ;
    ListTagValuesResponseBodyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagValuesResponseBodyValues() = default ;
    ListTagValuesResponseBodyValues& operator=(const ListTagValuesResponseBodyValues &) = default ;
    ListTagValuesResponseBodyValues& operator=(ListTagValuesResponseBodyValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListTagValuesResponseBodyValues& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListTagValuesResponseBodyValues& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
