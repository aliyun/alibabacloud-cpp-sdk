// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BatchAddFacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Faces, facesShrink_);
      DARABONBA_PTR_TO_JSON(QualityScoreThreshold, qualityScoreThreshold_);
      DARABONBA_PTR_TO_JSON(SimilarityScoreThresholdBetweenEntity, similarityScoreThresholdBetweenEntity_);
      DARABONBA_PTR_TO_JSON(SimilarityScoreThresholdInEntity, similarityScoreThresholdInEntity_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(Faces, facesShrink_);
      DARABONBA_PTR_FROM_JSON(QualityScoreThreshold, qualityScoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SimilarityScoreThresholdBetweenEntity, similarityScoreThresholdBetweenEntity_);
      DARABONBA_PTR_FROM_JSON(SimilarityScoreThresholdInEntity, similarityScoreThresholdInEntity_);
    };
    BatchAddFacesShrinkRequest() = default ;
    BatchAddFacesShrinkRequest(const BatchAddFacesShrinkRequest &) = default ;
    BatchAddFacesShrinkRequest(BatchAddFacesShrinkRequest &&) = default ;
    BatchAddFacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFacesShrinkRequest() = default ;
    BatchAddFacesShrinkRequest& operator=(const BatchAddFacesShrinkRequest &) = default ;
    BatchAddFacesShrinkRequest& operator=(BatchAddFacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->entityId_ == nullptr && return this->facesShrink_ == nullptr && return this->qualityScoreThreshold_ == nullptr && return this->similarityScoreThresholdBetweenEntity_ == nullptr && return this->similarityScoreThresholdInEntity_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline BatchAddFacesShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline BatchAddFacesShrinkRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // facesShrink Field Functions 
    bool hasFacesShrink() const { return this->facesShrink_ != nullptr;};
    void deleteFacesShrink() { this->facesShrink_ = nullptr;};
    inline string facesShrink() const { DARABONBA_PTR_GET_DEFAULT(facesShrink_, "") };
    inline BatchAddFacesShrinkRequest& setFacesShrink(string facesShrink) { DARABONBA_PTR_SET_VALUE(facesShrink_, facesShrink) };


    // qualityScoreThreshold Field Functions 
    bool hasQualityScoreThreshold() const { return this->qualityScoreThreshold_ != nullptr;};
    void deleteQualityScoreThreshold() { this->qualityScoreThreshold_ = nullptr;};
    inline float qualityScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreThreshold_, 0.0) };
    inline BatchAddFacesShrinkRequest& setQualityScoreThreshold(float qualityScoreThreshold) { DARABONBA_PTR_SET_VALUE(qualityScoreThreshold_, qualityScoreThreshold) };


    // similarityScoreThresholdBetweenEntity Field Functions 
    bool hasSimilarityScoreThresholdBetweenEntity() const { return this->similarityScoreThresholdBetweenEntity_ != nullptr;};
    void deleteSimilarityScoreThresholdBetweenEntity() { this->similarityScoreThresholdBetweenEntity_ = nullptr;};
    inline float similarityScoreThresholdBetweenEntity() const { DARABONBA_PTR_GET_DEFAULT(similarityScoreThresholdBetweenEntity_, 0.0) };
    inline BatchAddFacesShrinkRequest& setSimilarityScoreThresholdBetweenEntity(float similarityScoreThresholdBetweenEntity) { DARABONBA_PTR_SET_VALUE(similarityScoreThresholdBetweenEntity_, similarityScoreThresholdBetweenEntity) };


    // similarityScoreThresholdInEntity Field Functions 
    bool hasSimilarityScoreThresholdInEntity() const { return this->similarityScoreThresholdInEntity_ != nullptr;};
    void deleteSimilarityScoreThresholdInEntity() { this->similarityScoreThresholdInEntity_ = nullptr;};
    inline float similarityScoreThresholdInEntity() const { DARABONBA_PTR_GET_DEFAULT(similarityScoreThresholdInEntity_, 0.0) };
    inline BatchAddFacesShrinkRequest& setSimilarityScoreThresholdInEntity(float similarityScoreThresholdInEntity) { DARABONBA_PTR_SET_VALUE(similarityScoreThresholdInEntity_, similarityScoreThresholdInEntity) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> facesShrink_ = nullptr;
    std::shared_ptr<float> qualityScoreThreshold_ = nullptr;
    std::shared_ptr<float> similarityScoreThresholdBetweenEntity_ = nullptr;
    std::shared_ptr<float> similarityScoreThresholdInEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
