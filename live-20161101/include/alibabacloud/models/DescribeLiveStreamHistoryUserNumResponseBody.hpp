// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMHISTORYUSERNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMHISTORYUSERNUMRESPONSEBODY_HPP_
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
  class DescribeLiveStreamHistoryUserNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamHistoryUserNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamUserNumInfos, liveStreamUserNumInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamHistoryUserNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamUserNumInfos, liveStreamUserNumInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamHistoryUserNumResponseBody() = default ;
    DescribeLiveStreamHistoryUserNumResponseBody(const DescribeLiveStreamHistoryUserNumResponseBody &) = default ;
    DescribeLiveStreamHistoryUserNumResponseBody(DescribeLiveStreamHistoryUserNumResponseBody &&) = default ;
    DescribeLiveStreamHistoryUserNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamHistoryUserNumResponseBody() = default ;
    DescribeLiveStreamHistoryUserNumResponseBody& operator=(const DescribeLiveStreamHistoryUserNumResponseBody &) = default ;
    DescribeLiveStreamHistoryUserNumResponseBody& operator=(DescribeLiveStreamHistoryUserNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveStreamUserNumInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamUserNumInfos& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamUserNumInfo, liveStreamUserNumInfo_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamUserNumInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamUserNumInfo, liveStreamUserNumInfo_);
      };
      LiveStreamUserNumInfos() = default ;
      LiveStreamUserNumInfos(const LiveStreamUserNumInfos &) = default ;
      LiveStreamUserNumInfos(LiveStreamUserNumInfos &&) = default ;
      LiveStreamUserNumInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamUserNumInfos() = default ;
      LiveStreamUserNumInfos& operator=(const LiveStreamUserNumInfos &) = default ;
      LiveStreamUserNumInfos& operator=(LiveStreamUserNumInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamUserNumInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamUserNumInfo& obj) { 
          DARABONBA_PTR_TO_JSON(StreamTime, streamTime_);
          DARABONBA_PTR_TO_JSON(UserNum, userNum_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamUserNumInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(StreamTime, streamTime_);
          DARABONBA_PTR_FROM_JSON(UserNum, userNum_);
        };
        LiveStreamUserNumInfo() = default ;
        LiveStreamUserNumInfo(const LiveStreamUserNumInfo &) = default ;
        LiveStreamUserNumInfo(LiveStreamUserNumInfo &&) = default ;
        LiveStreamUserNumInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamUserNumInfo() = default ;
        LiveStreamUserNumInfo& operator=(const LiveStreamUserNumInfo &) = default ;
        LiveStreamUserNumInfo& operator=(LiveStreamUserNumInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->streamTime_ == nullptr
        && this->userNum_ == nullptr; };
        // streamTime Field Functions 
        bool hasStreamTime() const { return this->streamTime_ != nullptr;};
        void deleteStreamTime() { this->streamTime_ = nullptr;};
        inline string getStreamTime() const { DARABONBA_PTR_GET_DEFAULT(streamTime_, "") };
        inline LiveStreamUserNumInfo& setStreamTime(string streamTime) { DARABONBA_PTR_SET_VALUE(streamTime_, streamTime) };


        // userNum Field Functions 
        bool hasUserNum() const { return this->userNum_ != nullptr;};
        void deleteUserNum() { this->userNum_ = nullptr;};
        inline string getUserNum() const { DARABONBA_PTR_GET_DEFAULT(userNum_, "") };
        inline LiveStreamUserNumInfo& setUserNum(string userNum) { DARABONBA_PTR_SET_VALUE(userNum_, userNum) };


      protected:
        shared_ptr<string> streamTime_ {};
        shared_ptr<string> userNum_ {};
      };

      virtual bool empty() const override { return this->liveStreamUserNumInfo_ == nullptr; };
      // liveStreamUserNumInfo Field Functions 
      bool hasLiveStreamUserNumInfo() const { return this->liveStreamUserNumInfo_ != nullptr;};
      void deleteLiveStreamUserNumInfo() { this->liveStreamUserNumInfo_ = nullptr;};
      inline const vector<LiveStreamUserNumInfos::LiveStreamUserNumInfo> & getLiveStreamUserNumInfo() const { DARABONBA_PTR_GET_CONST(liveStreamUserNumInfo_, vector<LiveStreamUserNumInfos::LiveStreamUserNumInfo>) };
      inline vector<LiveStreamUserNumInfos::LiveStreamUserNumInfo> getLiveStreamUserNumInfo() { DARABONBA_PTR_GET(liveStreamUserNumInfo_, vector<LiveStreamUserNumInfos::LiveStreamUserNumInfo>) };
      inline LiveStreamUserNumInfos& setLiveStreamUserNumInfo(const vector<LiveStreamUserNumInfos::LiveStreamUserNumInfo> & liveStreamUserNumInfo) { DARABONBA_PTR_SET_VALUE(liveStreamUserNumInfo_, liveStreamUserNumInfo) };
      inline LiveStreamUserNumInfos& setLiveStreamUserNumInfo(vector<LiveStreamUserNumInfos::LiveStreamUserNumInfo> && liveStreamUserNumInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamUserNumInfo_, liveStreamUserNumInfo) };


    protected:
      shared_ptr<vector<LiveStreamUserNumInfos::LiveStreamUserNumInfo>> liveStreamUserNumInfo_ {};
    };

    virtual bool empty() const override { return this->liveStreamUserNumInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // liveStreamUserNumInfos Field Functions 
    bool hasLiveStreamUserNumInfos() const { return this->liveStreamUserNumInfos_ != nullptr;};
    void deleteLiveStreamUserNumInfos() { this->liveStreamUserNumInfos_ = nullptr;};
    inline const DescribeLiveStreamHistoryUserNumResponseBody::LiveStreamUserNumInfos & getLiveStreamUserNumInfos() const { DARABONBA_PTR_GET_CONST(liveStreamUserNumInfos_, DescribeLiveStreamHistoryUserNumResponseBody::LiveStreamUserNumInfos) };
    inline DescribeLiveStreamHistoryUserNumResponseBody::LiveStreamUserNumInfos getLiveStreamUserNumInfos() { DARABONBA_PTR_GET(liveStreamUserNumInfos_, DescribeLiveStreamHistoryUserNumResponseBody::LiveStreamUserNumInfos) };
    inline DescribeLiveStreamHistoryUserNumResponseBody& setLiveStreamUserNumInfos(const DescribeLiveStreamHistoryUserNumResponseBody::LiveStreamUserNumInfos & liveStreamUserNumInfos) { DARABONBA_PTR_SET_VALUE(liveStreamUserNumInfos_, liveStreamUserNumInfos) };
    inline DescribeLiveStreamHistoryUserNumResponseBody& setLiveStreamUserNumInfos(DescribeLiveStreamHistoryUserNumResponseBody::LiveStreamUserNumInfos && liveStreamUserNumInfos) { DARABONBA_PTR_SET_RVALUE(liveStreamUserNumInfos_, liveStreamUserNumInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamHistoryUserNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveStreamHistoryUserNumResponseBody::LiveStreamUserNumInfos> liveStreamUserNumInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
