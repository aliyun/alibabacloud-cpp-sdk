// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTCLIPTASKRESPONSEBODYDATASUBJOBSFILEATTR_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTCLIPTASKRESPONSEBODYDATASUBJOBSFILEATTR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetSmartClipTaskResponseBodyDataSubJobsFileAttr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartClipTaskResponseBodyDataSubJobsFileAttr& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileLength, fileLength_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(TmpUrl, tmpUrl_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartClipTaskResponseBodyDataSubJobsFileAttr& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileLength, fileLength_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(TmpUrl, tmpUrl_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetSmartClipTaskResponseBodyDataSubJobsFileAttr() = default ;
    GetSmartClipTaskResponseBodyDataSubJobsFileAttr(const GetSmartClipTaskResponseBodyDataSubJobsFileAttr &) = default ;
    GetSmartClipTaskResponseBodyDataSubJobsFileAttr(GetSmartClipTaskResponseBodyDataSubJobsFileAttr &&) = default ;
    GetSmartClipTaskResponseBodyDataSubJobsFileAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartClipTaskResponseBodyDataSubJobsFileAttr() = default ;
    GetSmartClipTaskResponseBodyDataSubJobsFileAttr& operator=(const GetSmartClipTaskResponseBodyDataSubJobsFileAttr &) = default ;
    GetSmartClipTaskResponseBodyDataSubJobsFileAttr& operator=(GetSmartClipTaskResponseBodyDataSubJobsFileAttr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->fileLength_ == nullptr && return this->fileName_ == nullptr && return this->height_ == nullptr && return this->tmpUrl_ == nullptr && return this->width_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetSmartClipTaskResponseBodyDataSubJobsFileAttr& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileLength Field Functions 
    bool hasFileLength() const { return this->fileLength_ != nullptr;};
    void deleteFileLength() { this->fileLength_ = nullptr;};
    inline string fileLength() const { DARABONBA_PTR_GET_DEFAULT(fileLength_, "") };
    inline GetSmartClipTaskResponseBodyDataSubJobsFileAttr& setFileLength(string fileLength) { DARABONBA_PTR_SET_VALUE(fileLength_, fileLength) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetSmartClipTaskResponseBodyDataSubJobsFileAttr& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline GetSmartClipTaskResponseBodyDataSubJobsFileAttr& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // tmpUrl Field Functions 
    bool hasTmpUrl() const { return this->tmpUrl_ != nullptr;};
    void deleteTmpUrl() { this->tmpUrl_ = nullptr;};
    inline string tmpUrl() const { DARABONBA_PTR_GET_DEFAULT(tmpUrl_, "") };
    inline GetSmartClipTaskResponseBodyDataSubJobsFileAttr& setTmpUrl(string tmpUrl) { DARABONBA_PTR_SET_VALUE(tmpUrl_, tmpUrl) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline GetSmartClipTaskResponseBodyDataSubJobsFileAttr& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<double> duration_ = nullptr;
    std::shared_ptr<string> fileLength_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<string> tmpUrl_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
