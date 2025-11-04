// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVERECORDTEMPLATEREQUESTRECORDFORMAT_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVERECORDTEMPLATEREQUESTRECORDFORMAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLiveRecordTemplateRequestRecordFormat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveRecordTemplateRequestRecordFormat& obj) { 
      DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
      DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveRecordTemplateRequestRecordFormat& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
      DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    CreateLiveRecordTemplateRequestRecordFormat() = default ;
    CreateLiveRecordTemplateRequestRecordFormat(const CreateLiveRecordTemplateRequestRecordFormat &) = default ;
    CreateLiveRecordTemplateRequestRecordFormat(CreateLiveRecordTemplateRequestRecordFormat &&) = default ;
    CreateLiveRecordTemplateRequestRecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveRecordTemplateRequestRecordFormat() = default ;
    CreateLiveRecordTemplateRequestRecordFormat& operator=(const CreateLiveRecordTemplateRequestRecordFormat &) = default ;
    CreateLiveRecordTemplateRequestRecordFormat& operator=(CreateLiveRecordTemplateRequestRecordFormat &&) = default ;
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
    inline CreateLiveRecordTemplateRequestRecordFormat& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline CreateLiveRecordTemplateRequestRecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // ossObjectPrefix Field Functions 
    bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
    void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
    inline string ossObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
    inline CreateLiveRecordTemplateRequestRecordFormat& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


    // sliceDuration Field Functions 
    bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
    void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
    inline int32_t sliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
    inline CreateLiveRecordTemplateRequestRecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


    // sliceOssObjectPrefix Field Functions 
    bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
    void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
    inline string sliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
    inline CreateLiveRecordTemplateRequestRecordFormat& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


  protected:
    // The duration of the recording cycle. Unit: seconds. If you do not specify this parameter, the default value 6 hours is used.
    // 
    // > 
    // 
    // *   If a live stream is interrupted during a recording cycle but is resumed within 3 minutes, the stream is recorded in the same recording before and after the interruption.
    // 
    // *   If a live stream is interrupted for more than 3 minutes, a new recording is generated. To change the default stream interruption time, submit a ticket.
    std::shared_ptr<int32_t> cycleDuration_ = nullptr;
    // The format.
    // 
    // >  If you set this parameter to m3u8, you must also specify the SliceOssObjectPrefix and SliceDuration parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> format_ = nullptr;
    // The name of the recording file that is stored in Object Storage Service (OSS).
    // 
    // *   The name must be less than 256 bytes in length and can contain the {JobId}, {Sequence}, {StartTime}, {EndTime}, {EscapedStartTime}, and {EscapedEndTime} variables.
    // *   The name must contain the {StartTime} and {EndTime} variables or the {EscapedStartTime} and {EscapedEndTime} variables.
    std::shared_ptr<string> ossObjectPrefix_ = nullptr;
    // The duration of a single segment. Unit: seconds.
    // 
    // >  This parameter takes effect only if you set Format to m3u8.
    // 
    // If you do not specify this parameter, the default value 30 seconds is used. Valid values: 5 to 30.
    std::shared_ptr<int32_t> sliceDuration_ = nullptr;
    // The name of the TS segment.
    // 
    // >  This parameter is required only if you set Format to m3u8.
    // 
    // *   By default, the duration of a segment is 30 seconds. The segment name must be less than 256 bytes in length and can contain the {JobId}, {UnixTimestamp}, and {Sequence} variables.
    // *   The segment name must contain the {UnixTimestamp} and {Sequence} variables.
    std::shared_ptr<string> sliceOssObjectPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
