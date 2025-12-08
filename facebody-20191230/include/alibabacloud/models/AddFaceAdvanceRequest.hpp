// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class AddFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_TO_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_TO_JSON(QualityScoreThreshold, qualityScoreThreshold_);
      DARABONBA_PTR_TO_JSON(SimilarityScoreThresholdBetweenEntity, similarityScoreThresholdBetweenEntity_);
      DARABONBA_PTR_TO_JSON(SimilarityScoreThresholdInEntity, similarityScoreThresholdInEntity_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_FROM_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_FROM_JSON(QualityScoreThreshold, qualityScoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SimilarityScoreThresholdBetweenEntity, similarityScoreThresholdBetweenEntity_);
      DARABONBA_PTR_FROM_JSON(SimilarityScoreThresholdInEntity, similarityScoreThresholdInEntity_);
    };
    AddFaceAdvanceRequest() = default ;
    AddFaceAdvanceRequest(const AddFaceAdvanceRequest &) = default ;
    AddFaceAdvanceRequest(AddFaceAdvanceRequest &&) = default ;
    AddFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceAdvanceRequest() = default ;
    AddFaceAdvanceRequest& operator=(const AddFaceAdvanceRequest &) = default ;
    AddFaceAdvanceRequest& operator=(AddFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->entityId_ == nullptr && return this->extraData_ == nullptr && return this->imageUrlObject_ == nullptr && return this->qualityScoreThreshold_ == nullptr && return this->similarityScoreThresholdBetweenEntity_ == nullptr
        && return this->similarityScoreThresholdInEntity_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline AddFaceAdvanceRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline AddFaceAdvanceRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline AddFaceAdvanceRequest& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // imageUrlObject Field Functions 
    bool hasImageUrlObject() const { return this->imageUrlObject_ != nullptr;};
    void deleteImageUrlObject() { this->imageUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageUrlObject() const { DARABONBA_GET(imageUrlObject_) };
    inline AddFaceAdvanceRequest& setImageUrlObject(shared_ptr<Darabonba::IStream> imageUrlObject) { DARABONBA_SET_VALUE(imageUrlObject_, imageUrlObject) };


    // qualityScoreThreshold Field Functions 
    bool hasQualityScoreThreshold() const { return this->qualityScoreThreshold_ != nullptr;};
    void deleteQualityScoreThreshold() { this->qualityScoreThreshold_ = nullptr;};
    inline float qualityScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreThreshold_, 0.0) };
    inline AddFaceAdvanceRequest& setQualityScoreThreshold(float qualityScoreThreshold) { DARABONBA_PTR_SET_VALUE(qualityScoreThreshold_, qualityScoreThreshold) };


    // similarityScoreThresholdBetweenEntity Field Functions 
    bool hasSimilarityScoreThresholdBetweenEntity() const { return this->similarityScoreThresholdBetweenEntity_ != nullptr;};
    void deleteSimilarityScoreThresholdBetweenEntity() { this->similarityScoreThresholdBetweenEntity_ = nullptr;};
    inline float similarityScoreThresholdBetweenEntity() const { DARABONBA_PTR_GET_DEFAULT(similarityScoreThresholdBetweenEntity_, 0.0) };
    inline AddFaceAdvanceRequest& setSimilarityScoreThresholdBetweenEntity(float similarityScoreThresholdBetweenEntity) { DARABONBA_PTR_SET_VALUE(similarityScoreThresholdBetweenEntity_, similarityScoreThresholdBetweenEntity) };


    // similarityScoreThresholdInEntity Field Functions 
    bool hasSimilarityScoreThresholdInEntity() const { return this->similarityScoreThresholdInEntity_ != nullptr;};
    void deleteSimilarityScoreThresholdInEntity() { this->similarityScoreThresholdInEntity_ = nullptr;};
    inline float similarityScoreThresholdInEntity() const { DARABONBA_PTR_GET_DEFAULT(similarityScoreThresholdInEntity_, 0.0) };
    inline AddFaceAdvanceRequest& setSimilarityScoreThresholdInEntity(float similarityScoreThresholdInEntity) { DARABONBA_PTR_SET_VALUE(similarityScoreThresholdInEntity_, similarityScoreThresholdInEntity) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<string> extraData_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageUrlObject_ = nullptr;
    std::shared_ptr<float> qualityScoreThreshold_ = nullptr;
    std::shared_ptr<float> similarityScoreThresholdBetweenEntity_ = nullptr;
    std::shared_ptr<float> similarityScoreThresholdInEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
