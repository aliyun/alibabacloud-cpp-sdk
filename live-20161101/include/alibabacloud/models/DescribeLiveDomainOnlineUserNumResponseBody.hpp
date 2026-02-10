// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODY_HPP_
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
  class DescribeLiveDomainOnlineUserNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainOnlineUserNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineUserInfo, onlineUserInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainOnlineUserNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineUserInfo, onlineUserInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    DescribeLiveDomainOnlineUserNumResponseBody() = default ;
    DescribeLiveDomainOnlineUserNumResponseBody(const DescribeLiveDomainOnlineUserNumResponseBody &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBody(DescribeLiveDomainOnlineUserNumResponseBody &&) = default ;
    DescribeLiveDomainOnlineUserNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainOnlineUserNumResponseBody() = default ;
    DescribeLiveDomainOnlineUserNumResponseBody& operator=(const DescribeLiveDomainOnlineUserNumResponseBody &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBody& operator=(DescribeLiveDomainOnlineUserNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnlineUserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineUserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamOnlineUserNumInfo, liveStreamOnlineUserNumInfo_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineUserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamOnlineUserNumInfo, liveStreamOnlineUserNumInfo_);
      };
      OnlineUserInfo() = default ;
      OnlineUserInfo(const OnlineUserInfo &) = default ;
      OnlineUserInfo(OnlineUserInfo &&) = default ;
      OnlineUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnlineUserInfo() = default ;
      OnlineUserInfo& operator=(const OnlineUserInfo &) = default ;
      OnlineUserInfo& operator=(OnlineUserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamOnlineUserNumInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamOnlineUserNumInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Infos, infos_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamOnlineUserNumInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Infos, infos_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        LiveStreamOnlineUserNumInfo() = default ;
        LiveStreamOnlineUserNumInfo(const LiveStreamOnlineUserNumInfo &) = default ;
        LiveStreamOnlineUserNumInfo(LiveStreamOnlineUserNumInfo &&) = default ;
        LiveStreamOnlineUserNumInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamOnlineUserNumInfo() = default ;
        LiveStreamOnlineUserNumInfo& operator=(const LiveStreamOnlineUserNumInfo &) = default ;
        LiveStreamOnlineUserNumInfo& operator=(LiveStreamOnlineUserNumInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Infos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Infos& obj) { 
            DARABONBA_PTR_TO_JSON(Info, info_);
          };
          friend void from_json(const Darabonba::Json& j, Infos& obj) { 
            DARABONBA_PTR_FROM_JSON(Info, info_);
          };
          Infos() = default ;
          Infos(const Infos &) = default ;
          Infos(Infos &&) = default ;
          Infos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Infos() = default ;
          Infos& operator=(const Infos &) = default ;
          Infos& operator=(Infos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Info : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Info& obj) { 
              DARABONBA_PTR_TO_JSON(TranscodeTemplate, transcodeTemplate_);
              DARABONBA_PTR_TO_JSON(UserNumber, userNumber_);
            };
            friend void from_json(const Darabonba::Json& j, Info& obj) { 
              DARABONBA_PTR_FROM_JSON(TranscodeTemplate, transcodeTemplate_);
              DARABONBA_PTR_FROM_JSON(UserNumber, userNumber_);
            };
            Info() = default ;
            Info(const Info &) = default ;
            Info(Info &&) = default ;
            Info(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Info() = default ;
            Info& operator=(const Info &) = default ;
            Info& operator=(Info &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->transcodeTemplate_ == nullptr
        && this->userNumber_ == nullptr; };
            // transcodeTemplate Field Functions 
            bool hasTranscodeTemplate() const { return this->transcodeTemplate_ != nullptr;};
            void deleteTranscodeTemplate() { this->transcodeTemplate_ = nullptr;};
            inline string getTranscodeTemplate() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplate_, "") };
            inline Info& setTranscodeTemplate(string transcodeTemplate) { DARABONBA_PTR_SET_VALUE(transcodeTemplate_, transcodeTemplate) };


            // userNumber Field Functions 
            bool hasUserNumber() const { return this->userNumber_ != nullptr;};
            void deleteUserNumber() { this->userNumber_ = nullptr;};
            inline int64_t getUserNumber() const { DARABONBA_PTR_GET_DEFAULT(userNumber_, 0L) };
            inline Info& setUserNumber(int64_t userNumber) { DARABONBA_PTR_SET_VALUE(userNumber_, userNumber) };


          protected:
            shared_ptr<string> transcodeTemplate_ {};
            shared_ptr<int64_t> userNumber_ {};
          };

          virtual bool empty() const override { return this->info_ == nullptr; };
          // info Field Functions 
          bool hasInfo() const { return this->info_ != nullptr;};
          void deleteInfo() { this->info_ = nullptr;};
          inline const vector<Infos::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<Infos::Info>) };
          inline vector<Infos::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<Infos::Info>) };
          inline Infos& setInfo(const vector<Infos::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
          inline Infos& setInfo(vector<Infos::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


        protected:
          shared_ptr<vector<Infos::Info>> info_ {};
        };

        virtual bool empty() const override { return this->infos_ == nullptr
        && this->streamName_ == nullptr; };
        // infos Field Functions 
        bool hasInfos() const { return this->infos_ != nullptr;};
        void deleteInfos() { this->infos_ = nullptr;};
        inline const LiveStreamOnlineUserNumInfo::Infos & getInfos() const { DARABONBA_PTR_GET_CONST(infos_, LiveStreamOnlineUserNumInfo::Infos) };
        inline LiveStreamOnlineUserNumInfo::Infos getInfos() { DARABONBA_PTR_GET(infos_, LiveStreamOnlineUserNumInfo::Infos) };
        inline LiveStreamOnlineUserNumInfo& setInfos(const LiveStreamOnlineUserNumInfo::Infos & infos) { DARABONBA_PTR_SET_VALUE(infos_, infos) };
        inline LiveStreamOnlineUserNumInfo& setInfos(LiveStreamOnlineUserNumInfo::Infos && infos) { DARABONBA_PTR_SET_RVALUE(infos_, infos) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveStreamOnlineUserNumInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        shared_ptr<LiveStreamOnlineUserNumInfo::Infos> infos_ {};
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->liveStreamOnlineUserNumInfo_ == nullptr; };
      // liveStreamOnlineUserNumInfo Field Functions 
      bool hasLiveStreamOnlineUserNumInfo() const { return this->liveStreamOnlineUserNumInfo_ != nullptr;};
      void deleteLiveStreamOnlineUserNumInfo() { this->liveStreamOnlineUserNumInfo_ = nullptr;};
      inline const vector<OnlineUserInfo::LiveStreamOnlineUserNumInfo> & getLiveStreamOnlineUserNumInfo() const { DARABONBA_PTR_GET_CONST(liveStreamOnlineUserNumInfo_, vector<OnlineUserInfo::LiveStreamOnlineUserNumInfo>) };
      inline vector<OnlineUserInfo::LiveStreamOnlineUserNumInfo> getLiveStreamOnlineUserNumInfo() { DARABONBA_PTR_GET(liveStreamOnlineUserNumInfo_, vector<OnlineUserInfo::LiveStreamOnlineUserNumInfo>) };
      inline OnlineUserInfo& setLiveStreamOnlineUserNumInfo(const vector<OnlineUserInfo::LiveStreamOnlineUserNumInfo> & liveStreamOnlineUserNumInfo) { DARABONBA_PTR_SET_VALUE(liveStreamOnlineUserNumInfo_, liveStreamOnlineUserNumInfo) };
      inline OnlineUserInfo& setLiveStreamOnlineUserNumInfo(vector<OnlineUserInfo::LiveStreamOnlineUserNumInfo> && liveStreamOnlineUserNumInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamOnlineUserNumInfo_, liveStreamOnlineUserNumInfo) };


    protected:
      shared_ptr<vector<OnlineUserInfo::LiveStreamOnlineUserNumInfo>> liveStreamOnlineUserNumInfo_ {};
    };

    virtual bool empty() const override { return this->onlineUserInfo_ == nullptr
        && this->requestId_ == nullptr && this->streamCount_ == nullptr && this->userCount_ == nullptr; };
    // onlineUserInfo Field Functions 
    bool hasOnlineUserInfo() const { return this->onlineUserInfo_ != nullptr;};
    void deleteOnlineUserInfo() { this->onlineUserInfo_ = nullptr;};
    inline const DescribeLiveDomainOnlineUserNumResponseBody::OnlineUserInfo & getOnlineUserInfo() const { DARABONBA_PTR_GET_CONST(onlineUserInfo_, DescribeLiveDomainOnlineUserNumResponseBody::OnlineUserInfo) };
    inline DescribeLiveDomainOnlineUserNumResponseBody::OnlineUserInfo getOnlineUserInfo() { DARABONBA_PTR_GET(onlineUserInfo_, DescribeLiveDomainOnlineUserNumResponseBody::OnlineUserInfo) };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setOnlineUserInfo(const DescribeLiveDomainOnlineUserNumResponseBody::OnlineUserInfo & onlineUserInfo) { DARABONBA_PTR_SET_VALUE(onlineUserInfo_, onlineUserInfo) };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setOnlineUserInfo(DescribeLiveDomainOnlineUserNumResponseBody::OnlineUserInfo && onlineUserInfo) { DARABONBA_PTR_SET_RVALUE(onlineUserInfo_, onlineUserInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamCount Field Functions 
    bool hasStreamCount() const { return this->streamCount_ != nullptr;};
    void deleteStreamCount() { this->streamCount_ = nullptr;};
    inline int32_t getStreamCount() const { DARABONBA_PTR_GET_DEFAULT(streamCount_, 0) };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setStreamCount(int32_t streamCount) { DARABONBA_PTR_SET_VALUE(streamCount_, streamCount) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline DescribeLiveDomainOnlineUserNumResponseBody& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    shared_ptr<DescribeLiveDomainOnlineUserNumResponseBody::OnlineUserInfo> onlineUserInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of streams.
    shared_ptr<int32_t> streamCount_ {};
    // The total number of online users at the specified point in time for all the live streams under the main streaming domain.
    shared_ptr<int32_t> userCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
