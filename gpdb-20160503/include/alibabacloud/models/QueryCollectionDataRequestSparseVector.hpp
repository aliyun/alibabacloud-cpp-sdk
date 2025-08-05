// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATAREQUESTSPARSEVECTOR_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATAREQUESTSPARSEVECTOR_HPP_
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
  class QueryCollectionDataRequestSparseVector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataRequestSparseVector& obj) { 
      DARABONBA_PTR_TO_JSON(Indices, indices_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataRequestSparseVector& obj) { 
      DARABONBA_PTR_FROM_JSON(Indices, indices_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    QueryCollectionDataRequestSparseVector() = default ;
    QueryCollectionDataRequestSparseVector(const QueryCollectionDataRequestSparseVector &) = default ;
    QueryCollectionDataRequestSparseVector(QueryCollectionDataRequestSparseVector &&) = default ;
    QueryCollectionDataRequestSparseVector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataRequestSparseVector() = default ;
    QueryCollectionDataRequestSparseVector& operator=(const QueryCollectionDataRequestSparseVector &) = default ;
    QueryCollectionDataRequestSparseVector& operator=(QueryCollectionDataRequestSparseVector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indices_ != nullptr
        && this->values_ != nullptr; };
    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const vector<int64_t> & indices() const { DARABONBA_PTR_GET_CONST(indices_, vector<int64_t>) };
    inline vector<int64_t> indices() { DARABONBA_PTR_GET(indices_, vector<int64_t>) };
    inline QueryCollectionDataRequestSparseVector& setIndices(const vector<int64_t> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline QueryCollectionDataRequestSparseVector& setIndices(vector<int64_t> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<double> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<double>) };
    inline vector<double> values() { DARABONBA_PTR_GET(values_, vector<double>) };
    inline QueryCollectionDataRequestSparseVector& setValues(const vector<double> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline QueryCollectionDataRequestSparseVector& setValues(vector<double> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<vector<int64_t>> indices_ = nullptr;
    std::shared_ptr<vector<double>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
