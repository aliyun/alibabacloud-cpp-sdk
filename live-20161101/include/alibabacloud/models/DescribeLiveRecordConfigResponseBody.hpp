// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAppRecordList, liveAppRecordList_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAppRecordList, liveAppRecordList_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveRecordConfigResponseBody() = default ;
    DescribeLiveRecordConfigResponseBody(const DescribeLiveRecordConfigResponseBody &) = default ;
    DescribeLiveRecordConfigResponseBody(DescribeLiveRecordConfigResponseBody &&) = default ;
    DescribeLiveRecordConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordConfigResponseBody() = default ;
    DescribeLiveRecordConfigResponseBody& operator=(const DescribeLiveRecordConfigResponseBody &) = default ;
    DescribeLiveRecordConfigResponseBody& operator=(DescribeLiveRecordConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveAppRecordList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveAppRecordList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveAppRecord, liveAppRecord_);
      };
      friend void from_json(const Darabonba::Json& j, LiveAppRecordList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveAppRecord, liveAppRecord_);
      };
      LiveAppRecordList() = default ;
      LiveAppRecordList(const LiveAppRecordList &) = default ;
      LiveAppRecordList(LiveAppRecordList &&) = default ;
      LiveAppRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveAppRecordList() = default ;
      LiveAppRecordList& operator=(const LiveAppRecordList &) = default ;
      LiveAppRecordList& operator=(LiveAppRecordList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveAppRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveAppRecord& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(OnDemond, onDemond_);
          DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_TO_JSON(RecordFormatList, recordFormatList_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(TranscodeRecordFormatList, transcodeRecordFormatList_);
          DARABONBA_PTR_TO_JSON(TranscodeTemplates, transcodeTemplates_);
        };
        friend void from_json(const Darabonba::Json& j, LiveAppRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(OnDemond, onDemond_);
          DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
          DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_FROM_JSON(RecordFormatList, recordFormatList_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(TranscodeRecordFormatList, transcodeRecordFormatList_);
          DARABONBA_PTR_FROM_JSON(TranscodeTemplates, transcodeTemplates_);
        };
        LiveAppRecord() = default ;
        LiveAppRecord(const LiveAppRecord &) = default ;
        LiveAppRecord(LiveAppRecord &&) = default ;
        LiveAppRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveAppRecord() = default ;
        LiveAppRecord& operator=(const LiveAppRecord &) = default ;
        LiveAppRecord& operator=(LiveAppRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TranscodeTemplates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TranscodeTemplates& obj) { 
            DARABONBA_PTR_TO_JSON(Templates, templates_);
          };
          friend void from_json(const Darabonba::Json& j, TranscodeTemplates& obj) { 
            DARABONBA_PTR_FROM_JSON(Templates, templates_);
          };
          TranscodeTemplates() = default ;
          TranscodeTemplates(const TranscodeTemplates &) = default ;
          TranscodeTemplates(TranscodeTemplates &&) = default ;
          TranscodeTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TranscodeTemplates() = default ;
          TranscodeTemplates& operator=(const TranscodeTemplates &) = default ;
          TranscodeTemplates& operator=(TranscodeTemplates &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->templates_ == nullptr; };
          // templates Field Functions 
          bool hasTemplates() const { return this->templates_ != nullptr;};
          void deleteTemplates() { this->templates_ = nullptr;};
          inline const vector<string> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<string>) };
          inline vector<string> getTemplates() { DARABONBA_PTR_GET(templates_, vector<string>) };
          inline TranscodeTemplates& setTemplates(const vector<string> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
          inline TranscodeTemplates& setTemplates(vector<string> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


        protected:
          shared_ptr<vector<string>> templates_ {};
        };

        class TranscodeRecordFormatList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TranscodeRecordFormatList& obj) { 
            DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
          };
          friend void from_json(const Darabonba::Json& j, TranscodeRecordFormatList& obj) { 
            DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
          };
          TranscodeRecordFormatList() = default ;
          TranscodeRecordFormatList(const TranscodeRecordFormatList &) = default ;
          TranscodeRecordFormatList(TranscodeRecordFormatList &&) = default ;
          TranscodeRecordFormatList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TranscodeRecordFormatList() = default ;
          TranscodeRecordFormatList& operator=(const TranscodeRecordFormatList &) = default ;
          TranscodeRecordFormatList& operator=(TranscodeRecordFormatList &&) = default ;
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
            shared_ptr<int32_t> cycleDuration_ {};
            shared_ptr<string> format_ {};
            shared_ptr<string> ossObjectPrefix_ {};
            shared_ptr<int32_t> sliceDuration_ {};
            shared_ptr<string> sliceOssObjectPrefix_ {};
          };

          virtual bool empty() const override { return this->recordFormat_ == nullptr; };
          // recordFormat Field Functions 
          bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
          void deleteRecordFormat() { this->recordFormat_ = nullptr;};
          inline const vector<TranscodeRecordFormatList::RecordFormat> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<TranscodeRecordFormatList::RecordFormat>) };
          inline vector<TranscodeRecordFormatList::RecordFormat> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<TranscodeRecordFormatList::RecordFormat>) };
          inline TranscodeRecordFormatList& setRecordFormat(const vector<TranscodeRecordFormatList::RecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
          inline TranscodeRecordFormatList& setRecordFormat(vector<TranscodeRecordFormatList::RecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


        protected:
          shared_ptr<vector<TranscodeRecordFormatList::RecordFormat>> recordFormat_ {};
        };

        class RecordFormatList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecordFormatList& obj) { 
            DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
          };
          friend void from_json(const Darabonba::Json& j, RecordFormatList& obj) { 
            DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
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
            shared_ptr<int32_t> cycleDuration_ {};
            shared_ptr<string> format_ {};
            shared_ptr<string> ossObjectPrefix_ {};
            shared_ptr<int32_t> sliceDuration_ {};
            shared_ptr<string> sliceOssObjectPrefix_ {};
          };

          virtual bool empty() const override { return this->recordFormat_ == nullptr; };
          // recordFormat Field Functions 
          bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
          void deleteRecordFormat() { this->recordFormat_ = nullptr;};
          inline const vector<RecordFormatList::RecordFormat> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<RecordFormatList::RecordFormat>) };
          inline vector<RecordFormatList::RecordFormat> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<RecordFormatList::RecordFormat>) };
          inline RecordFormatList& setRecordFormat(const vector<RecordFormatList::RecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
          inline RecordFormatList& setRecordFormat(vector<RecordFormatList::RecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


        protected:
          shared_ptr<vector<RecordFormatList::RecordFormat>> recordFormat_ {};
        };

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->createTime_ == nullptr && this->delayTime_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->onDemond_ == nullptr
        && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->recordFormatList_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr
        && this->transcodeRecordFormatList_ == nullptr && this->transcodeTemplates_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveAppRecord& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LiveAppRecord& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // delayTime Field Functions 
        bool hasDelayTime() const { return this->delayTime_ != nullptr;};
        void deleteDelayTime() { this->delayTime_ = nullptr;};
        inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
        inline LiveAppRecord& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveAppRecord& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline LiveAppRecord& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // onDemond Field Functions 
        bool hasOnDemond() const { return this->onDemond_ != nullptr;};
        void deleteOnDemond() { this->onDemond_ = nullptr;};
        inline int32_t getOnDemond() const { DARABONBA_PTR_GET_DEFAULT(onDemond_, 0) };
        inline LiveAppRecord& setOnDemond(int32_t onDemond) { DARABONBA_PTR_SET_VALUE(onDemond_, onDemond) };


        // ossBucket Field Functions 
        bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
        void deleteOssBucket() { this->ossBucket_ = nullptr;};
        inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
        inline LiveAppRecord& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


        // ossEndpoint Field Functions 
        bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
        void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
        inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
        inline LiveAppRecord& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


        // recordFormatList Field Functions 
        bool hasRecordFormatList() const { return this->recordFormatList_ != nullptr;};
        void deleteRecordFormatList() { this->recordFormatList_ = nullptr;};
        inline const LiveAppRecord::RecordFormatList & getRecordFormatList() const { DARABONBA_PTR_GET_CONST(recordFormatList_, LiveAppRecord::RecordFormatList) };
        inline LiveAppRecord::RecordFormatList getRecordFormatList() { DARABONBA_PTR_GET(recordFormatList_, LiveAppRecord::RecordFormatList) };
        inline LiveAppRecord& setRecordFormatList(const LiveAppRecord::RecordFormatList & recordFormatList) { DARABONBA_PTR_SET_VALUE(recordFormatList_, recordFormatList) };
        inline LiveAppRecord& setRecordFormatList(LiveAppRecord::RecordFormatList && recordFormatList) { DARABONBA_PTR_SET_RVALUE(recordFormatList_, recordFormatList) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline LiveAppRecord& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveAppRecord& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // transcodeRecordFormatList Field Functions 
        bool hasTranscodeRecordFormatList() const { return this->transcodeRecordFormatList_ != nullptr;};
        void deleteTranscodeRecordFormatList() { this->transcodeRecordFormatList_ = nullptr;};
        inline const LiveAppRecord::TranscodeRecordFormatList & getTranscodeRecordFormatList() const { DARABONBA_PTR_GET_CONST(transcodeRecordFormatList_, LiveAppRecord::TranscodeRecordFormatList) };
        inline LiveAppRecord::TranscodeRecordFormatList getTranscodeRecordFormatList() { DARABONBA_PTR_GET(transcodeRecordFormatList_, LiveAppRecord::TranscodeRecordFormatList) };
        inline LiveAppRecord& setTranscodeRecordFormatList(const LiveAppRecord::TranscodeRecordFormatList & transcodeRecordFormatList) { DARABONBA_PTR_SET_VALUE(transcodeRecordFormatList_, transcodeRecordFormatList) };
        inline LiveAppRecord& setTranscodeRecordFormatList(LiveAppRecord::TranscodeRecordFormatList && transcodeRecordFormatList) { DARABONBA_PTR_SET_RVALUE(transcodeRecordFormatList_, transcodeRecordFormatList) };


        // transcodeTemplates Field Functions 
        bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
        void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
        inline const LiveAppRecord::TranscodeTemplates & getTranscodeTemplates() const { DARABONBA_PTR_GET_CONST(transcodeTemplates_, LiveAppRecord::TranscodeTemplates) };
        inline LiveAppRecord::TranscodeTemplates getTranscodeTemplates() { DARABONBA_PTR_GET(transcodeTemplates_, LiveAppRecord::TranscodeTemplates) };
        inline LiveAppRecord& setTranscodeTemplates(const LiveAppRecord::TranscodeTemplates & transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };
        inline LiveAppRecord& setTranscodeTemplates(LiveAppRecord::TranscodeTemplates && transcodeTemplates) { DARABONBA_PTR_SET_RVALUE(transcodeTemplates_, transcodeTemplates) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int32_t> delayTime_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<int32_t> onDemond_ {};
        shared_ptr<string> ossBucket_ {};
        shared_ptr<string> ossEndpoint_ {};
        shared_ptr<LiveAppRecord::RecordFormatList> recordFormatList_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<LiveAppRecord::TranscodeRecordFormatList> transcodeRecordFormatList_ {};
        shared_ptr<LiveAppRecord::TranscodeTemplates> transcodeTemplates_ {};
      };

      virtual bool empty() const override { return this->liveAppRecord_ == nullptr; };
      // liveAppRecord Field Functions 
      bool hasLiveAppRecord() const { return this->liveAppRecord_ != nullptr;};
      void deleteLiveAppRecord() { this->liveAppRecord_ = nullptr;};
      inline const vector<LiveAppRecordList::LiveAppRecord> & getLiveAppRecord() const { DARABONBA_PTR_GET_CONST(liveAppRecord_, vector<LiveAppRecordList::LiveAppRecord>) };
      inline vector<LiveAppRecordList::LiveAppRecord> getLiveAppRecord() { DARABONBA_PTR_GET(liveAppRecord_, vector<LiveAppRecordList::LiveAppRecord>) };
      inline LiveAppRecordList& setLiveAppRecord(const vector<LiveAppRecordList::LiveAppRecord> & liveAppRecord) { DARABONBA_PTR_SET_VALUE(liveAppRecord_, liveAppRecord) };
      inline LiveAppRecordList& setLiveAppRecord(vector<LiveAppRecordList::LiveAppRecord> && liveAppRecord) { DARABONBA_PTR_SET_RVALUE(liveAppRecord_, liveAppRecord) };


    protected:
      shared_ptr<vector<LiveAppRecordList::LiveAppRecord>> liveAppRecord_ {};
    };

    virtual bool empty() const override { return this->liveAppRecordList_ == nullptr
        && this->order_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr
        && this->totalPage_ == nullptr; };
    // liveAppRecordList Field Functions 
    bool hasLiveAppRecordList() const { return this->liveAppRecordList_ != nullptr;};
    void deleteLiveAppRecordList() { this->liveAppRecordList_ = nullptr;};
    inline const DescribeLiveRecordConfigResponseBody::LiveAppRecordList & getLiveAppRecordList() const { DARABONBA_PTR_GET_CONST(liveAppRecordList_, DescribeLiveRecordConfigResponseBody::LiveAppRecordList) };
    inline DescribeLiveRecordConfigResponseBody::LiveAppRecordList getLiveAppRecordList() { DARABONBA_PTR_GET(liveAppRecordList_, DescribeLiveRecordConfigResponseBody::LiveAppRecordList) };
    inline DescribeLiveRecordConfigResponseBody& setLiveAppRecordList(const DescribeLiveRecordConfigResponseBody::LiveAppRecordList & liveAppRecordList) { DARABONBA_PTR_SET_VALUE(liveAppRecordList_, liveAppRecordList) };
    inline DescribeLiveRecordConfigResponseBody& setLiveAppRecordList(DescribeLiveRecordConfigResponseBody::LiveAppRecordList && liveAppRecordList) { DARABONBA_PTR_SET_RVALUE(liveAppRecordList_, liveAppRecordList) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeLiveRecordConfigResponseBody& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveRecordConfigResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveRecordConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRecordConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveRecordConfigResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveRecordConfigResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<DescribeLiveRecordConfigResponseBody::LiveAppRecordList> liveAppRecordList_ {};
    // The sorting order of recording configurations by creation time.
    shared_ptr<string> order_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of recording configurations that meet the specified conditions.
    shared_ptr<int32_t> totalNum_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
