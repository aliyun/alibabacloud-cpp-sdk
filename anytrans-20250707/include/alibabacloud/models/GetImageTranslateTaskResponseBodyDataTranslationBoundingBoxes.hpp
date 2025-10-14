// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATATRANSLATIONBOUNDINGBOXES_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATATRANSLATIONBOUNDINGBOXES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownLeft.hpp>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownRight.hpp>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpLeft.hpp>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpRight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& obj) { 
      DARABONBA_PTR_TO_JSON(confidence, confidence_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(downLeft, downLeft_);
      DARABONBA_PTR_TO_JSON(downRight, downRight_);
      DARABONBA_PTR_TO_JSON(tableCellId, tableCellId_);
      DARABONBA_PTR_TO_JSON(tableId, tableId_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_ANY_TO_JSON(translation, translation_);
      DARABONBA_PTR_TO_JSON(upLeft, upLeft_);
      DARABONBA_PTR_TO_JSON(upRight, upRight_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& obj) { 
      DARABONBA_PTR_FROM_JSON(confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(downLeft, downLeft_);
      DARABONBA_PTR_FROM_JSON(downRight, downRight_);
      DARABONBA_PTR_FROM_JSON(tableCellId, tableCellId_);
      DARABONBA_PTR_FROM_JSON(tableId, tableId_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_ANY_FROM_JSON(translation, translation_);
      DARABONBA_PTR_FROM_JSON(upLeft, upLeft_);
      DARABONBA_PTR_FROM_JSON(upRight, upRight_);
    };
    GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes() = default ;
    GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes(const GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes &) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes(GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes &&) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes() = default ;
    GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& operator=(const GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes &) = default ;
    GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& operator=(GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->direction_ == nullptr && return this->downLeft_ == nullptr && return this->downRight_ == nullptr && return this->tableCellId_ == nullptr && return this->tableId_ == nullptr
        && return this->text_ == nullptr && return this->translation_ == nullptr && return this->upLeft_ == nullptr && return this->upRight_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline int64_t direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setDirection(int64_t direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // downLeft Field Functions 
    bool hasDownLeft() const { return this->downLeft_ != nullptr;};
    void deleteDownLeft() { this->downLeft_ = nullptr;};
    inline const Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownLeft & downLeft() const { DARABONBA_PTR_GET_CONST(downLeft_, Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownLeft) };
    inline Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownLeft downLeft() { DARABONBA_PTR_GET(downLeft_, Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownLeft) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setDownLeft(const Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownLeft & downLeft) { DARABONBA_PTR_SET_VALUE(downLeft_, downLeft) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setDownLeft(Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownLeft && downLeft) { DARABONBA_PTR_SET_RVALUE(downLeft_, downLeft) };


    // downRight Field Functions 
    bool hasDownRight() const { return this->downRight_ != nullptr;};
    void deleteDownRight() { this->downRight_ = nullptr;};
    inline const Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownRight & downRight() const { DARABONBA_PTR_GET_CONST(downRight_, Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownRight) };
    inline Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownRight downRight() { DARABONBA_PTR_GET(downRight_, Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownRight) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setDownRight(const Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownRight & downRight) { DARABONBA_PTR_SET_VALUE(downRight_, downRight) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setDownRight(Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownRight && downRight) { DARABONBA_PTR_SET_RVALUE(downRight_, downRight) };


    // tableCellId Field Functions 
    bool hasTableCellId() const { return this->tableCellId_ != nullptr;};
    void deleteTableCellId() { this->tableCellId_ = nullptr;};
    inline int64_t tableCellId() const { DARABONBA_PTR_GET_DEFAULT(tableCellId_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setTableCellId(int64_t tableCellId) { DARABONBA_PTR_SET_VALUE(tableCellId_, tableCellId) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline     const Darabonba::Json & translation() const { DARABONBA_GET(translation_) };
    Darabonba::Json & translation() { DARABONBA_GET(translation_) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setTranslation(const Darabonba::Json & translation) { DARABONBA_SET_VALUE(translation_, translation) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setTranslation(Darabonba::Json & translation) { DARABONBA_SET_RVALUE(translation_, translation) };


    // upLeft Field Functions 
    bool hasUpLeft() const { return this->upLeft_ != nullptr;};
    void deleteUpLeft() { this->upLeft_ = nullptr;};
    inline const Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpLeft & upLeft() const { DARABONBA_PTR_GET_CONST(upLeft_, Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpLeft) };
    inline Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpLeft upLeft() { DARABONBA_PTR_GET(upLeft_, Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpLeft) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setUpLeft(const Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpLeft & upLeft) { DARABONBA_PTR_SET_VALUE(upLeft_, upLeft) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setUpLeft(Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpLeft && upLeft) { DARABONBA_PTR_SET_RVALUE(upLeft_, upLeft) };


    // upRight Field Functions 
    bool hasUpRight() const { return this->upRight_ != nullptr;};
    void deleteUpRight() { this->upRight_ = nullptr;};
    inline const Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpRight & upRight() const { DARABONBA_PTR_GET_CONST(upRight_, Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpRight) };
    inline Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpRight upRight() { DARABONBA_PTR_GET(upRight_, Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpRight) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setUpRight(const Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpRight & upRight) { DARABONBA_PTR_SET_VALUE(upRight_, upRight) };
    inline GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxes& setUpRight(Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpRight && upRight) { DARABONBA_PTR_SET_RVALUE(upRight_, upRight) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<int64_t> direction_ = nullptr;
    std::shared_ptr<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownLeft> downLeft_ = nullptr;
    std::shared_ptr<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesDownRight> downRight_ = nullptr;
    std::shared_ptr<int64_t> tableCellId_ = nullptr;
    std::shared_ptr<int64_t> tableId_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    Darabonba::Json translation_ = nullptr;
    std::shared_ptr<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpLeft> upLeft_ = nullptr;
    std::shared_ptr<Models::GetImageTranslateTaskResponseBodyDataTranslationBoundingBoxesUpRight> upRight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
