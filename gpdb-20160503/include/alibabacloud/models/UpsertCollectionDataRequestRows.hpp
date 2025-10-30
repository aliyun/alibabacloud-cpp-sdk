// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTCOLLECTIONDATAREQUESTROWS_HPP_
#define ALIBABACLOUD_MODELS_UPSERTCOLLECTIONDATAREQUESTROWS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpsertCollectionDataRequestRowsSparseVector.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpsertCollectionDataRequestRows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertCollectionDataRequestRows& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(SparseVector, sparseVector_);
      DARABONBA_PTR_TO_JSON(Vector, vector_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertCollectionDataRequestRows& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(SparseVector, sparseVector_);
      DARABONBA_PTR_FROM_JSON(Vector, vector_);
    };
    UpsertCollectionDataRequestRows() = default ;
    UpsertCollectionDataRequestRows(const UpsertCollectionDataRequestRows &) = default ;
    UpsertCollectionDataRequestRows(UpsertCollectionDataRequestRows &&) = default ;
    UpsertCollectionDataRequestRows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertCollectionDataRequestRows() = default ;
    UpsertCollectionDataRequestRows& operator=(const UpsertCollectionDataRequestRows &) = default ;
    UpsertCollectionDataRequestRows& operator=(UpsertCollectionDataRequestRows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->metadata_ == nullptr && return this->sparseVector_ == nullptr && return this->vector_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpsertCollectionDataRequestRows& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> metadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline UpsertCollectionDataRequestRows& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline UpsertCollectionDataRequestRows& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // sparseVector Field Functions 
    bool hasSparseVector() const { return this->sparseVector_ != nullptr;};
    void deleteSparseVector() { this->sparseVector_ = nullptr;};
    inline const Models::UpsertCollectionDataRequestRowsSparseVector & sparseVector() const { DARABONBA_PTR_GET_CONST(sparseVector_, Models::UpsertCollectionDataRequestRowsSparseVector) };
    inline Models::UpsertCollectionDataRequestRowsSparseVector sparseVector() { DARABONBA_PTR_GET(sparseVector_, Models::UpsertCollectionDataRequestRowsSparseVector) };
    inline UpsertCollectionDataRequestRows& setSparseVector(const Models::UpsertCollectionDataRequestRowsSparseVector & sparseVector) { DARABONBA_PTR_SET_VALUE(sparseVector_, sparseVector) };
    inline UpsertCollectionDataRequestRows& setSparseVector(Models::UpsertCollectionDataRequestRowsSparseVector && sparseVector) { DARABONBA_PTR_SET_RVALUE(sparseVector_, sparseVector) };


    // vector Field Functions 
    bool hasVector() const { return this->vector_ != nullptr;};
    void deleteVector() { this->vector_ = nullptr;};
    inline const vector<double> & _vector() const { DARABONBA_PTR_GET_CONST(vector_, vector<double>) };
    inline vector<double> _vector() { DARABONBA_PTR_GET(vector_, vector<double>) };
    inline UpsertCollectionDataRequestRows& setVector(const vector<double> & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
    inline UpsertCollectionDataRequestRows& setVector(vector<double> && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, string>> metadata_ = nullptr;
    std::shared_ptr<Models::UpsertCollectionDataRequestRowsSparseVector> sparseVector_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<double>> vector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
