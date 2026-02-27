// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOAUDITRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOAUDITRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class QueryVideoAuditResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoAuditResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoAuditResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryVideoAuditResultResponseBody() = default ;
    QueryVideoAuditResultResponseBody(const QueryVideoAuditResultResponseBody &) = default ;
    QueryVideoAuditResultResponseBody(QueryVideoAuditResultResponseBody &&) = default ;
    QueryVideoAuditResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoAuditResultResponseBody() = default ;
    QueryVideoAuditResultResponseBody& operator=(const QueryVideoAuditResultResponseBody &) = default ;
    QueryVideoAuditResultResponseBody& operator=(QueryVideoAuditResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(FrameAudited, frameAudited_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(TotalFrameAudit, totalFrameAudit_);
        DARABONBA_PTR_TO_JSON(TotalFrames, totalFrames_);
        DARABONBA_PTR_TO_JSON(TotalShots, totalShots_);
        DARABONBA_PTR_TO_JSON(VideoFileKey, videoFileKey_);
        DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
        DARABONBA_PTR_FROM_JSON(FrameAudited, frameAudited_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(TotalFrameAudit, totalFrameAudit_);
        DARABONBA_PTR_FROM_JSON(TotalFrames, totalFrames_);
        DARABONBA_PTR_FROM_JSON(TotalShots, totalShots_);
        DARABONBA_PTR_FROM_JSON(VideoFileKey, videoFileKey_);
        DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(DataId, dataId_);
          DARABONBA_PTR_TO_JSON(ReqId, reqId_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(DataId, dataId_);
          DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // 0到100分，保留到小数点后2位，部分标签无置信分
          shared_ptr<float> confidence_ {};
          // Label字段的解释说明
          shared_ptr<string> description_ {};
          // 图片内容检测运算后返回的标签，如：nonLabel（未检测出风险）
          shared_ptr<string> label_ {};
        };

        virtual bool empty() const override { return this->dataId_ == nullptr
        && this->reqId_ == nullptr && this->result_ == nullptr && this->riskLevel_ == nullptr; };
        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline Results& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // reqId Field Functions 
        bool hasReqId() const { return this->reqId_ != nullptr;};
        void deleteReqId() { this->reqId_ = nullptr;};
        inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
        inline Results& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<Results::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Results::Result>) };
        inline vector<Results::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Results::Result>) };
        inline Results& setResult(const vector<Results::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline Results& setResult(vector<Results::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline Results& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // 对应图片的ID，与ImageUrl中的id字段对应
        shared_ptr<string> dataId_ {};
        // 审核请求ID
        shared_ptr<string> reqId_ {};
        // 图片检测的风险标签、置信分等参数结果
        shared_ptr<vector<Results::Result>> result_ {};
        // 风险等级：high(高风险)、medium(中风险)、low(低风险)、none(未检测到风险)
        shared_ptr<string> riskLevel_ {};
      };

      class ImageUrls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageUrls& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, ImageUrls& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        ImageUrls() = default ;
        ImageUrls(const ImageUrls &) = default ;
        ImageUrls(ImageUrls &&) = default ;
        ImageUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageUrls() = default ;
        ImageUrls& operator=(const ImageUrls &) = default ;
        ImageUrls& operator=(ImageUrls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->timestamp_ == nullptr && this->url_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ImageUrls& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline double getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
        inline ImageUrls& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ImageUrls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // 图片ID，与AliyunImageAuditResult中的dataId对应
        shared_ptr<string> id_ {};
        shared_ptr<double> timestamp_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->duration_ == nullptr
        && this->errorMessage_ == nullptr && this->fps_ == nullptr && this->frameAudited_ == nullptr && this->height_ == nullptr && this->imageUrls_ == nullptr
        && this->results_ == nullptr && this->status_ == nullptr && this->text_ == nullptr && this->totalFrameAudit_ == nullptr && this->totalFrames_ == nullptr
        && this->totalShots_ == nullptr && this->videoFileKey_ == nullptr && this->videoUrl_ == nullptr && this->width_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline Data& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline double getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0.0) };
      inline Data& setFps(double fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


      // frameAudited Field Functions 
      bool hasFrameAudited() const { return this->frameAudited_ != nullptr;};
      void deleteFrameAudited() { this->frameAudited_ = nullptr;};
      inline int32_t getFrameAudited() const { DARABONBA_PTR_GET_DEFAULT(frameAudited_, 0) };
      inline Data& setFrameAudited(int32_t frameAudited) { DARABONBA_PTR_SET_VALUE(frameAudited_, frameAudited) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
      inline Data& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // imageUrls Field Functions 
      bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
      void deleteImageUrls() { this->imageUrls_ = nullptr;};
      inline const vector<Data::ImageUrls> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<Data::ImageUrls>) };
      inline vector<Data::ImageUrls> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<Data::ImageUrls>) };
      inline Data& setImageUrls(const vector<Data::ImageUrls> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
      inline Data& setImageUrls(vector<Data::ImageUrls> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Data& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // totalFrameAudit Field Functions 
      bool hasTotalFrameAudit() const { return this->totalFrameAudit_ != nullptr;};
      void deleteTotalFrameAudit() { this->totalFrameAudit_ = nullptr;};
      inline int32_t getTotalFrameAudit() const { DARABONBA_PTR_GET_DEFAULT(totalFrameAudit_, 0) };
      inline Data& setTotalFrameAudit(int32_t totalFrameAudit) { DARABONBA_PTR_SET_VALUE(totalFrameAudit_, totalFrameAudit) };


      // totalFrames Field Functions 
      bool hasTotalFrames() const { return this->totalFrames_ != nullptr;};
      void deleteTotalFrames() { this->totalFrames_ = nullptr;};
      inline int32_t getTotalFrames() const { DARABONBA_PTR_GET_DEFAULT(totalFrames_, 0) };
      inline Data& setTotalFrames(int32_t totalFrames) { DARABONBA_PTR_SET_VALUE(totalFrames_, totalFrames) };


      // totalShots Field Functions 
      bool hasTotalShots() const { return this->totalShots_ != nullptr;};
      void deleteTotalShots() { this->totalShots_ = nullptr;};
      inline int32_t getTotalShots() const { DARABONBA_PTR_GET_DEFAULT(totalShots_, 0) };
      inline Data& setTotalShots(int32_t totalShots) { DARABONBA_PTR_SET_VALUE(totalShots_, totalShots) };


      // videoFileKey Field Functions 
      bool hasVideoFileKey() const { return this->videoFileKey_ != nullptr;};
      void deleteVideoFileKey() { this->videoFileKey_ = nullptr;};
      inline string getVideoFileKey() const { DARABONBA_PTR_GET_DEFAULT(videoFileKey_, "") };
      inline Data& setVideoFileKey(string videoFileKey) { DARABONBA_PTR_SET_VALUE(videoFileKey_, videoFileKey) };


      // videoUrl Field Functions 
      bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
      void deleteVideoUrl() { this->videoUrl_ = nullptr;};
      inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
      inline Data& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
      inline Data& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // 视频总时长（秒）
      shared_ptr<double> duration_ {};
      // 任务执行失败时的错误信息
      shared_ptr<string> errorMessage_ {};
      // 视频帧率（FPS）
      shared_ptr<double> fps_ {};
      // 已经完成审核的帧数
      shared_ptr<int32_t> frameAudited_ {};
      // 视频高度（像素）
      shared_ptr<int32_t> height_ {};
      // 抽取的图片URL列表
      shared_ptr<vector<Data::ImageUrls>> imageUrls_ {};
      // 图片审核结果详情
      shared_ptr<vector<Data::Results>> results_ {};
      // 任务状态：PENDING(待执行)、RUNNING(执行中)、SUCCESSED(成功)、FAILED(失败)、CANCELED(取消)
      shared_ptr<string> status_ {};
      // 视频审校的文本结果
      shared_ptr<string> text_ {};
      // 需要审核的视频帧总数
      shared_ptr<int32_t> totalFrameAudit_ {};
      // 视频总帧数
      shared_ptr<int32_t> totalFrames_ {};
      // 检测到的视频分镜总数
      shared_ptr<int32_t> totalShots_ {};
      // 被审核的视频文件Key
      shared_ptr<string> videoFileKey_ {};
      // 被审核的视频URL地址
      shared_ptr<string> videoUrl_ {};
      // 视频宽度（像素）
      shared_ptr<int32_t> width_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVideoAuditResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryVideoAuditResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryVideoAuditResultResponseBody::Data) };
    inline QueryVideoAuditResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryVideoAuditResultResponseBody::Data) };
    inline QueryVideoAuditResultResponseBody& setData(const QueryVideoAuditResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryVideoAuditResultResponseBody& setData(QueryVideoAuditResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryVideoAuditResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryVideoAuditResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVideoAuditResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryVideoAuditResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 业务处理结果状态码
    shared_ptr<string> code_ {};
    // 视频审校的详细结果
    shared_ptr<QueryVideoAuditResultResponseBody::Data> data_ {};
    // HTTP响应状态码
    shared_ptr<int32_t> httpStatusCode_ {};
    // 业务处理结果描述信息
    shared_ptr<string> message_ {};
    // 本次API请求的唯一标识
    shared_ptr<string> requestId_ {};
    // 请求是否处理成功
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
