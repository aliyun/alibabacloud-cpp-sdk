// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTABLEREQUESTVECTORINDEX_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTABLEREQUESTVECTORINDEX_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyTableRequestVectorIndexAdvanceParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyTableRequestVectorIndex : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTableRequestVectorIndex& obj) { 
      DARABONBA_PTR_TO_JSON(advanceParams, advanceParams_);
      DARABONBA_PTR_TO_JSON(dimension, dimension_);
      DARABONBA_PTR_TO_JSON(distanceType, distanceType_);
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(sparseIndexField, sparseIndexField_);
      DARABONBA_PTR_TO_JSON(sparseValueField, sparseValueField_);
      DARABONBA_PTR_TO_JSON(vectorField, vectorField_);
      DARABONBA_PTR_TO_JSON(vectorIndexType, vectorIndexType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTableRequestVectorIndex& obj) { 
      DARABONBA_PTR_FROM_JSON(advanceParams, advanceParams_);
      DARABONBA_PTR_FROM_JSON(dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(distanceType, distanceType_);
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(sparseIndexField, sparseIndexField_);
      DARABONBA_PTR_FROM_JSON(sparseValueField, sparseValueField_);
      DARABONBA_PTR_FROM_JSON(vectorField, vectorField_);
      DARABONBA_PTR_FROM_JSON(vectorIndexType, vectorIndexType_);
    };
    ModifyTableRequestVectorIndex() = default ;
    ModifyTableRequestVectorIndex(const ModifyTableRequestVectorIndex &) = default ;
    ModifyTableRequestVectorIndex(ModifyTableRequestVectorIndex &&) = default ;
    ModifyTableRequestVectorIndex(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTableRequestVectorIndex() = default ;
    ModifyTableRequestVectorIndex& operator=(const ModifyTableRequestVectorIndex &) = default ;
    ModifyTableRequestVectorIndex& operator=(ModifyTableRequestVectorIndex &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advanceParams_ != nullptr
        && this->dimension_ != nullptr && this->distanceType_ != nullptr && this->indexName_ != nullptr && this->namespace_ != nullptr && this->sparseIndexField_ != nullptr
        && this->sparseValueField_ != nullptr && this->vectorField_ != nullptr && this->vectorIndexType_ != nullptr; };
    // advanceParams Field Functions 
    bool hasAdvanceParams() const { return this->advanceParams_ != nullptr;};
    void deleteAdvanceParams() { this->advanceParams_ = nullptr;};
    inline const Models::ModifyTableRequestVectorIndexAdvanceParams & advanceParams() const { DARABONBA_PTR_GET_CONST(advanceParams_, Models::ModifyTableRequestVectorIndexAdvanceParams) };
    inline Models::ModifyTableRequestVectorIndexAdvanceParams advanceParams() { DARABONBA_PTR_GET(advanceParams_, Models::ModifyTableRequestVectorIndexAdvanceParams) };
    inline ModifyTableRequestVectorIndex& setAdvanceParams(const Models::ModifyTableRequestVectorIndexAdvanceParams & advanceParams) { DARABONBA_PTR_SET_VALUE(advanceParams_, advanceParams) };
    inline ModifyTableRequestVectorIndex& setAdvanceParams(Models::ModifyTableRequestVectorIndexAdvanceParams && advanceParams) { DARABONBA_PTR_SET_RVALUE(advanceParams_, advanceParams) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline ModifyTableRequestVectorIndex& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // distanceType Field Functions 
    bool hasDistanceType() const { return this->distanceType_ != nullptr;};
    void deleteDistanceType() { this->distanceType_ = nullptr;};
    inline string distanceType() const { DARABONBA_PTR_GET_DEFAULT(distanceType_, "") };
    inline ModifyTableRequestVectorIndex& setDistanceType(string distanceType) { DARABONBA_PTR_SET_VALUE(distanceType_, distanceType) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ModifyTableRequestVectorIndex& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyTableRequestVectorIndex& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // sparseIndexField Field Functions 
    bool hasSparseIndexField() const { return this->sparseIndexField_ != nullptr;};
    void deleteSparseIndexField() { this->sparseIndexField_ = nullptr;};
    inline string sparseIndexField() const { DARABONBA_PTR_GET_DEFAULT(sparseIndexField_, "") };
    inline ModifyTableRequestVectorIndex& setSparseIndexField(string sparseIndexField) { DARABONBA_PTR_SET_VALUE(sparseIndexField_, sparseIndexField) };


    // sparseValueField Field Functions 
    bool hasSparseValueField() const { return this->sparseValueField_ != nullptr;};
    void deleteSparseValueField() { this->sparseValueField_ = nullptr;};
    inline string sparseValueField() const { DARABONBA_PTR_GET_DEFAULT(sparseValueField_, "") };
    inline ModifyTableRequestVectorIndex& setSparseValueField(string sparseValueField) { DARABONBA_PTR_SET_VALUE(sparseValueField_, sparseValueField) };


    // vectorField Field Functions 
    bool hasVectorField() const { return this->vectorField_ != nullptr;};
    void deleteVectorField() { this->vectorField_ = nullptr;};
    inline string vectorField() const { DARABONBA_PTR_GET_DEFAULT(vectorField_, "") };
    inline ModifyTableRequestVectorIndex& setVectorField(string vectorField) { DARABONBA_PTR_SET_VALUE(vectorField_, vectorField) };


    // vectorIndexType Field Functions 
    bool hasVectorIndexType() const { return this->vectorIndexType_ != nullptr;};
    void deleteVectorIndexType() { this->vectorIndexType_ = nullptr;};
    inline string vectorIndexType() const { DARABONBA_PTR_GET_DEFAULT(vectorIndexType_, "") };
    inline ModifyTableRequestVectorIndex& setVectorIndexType(string vectorIndexType) { DARABONBA_PTR_SET_VALUE(vectorIndexType_, vectorIndexType) };


  protected:
    // The configurations of the index schema.
    std::shared_ptr<Models::ModifyTableRequestVectorIndexAdvanceParams> advanceParams_ = nullptr;
    // The dimension of the vector.
    std::shared_ptr<string> dimension_ = nullptr;
    // The distance type.
    std::shared_ptr<string> distanceType_ = nullptr;
    // The name of the index schema.
    std::shared_ptr<string> indexName_ = nullptr;
    // The namespace field.
    std::shared_ptr<string> namespace_ = nullptr;
    // The field that stores the indexes of the elements in sparse vectors.
    std::shared_ptr<string> sparseIndexField_ = nullptr;
    // The field that stores the elements in sparse vectors.
    std::shared_ptr<string> sparseValueField_ = nullptr;
    // The vector field.
    std::shared_ptr<string> vectorField_ = nullptr;
    // The vector retrieval algorithm.
    std::shared_ptr<string> vectorIndexType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
