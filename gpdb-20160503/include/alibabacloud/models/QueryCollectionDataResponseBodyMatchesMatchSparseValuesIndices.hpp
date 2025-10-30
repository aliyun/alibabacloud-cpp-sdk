// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCHSPARSEVALUESINDICES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCHSPARSEVALUESINDICES_HPP_
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
  class QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices& obj) { 
      DARABONBA_PTR_TO_JSON(Indice, indice_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices& obj) { 
      DARABONBA_PTR_FROM_JSON(Indice, indice_);
    };
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices() = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices(const QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices &) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices(QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices &&) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices() = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices& operator=(const QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices &) = default ;
    QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices& operator=(QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indice_ == nullptr; };
    // indice Field Functions 
    bool hasIndice() const { return this->indice_ != nullptr;};
    void deleteIndice() { this->indice_ = nullptr;};
    inline const vector<int32_t> & indice() const { DARABONBA_PTR_GET_CONST(indice_, vector<int32_t>) };
    inline vector<int32_t> indice() { DARABONBA_PTR_GET(indice_, vector<int32_t>) };
    inline QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices& setIndice(const vector<int32_t> & indice) { DARABONBA_PTR_SET_VALUE(indice_, indice) };
    inline QueryCollectionDataResponseBodyMatchesMatchSparseValuesIndices& setIndice(vector<int32_t> && indice) { DARABONBA_PTR_SET_RVALUE(indice_, indice) };


  protected:
    std::shared_ptr<vector<int32_t>> indice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
