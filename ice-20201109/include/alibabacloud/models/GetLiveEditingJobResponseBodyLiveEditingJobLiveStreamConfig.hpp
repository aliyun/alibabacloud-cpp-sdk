// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODYLIVEEDITINGJOBLIVESTREAMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODYLIVEEDITINGJOBLIVESTREAMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig() = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig(const GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig &) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig(GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig &&) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig() = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig& operator=(const GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig &) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig& operator=(GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The domain name of the live stream.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
