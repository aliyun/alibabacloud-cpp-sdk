// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTemplatesResponseBody() = default ;
    DescribeTemplatesResponseBody(const DescribeTemplatesResponseBody &) = default ;
    DescribeTemplatesResponseBody(DescribeTemplatesResponseBody &&) = default ;
    DescribeTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesResponseBody() = default ;
    DescribeTemplatesResponseBody& operator=(const DescribeTemplatesResponseBody &) = default ;
    DescribeTemplatesResponseBody& operator=(DescribeTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(Callback, callback_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
        DARABONBA_PTR_TO_JSON(Flv, flv_);
        DARABONBA_PTR_TO_JSON(HlsM3u8, hlsM3u8_);
        DARABONBA_PTR_TO_JSON(HlsTs, hlsTs_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(JpgOnDemand, jpgOnDemand_);
        DARABONBA_PTR_TO_JSON(JpgOverwrite, jpgOverwrite_);
        DARABONBA_PTR_TO_JSON(JpgSequence, jpgSequence_);
        DARABONBA_PTR_TO_JSON(Mp4, mp4_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_TO_JSON(OssFilePrefix, ossFilePrefix_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(TransConfigs, transConfigs_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(Callback, callback_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
        DARABONBA_PTR_FROM_JSON(Flv, flv_);
        DARABONBA_PTR_FROM_JSON(HlsM3u8, hlsM3u8_);
        DARABONBA_PTR_FROM_JSON(HlsTs, hlsTs_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(JpgOnDemand, jpgOnDemand_);
        DARABONBA_PTR_FROM_JSON(JpgOverwrite, jpgOverwrite_);
        DARABONBA_PTR_FROM_JSON(JpgSequence, jpgSequence_);
        DARABONBA_PTR_FROM_JSON(Mp4, mp4_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_FROM_JSON(OssFilePrefix, ossFilePrefix_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(TransConfigs, transConfigs_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TransConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Gop, gop_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
          DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(id, id_);
        };
        friend void from_json(const Darabonba::Json& j, TransConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Gop, gop_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
          DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
          DARABONBA_PTR_FROM_JSON(id, id_);
        };
        TransConfigs() = default ;
        TransConfigs(const TransConfigs &) = default ;
        TransConfigs(TransConfigs &&) = default ;
        TransConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransConfigs() = default ;
        TransConfigs& operator=(const TransConfigs &) = default ;
        TransConfigs& operator=(TransConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fps_ == nullptr
        && this->gop_ == nullptr && this->height_ == nullptr && this->name_ == nullptr && this->videoBitrate_ == nullptr && this->videoCodec_ == nullptr
        && this->width_ == nullptr && this->id_ == nullptr; };
        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline int64_t getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0L) };
        inline TransConfigs& setFps(int64_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // gop Field Functions 
        bool hasGop() const { return this->gop_ != nullptr;};
        void deleteGop() { this->gop_ = nullptr;};
        inline int64_t getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, 0L) };
        inline TransConfigs& setGop(int64_t gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
        inline TransConfigs& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TransConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // videoBitrate Field Functions 
        bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
        void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
        inline int64_t getVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0L) };
        inline TransConfigs& setVideoBitrate(int64_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


        // videoCodec Field Functions 
        bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
        void deleteVideoCodec() { this->videoCodec_ = nullptr;};
        inline string getVideoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
        inline TransConfigs& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
        inline TransConfigs& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline TransConfigs& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<int64_t> fps_ {};
        shared_ptr<int64_t> gop_ {};
        shared_ptr<int64_t> height_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> videoBitrate_ {};
        shared_ptr<string> videoCodec_ {};
        shared_ptr<int64_t> width_ {};
        shared_ptr<string> id_ {};
      };

      virtual bool empty() const override { return this->callback_ == nullptr
        && this->createdTime_ == nullptr && this->description_ == nullptr && this->fileFormat_ == nullptr && this->flv_ == nullptr && this->hlsM3u8_ == nullptr
        && this->hlsTs_ == nullptr && this->id_ == nullptr && this->interval_ == nullptr && this->jpgOnDemand_ == nullptr && this->jpgOverwrite_ == nullptr
        && this->jpgSequence_ == nullptr && this->mp4_ == nullptr && this->name_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr
        && this->ossFilePrefix_ == nullptr && this->region_ == nullptr && this->retention_ == nullptr && this->transConfigs_ == nullptr && this->trigger_ == nullptr
        && this->type_ == nullptr; };
      // callback Field Functions 
      bool hasCallback() const { return this->callback_ != nullptr;};
      void deleteCallback() { this->callback_ = nullptr;};
      inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
      inline Templates& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Templates& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Templates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileFormat Field Functions 
      bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
      void deleteFileFormat() { this->fileFormat_ = nullptr;};
      inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
      inline Templates& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


      // flv Field Functions 
      bool hasFlv() const { return this->flv_ != nullptr;};
      void deleteFlv() { this->flv_ = nullptr;};
      inline string getFlv() const { DARABONBA_PTR_GET_DEFAULT(flv_, "") };
      inline Templates& setFlv(string flv) { DARABONBA_PTR_SET_VALUE(flv_, flv) };


      // hlsM3u8 Field Functions 
      bool hasHlsM3u8() const { return this->hlsM3u8_ != nullptr;};
      void deleteHlsM3u8() { this->hlsM3u8_ = nullptr;};
      inline string getHlsM3u8() const { DARABONBA_PTR_GET_DEFAULT(hlsM3u8_, "") };
      inline Templates& setHlsM3u8(string hlsM3u8) { DARABONBA_PTR_SET_VALUE(hlsM3u8_, hlsM3u8) };


      // hlsTs Field Functions 
      bool hasHlsTs() const { return this->hlsTs_ != nullptr;};
      void deleteHlsTs() { this->hlsTs_ = nullptr;};
      inline string getHlsTs() const { DARABONBA_PTR_GET_DEFAULT(hlsTs_, "") };
      inline Templates& setHlsTs(string hlsTs) { DARABONBA_PTR_SET_VALUE(hlsTs_, hlsTs) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Templates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
      inline Templates& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // jpgOnDemand Field Functions 
      bool hasJpgOnDemand() const { return this->jpgOnDemand_ != nullptr;};
      void deleteJpgOnDemand() { this->jpgOnDemand_ = nullptr;};
      inline string getJpgOnDemand() const { DARABONBA_PTR_GET_DEFAULT(jpgOnDemand_, "") };
      inline Templates& setJpgOnDemand(string jpgOnDemand) { DARABONBA_PTR_SET_VALUE(jpgOnDemand_, jpgOnDemand) };


      // jpgOverwrite Field Functions 
      bool hasJpgOverwrite() const { return this->jpgOverwrite_ != nullptr;};
      void deleteJpgOverwrite() { this->jpgOverwrite_ = nullptr;};
      inline string getJpgOverwrite() const { DARABONBA_PTR_GET_DEFAULT(jpgOverwrite_, "") };
      inline Templates& setJpgOverwrite(string jpgOverwrite) { DARABONBA_PTR_SET_VALUE(jpgOverwrite_, jpgOverwrite) };


      // jpgSequence Field Functions 
      bool hasJpgSequence() const { return this->jpgSequence_ != nullptr;};
      void deleteJpgSequence() { this->jpgSequence_ = nullptr;};
      inline string getJpgSequence() const { DARABONBA_PTR_GET_DEFAULT(jpgSequence_, "") };
      inline Templates& setJpgSequence(string jpgSequence) { DARABONBA_PTR_SET_VALUE(jpgSequence_, jpgSequence) };


      // mp4 Field Functions 
      bool hasMp4() const { return this->mp4_ != nullptr;};
      void deleteMp4() { this->mp4_ = nullptr;};
      inline string getMp4() const { DARABONBA_PTR_GET_DEFAULT(mp4_, "") };
      inline Templates& setMp4(string mp4) { DARABONBA_PTR_SET_VALUE(mp4_, mp4) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Templates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ossBucket Field Functions 
      bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
      void deleteOssBucket() { this->ossBucket_ = nullptr;};
      inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
      inline Templates& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


      // ossEndpoint Field Functions 
      bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
      void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
      inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
      inline Templates& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


      // ossFilePrefix Field Functions 
      bool hasOssFilePrefix() const { return this->ossFilePrefix_ != nullptr;};
      void deleteOssFilePrefix() { this->ossFilePrefix_ = nullptr;};
      inline string getOssFilePrefix() const { DARABONBA_PTR_GET_DEFAULT(ossFilePrefix_, "") };
      inline Templates& setOssFilePrefix(string ossFilePrefix) { DARABONBA_PTR_SET_VALUE(ossFilePrefix_, ossFilePrefix) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Templates& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
      inline Templates& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // transConfigs Field Functions 
      bool hasTransConfigs() const { return this->transConfigs_ != nullptr;};
      void deleteTransConfigs() { this->transConfigs_ = nullptr;};
      inline const vector<Templates::TransConfigs> & getTransConfigs() const { DARABONBA_PTR_GET_CONST(transConfigs_, vector<Templates::TransConfigs>) };
      inline vector<Templates::TransConfigs> getTransConfigs() { DARABONBA_PTR_GET(transConfigs_, vector<Templates::TransConfigs>) };
      inline Templates& setTransConfigs(const vector<Templates::TransConfigs> & transConfigs) { DARABONBA_PTR_SET_VALUE(transConfigs_, transConfigs) };
      inline Templates& setTransConfigs(vector<Templates::TransConfigs> && transConfigs) { DARABONBA_PTR_SET_RVALUE(transConfigs_, transConfigs) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline string getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
      inline Templates& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Templates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> callback_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> fileFormat_ {};
      shared_ptr<string> flv_ {};
      shared_ptr<string> hlsM3u8_ {};
      shared_ptr<string> hlsTs_ {};
      shared_ptr<string> id_ {};
      shared_ptr<int64_t> interval_ {};
      shared_ptr<string> jpgOnDemand_ {};
      shared_ptr<string> jpgOverwrite_ {};
      shared_ptr<string> jpgSequence_ {};
      shared_ptr<string> mp4_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> ossBucket_ {};
      shared_ptr<string> ossEndpoint_ {};
      shared_ptr<string> ossFilePrefix_ {};
      shared_ptr<string> region_ {};
      shared_ptr<int64_t> retention_ {};
      shared_ptr<vector<Templates::TransConfigs>> transConfigs_ {};
      shared_ptr<string> trigger_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->pageCount_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->templates_ == nullptr && this->totalCount_ == nullptr; };
    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribeTemplatesResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeTemplatesResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeTemplatesResponseBody::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeTemplatesResponseBody::Templates>) };
    inline vector<DescribeTemplatesResponseBody::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<DescribeTemplatesResponseBody::Templates>) };
    inline DescribeTemplatesResponseBody& setTemplates(const vector<DescribeTemplatesResponseBody::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeTemplatesResponseBody& setTemplates(vector<DescribeTemplatesResponseBody::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeTemplatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int64_t> pageCount_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeTemplatesResponseBody::Templates>> templates_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
