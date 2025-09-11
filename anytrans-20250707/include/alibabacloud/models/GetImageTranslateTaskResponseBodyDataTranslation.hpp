// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATATRANSLATION_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATATRANSLATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes.hpp>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslationTableInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetImageTranslateTaskResponseBodyDataTranslation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateTaskResponseBodyDataTranslation& obj) { 
      DARABONBA_PTR_TO_JSON(angle, angle_);
      DARABONBA_PTR_TO_JSON(boundingBoxes, boundingBoxes_);
      DARABONBA_PTR_TO_JSON(boxesCount, boxesCount_);
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(orgHeight, orgHeight_);
      DARABONBA_PTR_TO_JSON(orgWidth, orgWidth_);
      DARABONBA_PTR_TO_JSON(tableInfos, tableInfos_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateTaskResponseBodyDataTranslation& obj) { 
      DARABONBA_PTR_FROM_JSON(angle, angle_);
      DARABONBA_PTR_FROM_JSON(boundingBoxes, boundingBoxes_);
      DARABONBA_PTR_FROM_JSON(boxesCount, boxesCount_);
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(orgHeight, orgHeight_);
      DARABONBA_PTR_FROM_JSON(orgWidth, orgWidth_);
      DARABONBA_PTR_FROM_JSON(tableInfos, tableInfos_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    GetImageTranslateTaskResponseBodyDataTranslation() = default ;
    GetImageTranslateTaskResponseBodyDataTranslation(const GetImageTranslateTaskResponseBodyDataTranslation &) = default ;
    GetImageTranslateTaskResponseBodyDataTranslation(GetImageTranslateTaskResponseBodyDataTranslation &&) = default ;
    GetImageTranslateTaskResponseBodyDataTranslation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateTaskResponseBodyDataTranslation() = default ;
    GetImageTranslateTaskResponseBodyDataTranslation& operator=(const GetImageTranslateTaskResponseBodyDataTranslation &) = default ;
    GetImageTranslateTaskResponseBodyDataTranslation& operator=(GetImageTranslateTaskResponseBodyDataTranslation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->angle_ != nullptr
        && this->boundingBoxes_ != nullptr && this->boxesCount_ != nullptr && this->height_ != nullptr && this->orgHeight_ != nullptr && this->orgWidth_ != nullptr
        && this->tableInfos_ != nullptr && this->width_ != nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int64_t angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // boundingBoxes Field Functions 
    bool hasBoundingBoxes() const { return this->boundingBoxes_ != nullptr;};
    void deleteBoundingBoxes() { this->boundingBoxes_ = nullptr;};
    inline const vector<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes> & boundingBoxes() const { DARABONBA_PTR_GET_CONST(boundingBoxes_, vector<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes>) };
    inline vector<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes> boundingBoxes() { DARABONBA_PTR_GET(boundingBoxes_, vector<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes>) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setBoundingBoxes(const vector<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes> & boundingBoxes) { DARABONBA_PTR_SET_VALUE(boundingBoxes_, boundingBoxes) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setBoundingBoxes(vector<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes> && boundingBoxes) { DARABONBA_PTR_SET_RVALUE(boundingBoxes_, boundingBoxes) };


    // boxesCount Field Functions 
    bool hasBoxesCount() const { return this->boxesCount_ != nullptr;};
    void deleteBoxesCount() { this->boxesCount_ = nullptr;};
    inline int64_t boxesCount() const { DARABONBA_PTR_GET_DEFAULT(boxesCount_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setBoxesCount(int64_t boxesCount) { DARABONBA_PTR_SET_VALUE(boxesCount_, boxesCount) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // orgHeight Field Functions 
    bool hasOrgHeight() const { return this->orgHeight_ != nullptr;};
    void deleteOrgHeight() { this->orgHeight_ = nullptr;};
    inline int64_t orgHeight() const { DARABONBA_PTR_GET_DEFAULT(orgHeight_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setOrgHeight(int64_t orgHeight) { DARABONBA_PTR_SET_VALUE(orgHeight_, orgHeight) };


    // orgWidth Field Functions 
    bool hasOrgWidth() const { return this->orgWidth_ != nullptr;};
    void deleteOrgWidth() { this->orgWidth_ = nullptr;};
    inline int64_t orgWidth() const { DARABONBA_PTR_GET_DEFAULT(orgWidth_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setOrgWidth(int64_t orgWidth) { DARABONBA_PTR_SET_VALUE(orgWidth_, orgWidth) };


    // tableInfos Field Functions 
    bool hasTableInfos() const { return this->tableInfos_ != nullptr;};
    void deleteTableInfos() { this->tableInfos_ = nullptr;};
    inline const vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfos> & tableInfos() const { DARABONBA_PTR_GET_CONST(tableInfos_, vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfos>) };
    inline vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfos> tableInfos() { DARABONBA_PTR_GET(tableInfos_, vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfos>) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setTableInfos(const vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfos> & tableInfos) { DARABONBA_PTR_SET_VALUE(tableInfos_, tableInfos) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setTableInfos(vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfos> && tableInfos) { DARABONBA_PTR_SET_RVALUE(tableInfos_, tableInfos) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslation& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int64_t> angle_ = nullptr;
    std::shared_ptr<vector<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes>> boundingBoxes_ = nullptr;
    std::shared_ptr<int64_t> boxesCount_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<int64_t> orgHeight_ = nullptr;
    std::shared_ptr<int64_t> orgWidth_ = nullptr;
    std::shared_ptr<vector<Models::GetImageTranslateTaskResponseBodyDataTranslationTableInfos>> tableInfos_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
