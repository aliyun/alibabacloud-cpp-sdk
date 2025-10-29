// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORDRECORDFORMATLISTRECORDFORMAT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORDRECORDFORMATLISTRECORDFORMAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& obj) { 
      DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
      DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
      DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat() = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat(const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat &) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat(DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat &&) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat() = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& operator=(const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat &) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& operator=(DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleDuration_ == nullptr
        && return this->format_ == nullptr && return this->ossObjectPrefix_ == nullptr && return this->sliceDuration_ == nullptr && return this->sliceOssObjectPrefix_ == nullptr; };
    // cycleDuration Field Functions 
    bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
    void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
    inline int32_t cycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // ossObjectPrefix Field Functions 
    bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
    void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
    inline string ossObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


    // sliceDuration Field Functions 
    bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
    void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
    inline int32_t sliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


    // sliceOssObjectPrefix Field Functions 
    bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
    void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
    inline string sliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


  protected:
    // The duration of a recording file. Unit: seconds.
    std::shared_ptr<int32_t> cycleDuration_ = nullptr;
    // The format of recording files.
    std::shared_ptr<string> format_ = nullptr;
    // The naming format of a recording file.
    std::shared_ptr<string> ossObjectPrefix_ = nullptr;
    // The duration of a segment file. Unit: seconds.
    std::shared_ptr<int32_t> sliceDuration_ = nullptr;
    // The naming format of a segment file.
    std::shared_ptr<string> sliceOssObjectPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
