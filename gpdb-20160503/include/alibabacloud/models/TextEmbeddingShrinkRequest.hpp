// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTEMBEDDINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEXTEMBEDDINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class TextEmbeddingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextEmbeddingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, TextEmbeddingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    TextEmbeddingShrinkRequest() = default ;
    TextEmbeddingShrinkRequest(const TextEmbeddingShrinkRequest &) = default ;
    TextEmbeddingShrinkRequest(TextEmbeddingShrinkRequest &&) = default ;
    TextEmbeddingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextEmbeddingShrinkRequest() = default ;
    TextEmbeddingShrinkRequest& operator=(const TextEmbeddingShrinkRequest &) = default ;
    TextEmbeddingShrinkRequest& operator=(TextEmbeddingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->dimension_ == nullptr && return this->inputShrink_ == nullptr && return this->model_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline TextEmbeddingShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline TextEmbeddingShrinkRequest& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline TextEmbeddingShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline TextEmbeddingShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TextEmbeddingShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TextEmbeddingShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The number of embedding dimensions. The default value is the number of dimensions supported by the embedding algorithm.
    // 
    // > 
    // 
    // *   The text-embedding-v3 supports 1024, 768, and 512 dimensions. Default value: 1024.
    std::shared_ptr<int32_t> dimension_ = nullptr;
    // A list of text content to be embedded. The list length must not exceed 100.
    std::shared_ptr<string> inputShrink_ = nullptr;
    // The text embedding model. Valid values:
    // 
    // *   text-embedding-v1:1536 dimensions
    // *   text-embedding-v2:1536 dimensions
    // *   text-embedding-v3 (default):1024, 768, and 512 dimensions
    // *   text2vec: 1024 dimensions
    // *   m3e-base: 768 dimensions
    // *   m3e-small: 512 dimensions
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
