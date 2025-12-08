// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class SearchFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DbNames, dbNames_);
      DARABONBA_TO_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(MaxFaceNum, maxFaceNum_);
      DARABONBA_PTR_TO_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DbNames, dbNames_);
      DARABONBA_FROM_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(MaxFaceNum, maxFaceNum_);
      DARABONBA_PTR_FROM_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    SearchFaceAdvanceRequest() = default ;
    SearchFaceAdvanceRequest(const SearchFaceAdvanceRequest &) = default ;
    SearchFaceAdvanceRequest(SearchFaceAdvanceRequest &&) = default ;
    SearchFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFaceAdvanceRequest() = default ;
    SearchFaceAdvanceRequest& operator=(const SearchFaceAdvanceRequest &) = default ;
    SearchFaceAdvanceRequest& operator=(SearchFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->dbNames_ == nullptr && return this->imageUrlObject_ == nullptr && return this->limit_ == nullptr && return this->maxFaceNum_ == nullptr && return this->qualityScoreThreshold_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SearchFaceAdvanceRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string dbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline SearchFaceAdvanceRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // imageUrlObject Field Functions 
    bool hasImageUrlObject() const { return this->imageUrlObject_ != nullptr;};
    void deleteImageUrlObject() { this->imageUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageUrlObject() const { DARABONBA_GET(imageUrlObject_) };
    inline SearchFaceAdvanceRequest& setImageUrlObject(shared_ptr<Darabonba::IStream> imageUrlObject) { DARABONBA_SET_VALUE(imageUrlObject_, imageUrlObject) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline SearchFaceAdvanceRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // maxFaceNum Field Functions 
    bool hasMaxFaceNum() const { return this->maxFaceNum_ != nullptr;};
    void deleteMaxFaceNum() { this->maxFaceNum_ = nullptr;};
    inline int64_t maxFaceNum() const { DARABONBA_PTR_GET_DEFAULT(maxFaceNum_, 0L) };
    inline SearchFaceAdvanceRequest& setMaxFaceNum(int64_t maxFaceNum) { DARABONBA_PTR_SET_VALUE(maxFaceNum_, maxFaceNum) };


    // qualityScoreThreshold Field Functions 
    bool hasQualityScoreThreshold() const { return this->qualityScoreThreshold_ != nullptr;};
    void deleteQualityScoreThreshold() { this->qualityScoreThreshold_ = nullptr;};
    inline float qualityScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreThreshold_, 0.0) };
    inline SearchFaceAdvanceRequest& setQualityScoreThreshold(float qualityScoreThreshold) { DARABONBA_PTR_SET_VALUE(qualityScoreThreshold_, qualityScoreThreshold) };


  protected:
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> dbNames_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageUrlObject_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> limit_ = nullptr;
    std::shared_ptr<int64_t> maxFaceNum_ = nullptr;
    std::shared_ptr<float> qualityScoreThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
