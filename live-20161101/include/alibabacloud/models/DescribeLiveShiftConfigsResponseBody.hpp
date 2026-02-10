// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESHIFTCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESHIFTCONFIGSRESPONSEBODY_HPP_
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
  class DescribeLiveShiftConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveShiftConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveShiftConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveShiftConfigsResponseBody() = default ;
    DescribeLiveShiftConfigsResponseBody(const DescribeLiveShiftConfigsResponseBody &) = default ;
    DescribeLiveShiftConfigsResponseBody(DescribeLiveShiftConfigsResponseBody &&) = default ;
    DescribeLiveShiftConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveShiftConfigsResponseBody() = default ;
    DescribeLiveShiftConfigsResponseBody& operator=(const DescribeLiveShiftConfigsResponseBody &) = default ;
    DescribeLiveShiftConfigsResponseBody& operator=(DescribeLiveShiftConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
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
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(IgnoreTranscode, ignoreTranscode_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(Vision, vision_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(IgnoreTranscode, ignoreTranscode_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(Vision, vision_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->ignoreTranscode_ == nullptr && this->streamName_ == nullptr && this->vision_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Config& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Config& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // ignoreTranscode Field Functions 
        bool hasIgnoreTranscode() const { return this->ignoreTranscode_ != nullptr;};
        void deleteIgnoreTranscode() { this->ignoreTranscode_ = nullptr;};
        inline bool getIgnoreTranscode() const { DARABONBA_PTR_GET_DEFAULT(ignoreTranscode_, false) };
        inline Config& setIgnoreTranscode(bool ignoreTranscode) { DARABONBA_PTR_SET_VALUE(ignoreTranscode_, ignoreTranscode) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline Config& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // vision Field Functions 
        bool hasVision() const { return this->vision_ != nullptr;};
        void deleteVision() { this->vision_ = nullptr;};
        inline int32_t getVision() const { DARABONBA_PTR_GET_DEFAULT(vision_, 0) };
        inline Config& setVision(int32_t vision) { DARABONBA_PTR_SET_VALUE(vision_, vision) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<bool> ignoreTranscode_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<int32_t> vision_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const vector<Content::Config> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, vector<Content::Config>) };
      inline vector<Content::Config> getConfig() { DARABONBA_PTR_GET(config_, vector<Content::Config>) };
      inline Content& setConfig(const vector<Content::Config> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Content& setConfig(vector<Content::Config> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    protected:
      shared_ptr<vector<Content::Config>> config_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeLiveShiftConfigsResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeLiveShiftConfigsResponseBody::Content) };
    inline DescribeLiveShiftConfigsResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeLiveShiftConfigsResponseBody::Content) };
    inline DescribeLiveShiftConfigsResponseBody& setContent(const DescribeLiveShiftConfigsResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeLiveShiftConfigsResponseBody& setContent(DescribeLiveShiftConfigsResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveShiftConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveShiftConfigsResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
