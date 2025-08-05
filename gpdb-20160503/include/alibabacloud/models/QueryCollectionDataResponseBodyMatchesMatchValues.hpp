// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCHVALUES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCHVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataResponseBodyMatchesMatchValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataResponseBodyMatchesMatchValues& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataResponseBodyMatchesMatchValues& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    QueryCollectionDataResponseBodyMatchesMatchValues() = default ;
    QueryCollectionDataResponseBodyMatchesMatchValues(const QueryCollectionDataResponseBodyMatchesMatchValues &) = default ;
    QueryCollectionDataResponseBodyMatchesMatchValues(QueryCollectionDataResponseBodyMatchesMatchValues &&) = default ;
    QueryCollectionDataResponseBodyMatchesMatchValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataResponseBodyMatchesMatchValues() = default ;
    QueryCollectionDataResponseBodyMatchesMatchValues& operator=(const QueryCollectionDataResponseBodyMatchesMatchValues &) = default ;
    QueryCollectionDataResponseBodyMatchesMatchValues& operator=(QueryCollectionDataResponseBodyMatchesMatchValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<double> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<double>) };
    inline vector<double> value() { DARABONBA_PTR_GET(value_, vector<double>) };
    inline QueryCollectionDataResponseBodyMatchesMatchValues& setValue(const vector<double> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline QueryCollectionDataResponseBodyMatchesMatchValues& setValue(vector<double> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<vector<double>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
