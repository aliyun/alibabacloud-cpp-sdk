// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPUBLISHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPUBLISHRESPONSEBODY_HPP_
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
  class DescribeToutiaoLivePublishResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeToutiaoLivePublishResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeToutiaoLivePublishResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeToutiaoLivePublishResponseBody() = default ;
    DescribeToutiaoLivePublishResponseBody(const DescribeToutiaoLivePublishResponseBody &) = default ;
    DescribeToutiaoLivePublishResponseBody(DescribeToutiaoLivePublishResponseBody &&) = default ;
    DescribeToutiaoLivePublishResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeToutiaoLivePublishResponseBody() = default ;
    DescribeToutiaoLivePublishResponseBody& operator=(const DescribeToutiaoLivePublishResponseBody &) = default ;
    DescribeToutiaoLivePublishResponseBody& operator=(DescribeToutiaoLivePublishResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(BwDiff, bwDiff_);
        DARABONBA_PTR_TO_JSON(CdnName, cdnName_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Flr, flr_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(BwDiff, bwDiff_);
        DARABONBA_PTR_FROM_JSON(CdnName, cdnName_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Flr, flr_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
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
        && this->bitrate_ == nullptr && this->bwDiff_ == nullptr && this->cdnName_ == nullptr && this->domain_ == nullptr && this->flr_ == nullptr
        && this->fps_ == nullptr && this->streamName_ == nullptr && this->timestamp_ == nullptr; };
      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
      inline Content& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline float getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0.0) };
      inline Content& setBitrate(float bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // bwDiff Field Functions 
      bool hasBwDiff() const { return this->bwDiff_ != nullptr;};
      void deleteBwDiff() { this->bwDiff_ = nullptr;};
      inline float getBwDiff() const { DARABONBA_PTR_GET_DEFAULT(bwDiff_, 0.0) };
      inline Content& setBwDiff(float bwDiff) { DARABONBA_PTR_SET_VALUE(bwDiff_, bwDiff) };


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


      // flr Field Functions 
      bool hasFlr() const { return this->flr_ != nullptr;};
      void deleteFlr() { this->flr_ = nullptr;};
      inline float getFlr() const { DARABONBA_PTR_GET_DEFAULT(flr_, 0.0) };
      inline Content& setFlr(float flr) { DARABONBA_PTR_SET_VALUE(flr_, flr) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline float getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0.0) };
      inline Content& setFps(float fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


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
      // The bitrate. Unit: bit/s.
      shared_ptr<float> bitrate_ {};
      // The bitrate difference.
      shared_ptr<float> bwDiff_ {};
      // The name of the content delivery network (CDN) service.
      shared_ptr<string> cdnName_ {};
      // The ingest domain.
      shared_ptr<string> domain_ {};
      // The number of dropped frames.
      shared_ptr<float> flr_ {};
      // The frame rate.
      shared_ptr<float> fps_ {};
      // The name of the ingested stream.
      shared_ptr<string> streamName_ {};
      // The timestamp.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeToutiaoLivePublishResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeToutiaoLivePublishResponseBody::Content>) };
    inline vector<DescribeToutiaoLivePublishResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<DescribeToutiaoLivePublishResponseBody::Content>) };
    inline DescribeToutiaoLivePublishResponseBody& setContent(const vector<DescribeToutiaoLivePublishResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeToutiaoLivePublishResponseBody& setContent(vector<DescribeToutiaoLivePublishResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeToutiaoLivePublishResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeToutiaoLivePublishResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The stream ingest details.
    shared_ptr<vector<DescribeToutiaoLivePublishResponseBody::Content>> content_ {};
    // The description of the response status.
    shared_ptr<string> description_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
