// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFACERESPONSEBODYDATAMATCHLISTFACEITEMS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFACERESPONSEBODYDATAMATCHLISTFACEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class SearchFaceResponseBodyDataMatchListFaceItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFaceResponseBodyDataMatchListFaceItems& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFaceResponseBodyDataMatchListFaceItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    SearchFaceResponseBodyDataMatchListFaceItems() = default ;
    SearchFaceResponseBodyDataMatchListFaceItems(const SearchFaceResponseBodyDataMatchListFaceItems &) = default ;
    SearchFaceResponseBodyDataMatchListFaceItems(SearchFaceResponseBodyDataMatchListFaceItems &&) = default ;
    SearchFaceResponseBodyDataMatchListFaceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFaceResponseBodyDataMatchListFaceItems() = default ;
    SearchFaceResponseBodyDataMatchListFaceItems& operator=(const SearchFaceResponseBodyDataMatchListFaceItems &) = default ;
    SearchFaceResponseBodyDataMatchListFaceItems& operator=(SearchFaceResponseBodyDataMatchListFaceItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->dbName_ == nullptr && return this->entityId_ == nullptr && return this->extraData_ == nullptr && return this->faceId_ == nullptr && return this->score_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline SearchFaceResponseBodyDataMatchListFaceItems& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SearchFaceResponseBodyDataMatchListFaceItems& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SearchFaceResponseBodyDataMatchListFaceItems& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline SearchFaceResponseBodyDataMatchListFaceItems& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline SearchFaceResponseBodyDataMatchListFaceItems& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline SearchFaceResponseBodyDataMatchListFaceItems& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<string> extraData_ = nullptr;
    std::shared_ptr<string> faceId_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
