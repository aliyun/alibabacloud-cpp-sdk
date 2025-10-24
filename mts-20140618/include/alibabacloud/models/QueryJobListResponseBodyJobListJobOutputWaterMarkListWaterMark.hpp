// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTWATERMARKLISTWATERMARK_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTWATERMARKLISTWATERMARK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMarkInputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& obj) { 
      DARABONBA_PTR_TO_JSON(Dx, dx_);
      DARABONBA_PTR_TO_JSON(Dy, dy_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WaterMarkTemplateId, waterMarkTemplateId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& obj) { 
      DARABONBA_PTR_FROM_JSON(Dx, dx_);
      DARABONBA_PTR_FROM_JSON(Dy, dy_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplateId, waterMarkTemplateId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark() = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark(const QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark &) = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark(QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark &&) = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark() = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& operator=(const QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark &) = default ;
    QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& operator=(QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dx_ == nullptr
        && return this->dy_ == nullptr && return this->height_ == nullptr && return this->inputFile_ == nullptr && return this->referPos_ == nullptr && return this->type_ == nullptr
        && return this->waterMarkTemplateId_ == nullptr && return this->width_ == nullptr; };
    // dx Field Functions 
    bool hasDx() const { return this->dx_ != nullptr;};
    void deleteDx() { this->dx_ = nullptr;};
    inline string dx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline string dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMarkInputFile & inputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMarkInputFile) };
    inline Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMarkInputFile inputFile() { DARABONBA_PTR_GET(inputFile_, Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMarkInputFile) };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setInputFile(const Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMarkInputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setInputFile(Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMarkInputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // waterMarkTemplateId Field Functions 
    bool hasWaterMarkTemplateId() const { return this->waterMarkTemplateId_ != nullptr;};
    void deleteWaterMarkTemplateId() { this->waterMarkTemplateId_ = nullptr;};
    inline string waterMarkTemplateId() const { DARABONBA_PTR_GET_DEFAULT(waterMarkTemplateId_, "") };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setWaterMarkTemplateId(string waterMarkTemplateId) { DARABONBA_PTR_SET_VALUE(waterMarkTemplateId_, waterMarkTemplateId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMark& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The horizontal offset of the watermark image relative to the output video. If this parameter is specified in the request, the corresponding parameter in the watermark template is overwritten. Default value: 0. The value can be an integer or a decimal number.
    // 
    // *   An integer indicates the pixel value of the horizontal offset.
    // 
    //     *   Valid values: **[8,4096]**.
    //     *   Unit: pixel.
    // 
    // *   A decimal number indicates the ratio of the horizontal offset to the width in the output video resolution.
    // 
    //     *   Valid values: (0,1).
    //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
    std::shared_ptr<string> dx_ = nullptr;
    // The vertical offset of the watermark image relative to the output video. If this parameter is specified in the request, the corresponding parameter in the watermark template is overwritten. The value can be an integer or a decimal number.
    // 
    // *   An integer indicates the pixel value of the vertical offset.
    // 
    //     *   Valid values: **[8,4096]**.
    //     *   Unit: pixel.
    // 
    // *   A decimal number indicates the ratio of the vertical offset to the height in the output video resolution.
    // 
    //     *   Valid values: **(0,1)**.
    //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
    std::shared_ptr<string> dy_ = nullptr;
    // The height of the watermark image. If this parameter is specified in the request, the corresponding parameter in the watermark template is overwritten. The value can be an integer or a decimal number.
    // 
    // *   An integer indicates the pixel value of the watermark height.
    // 
    //     *   Valid values: **[8,4096]**.
    //     *   Unit: pixel.
    // 
    // *   A decimal number indicates the ratio of the watermark height to the height in the output video resolution.
    // 
    //     *   Valid values: **(0,1)**.
    //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
    std::shared_ptr<string> height_ = nullptr;
    // The watermark input file. PNG images and MOV files are supported.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkListWaterMarkInputFile> inputFile_ = nullptr;
    // The position of the watermark. If this parameter is specified in the request, the corresponding parameter in the watermark template is overwritten. Valid values:
    // 
    // *   TopRight
    // *   TopLeft
    // *   BottomRight
    // *   BottomLeft
    std::shared_ptr<string> referPos_ = nullptr;
    // The type of the watermark. If this parameter is specified in the request, the corresponding parameter in the watermark template is overwritten. For more information, see [Parameter details](https://help.aliyun.com/document_detail/29253.html). Valid values:
    // 
    // *   Image
    // *   Text
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the watermark template.
    std::shared_ptr<string> waterMarkTemplateId_ = nullptr;
    // The width of the watermark image. If this parameter is specified in the request, the corresponding parameter in the watermark template is overwritten. The value can be an integer or a decimal number.
    // 
    // *   An integer indicates the pixel value of the watermark width.
    // 
    //     *   Valid values: **[8,4096]**.
    //     *   Unit: pixel.
    // 
    // *   A decimal number indicates the ratio of the watermark width to the width in the output video resolution.
    // 
    //     *   Valid values: **(0,1)**.
    //     *   The decimal number can be accurate to four decimal places, such as 0.9999. Excessive digits are automatically discarded.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
