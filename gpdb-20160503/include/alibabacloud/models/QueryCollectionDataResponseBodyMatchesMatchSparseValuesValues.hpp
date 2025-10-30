// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCHSPARSEVALUESVALUES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCHSPARSEVALUESVALUES_HPP_
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
  class QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues() = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues(const QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues &) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues(QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues &&) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues() = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues& operator=(const QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues &) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues& operator=(QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<float> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<float>) };
    inline vector<float> value() { DARABONBA_PTR_GET(value_, vector<float>) };
    inline QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues& setValue(const vector<float> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues& setValue(vector<float> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<vector<float>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
