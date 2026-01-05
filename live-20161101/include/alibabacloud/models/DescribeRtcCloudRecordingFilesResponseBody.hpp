// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODY_HPP_
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
  class DescribeRtcCloudRecordingFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcCloudRecordingFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcCloudRecordingFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    DescribeRtcCloudRecordingFilesResponseBody() = default ;
    DescribeRtcCloudRecordingFilesResponseBody(const DescribeRtcCloudRecordingFilesResponseBody &) = default ;
    DescribeRtcCloudRecordingFilesResponseBody(DescribeRtcCloudRecordingFilesResponseBody &&) = default ;
    DescribeRtcCloudRecordingFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcCloudRecordingFilesResponseBody() = default ;
    DescribeRtcCloudRecordingFilesResponseBody& operator=(const DescribeRtcCloudRecordingFilesResponseBody &) = default ;
    DescribeRtcCloudRecordingFilesResponseBody& operator=(DescribeRtcCloudRecordingFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(RecordFileList, recordFileList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordFileList, recordFileList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskInfo() = default ;
      TaskInfo(const TaskInfo &) = default ;
      TaskInfo(TaskInfo &&) = default ;
      TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInfo() = default ;
      TaskInfo& operator=(const TaskInfo &) = default ;
      TaskInfo& operator=(TaskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordFileList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordFileList& obj) { 
          DARABONBA_PTR_TO_JSON(HlsFileList, hlsFileList_);
          DARABONBA_PTR_TO_JSON(Mp3FileList, mp3FileList_);
          DARABONBA_PTR_TO_JSON(Mp4FileList, mp4FileList_);
          DARABONBA_PTR_TO_JSON(VodMediaList, vodMediaList_);
        };
        friend void from_json(const Darabonba::Json& j, RecordFileList& obj) { 
          DARABONBA_PTR_FROM_JSON(HlsFileList, hlsFileList_);
          DARABONBA_PTR_FROM_JSON(Mp3FileList, mp3FileList_);
          DARABONBA_PTR_FROM_JSON(Mp4FileList, mp4FileList_);
          DARABONBA_PTR_FROM_JSON(VodMediaList, vodMediaList_);
        };
        RecordFileList() = default ;
        RecordFileList(const RecordFileList &) = default ;
        RecordFileList(RecordFileList &&) = default ;
        RecordFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordFileList() = default ;
        RecordFileList& operator=(const RecordFileList &) = default ;
        RecordFileList& operator=(RecordFileList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VodMediaList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VodMediaList& obj) { 
            DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
            DARABONBA_PTR_TO_JSON(MergedIds, mergedIds_);
            DARABONBA_PTR_TO_JSON(Stream, stream_);
          };
          friend void from_json(const Darabonba::Json& j, VodMediaList& obj) { 
            DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
            DARABONBA_PTR_FROM_JSON(MergedIds, mergedIds_);
            DARABONBA_PTR_FROM_JSON(Stream, stream_);
          };
          VodMediaList() = default ;
          VodMediaList(const VodMediaList &) = default ;
          VodMediaList(VodMediaList &&) = default ;
          VodMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VodMediaList() = default ;
          VodMediaList& operator=(const VodMediaList &) = default ;
          VodMediaList& operator=(VodMediaList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mediaIds_ == nullptr
        && this->mergedIds_ == nullptr && this->stream_ == nullptr; };
          // mediaIds Field Functions 
          bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
          void deleteMediaIds() { this->mediaIds_ = nullptr;};
          inline const vector<string> & getMediaIds() const { DARABONBA_PTR_GET_CONST(mediaIds_, vector<string>) };
          inline vector<string> getMediaIds() { DARABONBA_PTR_GET(mediaIds_, vector<string>) };
          inline VodMediaList& setMediaIds(const vector<string> & mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };
          inline VodMediaList& setMediaIds(vector<string> && mediaIds) { DARABONBA_PTR_SET_RVALUE(mediaIds_, mediaIds) };


          // mergedIds Field Functions 
          bool hasMergedIds() const { return this->mergedIds_ != nullptr;};
          void deleteMergedIds() { this->mergedIds_ = nullptr;};
          inline const vector<string> & getMergedIds() const { DARABONBA_PTR_GET_CONST(mergedIds_, vector<string>) };
          inline vector<string> getMergedIds() { DARABONBA_PTR_GET(mergedIds_, vector<string>) };
          inline VodMediaList& setMergedIds(const vector<string> & mergedIds) { DARABONBA_PTR_SET_VALUE(mergedIds_, mergedIds) };
          inline VodMediaList& setMergedIds(vector<string> && mergedIds) { DARABONBA_PTR_SET_RVALUE(mergedIds_, mergedIds) };


          // stream Field Functions 
          bool hasStream() const { return this->stream_ != nullptr;};
          void deleteStream() { this->stream_ = nullptr;};
          inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
          inline VodMediaList& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


        protected:
          shared_ptr<vector<string>> mediaIds_ {};
          shared_ptr<vector<string>> mergedIds_ {};
          shared_ptr<string> stream_ {};
        };

        virtual bool empty() const override { return this->hlsFileList_ == nullptr
        && this->mp3FileList_ == nullptr && this->mp4FileList_ == nullptr && this->vodMediaList_ == nullptr; };
        // hlsFileList Field Functions 
        bool hasHlsFileList() const { return this->hlsFileList_ != nullptr;};
        void deleteHlsFileList() { this->hlsFileList_ = nullptr;};
        inline const vector<string> & getHlsFileList() const { DARABONBA_PTR_GET_CONST(hlsFileList_, vector<string>) };
        inline vector<string> getHlsFileList() { DARABONBA_PTR_GET(hlsFileList_, vector<string>) };
        inline RecordFileList& setHlsFileList(const vector<string> & hlsFileList) { DARABONBA_PTR_SET_VALUE(hlsFileList_, hlsFileList) };
        inline RecordFileList& setHlsFileList(vector<string> && hlsFileList) { DARABONBA_PTR_SET_RVALUE(hlsFileList_, hlsFileList) };


        // mp3FileList Field Functions 
        bool hasMp3FileList() const { return this->mp3FileList_ != nullptr;};
        void deleteMp3FileList() { this->mp3FileList_ = nullptr;};
        inline const vector<string> & getMp3FileList() const { DARABONBA_PTR_GET_CONST(mp3FileList_, vector<string>) };
        inline vector<string> getMp3FileList() { DARABONBA_PTR_GET(mp3FileList_, vector<string>) };
        inline RecordFileList& setMp3FileList(const vector<string> & mp3FileList) { DARABONBA_PTR_SET_VALUE(mp3FileList_, mp3FileList) };
        inline RecordFileList& setMp3FileList(vector<string> && mp3FileList) { DARABONBA_PTR_SET_RVALUE(mp3FileList_, mp3FileList) };


        // mp4FileList Field Functions 
        bool hasMp4FileList() const { return this->mp4FileList_ != nullptr;};
        void deleteMp4FileList() { this->mp4FileList_ = nullptr;};
        inline const vector<string> & getMp4FileList() const { DARABONBA_PTR_GET_CONST(mp4FileList_, vector<string>) };
        inline vector<string> getMp4FileList() { DARABONBA_PTR_GET(mp4FileList_, vector<string>) };
        inline RecordFileList& setMp4FileList(const vector<string> & mp4FileList) { DARABONBA_PTR_SET_VALUE(mp4FileList_, mp4FileList) };
        inline RecordFileList& setMp4FileList(vector<string> && mp4FileList) { DARABONBA_PTR_SET_RVALUE(mp4FileList_, mp4FileList) };


        // vodMediaList Field Functions 
        bool hasVodMediaList() const { return this->vodMediaList_ != nullptr;};
        void deleteVodMediaList() { this->vodMediaList_ = nullptr;};
        inline const vector<RecordFileList::VodMediaList> & getVodMediaList() const { DARABONBA_PTR_GET_CONST(vodMediaList_, vector<RecordFileList::VodMediaList>) };
        inline vector<RecordFileList::VodMediaList> getVodMediaList() { DARABONBA_PTR_GET(vodMediaList_, vector<RecordFileList::VodMediaList>) };
        inline RecordFileList& setVodMediaList(const vector<RecordFileList::VodMediaList> & vodMediaList) { DARABONBA_PTR_SET_VALUE(vodMediaList_, vodMediaList) };
        inline RecordFileList& setVodMediaList(vector<RecordFileList::VodMediaList> && vodMediaList) { DARABONBA_PTR_SET_RVALUE(vodMediaList_, vodMediaList) };


      protected:
        shared_ptr<vector<string>> hlsFileList_ {};
        shared_ptr<vector<string>> mp3FileList_ {};
        shared_ptr<vector<string>> mp4FileList_ {};
        shared_ptr<vector<RecordFileList::VodMediaList>> vodMediaList_ {};
      };

      virtual bool empty() const override { return this->recordFileList_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr; };
      // recordFileList Field Functions 
      bool hasRecordFileList() const { return this->recordFileList_ != nullptr;};
      void deleteRecordFileList() { this->recordFileList_ = nullptr;};
      inline const TaskInfo::RecordFileList & getRecordFileList() const { DARABONBA_PTR_GET_CONST(recordFileList_, TaskInfo::RecordFileList) };
      inline TaskInfo::RecordFileList getRecordFileList() { DARABONBA_PTR_GET(recordFileList_, TaskInfo::RecordFileList) };
      inline TaskInfo& setRecordFileList(const TaskInfo::RecordFileList & recordFileList) { DARABONBA_PTR_SET_VALUE(recordFileList_, recordFileList) };
      inline TaskInfo& setRecordFileList(TaskInfo::RecordFileList && recordFileList) { DARABONBA_PTR_SET_RVALUE(recordFileList_, recordFileList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<TaskInfo::RecordFileList> recordFileList_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcCloudRecordingFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const DescribeRtcCloudRecordingFilesResponseBody::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DescribeRtcCloudRecordingFilesResponseBody::TaskInfo) };
    inline DescribeRtcCloudRecordingFilesResponseBody::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, DescribeRtcCloudRecordingFilesResponseBody::TaskInfo) };
    inline DescribeRtcCloudRecordingFilesResponseBody& setTaskInfo(const DescribeRtcCloudRecordingFilesResponseBody::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeRtcCloudRecordingFilesResponseBody& setTaskInfo(DescribeRtcCloudRecordingFilesResponseBody::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRtcCloudRecordingFilesResponseBody::TaskInfo> taskInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
