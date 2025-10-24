// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLISTSNAPSHOTJOBSNAPSHOTCONFIGTILEOUT_HPP_
#define ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLISTSNAPSHOTJOBSNAPSHOTCONFIGTILEOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& obj) { 
      DARABONBA_PTR_TO_JSON(CellHeight, cellHeight_);
      DARABONBA_PTR_TO_JSON(CellSelStep, cellSelStep_);
      DARABONBA_PTR_TO_JSON(CellWidth, cellWidth_);
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(IsKeepCellPic, isKeepCellPic_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(Margin, margin_);
      DARABONBA_PTR_TO_JSON(Padding, padding_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& obj) { 
      DARABONBA_PTR_FROM_JSON(CellHeight, cellHeight_);
      DARABONBA_PTR_FROM_JSON(CellSelStep, cellSelStep_);
      DARABONBA_PTR_FROM_JSON(CellWidth, cellWidth_);
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(IsKeepCellPic, isKeepCellPic_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(Margin, margin_);
      DARABONBA_PTR_FROM_JSON(Padding, padding_);
    };
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut(const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut(QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut &&) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& operator=(const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& operator=(QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cellHeight_ == nullptr
        && return this->cellSelStep_ == nullptr && return this->cellWidth_ == nullptr && return this->color_ == nullptr && return this->columns_ == nullptr && return this->isKeepCellPic_ == nullptr
        && return this->lines_ == nullptr && return this->margin_ == nullptr && return this->padding_ == nullptr; };
    // cellHeight Field Functions 
    bool hasCellHeight() const { return this->cellHeight_ != nullptr;};
    void deleteCellHeight() { this->cellHeight_ = nullptr;};
    inline string cellHeight() const { DARABONBA_PTR_GET_DEFAULT(cellHeight_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setCellHeight(string cellHeight) { DARABONBA_PTR_SET_VALUE(cellHeight_, cellHeight) };


    // cellSelStep Field Functions 
    bool hasCellSelStep() const { return this->cellSelStep_ != nullptr;};
    void deleteCellSelStep() { this->cellSelStep_ = nullptr;};
    inline string cellSelStep() const { DARABONBA_PTR_GET_DEFAULT(cellSelStep_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setCellSelStep(string cellSelStep) { DARABONBA_PTR_SET_VALUE(cellSelStep_, cellSelStep) };


    // cellWidth Field Functions 
    bool hasCellWidth() const { return this->cellWidth_ != nullptr;};
    void deleteCellWidth() { this->cellWidth_ = nullptr;};
    inline string cellWidth() const { DARABONBA_PTR_GET_DEFAULT(cellWidth_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setCellWidth(string cellWidth) { DARABONBA_PTR_SET_VALUE(cellWidth_, cellWidth) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline string columns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


    // isKeepCellPic Field Functions 
    bool hasIsKeepCellPic() const { return this->isKeepCellPic_ != nullptr;};
    void deleteIsKeepCellPic() { this->isKeepCellPic_ = nullptr;};
    inline string isKeepCellPic() const { DARABONBA_PTR_GET_DEFAULT(isKeepCellPic_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setIsKeepCellPic(string isKeepCellPic) { DARABONBA_PTR_SET_VALUE(isKeepCellPic_, isKeepCellPic) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline string lines() const { DARABONBA_PTR_GET_DEFAULT(lines_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setLines(string lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };


    // margin Field Functions 
    bool hasMargin() const { return this->margin_ != nullptr;};
    void deleteMargin() { this->margin_ = nullptr;};
    inline string margin() const { DARABONBA_PTR_GET_DEFAULT(margin_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setMargin(string margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


    // padding Field Functions 
    bool hasPadding() const { return this->padding_ != nullptr;};
    void deletePadding() { this->padding_ = nullptr;};
    inline string padding() const { DARABONBA_PTR_GET_DEFAULT(padding_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut& setPadding(string padding) { DARABONBA_PTR_SET_VALUE(padding_, padding) };


  protected:
    // The interval for taking snapshots.
    // 
    // *   If this Interval parameter is specified in the request, snapshots are taken at intervals. The value must be greater than 0.
    // *   Unit: seconds.
    // *   Default value: **10**.
    std::shared_ptr<string> cellHeight_ = nullptr;
    // The number of rows that the tiled image can contain. Default value: **10**.
    std::shared_ptr<string> cellSelStep_ = nullptr;
    // The type of the snapshot. Valid values:
    // 
    // *   **normal**: normal frames.
    // *   **intra**: I-frames.
    // *   Default value: **intra**.
    std::shared_ptr<string> cellWidth_ = nullptr;
    // Indicates whether the single images are retained. Default value: **true**.
    std::shared_ptr<string> color_ = nullptr;
    // The height of the output snapshot.
    std::shared_ptr<string> columns_ = nullptr;
    // The Object Storage Service (OSS) output file of the snapshot job.
    std::shared_ptr<string> isKeepCellPic_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the specified RAM role. Format: acs:ram::$accountID:role/$roleName.
    std::shared_ptr<string> lines_ = nullptr;
    // The width of the output snapshot.
    std::shared_ptr<string> margin_ = nullptr;
    // The number of columns that the tiled image can contain. Default value: **10**.
    std::shared_ptr<string> padding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
