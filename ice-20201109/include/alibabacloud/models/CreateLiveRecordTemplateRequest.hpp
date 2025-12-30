// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVERECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVERECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLiveRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
    };
    CreateLiveRecordTemplateRequest() = default ;
    CreateLiveRecordTemplateRequest(const CreateLiveRecordTemplateRequest &) = default ;
    CreateLiveRecordTemplateRequest(CreateLiveRecordTemplateRequest &&) = default ;
    CreateLiveRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveRecordTemplateRequest() = default ;
    CreateLiveRecordTemplateRequest& operator=(const CreateLiveRecordTemplateRequest &) = default ;
    CreateLiveRecordTemplateRequest& operator=(CreateLiveRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordFormat& obj) { 
        DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
        DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
        DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
      };
      friend void from_json(const Darabonba::Json& j, RecordFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
        DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
        DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
      };
      RecordFormat() = default ;
      RecordFormat(const RecordFormat &) = default ;
      RecordFormat(RecordFormat &&) = default ;
      RecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordFormat() = default ;
      RecordFormat& operator=(const RecordFormat &) = default ;
      RecordFormat& operator=(RecordFormat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cycleDuration_ == nullptr
        && this->format_ == nullptr && this->ossObjectPrefix_ == nullptr && this->sliceDuration_ == nullptr && this->sliceOssObjectPrefix_ == nullptr; };
      // cycleDuration Field Functions 
      bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
      void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
      inline int32_t getCycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
      inline RecordFormat& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline RecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // ossObjectPrefix Field Functions 
      bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
      void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
      inline string getOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
      inline RecordFormat& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


      // sliceDuration Field Functions 
      bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
      void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
      inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
      inline RecordFormat& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


      // sliceOssObjectPrefix Field Functions 
      bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
      void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
      inline string getSliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
      inline RecordFormat& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


    protected:
      // The duration of the recording cycle. Unit: seconds. If you do not specify this parameter, the default value 6 hours is used.
      // 
      // > 
      // 
      // *   If a live stream is interrupted during a recording cycle but is resumed within 3 minutes, the stream is recorded in the same recording before and after the interruption.
      // 
      // *   If a live stream is interrupted for more than 3 minutes, a new recording is generated. To change the default stream interruption time, submit a ticket.
      shared_ptr<int32_t> cycleDuration_ {};
      // The format.
      // 
      // >  If you set this parameter to m3u8, you must also specify the SliceOssObjectPrefix and SliceDuration parameters.
      // 
      // This parameter is required.
      shared_ptr<string> format_ {};
      // The name of the recording file that is stored in Object Storage Service (OSS).
      // 
      // *   The name must be less than 256 bytes in length and can contain the {JobId}, {Sequence}, {StartTime}, {EndTime}, {EscapedStartTime}, and {EscapedEndTime} variables.
      // *   The name must contain the {StartTime} and {EndTime} variables or the {EscapedStartTime} and {EscapedEndTime} variables.
      shared_ptr<string> ossObjectPrefix_ {};
      // The duration of a single segment. Unit: seconds.
      // 
      // >  This parameter takes effect only if you set Format to m3u8.
      // 
      // If you do not specify this parameter, the default value 30 seconds is used. Valid values: 5 to 30.
      shared_ptr<int32_t> sliceDuration_ {};
      // The name of the TS segment.
      // 
      // >  This parameter is required only if you set Format to m3u8.
      // 
      // *   By default, the duration of a segment is 30 seconds. The segment name must be less than 256 bytes in length and can contain the {JobId}, {UnixTimestamp}, and {Sequence} variables.
      // *   The segment name must contain the {UnixTimestamp} and {Sequence} variables.
      shared_ptr<string> sliceOssObjectPrefix_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->recordFormat_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLiveRecordTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<CreateLiveRecordTemplateRequest::RecordFormat> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<CreateLiveRecordTemplateRequest::RecordFormat>) };
    inline vector<CreateLiveRecordTemplateRequest::RecordFormat> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<CreateLiveRecordTemplateRequest::RecordFormat>) };
    inline CreateLiveRecordTemplateRequest& setRecordFormat(const vector<CreateLiveRecordTemplateRequest::RecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline CreateLiveRecordTemplateRequest& setRecordFormat(vector<CreateLiveRecordTemplateRequest::RecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


  protected:
    // The name of the template.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The list of recording formats.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateLiveRecordTemplateRequest::RecordFormat>> recordFormat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
