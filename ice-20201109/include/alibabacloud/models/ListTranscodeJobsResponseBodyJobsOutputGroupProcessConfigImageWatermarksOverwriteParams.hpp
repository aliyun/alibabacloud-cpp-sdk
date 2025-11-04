// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGIMAGEWATERMARKSOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsFile.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Dx, dx_);
      DARABONBA_PTR_TO_JSON(Dy, dy_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Dx, dx_);
      DARABONBA_PTR_FROM_JSON(Dy, dy_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dx_ == nullptr
        && return this->dy_ == nullptr && return this->file_ == nullptr && return this->height_ == nullptr && return this->referPos_ == nullptr && return this->timeline_ == nullptr
        && return this->width_ == nullptr; };
    // dx Field Functions 
    bool hasDx() const { return this->dx_ != nullptr;};
    void deleteDx() { this->dx_ = nullptr;};
    inline string dx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline string dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsFile) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsFile file() { DARABONBA_PTR_GET(file_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsFile) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setFile(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setFile(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline & timeline() const { DARABONBA_PTR_GET_CONST(timeline_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline timeline() { DARABONBA_PTR_GET(timeline_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setTimeline(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setTimeline(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParams& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The position of the watermark on the x-axis.
    std::shared_ptr<string> dx_ = nullptr;
    // The position of the watermark on the y-axis.
    std::shared_ptr<string> dy_ = nullptr;
    // The watermark image file.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsFile> file_ = nullptr;
    // The height of the output video.
    std::shared_ptr<string> height_ = nullptr;
    // The reference position of the watermark. Valid values: TopLeft, TopRight, BottomLeft, and BottomRight. Default value: TopLeft.
    std::shared_ptr<string> referPos_ = nullptr;
    // The timeline settings.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarksOverwriteParamsTimeline> timeline_ = nullptr;
    // The width of the output video.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
