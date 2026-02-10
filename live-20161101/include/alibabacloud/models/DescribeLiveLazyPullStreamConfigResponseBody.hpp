// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVELAZYPULLSTREAMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVELAZYPULLSTREAMCONFIGRESPONSEBODY_HPP_
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
  class DescribeLiveLazyPullStreamConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveLazyPullStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveLazyPullConfigList, liveLazyPullConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveLazyPullStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveLazyPullConfigList, liveLazyPullConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveLazyPullStreamConfigResponseBody() = default ;
    DescribeLiveLazyPullStreamConfigResponseBody(const DescribeLiveLazyPullStreamConfigResponseBody &) = default ;
    DescribeLiveLazyPullStreamConfigResponseBody(DescribeLiveLazyPullStreamConfigResponseBody &&) = default ;
    DescribeLiveLazyPullStreamConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveLazyPullStreamConfigResponseBody() = default ;
    DescribeLiveLazyPullStreamConfigResponseBody& operator=(const DescribeLiveLazyPullStreamConfigResponseBody &) = default ;
    DescribeLiveLazyPullStreamConfigResponseBody& operator=(DescribeLiveLazyPullStreamConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveLazyPullConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveLazyPullConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveLazyPullConfig, liveLazyPullConfig_);
      };
      friend void from_json(const Darabonba::Json& j, LiveLazyPullConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveLazyPullConfig, liveLazyPullConfig_);
      };
      LiveLazyPullConfigList() = default ;
      LiveLazyPullConfigList(const LiveLazyPullConfigList &) = default ;
      LiveLazyPullConfigList(LiveLazyPullConfigList &&) = default ;
      LiveLazyPullConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveLazyPullConfigList() = default ;
      LiveLazyPullConfigList& operator=(const LiveLazyPullConfigList &) = default ;
      LiveLazyPullConfigList& operator=(LiveLazyPullConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveLazyPullConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveLazyPullConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(PullAppName, pullAppName_);
          DARABONBA_PTR_TO_JSON(PullArgs, pullArgs_);
          DARABONBA_PTR_TO_JSON(PullDomainName, pullDomainName_);
          DARABONBA_PTR_TO_JSON(PullProtocol, pullProtocol_);
          DARABONBA_PTR_TO_JSON(TranscodeLazy, transcodeLazy_);
        };
        friend void from_json(const Darabonba::Json& j, LiveLazyPullConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(PullAppName, pullAppName_);
          DARABONBA_PTR_FROM_JSON(PullArgs, pullArgs_);
          DARABONBA_PTR_FROM_JSON(PullDomainName, pullDomainName_);
          DARABONBA_PTR_FROM_JSON(PullProtocol, pullProtocol_);
          DARABONBA_PTR_FROM_JSON(TranscodeLazy, transcodeLazy_);
        };
        LiveLazyPullConfig() = default ;
        LiveLazyPullConfig(const LiveLazyPullConfig &) = default ;
        LiveLazyPullConfig(LiveLazyPullConfig &&) = default ;
        LiveLazyPullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveLazyPullConfig() = default ;
        LiveLazyPullConfig& operator=(const LiveLazyPullConfig &) = default ;
        LiveLazyPullConfig& operator=(LiveLazyPullConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->pullAppName_ == nullptr && this->pullArgs_ == nullptr && this->pullDomainName_ == nullptr && this->pullProtocol_ == nullptr
        && this->transcodeLazy_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveLazyPullConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveLazyPullConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // pullAppName Field Functions 
        bool hasPullAppName() const { return this->pullAppName_ != nullptr;};
        void deletePullAppName() { this->pullAppName_ = nullptr;};
        inline string getPullAppName() const { DARABONBA_PTR_GET_DEFAULT(pullAppName_, "") };
        inline LiveLazyPullConfig& setPullAppName(string pullAppName) { DARABONBA_PTR_SET_VALUE(pullAppName_, pullAppName) };


        // pullArgs Field Functions 
        bool hasPullArgs() const { return this->pullArgs_ != nullptr;};
        void deletePullArgs() { this->pullArgs_ = nullptr;};
        inline string getPullArgs() const { DARABONBA_PTR_GET_DEFAULT(pullArgs_, "") };
        inline LiveLazyPullConfig& setPullArgs(string pullArgs) { DARABONBA_PTR_SET_VALUE(pullArgs_, pullArgs) };


        // pullDomainName Field Functions 
        bool hasPullDomainName() const { return this->pullDomainName_ != nullptr;};
        void deletePullDomainName() { this->pullDomainName_ = nullptr;};
        inline string getPullDomainName() const { DARABONBA_PTR_GET_DEFAULT(pullDomainName_, "") };
        inline LiveLazyPullConfig& setPullDomainName(string pullDomainName) { DARABONBA_PTR_SET_VALUE(pullDomainName_, pullDomainName) };


        // pullProtocol Field Functions 
        bool hasPullProtocol() const { return this->pullProtocol_ != nullptr;};
        void deletePullProtocol() { this->pullProtocol_ = nullptr;};
        inline string getPullProtocol() const { DARABONBA_PTR_GET_DEFAULT(pullProtocol_, "") };
        inline LiveLazyPullConfig& setPullProtocol(string pullProtocol) { DARABONBA_PTR_SET_VALUE(pullProtocol_, pullProtocol) };


        // transcodeLazy Field Functions 
        bool hasTranscodeLazy() const { return this->transcodeLazy_ != nullptr;};
        void deleteTranscodeLazy() { this->transcodeLazy_ = nullptr;};
        inline string getTranscodeLazy() const { DARABONBA_PTR_GET_DEFAULT(transcodeLazy_, "") };
        inline LiveLazyPullConfig& setTranscodeLazy(string transcodeLazy) { DARABONBA_PTR_SET_VALUE(transcodeLazy_, transcodeLazy) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> pullAppName_ {};
        shared_ptr<string> pullArgs_ {};
        shared_ptr<string> pullDomainName_ {};
        shared_ptr<string> pullProtocol_ {};
        shared_ptr<string> transcodeLazy_ {};
      };

      virtual bool empty() const override { return this->liveLazyPullConfig_ == nullptr; };
      // liveLazyPullConfig Field Functions 
      bool hasLiveLazyPullConfig() const { return this->liveLazyPullConfig_ != nullptr;};
      void deleteLiveLazyPullConfig() { this->liveLazyPullConfig_ = nullptr;};
      inline const vector<LiveLazyPullConfigList::LiveLazyPullConfig> & getLiveLazyPullConfig() const { DARABONBA_PTR_GET_CONST(liveLazyPullConfig_, vector<LiveLazyPullConfigList::LiveLazyPullConfig>) };
      inline vector<LiveLazyPullConfigList::LiveLazyPullConfig> getLiveLazyPullConfig() { DARABONBA_PTR_GET(liveLazyPullConfig_, vector<LiveLazyPullConfigList::LiveLazyPullConfig>) };
      inline LiveLazyPullConfigList& setLiveLazyPullConfig(const vector<LiveLazyPullConfigList::LiveLazyPullConfig> & liveLazyPullConfig) { DARABONBA_PTR_SET_VALUE(liveLazyPullConfig_, liveLazyPullConfig) };
      inline LiveLazyPullConfigList& setLiveLazyPullConfig(vector<LiveLazyPullConfigList::LiveLazyPullConfig> && liveLazyPullConfig) { DARABONBA_PTR_SET_RVALUE(liveLazyPullConfig_, liveLazyPullConfig) };


    protected:
      shared_ptr<vector<LiveLazyPullConfigList::LiveLazyPullConfig>> liveLazyPullConfig_ {};
    };

    virtual bool empty() const override { return this->liveLazyPullConfigList_ == nullptr
        && this->requestId_ == nullptr; };
    // liveLazyPullConfigList Field Functions 
    bool hasLiveLazyPullConfigList() const { return this->liveLazyPullConfigList_ != nullptr;};
    void deleteLiveLazyPullConfigList() { this->liveLazyPullConfigList_ = nullptr;};
    inline const DescribeLiveLazyPullStreamConfigResponseBody::LiveLazyPullConfigList & getLiveLazyPullConfigList() const { DARABONBA_PTR_GET_CONST(liveLazyPullConfigList_, DescribeLiveLazyPullStreamConfigResponseBody::LiveLazyPullConfigList) };
    inline DescribeLiveLazyPullStreamConfigResponseBody::LiveLazyPullConfigList getLiveLazyPullConfigList() { DARABONBA_PTR_GET(liveLazyPullConfigList_, DescribeLiveLazyPullStreamConfigResponseBody::LiveLazyPullConfigList) };
    inline DescribeLiveLazyPullStreamConfigResponseBody& setLiveLazyPullConfigList(const DescribeLiveLazyPullStreamConfigResponseBody::LiveLazyPullConfigList & liveLazyPullConfigList) { DARABONBA_PTR_SET_VALUE(liveLazyPullConfigList_, liveLazyPullConfigList) };
    inline DescribeLiveLazyPullStreamConfigResponseBody& setLiveLazyPullConfigList(DescribeLiveLazyPullStreamConfigResponseBody::LiveLazyPullConfigList && liveLazyPullConfigList) { DARABONBA_PTR_SET_RVALUE(liveLazyPullConfigList_, liveLazyPullConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveLazyPullStreamConfigResponseBody::LiveLazyPullConfigList> liveLazyPullConfigList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
