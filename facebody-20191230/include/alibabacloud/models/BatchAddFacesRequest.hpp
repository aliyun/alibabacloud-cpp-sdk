// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchAddFacesRequestFaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BatchAddFacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Faces, faces_);
      DARABONBA_PTR_TO_JSON(QualityScoreThreshold, qualityScoreThreshold_);
      DARABONBA_PTR_TO_JSON(SimilarityScoreThresholdBetweenEntity, similarityScoreThresholdBetweenEntity_);
      DARABONBA_PTR_TO_JSON(SimilarityScoreThresholdInEntity, similarityScoreThresholdInEntity_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(Faces, faces_);
      DARABONBA_PTR_FROM_JSON(QualityScoreThreshold, qualityScoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SimilarityScoreThresholdBetweenEntity, similarityScoreThresholdBetweenEntity_);
      DARABONBA_PTR_FROM_JSON(SimilarityScoreThresholdInEntity, similarityScoreThresholdInEntity_);
    };
    BatchAddFacesRequest() = default ;
    BatchAddFacesRequest(const BatchAddFacesRequest &) = default ;
    BatchAddFacesRequest(BatchAddFacesRequest &&) = default ;
    BatchAddFacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFacesRequest() = default ;
    BatchAddFacesRequest& operator=(const BatchAddFacesRequest &) = default ;
    BatchAddFacesRequest& operator=(BatchAddFacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->entityId_ == nullptr && return this->faces_ == nullptr && return this->qualityScoreThreshold_ == nullptr && return this->similarityScoreThresholdBetweenEntity_ == nullptr && return this->similarityScoreThresholdInEntity_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline BatchAddFacesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline BatchAddFacesRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // faces Field Functions 
    bool hasFaces() const { return this->faces_ != nullptr;};
    void deleteFaces() { this->faces_ = nullptr;};
    inline const vector<BatchAddFacesRequestFaces> & faces() const { DARABONBA_PTR_GET_CONST(faces_, vector<BatchAddFacesRequestFaces>) };
    inline vector<BatchAddFacesRequestFaces> faces() { DARABONBA_PTR_GET(faces_, vector<BatchAddFacesRequestFaces>) };
    inline BatchAddFacesRequest& setFaces(const vector<BatchAddFacesRequestFaces> & faces) { DARABONBA_PTR_SET_VALUE(faces_, faces) };
    inline BatchAddFacesRequest& setFaces(vector<BatchAddFacesRequestFaces> && faces) { DARABONBA_PTR_SET_RVALUE(faces_, faces) };


    // qualityScoreThreshold Field Functions 
    bool hasQualityScoreThreshold() const { return this->qualityScoreThreshold_ != nullptr;};
    void deleteQualityScoreThreshold() { this->qualityScoreThreshold_ = nullptr;};
    inline float qualityScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreThreshold_, 0.0) };
    inline BatchAddFacesRequest& setQualityScoreThreshold(float qualityScoreThreshold) { DARABONBA_PTR_SET_VALUE(qualityScoreThreshold_, qualityScoreThreshold) };


    // similarityScoreThresholdBetweenEntity Field Functions 
    bool hasSimilarityScoreThresholdBetweenEntity() const { return this->similarityScoreThresholdBetweenEntity_ != nullptr;};
    void deleteSimilarityScoreThresholdBetweenEntity() { this->similarityScoreThresholdBetweenEntity_ = nullptr;};
    inline float similarityScoreThresholdBetweenEntity() const { DARABONBA_PTR_GET_DEFAULT(similarityScoreThresholdBetweenEntity_, 0.0) };
    inline BatchAddFacesRequest& setSimilarityScoreThresholdBetweenEntity(float similarityScoreThresholdBetweenEntity) { DARABONBA_PTR_SET_VALUE(similarityScoreThresholdBetweenEntity_, similarityScoreThresholdBetweenEntity) };


    // similarityScoreThresholdInEntity Field Functions 
    bool hasSimilarityScoreThresholdInEntity() const { return this->similarityScoreThresholdInEntity_ != nullptr;};
    void deleteSimilarityScoreThresholdInEntity() { this->similarityScoreThresholdInEntity_ = nullptr;};
    inline float similarityScoreThresholdInEntity() const { DARABONBA_PTR_GET_DEFAULT(similarityScoreThresholdInEntity_, 0.0) };
    inline BatchAddFacesRequest& setSimilarityScoreThresholdInEntity(float similarityScoreThresholdInEntity) { DARABONBA_PTR_SET_VALUE(similarityScoreThresholdInEntity_, similarityScoreThresholdInEntity) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<BatchAddFacesRequestFaces>> faces_ = nullptr;
    std::shared_ptr<float> qualityScoreThreshold_ = nullptr;
    std::shared_ptr<float> similarityScoreThresholdBetweenEntity_ = nullptr;
    std::shared_ptr<float> similarityScoreThresholdInEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
