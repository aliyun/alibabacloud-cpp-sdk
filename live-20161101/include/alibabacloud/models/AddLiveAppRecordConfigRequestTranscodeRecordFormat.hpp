// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEAPPRECORDCONFIGREQUESTTRANSCODERECORDFORMAT_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEAPPRECORDCONFIGREQUESTTRANSCODERECORDFORMAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveAppRecordConfigRequestTranscodeRecordFormat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveAppRecordConfigRequestTranscodeRecordFormat& obj) { 
      DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
      DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveAppRecordConfigRequestTranscodeRecordFormat& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
      DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    AddLiveAppRecordConfigRequestTranscodeRecordFormat() = default ;
    AddLiveAppRecordConfigRequestTranscodeRecordFormat(const AddLiveAppRecordConfigRequestTranscodeRecordFormat &) = default ;
    AddLiveAppRecordConfigRequestTranscodeRecordFormat(AddLiveAppRecordConfigRequestTranscodeRecordFormat &&) = default ;
    AddLiveAppRecordConfigRequestTranscodeRecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveAppRecordConfigRequestTranscodeRecordFormat() = default ;
    AddLiveAppRecordConfigRequestTranscodeRecordFormat& operator=(const AddLiveAppRecordConfigRequestTranscodeRecordFormat &) = default ;
    AddLiveAppRecordConfigRequestTranscodeRecordFormat& operator=(AddLiveAppRecordConfigRequestTranscodeRecordFormat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleDuration_ != nullptr
        && this->format_ != nullptr && this->ossObjectPrefix_ != nullptr && this->sliceDuration_ != nullptr && this->sliceOssObjectPrefix_ != nullptr; };
    // cycleDuration Field Functions 
    bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
    void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
    inline int32_t cycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
    inline AddLiveAppRecordConfigRequestTranscodeRecordFormat& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline AddLiveAppRecordConfigRequestTranscodeRecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // ossObjectPrefix Field Functions 
    bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
    void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
    inline string ossObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
    inline AddLiveAppRecordConfigRequestTranscodeRecordFormat& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


    // sliceDuration Field Functions 
    bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
    void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
    inline int32_t sliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
    inline AddLiveAppRecordConfigRequestTranscodeRecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


    // sliceOssObjectPrefix Field Functions 
    bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
    void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
    inline string sliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
    inline AddLiveAppRecordConfigRequestTranscodeRecordFormat& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


  protected:
    // The transcoded stream recording cycle. Unit: seconds. If you do not specify this parameter, the default value 6 hours is used.
    std::shared_ptr<int32_t> cycleDuration_ = nullptr;
    // The transcoded stream recording format. Supported formats include M3U8, FLV, MP4, and CMAF. Valid values:
    // 
    // >  If you set this parameter to m3u8 or cmaf, you must also specify the TranscodeRecordFormat.N.SliceOssObjectPrefix and TranscodeRecordFormat.N.SliceDuration parameters.
    // 
    // *   m3u8
    // *   flv
    // *   mp4
    // *   cmaf
    std::shared_ptr<string> format_ = nullptr;
    // The naming format of a transcoded stream recording to store in OSS.
    // 
    // *   The name must be less than 256 bytes in length and can contain the {AppName}, {StreamName}, {Sequence}, {StartTime}, {EndTime}, {EscapedStartTime}, and {EscapedEndTime} variables.
    // *   The name must contain the {StartTime} and {EndTime} variables or the {EscapedStartTime} and {EscapedEndTime} variables.
    std::shared_ptr<string> ossObjectPrefix_ = nullptr;
    // The duration of a single segment in a transcoded stream recording. Unit: seconds.
    // 
    // >  This parameter takes effect only if you set the TranscodeRecordFormat.N.Format parameter to m3u8 or cmaf.
    // 
    // If you do not specify this parameter, the default value 30 seconds is used. Valid values: 5 to 30.
    std::shared_ptr<int32_t> sliceDuration_ = nullptr;
    // The naming format of a segment in a transcoded stream recording.
    // 
    // >  This parameter is required only if you set the TranscodeRecordFormat.N.Format parameter to m3u8 or cmaf.
    // 
    // *   By default, the duration of a segment is 30 seconds. The segment name must be less than 256 bytes in length and can contain the {AppName}, {StreamName}, {UnixTimestamp}, and {Sequence} variables.
    // *   The segment name must contain the {UnixTimestamp} and {Sequence} variables.
    std::shared_ptr<string> sliceOssObjectPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
