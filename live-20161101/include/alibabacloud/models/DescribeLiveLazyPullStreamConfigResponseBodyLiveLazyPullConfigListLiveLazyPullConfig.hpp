// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVELAZYPULLSTREAMCONFIGRESPONSEBODYLIVELAZYPULLCONFIGLISTLIVELAZYPULLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVELAZYPULLSTREAMCONFIGRESPONSEBODYLIVELAZYPULLCONFIGLISTLIVELAZYPULLCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PullAppName, pullAppName_);
      DARABONBA_PTR_TO_JSON(PullArgs, pullArgs_);
      DARABONBA_PTR_TO_JSON(PullDomainName, pullDomainName_);
      DARABONBA_PTR_TO_JSON(PullProtocol, pullProtocol_);
      DARABONBA_PTR_TO_JSON(TranscodeLazy, transcodeLazy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PullAppName, pullAppName_);
      DARABONBA_PTR_FROM_JSON(PullArgs, pullArgs_);
      DARABONBA_PTR_FROM_JSON(PullDomainName, pullDomainName_);
      DARABONBA_PTR_FROM_JSON(PullProtocol, pullProtocol_);
      DARABONBA_PTR_FROM_JSON(TranscodeLazy, transcodeLazy_);
    };
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig() = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig(const DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig &) = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig(DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig &&) = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig() = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& operator=(const DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig &) = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& operator=(DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->pullAppName_ == nullptr && return this->pullArgs_ == nullptr && return this->pullDomainName_ == nullptr && return this->pullProtocol_ == nullptr
        && return this->transcodeLazy_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // pullAppName Field Functions 
    bool hasPullAppName() const { return this->pullAppName_ != nullptr;};
    void deletePullAppName() { this->pullAppName_ = nullptr;};
    inline string pullAppName() const { DARABONBA_PTR_GET_DEFAULT(pullAppName_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& setPullAppName(string pullAppName) { DARABONBA_PTR_SET_VALUE(pullAppName_, pullAppName) };


    // pullArgs Field Functions 
    bool hasPullArgs() const { return this->pullArgs_ != nullptr;};
    void deletePullArgs() { this->pullArgs_ = nullptr;};
    inline string pullArgs() const { DARABONBA_PTR_GET_DEFAULT(pullArgs_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& setPullArgs(string pullArgs) { DARABONBA_PTR_SET_VALUE(pullArgs_, pullArgs) };


    // pullDomainName Field Functions 
    bool hasPullDomainName() const { return this->pullDomainName_ != nullptr;};
    void deletePullDomainName() { this->pullDomainName_ = nullptr;};
    inline string pullDomainName() const { DARABONBA_PTR_GET_DEFAULT(pullDomainName_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& setPullDomainName(string pullDomainName) { DARABONBA_PTR_SET_VALUE(pullDomainName_, pullDomainName) };


    // pullProtocol Field Functions 
    bool hasPullProtocol() const { return this->pullProtocol_ != nullptr;};
    void deletePullProtocol() { this->pullProtocol_ = nullptr;};
    inline string pullProtocol() const { DARABONBA_PTR_GET_DEFAULT(pullProtocol_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& setPullProtocol(string pullProtocol) { DARABONBA_PTR_SET_VALUE(pullProtocol_, pullProtocol) };


    // transcodeLazy Field Functions 
    bool hasTranscodeLazy() const { return this->transcodeLazy_ != nullptr;};
    void deleteTranscodeLazy() { this->transcodeLazy_ = nullptr;};
    inline string transcodeLazy() const { DARABONBA_PTR_GET_DEFAULT(transcodeLazy_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig& setTranscodeLazy(string transcodeLazy) { DARABONBA_PTR_SET_VALUE(transcodeLazy_, transcodeLazy) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the application for back-to-origin stream pulling. If the application specified in the streaming URL is used, this parameter is left empty.
    std::shared_ptr<string> pullAppName_ = nullptr;
    // The parameters of back-to-origin stream pulling.
    std::shared_ptr<string> pullArgs_ = nullptr;
    // The domain name for back-to-origin stream pulling.
    std::shared_ptr<string> pullDomainName_ = nullptr;
    // The protocol for back-to-origin stream pulling. Valid values:
    // 
    // *   **rtmp**
    // *   **httpflv**
    // *   **hls**
    std::shared_ptr<string> pullProtocol_ = nullptr;
    // Indicates whether stream pulling is triggered when the transcoded stream is played. Default value: **no**. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> transcodeLazy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
