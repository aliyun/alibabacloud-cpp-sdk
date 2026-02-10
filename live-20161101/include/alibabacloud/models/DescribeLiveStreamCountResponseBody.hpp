// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODY_HPP_
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
  class DescribeLiveStreamCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamCountInfos, streamCountInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamCountInfos, streamCountInfos_);
    };
    DescribeLiveStreamCountResponseBody() = default ;
    DescribeLiveStreamCountResponseBody(const DescribeLiveStreamCountResponseBody &) = default ;
    DescribeLiveStreamCountResponseBody(DescribeLiveStreamCountResponseBody &&) = default ;
    DescribeLiveStreamCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamCountResponseBody() = default ;
    DescribeLiveStreamCountResponseBody& operator=(const DescribeLiveStreamCountResponseBody &) = default ;
    DescribeLiveStreamCountResponseBody& operator=(DescribeLiveStreamCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamCountInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamCountInfos& obj) { 
        DARABONBA_PTR_TO_JSON(StreamCountInfo, streamCountInfo_);
      };
      friend void from_json(const Darabonba::Json& j, StreamCountInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(StreamCountInfo, streamCountInfo_);
      };
      StreamCountInfos() = default ;
      StreamCountInfos(const StreamCountInfos &) = default ;
      StreamCountInfos(StreamCountInfos &&) = default ;
      StreamCountInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamCountInfos() = default ;
      StreamCountInfos& operator=(const StreamCountInfos &) = default ;
      StreamCountInfos& operator=(StreamCountInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamCountInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamCountInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Limit, limit_);
          DARABONBA_PTR_TO_JSON(StreamCountDetails, streamCountDetails_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, StreamCountInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Limit, limit_);
          DARABONBA_PTR_FROM_JSON(StreamCountDetails, streamCountDetails_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        StreamCountInfo() = default ;
        StreamCountInfo(const StreamCountInfo &) = default ;
        StreamCountInfo(StreamCountInfo &&) = default ;
        StreamCountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamCountInfo() = default ;
        StreamCountInfo& operator=(const StreamCountInfo &) = default ;
        StreamCountInfo& operator=(StreamCountInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StreamCountDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StreamCountDetails& obj) { 
            DARABONBA_PTR_TO_JSON(StreamCountDetail, streamCountDetail_);
          };
          friend void from_json(const Darabonba::Json& j, StreamCountDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(StreamCountDetail, streamCountDetail_);
          };
          StreamCountDetails() = default ;
          StreamCountDetails(const StreamCountDetails &) = default ;
          StreamCountDetails(StreamCountDetails &&) = default ;
          StreamCountDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StreamCountDetails() = default ;
          StreamCountDetails& operator=(const StreamCountDetails &) = default ;
          StreamCountDetails& operator=(StreamCountDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StreamCountDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StreamCountDetail& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Format, format_);
              DARABONBA_PTR_TO_JSON(VideoDataRate, videoDataRate_);
            };
            friend void from_json(const Darabonba::Json& j, StreamCountDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Format, format_);
              DARABONBA_PTR_FROM_JSON(VideoDataRate, videoDataRate_);
            };
            StreamCountDetail() = default ;
            StreamCountDetail(const StreamCountDetail &) = default ;
            StreamCountDetail(StreamCountDetail &&) = default ;
            StreamCountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StreamCountDetail() = default ;
            StreamCountDetail& operator=(const StreamCountDetail &) = default ;
            StreamCountDetail& operator=(StreamCountDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->format_ == nullptr && this->videoDataRate_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
            inline StreamCountDetail& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
            inline StreamCountDetail& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


            // videoDataRate Field Functions 
            bool hasVideoDataRate() const { return this->videoDataRate_ != nullptr;};
            void deleteVideoDataRate() { this->videoDataRate_ = nullptr;};
            inline int64_t getVideoDataRate() const { DARABONBA_PTR_GET_DEFAULT(videoDataRate_, 0L) };
            inline StreamCountDetail& setVideoDataRate(int64_t videoDataRate) { DARABONBA_PTR_SET_VALUE(videoDataRate_, videoDataRate) };


          protected:
            shared_ptr<int64_t> count_ {};
            shared_ptr<string> format_ {};
            shared_ptr<int64_t> videoDataRate_ {};
          };

          virtual bool empty() const override { return this->streamCountDetail_ == nullptr; };
          // streamCountDetail Field Functions 
          bool hasStreamCountDetail() const { return this->streamCountDetail_ != nullptr;};
          void deleteStreamCountDetail() { this->streamCountDetail_ = nullptr;};
          inline const vector<StreamCountDetails::StreamCountDetail> & getStreamCountDetail() const { DARABONBA_PTR_GET_CONST(streamCountDetail_, vector<StreamCountDetails::StreamCountDetail>) };
          inline vector<StreamCountDetails::StreamCountDetail> getStreamCountDetail() { DARABONBA_PTR_GET(streamCountDetail_, vector<StreamCountDetails::StreamCountDetail>) };
          inline StreamCountDetails& setStreamCountDetail(const vector<StreamCountDetails::StreamCountDetail> & streamCountDetail) { DARABONBA_PTR_SET_VALUE(streamCountDetail_, streamCountDetail) };
          inline StreamCountDetails& setStreamCountDetail(vector<StreamCountDetails::StreamCountDetail> && streamCountDetail) { DARABONBA_PTR_SET_RVALUE(streamCountDetail_, streamCountDetail) };


        protected:
          shared_ptr<vector<StreamCountDetails::StreamCountDetail>> streamCountDetail_ {};
        };

        virtual bool empty() const override { return this->count_ == nullptr
        && this->limit_ == nullptr && this->streamCountDetails_ == nullptr && this->type_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline StreamCountInfo& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // limit Field Functions 
        bool hasLimit() const { return this->limit_ != nullptr;};
        void deleteLimit() { this->limit_ = nullptr;};
        inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
        inline StreamCountInfo& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


        // streamCountDetails Field Functions 
        bool hasStreamCountDetails() const { return this->streamCountDetails_ != nullptr;};
        void deleteStreamCountDetails() { this->streamCountDetails_ = nullptr;};
        inline const StreamCountInfo::StreamCountDetails & getStreamCountDetails() const { DARABONBA_PTR_GET_CONST(streamCountDetails_, StreamCountInfo::StreamCountDetails) };
        inline StreamCountInfo::StreamCountDetails getStreamCountDetails() { DARABONBA_PTR_GET(streamCountDetails_, StreamCountInfo::StreamCountDetails) };
        inline StreamCountInfo& setStreamCountDetails(const StreamCountInfo::StreamCountDetails & streamCountDetails) { DARABONBA_PTR_SET_VALUE(streamCountDetails_, streamCountDetails) };
        inline StreamCountInfo& setStreamCountDetails(StreamCountInfo::StreamCountDetails && streamCountDetails) { DARABONBA_PTR_SET_RVALUE(streamCountDetails_, streamCountDetails) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StreamCountInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> count_ {};
        shared_ptr<int64_t> limit_ {};
        shared_ptr<StreamCountInfo::StreamCountDetails> streamCountDetails_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->streamCountInfo_ == nullptr; };
      // streamCountInfo Field Functions 
      bool hasStreamCountInfo() const { return this->streamCountInfo_ != nullptr;};
      void deleteStreamCountInfo() { this->streamCountInfo_ = nullptr;};
      inline const vector<StreamCountInfos::StreamCountInfo> & getStreamCountInfo() const { DARABONBA_PTR_GET_CONST(streamCountInfo_, vector<StreamCountInfos::StreamCountInfo>) };
      inline vector<StreamCountInfos::StreamCountInfo> getStreamCountInfo() { DARABONBA_PTR_GET(streamCountInfo_, vector<StreamCountInfos::StreamCountInfo>) };
      inline StreamCountInfos& setStreamCountInfo(const vector<StreamCountInfos::StreamCountInfo> & streamCountInfo) { DARABONBA_PTR_SET_VALUE(streamCountInfo_, streamCountInfo) };
      inline StreamCountInfos& setStreamCountInfo(vector<StreamCountInfos::StreamCountInfo> && streamCountInfo) { DARABONBA_PTR_SET_RVALUE(streamCountInfo_, streamCountInfo) };


    protected:
      shared_ptr<vector<StreamCountInfos::StreamCountInfo>> streamCountInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->streamCountInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamCountInfos Field Functions 
    bool hasStreamCountInfos() const { return this->streamCountInfos_ != nullptr;};
    void deleteStreamCountInfos() { this->streamCountInfos_ = nullptr;};
    inline const DescribeLiveStreamCountResponseBody::StreamCountInfos & getStreamCountInfos() const { DARABONBA_PTR_GET_CONST(streamCountInfos_, DescribeLiveStreamCountResponseBody::StreamCountInfos) };
    inline DescribeLiveStreamCountResponseBody::StreamCountInfos getStreamCountInfos() { DARABONBA_PTR_GET(streamCountInfos_, DescribeLiveStreamCountResponseBody::StreamCountInfos) };
    inline DescribeLiveStreamCountResponseBody& setStreamCountInfos(const DescribeLiveStreamCountResponseBody::StreamCountInfos & streamCountInfos) { DARABONBA_PTR_SET_VALUE(streamCountInfos_, streamCountInfos) };
    inline DescribeLiveStreamCountResponseBody& setStreamCountInfos(DescribeLiveStreamCountResponseBody::StreamCountInfos && streamCountInfos) { DARABONBA_PTR_SET_RVALUE(streamCountInfos_, streamCountInfos) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeLiveStreamCountResponseBody::StreamCountInfos> streamCountInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
