// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODYSTREAMINFO_HPP_
#define ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODYSTREAMINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartPlaylistResponseBodyStreamInfoStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartPlaylistResponseBodyStreamInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPlaylistResponseBodyStreamInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Streams, streams_);
    };
    friend void from_json(const Darabonba::Json& j, StartPlaylistResponseBodyStreamInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Streams, streams_);
    };
    StartPlaylistResponseBodyStreamInfo() = default ;
    StartPlaylistResponseBodyStreamInfo(const StartPlaylistResponseBodyStreamInfo &) = default ;
    StartPlaylistResponseBodyStreamInfo(StartPlaylistResponseBodyStreamInfo &&) = default ;
    StartPlaylistResponseBodyStreamInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPlaylistResponseBodyStreamInfo() = default ;
    StartPlaylistResponseBodyStreamInfo& operator=(const StartPlaylistResponseBodyStreamInfo &) = default ;
    StartPlaylistResponseBodyStreamInfo& operator=(StartPlaylistResponseBodyStreamInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->domainName_ != nullptr && this->streamName_ != nullptr && this->streams_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline StartPlaylistResponseBodyStreamInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline StartPlaylistResponseBodyStreamInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline StartPlaylistResponseBodyStreamInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // streams Field Functions 
    bool hasStreams() const { return this->streams_ != nullptr;};
    void deleteStreams() { this->streams_ = nullptr;};
    inline const Models::StartPlaylistResponseBodyStreamInfoStreams & streams() const { DARABONBA_PTR_GET_CONST(streams_, Models::StartPlaylistResponseBodyStreamInfoStreams) };
    inline Models::StartPlaylistResponseBodyStreamInfoStreams streams() { DARABONBA_PTR_GET(streams_, Models::StartPlaylistResponseBodyStreamInfoStreams) };
    inline StartPlaylistResponseBodyStreamInfo& setStreams(const Models::StartPlaylistResponseBodyStreamInfoStreams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
    inline StartPlaylistResponseBodyStreamInfo& setStreams(Models::StartPlaylistResponseBodyStreamInfoStreams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The streaming URLs.
    std::shared_ptr<Models::StartPlaylistResponseBodyStreamInfoStreams> streams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
