// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSEBODY_HPP_
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
  class BatchResumeVsStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchResumeVsStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResumeResult, resumeResult_);
    };
    friend void from_json(const Darabonba::Json& j, BatchResumeVsStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResumeResult, resumeResult_);
    };
    BatchResumeVsStreamResponseBody() = default ;
    BatchResumeVsStreamResponseBody(const BatchResumeVsStreamResponseBody &) = default ;
    BatchResumeVsStreamResponseBody(BatchResumeVsStreamResponseBody &&) = default ;
    BatchResumeVsStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchResumeVsStreamResponseBody() = default ;
    BatchResumeVsStreamResponseBody& operator=(const BatchResumeVsStreamResponseBody &) = default ;
    BatchResumeVsStreamResponseBody& operator=(BatchResumeVsStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResumeResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResumeResult& obj) { 
        DARABONBA_PTR_TO_JSON(ResumeResultInfo, resumeResultInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ResumeResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ResumeResultInfo, resumeResultInfo_);
      };
      ResumeResult() = default ;
      ResumeResult(const ResumeResult &) = default ;
      ResumeResult(ResumeResult &&) = default ;
      ResumeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResumeResult() = default ;
      ResumeResult& operator=(const ResumeResult &) = default ;
      ResumeResult& operator=(ResumeResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResumeResultInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResumeResultInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, ResumeResultInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        ResumeResultInfo() = default ;
        ResumeResultInfo(const ResumeResultInfo &) = default ;
        ResumeResultInfo(ResumeResultInfo &&) = default ;
        ResumeResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResumeResultInfo() = default ;
        ResumeResultInfo& operator=(const ResumeResultInfo &) = default ;
        ResumeResultInfo& operator=(ResumeResultInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Channels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Channels& obj) { 
            DARABONBA_PTR_TO_JSON(Channel, channel_);
          };
          friend void from_json(const Darabonba::Json& j, Channels& obj) { 
            DARABONBA_PTR_FROM_JSON(Channel, channel_);
          };
          Channels() = default ;
          Channels(const Channels &) = default ;
          Channels(Channels &&) = default ;
          Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Channels() = default ;
          Channels& operator=(const Channels &) = default ;
          Channels& operator=(Channels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->channel_ == nullptr; };
          // channel Field Functions 
          bool hasChannel() const { return this->channel_ != nullptr;};
          void deleteChannel() { this->channel_ = nullptr;};
          inline const vector<string> & getChannel() const { DARABONBA_PTR_GET_CONST(channel_, vector<string>) };
          inline vector<string> getChannel() { DARABONBA_PTR_GET(channel_, vector<string>) };
          inline Channels& setChannel(const vector<string> & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
          inline Channels& setChannel(vector<string> && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


        protected:
          shared_ptr<vector<string>> channel_ {};
        };

        virtual bool empty() const override { return this->channels_ == nullptr
        && this->count_ == nullptr && this->detail_ == nullptr && this->result_ == nullptr; };
        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline const ResumeResultInfo::Channels & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, ResumeResultInfo::Channels) };
        inline ResumeResultInfo::Channels getChannels() { DARABONBA_PTR_GET(channels_, ResumeResultInfo::Channels) };
        inline ResumeResultInfo& setChannels(const ResumeResultInfo::Channels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
        inline ResumeResultInfo& setChannels(ResumeResultInfo::Channels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline ResumeResultInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline ResumeResultInfo& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline ResumeResultInfo& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        shared_ptr<ResumeResultInfo::Channels> channels_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> detail_ {};
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->resumeResultInfo_ == nullptr; };
      // resumeResultInfo Field Functions 
      bool hasResumeResultInfo() const { return this->resumeResultInfo_ != nullptr;};
      void deleteResumeResultInfo() { this->resumeResultInfo_ = nullptr;};
      inline const vector<ResumeResult::ResumeResultInfo> & getResumeResultInfo() const { DARABONBA_PTR_GET_CONST(resumeResultInfo_, vector<ResumeResult::ResumeResultInfo>) };
      inline vector<ResumeResult::ResumeResultInfo> getResumeResultInfo() { DARABONBA_PTR_GET(resumeResultInfo_, vector<ResumeResult::ResumeResultInfo>) };
      inline ResumeResult& setResumeResultInfo(const vector<ResumeResult::ResumeResultInfo> & resumeResultInfo) { DARABONBA_PTR_SET_VALUE(resumeResultInfo_, resumeResultInfo) };
      inline ResumeResult& setResumeResultInfo(vector<ResumeResult::ResumeResultInfo> && resumeResultInfo) { DARABONBA_PTR_SET_RVALUE(resumeResultInfo_, resumeResultInfo) };


    protected:
      shared_ptr<vector<ResumeResult::ResumeResultInfo>> resumeResultInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resumeResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchResumeVsStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resumeResult Field Functions 
    bool hasResumeResult() const { return this->resumeResult_ != nullptr;};
    void deleteResumeResult() { this->resumeResult_ = nullptr;};
    inline const BatchResumeVsStreamResponseBody::ResumeResult & getResumeResult() const { DARABONBA_PTR_GET_CONST(resumeResult_, BatchResumeVsStreamResponseBody::ResumeResult) };
    inline BatchResumeVsStreamResponseBody::ResumeResult getResumeResult() { DARABONBA_PTR_GET(resumeResult_, BatchResumeVsStreamResponseBody::ResumeResult) };
    inline BatchResumeVsStreamResponseBody& setResumeResult(const BatchResumeVsStreamResponseBody::ResumeResult & resumeResult) { DARABONBA_PTR_SET_VALUE(resumeResult_, resumeResult) };
    inline BatchResumeVsStreamResponseBody& setResumeResult(BatchResumeVsStreamResponseBody::ResumeResult && resumeResult) { DARABONBA_PTR_SET_RVALUE(resumeResult_, resumeResult) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<BatchResumeVsStreamResponseBody::ResumeResult> resumeResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
