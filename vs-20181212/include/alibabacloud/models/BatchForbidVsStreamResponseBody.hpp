// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODY_HPP_
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
  class BatchForbidVsStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchForbidVsStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbidResult, forbidResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchForbidVsStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbidResult, forbidResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchForbidVsStreamResponseBody() = default ;
    BatchForbidVsStreamResponseBody(const BatchForbidVsStreamResponseBody &) = default ;
    BatchForbidVsStreamResponseBody(BatchForbidVsStreamResponseBody &&) = default ;
    BatchForbidVsStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchForbidVsStreamResponseBody() = default ;
    BatchForbidVsStreamResponseBody& operator=(const BatchForbidVsStreamResponseBody &) = default ;
    BatchForbidVsStreamResponseBody& operator=(BatchForbidVsStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForbidResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForbidResult& obj) { 
        DARABONBA_PTR_TO_JSON(ForbidResultInfo, forbidResultInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ForbidResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ForbidResultInfo, forbidResultInfo_);
      };
      ForbidResult() = default ;
      ForbidResult(const ForbidResult &) = default ;
      ForbidResult(ForbidResult &&) = default ;
      ForbidResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForbidResult() = default ;
      ForbidResult& operator=(const ForbidResult &) = default ;
      ForbidResult& operator=(ForbidResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ForbidResultInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ForbidResultInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, ForbidResultInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        ForbidResultInfo() = default ;
        ForbidResultInfo(const ForbidResultInfo &) = default ;
        ForbidResultInfo(ForbidResultInfo &&) = default ;
        ForbidResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ForbidResultInfo() = default ;
        ForbidResultInfo& operator=(const ForbidResultInfo &) = default ;
        ForbidResultInfo& operator=(ForbidResultInfo &&) = default ;
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
        inline const ForbidResultInfo::Channels & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, ForbidResultInfo::Channels) };
        inline ForbidResultInfo::Channels getChannels() { DARABONBA_PTR_GET(channels_, ForbidResultInfo::Channels) };
        inline ForbidResultInfo& setChannels(const ForbidResultInfo::Channels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
        inline ForbidResultInfo& setChannels(ForbidResultInfo::Channels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline ForbidResultInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline ForbidResultInfo& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline ForbidResultInfo& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        shared_ptr<ForbidResultInfo::Channels> channels_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> detail_ {};
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->forbidResultInfo_ == nullptr; };
      // forbidResultInfo Field Functions 
      bool hasForbidResultInfo() const { return this->forbidResultInfo_ != nullptr;};
      void deleteForbidResultInfo() { this->forbidResultInfo_ = nullptr;};
      inline const vector<ForbidResult::ForbidResultInfo> & getForbidResultInfo() const { DARABONBA_PTR_GET_CONST(forbidResultInfo_, vector<ForbidResult::ForbidResultInfo>) };
      inline vector<ForbidResult::ForbidResultInfo> getForbidResultInfo() { DARABONBA_PTR_GET(forbidResultInfo_, vector<ForbidResult::ForbidResultInfo>) };
      inline ForbidResult& setForbidResultInfo(const vector<ForbidResult::ForbidResultInfo> & forbidResultInfo) { DARABONBA_PTR_SET_VALUE(forbidResultInfo_, forbidResultInfo) };
      inline ForbidResult& setForbidResultInfo(vector<ForbidResult::ForbidResultInfo> && forbidResultInfo) { DARABONBA_PTR_SET_RVALUE(forbidResultInfo_, forbidResultInfo) };


    protected:
      shared_ptr<vector<ForbidResult::ForbidResultInfo>> forbidResultInfo_ {};
    };

    virtual bool empty() const override { return this->forbidResult_ == nullptr
        && this->requestId_ == nullptr; };
    // forbidResult Field Functions 
    bool hasForbidResult() const { return this->forbidResult_ != nullptr;};
    void deleteForbidResult() { this->forbidResult_ = nullptr;};
    inline const BatchForbidVsStreamResponseBody::ForbidResult & getForbidResult() const { DARABONBA_PTR_GET_CONST(forbidResult_, BatchForbidVsStreamResponseBody::ForbidResult) };
    inline BatchForbidVsStreamResponseBody::ForbidResult getForbidResult() { DARABONBA_PTR_GET(forbidResult_, BatchForbidVsStreamResponseBody::ForbidResult) };
    inline BatchForbidVsStreamResponseBody& setForbidResult(const BatchForbidVsStreamResponseBody::ForbidResult & forbidResult) { DARABONBA_PTR_SET_VALUE(forbidResult_, forbidResult) };
    inline BatchForbidVsStreamResponseBody& setForbidResult(BatchForbidVsStreamResponseBody::ForbidResult && forbidResult) { DARABONBA_PTR_SET_RVALUE(forbidResult_, forbidResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchForbidVsStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<BatchForbidVsStreamResponseBody::ForbidResult> forbidResult_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
