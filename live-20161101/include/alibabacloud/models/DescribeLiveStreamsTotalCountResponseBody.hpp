// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTRESPONSEBODY_HPP_
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
  class DescribeLiveStreamsTotalCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsTotalCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamCountList, streamCountList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsTotalCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamCountList, streamCountList_);
    };
    DescribeLiveStreamsTotalCountResponseBody() = default ;
    DescribeLiveStreamsTotalCountResponseBody(const DescribeLiveStreamsTotalCountResponseBody &) = default ;
    DescribeLiveStreamsTotalCountResponseBody(DescribeLiveStreamsTotalCountResponseBody &&) = default ;
    DescribeLiveStreamsTotalCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsTotalCountResponseBody() = default ;
    DescribeLiveStreamsTotalCountResponseBody& operator=(const DescribeLiveStreamsTotalCountResponseBody &) = default ;
    DescribeLiveStreamsTotalCountResponseBody& operator=(DescribeLiveStreamsTotalCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamCountList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamCountList& obj) { 
        DARABONBA_PTR_TO_JSON(StreamCountInfos, streamCountInfos_);
      };
      friend void from_json(const Darabonba::Json& j, StreamCountList& obj) { 
        DARABONBA_PTR_FROM_JSON(StreamCountInfos, streamCountInfos_);
      };
      StreamCountList() = default ;
      StreamCountList(const StreamCountList &) = default ;
      StreamCountList(StreamCountList &&) = default ;
      StreamCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamCountList() = default ;
      StreamCountList& operator=(const StreamCountList &) = default ;
      StreamCountList& operator=(StreamCountList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamCountInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamCountInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, StreamCountInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
        virtual bool empty() const override { return this->count_ == nullptr
        && this->timestamp_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline StreamCountInfos& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline StreamCountInfos& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The total number of live streams.
        shared_ptr<int32_t> count_ {};
        // The timestamp.
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->streamCountInfos_ == nullptr; };
      // streamCountInfos Field Functions 
      bool hasStreamCountInfos() const { return this->streamCountInfos_ != nullptr;};
      void deleteStreamCountInfos() { this->streamCountInfos_ = nullptr;};
      inline const vector<StreamCountList::StreamCountInfos> & getStreamCountInfos() const { DARABONBA_PTR_GET_CONST(streamCountInfos_, vector<StreamCountList::StreamCountInfos>) };
      inline vector<StreamCountList::StreamCountInfos> getStreamCountInfos() { DARABONBA_PTR_GET(streamCountInfos_, vector<StreamCountList::StreamCountInfos>) };
      inline StreamCountList& setStreamCountInfos(const vector<StreamCountList::StreamCountInfos> & streamCountInfos) { DARABONBA_PTR_SET_VALUE(streamCountInfos_, streamCountInfos) };
      inline StreamCountList& setStreamCountInfos(vector<StreamCountList::StreamCountInfos> && streamCountInfos) { DARABONBA_PTR_SET_RVALUE(streamCountInfos_, streamCountInfos) };


    protected:
      shared_ptr<vector<StreamCountList::StreamCountInfos>> streamCountInfos_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->streamCountList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsTotalCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamCountList Field Functions 
    bool hasStreamCountList() const { return this->streamCountList_ != nullptr;};
    void deleteStreamCountList() { this->streamCountList_ = nullptr;};
    inline const DescribeLiveStreamsTotalCountResponseBody::StreamCountList & getStreamCountList() const { DARABONBA_PTR_GET_CONST(streamCountList_, DescribeLiveStreamsTotalCountResponseBody::StreamCountList) };
    inline DescribeLiveStreamsTotalCountResponseBody::StreamCountList getStreamCountList() { DARABONBA_PTR_GET(streamCountList_, DescribeLiveStreamsTotalCountResponseBody::StreamCountList) };
    inline DescribeLiveStreamsTotalCountResponseBody& setStreamCountList(const DescribeLiveStreamsTotalCountResponseBody::StreamCountList & streamCountList) { DARABONBA_PTR_SET_VALUE(streamCountList_, streamCountList) };
    inline DescribeLiveStreamsTotalCountResponseBody& setStreamCountList(DescribeLiveStreamsTotalCountResponseBody::StreamCountList && streamCountList) { DARABONBA_PTR_SET_RVALUE(streamCountList_, streamCountList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The statistics about the live streams.
    shared_ptr<DescribeLiveStreamsTotalCountResponseBody::StreamCountList> streamCountList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
