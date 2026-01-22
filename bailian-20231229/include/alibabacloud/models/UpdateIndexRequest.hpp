// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DenseSimilarityTopK, denseSimilarityTopK_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PipelineCommercialCu, pipelineCommercialCu_);
      DARABONBA_PTR_TO_JSON(PipelineCommercialType, pipelineCommercialType_);
      DARABONBA_PTR_TO_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_TO_JSON(SparseSimilarityTopK, sparseSimilarityTopK_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DenseSimilarityTopK, denseSimilarityTopK_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PipelineCommercialCu, pipelineCommercialCu_);
      DARABONBA_PTR_FROM_JSON(PipelineCommercialType, pipelineCommercialType_);
      DARABONBA_PTR_FROM_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_FROM_JSON(SparseSimilarityTopK, sparseSimilarityTopK_);
    };
    UpdateIndexRequest() = default ;
    UpdateIndexRequest(const UpdateIndexRequest &) = default ;
    UpdateIndexRequest(UpdateIndexRequest &&) = default ;
    UpdateIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIndexRequest() = default ;
    UpdateIndexRequest& operator=(const UpdateIndexRequest &) = default ;
    UpdateIndexRequest& operator=(UpdateIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->denseSimilarityTopK_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->pipelineCommercialCu_ == nullptr && this->pipelineCommercialType_ == nullptr
        && this->rerankMinScore_ == nullptr && this->sparseSimilarityTopK_ == nullptr; };
    // denseSimilarityTopK Field Functions 
    bool hasDenseSimilarityTopK() const { return this->denseSimilarityTopK_ != nullptr;};
    void deleteDenseSimilarityTopK() { this->denseSimilarityTopK_ = nullptr;};
    inline int32_t getDenseSimilarityTopK() const { DARABONBA_PTR_GET_DEFAULT(denseSimilarityTopK_, 0) };
    inline UpdateIndexRequest& setDenseSimilarityTopK(int32_t denseSimilarityTopK) { DARABONBA_PTR_SET_VALUE(denseSimilarityTopK_, denseSimilarityTopK) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateIndexRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateIndexRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateIndexRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pipelineCommercialCu Field Functions 
    bool hasPipelineCommercialCu() const { return this->pipelineCommercialCu_ != nullptr;};
    void deletePipelineCommercialCu() { this->pipelineCommercialCu_ = nullptr;};
    inline int32_t getPipelineCommercialCu() const { DARABONBA_PTR_GET_DEFAULT(pipelineCommercialCu_, 0) };
    inline UpdateIndexRequest& setPipelineCommercialCu(int32_t pipelineCommercialCu) { DARABONBA_PTR_SET_VALUE(pipelineCommercialCu_, pipelineCommercialCu) };


    // pipelineCommercialType Field Functions 
    bool hasPipelineCommercialType() const { return this->pipelineCommercialType_ != nullptr;};
    void deletePipelineCommercialType() { this->pipelineCommercialType_ = nullptr;};
    inline string getPipelineCommercialType() const { DARABONBA_PTR_GET_DEFAULT(pipelineCommercialType_, "") };
    inline UpdateIndexRequest& setPipelineCommercialType(string pipelineCommercialType) { DARABONBA_PTR_SET_VALUE(pipelineCommercialType_, pipelineCommercialType) };


    // rerankMinScore Field Functions 
    bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
    void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
    inline string getRerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, "") };
    inline UpdateIndexRequest& setRerankMinScore(string rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


    // sparseSimilarityTopK Field Functions 
    bool hasSparseSimilarityTopK() const { return this->sparseSimilarityTopK_ != nullptr;};
    void deleteSparseSimilarityTopK() { this->sparseSimilarityTopK_ = nullptr;};
    inline int32_t getSparseSimilarityTopK() const { DARABONBA_PTR_GET_DEFAULT(sparseSimilarityTopK_, 0) };
    inline UpdateIndexRequest& setSparseSimilarityTopK(int32_t sparseSimilarityTopK) { DARABONBA_PTR_SET_VALUE(sparseSimilarityTopK_, sparseSimilarityTopK) };


  protected:
    shared_ptr<int32_t> denseSimilarityTopK_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> pipelineCommercialCu_ {};
    shared_ptr<string> pipelineCommercialType_ {};
    shared_ptr<string> rerankMinScore_ {};
    shared_ptr<int32_t> sparseSimilarityTopK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
