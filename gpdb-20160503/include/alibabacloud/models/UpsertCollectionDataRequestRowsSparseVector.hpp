// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTCOLLECTIONDATAREQUESTROWSSPARSEVECTOR_HPP_
#define ALIBABACLOUD_MODELS_UPSERTCOLLECTIONDATAREQUESTROWSSPARSEVECTOR_HPP_
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
  class UpsertCollectionDataRequestRowsSparseVector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertCollectionDataRequestRowsSparseVector& obj) { 
      DARABONBA_PTR_TO_JSON(Indices, indices_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertCollectionDataRequestRowsSparseVector& obj) { 
      DARABONBA_PTR_FROM_JSON(Indices, indices_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    UpsertCollectionDataRequestRowsSparseVector() = default ;
    UpsertCollectionDataRequestRowsSparseVector(const UpsertCollectionDataRequestRowsSparseVector &) = default ;
    UpsertCollectionDataRequestRowsSparseVector(UpsertCollectionDataRequestRowsSparseVector &&) = default ;
    UpsertCollectionDataRequestRowsSparseVector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertCollectionDataRequestRowsSparseVector() = default ;
    UpsertCollectionDataRequestRowsSparseVector& operator=(const UpsertCollectionDataRequestRowsSparseVector &) = default ;
    UpsertCollectionDataRequestRowsSparseVector& operator=(UpsertCollectionDataRequestRowsSparseVector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indices_ == nullptr
        && return this->values_ == nullptr; };
    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const vector<int64_t> & indices() const { DARABONBA_PTR_GET_CONST(indices_, vector<int64_t>) };
    inline vector<int64_t> indices() { DARABONBA_PTR_GET(indices_, vector<int64_t>) };
    inline UpsertCollectionDataRequestRowsSparseVector& setIndices(const vector<int64_t> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline UpsertCollectionDataRequestRowsSparseVector& setIndices(vector<int64_t> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<double> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<double>) };
    inline vector<double> values() { DARABONBA_PTR_GET(values_, vector<double>) };
    inline UpsertCollectionDataRequestRowsSparseVector& setValues(const vector<double> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpsertCollectionDataRequestRowsSparseVector& setValues(vector<double> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<vector<int64_t>> indices_ = nullptr;
    std::shared_ptr<vector<double>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
