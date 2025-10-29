// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEAPPRECORDCONFIGREQUESTRECORDFORMAT_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEAPPRECORDCONFIGREQUESTRECORDFORMAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveAppRecordConfigRequestRecordFormat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveAppRecordConfigRequestRecordFormat& obj) { 
      DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveAppRecordConfigRequestRecordFormat& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
    };
    UpdateLiveAppRecordConfigRequestRecordFormat() = default ;
    UpdateLiveAppRecordConfigRequestRecordFormat(const UpdateLiveAppRecordConfigRequestRecordFormat &) = default ;
    UpdateLiveAppRecordConfigRequestRecordFormat(UpdateLiveAppRecordConfigRequestRecordFormat &&) = default ;
    UpdateLiveAppRecordConfigRequestRecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveAppRecordConfigRequestRecordFormat() = default ;
    UpdateLiveAppRecordConfigRequestRecordFormat& operator=(const UpdateLiveAppRecordConfigRequestRecordFormat &) = default ;
    UpdateLiveAppRecordConfigRequestRecordFormat& operator=(UpdateLiveAppRecordConfigRequestRecordFormat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleDuration_ == nullptr
        && return this->format_ == nullptr && return this->sliceDuration_ == nullptr; };
    // cycleDuration Field Functions 
    bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
    void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
    inline int32_t cycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
    inline UpdateLiveAppRecordConfigRequestRecordFormat& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline UpdateLiveAppRecordConfigRequestRecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // sliceDuration Field Functions 
    bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
    void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
    inline int32_t sliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
    inline UpdateLiveAppRecordConfigRequestRecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


  protected:
    // The recording cycle. Unit: seconds If you do not specify this parameter, the default value 6 hours is used.
    // 
    // > 
    // 
    // *   If a live stream is interrupted during a recording cycle but is resumed within the interruption duration threshold, the stream is recorded in the same recording before and after the interruption.
    // 
    // *   If a live stream is interrupted for longer than the interruption duration threshold, a new recording is generated.
    std::shared_ptr<int32_t> cycleDuration_ = nullptr;
    // The recording format. Supported formats include M3U8, Flash Video (FLV), MP4, and Common Media Application Format (CMAF). Valid values:
    // 
    // >  You need to specify at lease one of the RecordFormat and TranscodeRecordFormat parameters. If you set this parameter to m3u8 or cmaf, you must also specify the RecordFormat.N.SliceOssObjectPrefix and RecordFormat.N.SliceDuration parameters.
    // 
    // *   m3u8
    // *   flv
    // *   mp4
    // *   cmaf
    std::shared_ptr<string> format_ = nullptr;
    // The duration of a single segment. Unit: seconds
    // 
    // >  This parameter takes effect only if you set the RecordFormat.N.Format parameter to m3u8 or cmaf.
    // 
    // If you do not specify this parameter, the default value 30 seconds is used. Valid values: 5 to 30.
    std::shared_ptr<int32_t> sliceDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
