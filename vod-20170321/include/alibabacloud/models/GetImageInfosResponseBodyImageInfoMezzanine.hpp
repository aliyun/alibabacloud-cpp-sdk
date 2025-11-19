// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINFOSRESPONSEBODYIMAGEINFOMEZZANINE_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINFOSRESPONSEBODYIMAGEINFOMEZZANINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetImageInfosResponseBodyImageInfoMezzanine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageInfosResponseBodyImageInfoMezzanine& obj) { 
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(OriginalFileName, originalFileName_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageInfosResponseBodyImageInfoMezzanine& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(OriginalFileName, originalFileName_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetImageInfosResponseBodyImageInfoMezzanine() = default ;
    GetImageInfosResponseBodyImageInfoMezzanine(const GetImageInfosResponseBodyImageInfoMezzanine &) = default ;
    GetImageInfosResponseBodyImageInfoMezzanine(GetImageInfosResponseBodyImageInfoMezzanine &&) = default ;
    GetImageInfosResponseBodyImageInfoMezzanine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageInfosResponseBodyImageInfoMezzanine() = default ;
    GetImageInfosResponseBodyImageInfoMezzanine& operator=(const GetImageInfosResponseBodyImageInfoMezzanine &) = default ;
    GetImageInfosResponseBodyImageInfoMezzanine& operator=(GetImageInfosResponseBodyImageInfoMezzanine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSize_ == nullptr
        && return this->fileURL_ == nullptr && return this->height_ == nullptr && return this->originalFileName_ == nullptr && return this->width_ == nullptr; };
    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline GetImageInfosResponseBodyImageInfoMezzanine& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline GetImageInfosResponseBodyImageInfoMezzanine& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline GetImageInfosResponseBodyImageInfoMezzanine& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // originalFileName Field Functions 
    bool hasOriginalFileName() const { return this->originalFileName_ != nullptr;};
    void deleteOriginalFileName() { this->originalFileName_ = nullptr;};
    inline string originalFileName() const { DARABONBA_PTR_GET_DEFAULT(originalFileName_, "") };
    inline GetImageInfosResponseBodyImageInfoMezzanine& setOriginalFileName(string originalFileName) { DARABONBA_PTR_SET_VALUE(originalFileName_, originalFileName) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline GetImageInfosResponseBodyImageInfoMezzanine& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The size of the file to be uploaded. Unit: bytes.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The OSS URL of the image file.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The height of the image. Unit: pixels.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The URL of the source file.
    std::shared_ptr<string> originalFileName_ = nullptr;
    // The width of the image. Unit: pixels.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
