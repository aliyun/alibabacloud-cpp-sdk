// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Dx, dx_);
      DARABONBA_PTR_TO_JSON(Dy, dy_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Dx, dx_);
      DARABONBA_PTR_FROM_JSON(Dy, dy_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dx_ != nullptr
        && this->dy_ != nullptr && this->file_ != nullptr && this->height_ != nullptr && this->referPos_ != nullptr && this->timeline_ != nullptr
        && this->width_ != nullptr; };
    // dx Field Functions 
    bool hasDx() const { return this->dx_ != nullptr;};
    void deleteDx() { this->dx_ = nullptr;};
    inline string dx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline string dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile file() { DARABONBA_PTR_GET(file_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setFile(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setFile(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline & timeline() const { DARABONBA_PTR_GET_CONST(timeline_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline timeline() { DARABONBA_PTR_GET(timeline_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setTimeline(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setTimeline(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The horizontal offset of the watermark relative to the output video. Default value: 0.
    // 
    // The following value types are supported:
    // 
    // *   Integer: the pixel value of the horizontal offset.
    // 
    //     *   Valid values: [8,4096].
    //     *   Unit: pixels.
    // 
    // *   Decimal: the ratio of the horizontal offset to the width of the output video.
    // 
    //     *   Valid values: (0,1).
    //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
    std::shared_ptr<string> dx_ = nullptr;
    // The vertical offset of the watermark relative to the output video. Default value: 0.
    // 
    // The following value types are supported:
    // 
    // *   Integer: the pixel value of the horizontal offset.
    // 
    //     *   Valid values: [8,4096].
    //     *   Unit: pixels.
    // 
    // *   Decimal: the ratio of the vertical offset to the height of the output video.
    // 
    //     *   Valid values: (0,1).
    //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
    std::shared_ptr<string> dy_ = nullptr;
    // The watermark image file.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile> file_ = nullptr;
    // The height of the watermark image in the output video. The following value types are supported:
    // 
    // *   Integer: the pixel value of the watermark height.
    // 
    //     *   Valid values: [8,4096].
    //     *   Unit: pixels.
    // 
    // *   Decimal: the ratio of the watermark height to the height of the output video.
    // 
    //     *   Valid values: (0,1).
    //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
    std::shared_ptr<string> height_ = nullptr;
    // The position of the watermark.
    // 
    // *   Valid values: TopRight, TopLeft, BottomRight, and BottomLeft.
    // *   Default value: TopRight.
    std::shared_ptr<string> referPos_ = nullptr;
    // The time settings of the dynamic watermark.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline> timeline_ = nullptr;
    // The width of the watermark in the output video. The following value types are supported:
    // 
    // *   Integer: the pixel value of the watermark width.
    // 
    //     *   Valid values: [8,4096].
    //     *   Unit: pixels.
    // 
    // *   Decimal: the ratio of the watermark width to the width of the output video.
    // 
    //     *   Valid values: (0,1).
    //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
