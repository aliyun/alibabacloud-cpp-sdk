// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDTEMPLATERESPONSEBODY_HPP_
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
  class GetLiveRecordTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordTemplate, recordTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordTemplate, recordTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLiveRecordTemplateResponseBody() = default ;
    GetLiveRecordTemplateResponseBody(const GetLiveRecordTemplateResponseBody &) = default ;
    GetLiveRecordTemplateResponseBody(GetLiveRecordTemplateResponseBody &&) = default ;
    GetLiveRecordTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordTemplateResponseBody() = default ;
    GetLiveRecordTemplateResponseBody& operator=(const GetLiveRecordTemplateResponseBody &) = default ;
    GetLiveRecordTemplateResponseBody& operator=(GetLiveRecordTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RecordFormatList, recordFormatList_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RecordTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RecordFormatList, recordFormatList_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RecordTemplate() = default ;
      RecordTemplate(const RecordTemplate &) = default ;
      RecordTemplate(RecordTemplate &&) = default ;
      RecordTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordTemplate() = default ;
      RecordTemplate& operator=(const RecordTemplate &) = default ;
      RecordTemplate& operator=(RecordTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordFormatList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordFormatList& obj) { 
          DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
          DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
          DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
        };
        friend void from_json(const Darabonba::Json& j, RecordFormatList& obj) { 
          DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
          DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
          DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
        };
        RecordFormatList() = default ;
        RecordFormatList(const RecordFormatList &) = default ;
        RecordFormatList(RecordFormatList &&) = default ;
        RecordFormatList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordFormatList() = default ;
        RecordFormatList& operator=(const RecordFormatList &) = default ;
        RecordFormatList& operator=(RecordFormatList &&) = default ;
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
        inline RecordFormatList& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline RecordFormatList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // ossObjectPrefix Field Functions 
        bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
        void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
        inline string getOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
        inline RecordFormatList& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


        // sliceDuration Field Functions 
        bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
        void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
        inline int32_t getSliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
        inline RecordFormatList& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


        // sliceOssObjectPrefix Field Functions 
        bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
        void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
        inline string getSliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
        inline RecordFormatList& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


      protected:
        // The duration of the recording cycle. Unit: seconds. If you do not specify this parameter, the default value 6 hours is used.
        shared_ptr<int32_t> cycleDuration_ {};
        // The output file format.
        shared_ptr<string> format_ {};
        // The name of the recording file that is stored in Object Storage Service (OSS).
        shared_ptr<string> ossObjectPrefix_ {};
        // The duration of a single segment. Unit: seconds.
        shared_ptr<int32_t> sliceDuration_ {};
        // The name of the TS segment.
        shared_ptr<string> sliceOssObjectPrefix_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->lastModified_ == nullptr && this->name_ == nullptr && this->recordFormatList_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RecordTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline RecordTemplate& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RecordTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // recordFormatList Field Functions 
      bool hasRecordFormatList() const { return this->recordFormatList_ != nullptr;};
      void deleteRecordFormatList() { this->recordFormatList_ = nullptr;};
      inline const vector<RecordTemplate::RecordFormatList> & getRecordFormatList() const { DARABONBA_PTR_GET_CONST(recordFormatList_, vector<RecordTemplate::RecordFormatList>) };
      inline vector<RecordTemplate::RecordFormatList> getRecordFormatList() { DARABONBA_PTR_GET(recordFormatList_, vector<RecordTemplate::RecordFormatList>) };
      inline RecordTemplate& setRecordFormatList(const vector<RecordTemplate::RecordFormatList> & recordFormatList) { DARABONBA_PTR_SET_VALUE(recordFormatList_, recordFormatList) };
      inline RecordTemplate& setRecordFormatList(vector<RecordTemplate::RecordFormatList> && recordFormatList) { DARABONBA_PTR_SET_RVALUE(recordFormatList_, recordFormatList) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline RecordTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RecordTemplate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the job was created.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createTime_ {};
      // The time when the template was last modified.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> lastModified_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The list of recording formats.
      shared_ptr<vector<RecordTemplate::RecordFormatList>> recordFormatList_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The type of the template.
      // 
      // Valid values:
      // 
      // *   system
      // *   custom
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->recordTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // recordTemplate Field Functions 
    bool hasRecordTemplate() const { return this->recordTemplate_ != nullptr;};
    void deleteRecordTemplate() { this->recordTemplate_ = nullptr;};
    inline const GetLiveRecordTemplateResponseBody::RecordTemplate & getRecordTemplate() const { DARABONBA_PTR_GET_CONST(recordTemplate_, GetLiveRecordTemplateResponseBody::RecordTemplate) };
    inline GetLiveRecordTemplateResponseBody::RecordTemplate getRecordTemplate() { DARABONBA_PTR_GET(recordTemplate_, GetLiveRecordTemplateResponseBody::RecordTemplate) };
    inline GetLiveRecordTemplateResponseBody& setRecordTemplate(const GetLiveRecordTemplateResponseBody::RecordTemplate & recordTemplate) { DARABONBA_PTR_SET_VALUE(recordTemplate_, recordTemplate) };
    inline GetLiveRecordTemplateResponseBody& setRecordTemplate(GetLiveRecordTemplateResponseBody::RecordTemplate && recordTemplate) { DARABONBA_PTR_SET_RVALUE(recordTemplate_, recordTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveRecordTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The recording template.
    shared_ptr<GetLiveRecordTemplateResponseBody::RecordTemplate> recordTemplate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
