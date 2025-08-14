// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Dx, dx_);
      DARABONBA_PTR_TO_JSON(Dy, dy_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Dx, dx_);
      DARABONBA_PTR_FROM_JSON(Dy, dy_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& operator=(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams &&) = default ;
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
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline string dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile file() { DARABONBA_PTR_GET(file_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setFile(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setFile(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline & timeline() const { DARABONBA_PTR_GET_CONST(timeline_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline timeline() { DARABONBA_PTR_GET(timeline_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setTimeline(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setTimeline(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParams& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The position of the watermark on the x-axis.
    std::shared_ptr<string> dx_ = nullptr;
    // The position of the watermark on the y-axis.
    std::shared_ptr<string> dy_ = nullptr;
    // The watermark image file.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsFile> file_ = nullptr;
    // The height of the output video.
    std::shared_ptr<string> height_ = nullptr;
    // The reference position of the watermark. Valid values: TopLeft, TopRight, BottomLeft, and BottomRight. Default value: TopLeft.
    std::shared_ptr<string> referPos_ = nullptr;
    // The timeline settings.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline> timeline_ = nullptr;
    // The width of the output video.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
