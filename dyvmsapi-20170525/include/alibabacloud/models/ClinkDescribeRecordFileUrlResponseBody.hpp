// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKDESCRIBERECORDFILEURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKDESCRIBERECORDFILEURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkDescribeRecordFileUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkDescribeRecordFileUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkDescribeRecordFileUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkDescribeRecordFileUrlResponseBody() = default ;
    ClinkDescribeRecordFileUrlResponseBody(const ClinkDescribeRecordFileUrlResponseBody &) = default ;
    ClinkDescribeRecordFileUrlResponseBody(ClinkDescribeRecordFileUrlResponseBody &&) = default ;
    ClinkDescribeRecordFileUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkDescribeRecordFileUrlResponseBody() = default ;
    ClinkDescribeRecordFileUrlResponseBody& operator=(const ClinkDescribeRecordFileUrlResponseBody &) = default ;
    ClinkDescribeRecordFileUrlResponseBody& operator=(ClinkDescribeRecordFileUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AudioFlows, audioFlows_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(RecordFileUrl, recordFileUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioFlows, audioFlows_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(RecordFileUrl, recordFileUrl_);
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
      class AudioFlows : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AudioFlows& obj) { 
          DARABONBA_PTR_TO_JSON(Node, node_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AudioFlows& obj) { 
          DARABONBA_PTR_FROM_JSON(Node, node_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AudioFlows() = default ;
        AudioFlows(const AudioFlows &) = default ;
        AudioFlows(AudioFlows &&) = default ;
        AudioFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AudioFlows() = default ;
        AudioFlows& operator=(const AudioFlows &) = default ;
        AudioFlows& operator=(AudioFlows &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->node_ == nullptr
        && this->timestamp_ == nullptr && this->type_ == nullptr; };
        // node Field Functions 
        bool hasNode() const { return this->node_ != nullptr;};
        void deleteNode() { this->node_ = nullptr;};
        inline int64_t getNode() const { DARABONBA_PTR_GET_DEFAULT(node_, 0L) };
        inline AudioFlows& setNode(int64_t node) { DARABONBA_PTR_SET_VALUE(node_, node) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline AudioFlows& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
        inline AudioFlows& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // 节点，1：录音，2：保持，3：静音，4：咨询
        shared_ptr<int64_t> node_ {};
        // 时间戳，单位：秒
        shared_ptr<int64_t> timestamp_ {};
        // 类型，0：开始，1：结束
        shared_ptr<int64_t> type_ {};
      };

      virtual bool empty() const override { return this->audioFlows_ == nullptr
        && this->clinkRequestId_ == nullptr && this->recordFileUrl_ == nullptr; };
      // audioFlows Field Functions 
      bool hasAudioFlows() const { return this->audioFlows_ != nullptr;};
      void deleteAudioFlows() { this->audioFlows_ = nullptr;};
      inline const vector<Data::AudioFlows> & getAudioFlows() const { DARABONBA_PTR_GET_CONST(audioFlows_, vector<Data::AudioFlows>) };
      inline vector<Data::AudioFlows> getAudioFlows() { DARABONBA_PTR_GET(audioFlows_, vector<Data::AudioFlows>) };
      inline Data& setAudioFlows(const vector<Data::AudioFlows> & audioFlows) { DARABONBA_PTR_SET_VALUE(audioFlows_, audioFlows) };
      inline Data& setAudioFlows(vector<Data::AudioFlows> && audioFlows) { DARABONBA_PTR_SET_RVALUE(audioFlows_, audioFlows) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // recordFileUrl Field Functions 
      bool hasRecordFileUrl() const { return this->recordFileUrl_ != nullptr;};
      void deleteRecordFileUrl() { this->recordFileUrl_ = nullptr;};
      inline string getRecordFileUrl() const { DARABONBA_PTR_GET_DEFAULT(recordFileUrl_, "") };
      inline Data& setRecordFileUrl(string recordFileUrl) { DARABONBA_PTR_SET_VALUE(recordFileUrl_, recordFileUrl) };


    protected:
      // 录音流程列表。仅当获取 mp3 格式通话录音时返回（不传 recordSide 且 recordType 为 "record" 或未传）。
      shared_ptr<vector<Data::AudioFlows>> audioFlows_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 通话录音地址
      shared_ptr<string> recordFileUrl_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkDescribeRecordFileUrlResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkDescribeRecordFileUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkDescribeRecordFileUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkDescribeRecordFileUrlResponseBody::Data) };
    inline ClinkDescribeRecordFileUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkDescribeRecordFileUrlResponseBody::Data) };
    inline ClinkDescribeRecordFileUrlResponseBody& setData(const ClinkDescribeRecordFileUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkDescribeRecordFileUrlResponseBody& setData(ClinkDescribeRecordFileUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkDescribeRecordFileUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkDescribeRecordFileUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkDescribeRecordFileUrlResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
