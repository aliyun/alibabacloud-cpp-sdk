// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCHSPARSEVALUES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCHSPARSEVALUES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices.hpp>
#include <alibabacloud/models/QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataResponseBodyMatchesMatchSparseValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataResponseBodyMatchesMatchSparseValues& obj) { 
      DARABONBA_PTR_TO_JSON(Indices, indices_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataResponseBodyMatchesMatchSparseValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Indices, indices_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    QueryCollectionDataResponseBodyMatchesMatchSparseValues() = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValues(const QueryCollectionDataResponseBodyMatchesMatchSparseValues &) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValues(QueryCollectionDataResponseBodyMatchesMatchSparseValues &&) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataResponseBodyMatchesMatchSparseValues() = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValues& operator=(const QueryCollectionDataResponseBodyMatchesMatchSparseValues &) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValues& operator=(QueryCollectionDataResponseBodyMatchesMatchSparseValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indices_ == nullptr
        && return this->values_ == nullptr; };
    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices & indices() const { DARABONBA_PTR_GET_CONST(indices_, Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices) };
    inline Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices indices() { DARABONBA_PTR_GET(indices_, Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices) };
    inline QueryCollectionDataResponseBodyMatchesMatchSparseValues& setIndices(const Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline QueryCollectionDataResponseBodyMatchesMatchSparseValues& setIndices(Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues & values() const { DARABONBA_PTR_GET_CONST(values_, Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues) };
    inline Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues values() { DARABONBA_PTR_GET(values_, Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues) };
    inline QueryCollectionDataResponseBodyMatchesMatchSparseValues& setValues(const Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline QueryCollectionDataResponseBodyMatchesMatchSparseValues& setValues(Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices> indices_ = nullptr;
    std::shared_ptr<Models::QueryCollectionDataResponseBodyMatchesMatchSparseValuesValues> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
