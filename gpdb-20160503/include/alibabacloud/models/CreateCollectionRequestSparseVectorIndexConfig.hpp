// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOLLECTIONREQUESTSPARSEVECTORINDEXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECOLLECTIONREQUESTSPARSEVECTORINDEXCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateCollectionRequestSparseVectorIndexConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCollectionRequestSparseVectorIndexConfig& obj) { 
      DARABONBA_PTR_TO_JSON(HnswEfConstruction, hnswEfConstruction_);
      DARABONBA_PTR_TO_JSON(HnswM, hnswM_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCollectionRequestSparseVectorIndexConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(HnswEfConstruction, hnswEfConstruction_);
      DARABONBA_PTR_FROM_JSON(HnswM, hnswM_);
    };
    CreateCollectionRequestSparseVectorIndexConfig() = default ;
    CreateCollectionRequestSparseVectorIndexConfig(const CreateCollectionRequestSparseVectorIndexConfig &) = default ;
    CreateCollectionRequestSparseVectorIndexConfig(CreateCollectionRequestSparseVectorIndexConfig &&) = default ;
    CreateCollectionRequestSparseVectorIndexConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCollectionRequestSparseVectorIndexConfig() = default ;
    CreateCollectionRequestSparseVectorIndexConfig& operator=(const CreateCollectionRequestSparseVectorIndexConfig &) = default ;
    CreateCollectionRequestSparseVectorIndexConfig& operator=(CreateCollectionRequestSparseVectorIndexConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hnswEfConstruction_ == nullptr
        && return this->hnswM_ == nullptr; };
    // hnswEfConstruction Field Functions 
    bool hasHnswEfConstruction() const { return this->hnswEfConstruction_ != nullptr;};
    void deleteHnswEfConstruction() { this->hnswEfConstruction_ = nullptr;};
    inline int32_t hnswEfConstruction() const { DARABONBA_PTR_GET_DEFAULT(hnswEfConstruction_, 0) };
    inline CreateCollectionRequestSparseVectorIndexConfig& setHnswEfConstruction(int32_t hnswEfConstruction) { DARABONBA_PTR_SET_VALUE(hnswEfConstruction_, hnswEfConstruction) };


    // hnswM Field Functions 
    bool hasHnswM() const { return this->hnswM_ != nullptr;};
    void deleteHnswM() { this->hnswM_ = nullptr;};
    inline int32_t hnswM() const { DARABONBA_PTR_GET_DEFAULT(hnswM_, 0) };
    inline CreateCollectionRequestSparseVectorIndexConfig& setHnswM(int32_t hnswM) { DARABONBA_PTR_SET_VALUE(hnswM_, hnswM) };


  protected:
    std::shared_ptr<int32_t> hnswEfConstruction_ = nullptr;
    std::shared_ptr<int32_t> hnswM_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
