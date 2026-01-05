// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPLAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPLAYRESPONSEBODY_HPP_
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
  class DescribeToutiaoLivePlayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeToutiaoLivePlayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeToutiaoLivePlayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeToutiaoLivePlayResponseBody() = default ;
    DescribeToutiaoLivePlayResponseBody(const DescribeToutiaoLivePlayResponseBody &) = default ;
    DescribeToutiaoLivePlayResponseBody(DescribeToutiaoLivePlayResponseBody &&) = default ;
    DescribeToutiaoLivePlayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeToutiaoLivePlayResponseBody() = default ;
    DescribeToutiaoLivePlayResponseBody& operator=(const DescribeToutiaoLivePlayResponseBody &) = default ;
    DescribeToutiaoLivePlayResponseBody& operator=(DescribeToutiaoLivePlayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(CdnName, cdnName_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(PlayNum, playNum_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(CdnName, cdnName_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(PlayNum, playNum_);
        DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->app_ == nullptr
        && this->bandwidth_ == nullptr && this->cdnName_ == nullptr && this->domain_ == nullptr && this->playNum_ == nullptr && this->streamName_ == nullptr
        && this->timestamp_ == nullptr; };
      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
      inline Content& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline float getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0.0) };
      inline Content& setBandwidth(float bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // cdnName Field Functions 
      bool hasCdnName() const { return this->cdnName_ != nullptr;};
      void deleteCdnName() { this->cdnName_ = nullptr;};
      inline string getCdnName() const { DARABONBA_PTR_GET_DEFAULT(cdnName_, "") };
      inline Content& setCdnName(string cdnName) { DARABONBA_PTR_SET_VALUE(cdnName_, cdnName) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Content& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // playNum Field Functions 
      bool hasPlayNum() const { return this->playNum_ != nullptr;};
      void deletePlayNum() { this->playNum_ = nullptr;};
      inline int64_t getPlayNum() const { DARABONBA_PTR_GET_DEFAULT(playNum_, 0L) };
      inline Content& setPlayNum(int64_t playNum) { DARABONBA_PTR_SET_VALUE(playNum_, playNum) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline Content& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Content& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The name of the application to which the live stream belongs.
      shared_ptr<string> app_ {};
      // The bandwidth. Unit: Mbit/s.
      shared_ptr<float> bandwidth_ {};
      // The Content Delivery Network (CDN) name.
      shared_ptr<string> cdnName_ {};
      // The streaming domain.
      shared_ptr<string> domain_ {};
      // The number of viewers.
      shared_ptr<int64_t> playNum_ {};
      // The name of the live stream.
      shared_ptr<string> streamName_ {};
      // The timestamp.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeToutiaoLivePlayResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeToutiaoLivePlayResponseBody::Content>) };
    inline vector<DescribeToutiaoLivePlayResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<DescribeToutiaoLivePlayResponseBody::Content>) };
    inline DescribeToutiaoLivePlayResponseBody& setContent(const vector<DescribeToutiaoLivePlayResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeToutiaoLivePlayResponseBody& setContent(vector<DescribeToutiaoLivePlayResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeToutiaoLivePlayResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeToutiaoLivePlayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the live stream.
    shared_ptr<vector<DescribeToutiaoLivePlayResponseBody::Content>> content_ {};
    // The description of the response status.
    shared_ptr<string> description_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
