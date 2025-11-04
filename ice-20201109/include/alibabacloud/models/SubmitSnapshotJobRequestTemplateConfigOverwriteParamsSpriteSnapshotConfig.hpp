// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUESTTEMPLATECONFIGOVERWRITEPARAMSSPRITESNAPSHOTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUESTTEMPLATECONFIGOVERWRITEPARAMSSPRITESNAPSHOTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CellHeight, cellHeight_);
      DARABONBA_PTR_TO_JSON(CellWidth, cellWidth_);
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(Margin, margin_);
      DARABONBA_PTR_TO_JSON(Padding, padding_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CellHeight, cellHeight_);
      DARABONBA_PTR_FROM_JSON(CellWidth, cellWidth_);
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(Margin, margin_);
      DARABONBA_PTR_FROM_JSON(Padding, padding_);
    };
    SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig() = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig(const SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig &) = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig(SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig &&) = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig() = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& operator=(const SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig &) = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& operator=(SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cellHeight_ == nullptr
        && return this->cellWidth_ == nullptr && return this->color_ == nullptr && return this->columns_ == nullptr && return this->lines_ == nullptr && return this->margin_ == nullptr
        && return this->padding_ == nullptr; };
    // cellHeight Field Functions 
    bool hasCellHeight() const { return this->cellHeight_ != nullptr;};
    void deleteCellHeight() { this->cellHeight_ = nullptr;};
    inline int32_t cellHeight() const { DARABONBA_PTR_GET_DEFAULT(cellHeight_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& setCellHeight(int32_t cellHeight) { DARABONBA_PTR_SET_VALUE(cellHeight_, cellHeight) };


    // cellWidth Field Functions 
    bool hasCellWidth() const { return this->cellWidth_ != nullptr;};
    void deleteCellWidth() { this->cellWidth_ = nullptr;};
    inline int32_t cellWidth() const { DARABONBA_PTR_GET_DEFAULT(cellWidth_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& setCellWidth(int32_t cellWidth) { DARABONBA_PTR_SET_VALUE(cellWidth_, cellWidth) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline int32_t columns() const { DARABONBA_PTR_GET_DEFAULT(columns_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& setColumns(int32_t columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline int32_t lines() const { DARABONBA_PTR_GET_DEFAULT(lines_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& setLines(int32_t lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };


    // margin Field Functions 
    bool hasMargin() const { return this->margin_ != nullptr;};
    void deleteMargin() { this->margin_ = nullptr;};
    inline int32_t margin() const { DARABONBA_PTR_GET_DEFAULT(margin_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& setMargin(int32_t margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


    // padding Field Functions 
    bool hasPadding() const { return this->padding_ != nullptr;};
    void deletePadding() { this->padding_ = nullptr;};
    inline int32_t padding() const { DARABONBA_PTR_GET_DEFAULT(padding_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig& setPadding(int32_t padding) { DARABONBA_PTR_SET_VALUE(padding_, padding) };


  protected:
    // The height of a single snapshot before tiling. The default value is the height of the output snapshot.
    std::shared_ptr<int32_t> cellHeight_ = nullptr;
    // The width of a single snapshot before tiling. The default value is the width of the output snapshot.
    std::shared_ptr<int32_t> cellWidth_ = nullptr;
    // The background color.
    std::shared_ptr<string> color_ = nullptr;
    // The number of columns that the image sprite contains.
    std::shared_ptr<int32_t> columns_ = nullptr;
    // The number of rows that the image sprite contains.
    std::shared_ptr<int32_t> lines_ = nullptr;
    // The width of the frame. Default value: 0. Unit: pixels.
    std::shared_ptr<int32_t> margin_ = nullptr;
    // The spacing between two adjacent snapshots. Default value: 0. Unit: pixels.
    std::shared_ptr<int32_t> padding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
