// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGARESPONSEBODY_HPP_
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
  class DescribeLivePrivateLineAvailGAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAvailGAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePrivateLineAvailGAs, livePrivateLineAvailGAs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAvailGAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePrivateLineAvailGAs, livePrivateLineAvailGAs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLivePrivateLineAvailGAResponseBody() = default ;
    DescribeLivePrivateLineAvailGAResponseBody(const DescribeLivePrivateLineAvailGAResponseBody &) = default ;
    DescribeLivePrivateLineAvailGAResponseBody(DescribeLivePrivateLineAvailGAResponseBody &&) = default ;
    DescribeLivePrivateLineAvailGAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAvailGAResponseBody() = default ;
    DescribeLivePrivateLineAvailGAResponseBody& operator=(const DescribeLivePrivateLineAvailGAResponseBody &) = default ;
    DescribeLivePrivateLineAvailGAResponseBody& operator=(DescribeLivePrivateLineAvailGAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LivePrivateLineAvailGAs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LivePrivateLineAvailGAs& obj) { 
        DARABONBA_PTR_TO_JSON(LivePrivateLineAvailGA, livePrivateLineAvailGA_);
      };
      friend void from_json(const Darabonba::Json& j, LivePrivateLineAvailGAs& obj) { 
        DARABONBA_PTR_FROM_JSON(LivePrivateLineAvailGA, livePrivateLineAvailGA_);
      };
      LivePrivateLineAvailGAs() = default ;
      LivePrivateLineAvailGAs(const LivePrivateLineAvailGAs &) = default ;
      LivePrivateLineAvailGAs(LivePrivateLineAvailGAs &&) = default ;
      LivePrivateLineAvailGAs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LivePrivateLineAvailGAs() = default ;
      LivePrivateLineAvailGAs& operator=(const LivePrivateLineAvailGAs &) = default ;
      LivePrivateLineAvailGAs& operator=(LivePrivateLineAvailGAs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LivePrivateLineAvailGA : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LivePrivateLineAvailGA& obj) { 
          DARABONBA_PTR_TO_JSON(AccelerationArea, accelerationArea_);
          DARABONBA_PTR_TO_JSON(AccelerationType, accelerationType_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(BindingStatus, bindingStatus_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(IP, IP_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
          DARABONBA_PTR_TO_JSON(VideoCenter, videoCenter_);
        };
        friend void from_json(const Darabonba::Json& j, LivePrivateLineAvailGA& obj) { 
          DARABONBA_PTR_FROM_JSON(AccelerationArea, accelerationArea_);
          DARABONBA_PTR_FROM_JSON(AccelerationType, accelerationType_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(BindingStatus, bindingStatus_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(IP, IP_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
          DARABONBA_PTR_FROM_JSON(VideoCenter, videoCenter_);
        };
        LivePrivateLineAvailGA() = default ;
        LivePrivateLineAvailGA(const LivePrivateLineAvailGA &) = default ;
        LivePrivateLineAvailGA(LivePrivateLineAvailGA &&) = default ;
        LivePrivateLineAvailGA(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LivePrivateLineAvailGA() = default ;
        LivePrivateLineAvailGA& operator=(const LivePrivateLineAvailGA &) = default ;
        LivePrivateLineAvailGA& operator=(LivePrivateLineAvailGA &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accelerationArea_ == nullptr
        && this->accelerationType_ == nullptr && this->appName_ == nullptr && this->bindingStatus_ == nullptr && this->domainName_ == nullptr && this->IP_ == nullptr
        && this->instanceId_ == nullptr && this->status_ == nullptr && this->streamName_ == nullptr && this->uid_ == nullptr && this->videoCenter_ == nullptr; };
        // accelerationArea Field Functions 
        bool hasAccelerationArea() const { return this->accelerationArea_ != nullptr;};
        void deleteAccelerationArea() { this->accelerationArea_ = nullptr;};
        inline string getAccelerationArea() const { DARABONBA_PTR_GET_DEFAULT(accelerationArea_, "") };
        inline LivePrivateLineAvailGA& setAccelerationArea(string accelerationArea) { DARABONBA_PTR_SET_VALUE(accelerationArea_, accelerationArea) };


        // accelerationType Field Functions 
        bool hasAccelerationType() const { return this->accelerationType_ != nullptr;};
        void deleteAccelerationType() { this->accelerationType_ = nullptr;};
        inline string getAccelerationType() const { DARABONBA_PTR_GET_DEFAULT(accelerationType_, "") };
        inline LivePrivateLineAvailGA& setAccelerationType(string accelerationType) { DARABONBA_PTR_SET_VALUE(accelerationType_, accelerationType) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LivePrivateLineAvailGA& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // bindingStatus Field Functions 
        bool hasBindingStatus() const { return this->bindingStatus_ != nullptr;};
        void deleteBindingStatus() { this->bindingStatus_ = nullptr;};
        inline string getBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(bindingStatus_, "") };
        inline LivePrivateLineAvailGA& setBindingStatus(string bindingStatus) { DARABONBA_PTR_SET_VALUE(bindingStatus_, bindingStatus) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LivePrivateLineAvailGA& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // IP Field Functions 
        bool hasIP() const { return this->IP_ != nullptr;};
        void deleteIP() { this->IP_ = nullptr;};
        inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
        inline LivePrivateLineAvailGA& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline LivePrivateLineAvailGA& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline LivePrivateLineAvailGA& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LivePrivateLineAvailGA& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline LivePrivateLineAvailGA& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        // videoCenter Field Functions 
        bool hasVideoCenter() const { return this->videoCenter_ != nullptr;};
        void deleteVideoCenter() { this->videoCenter_ = nullptr;};
        inline string getVideoCenter() const { DARABONBA_PTR_GET_DEFAULT(videoCenter_, "") };
        inline LivePrivateLineAvailGA& setVideoCenter(string videoCenter) { DARABONBA_PTR_SET_VALUE(videoCenter_, videoCenter) };


      protected:
        // The acceleration channel.
        shared_ptr<string> accelerationArea_ {};
        // The acceleration type. Valid values:
        // 
        // *   play: streaming acceleration
        // *   publish: stream ingest acceleration
        shared_ptr<string> accelerationType_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // Indicates whether the GA instance is bound to an acceleration circuit. Valid values:
        // 
        // *   yes
        // *   no
        shared_ptr<string> bindingStatus_ {};
        // The main streaming domain.
        shared_ptr<string> domainName_ {};
        // The accelerated IP address.
        shared_ptr<string> IP_ {};
        // The ID of the GA instance.
        shared_ptr<string> instanceId_ {};
        // The status of the GA instance. Valid values:
        // 
        // *   active: The GA instance is available.
        // *   inactive: The GA instance is unavailable.
        shared_ptr<string> status_ {};
        // The name of the live stream.
        shared_ptr<string> streamName_ {};
        // The user ID (UID).
        shared_ptr<string> uid_ {};
        // The live center.
        shared_ptr<string> videoCenter_ {};
      };

      virtual bool empty() const override { return this->livePrivateLineAvailGA_ == nullptr; };
      // livePrivateLineAvailGA Field Functions 
      bool hasLivePrivateLineAvailGA() const { return this->livePrivateLineAvailGA_ != nullptr;};
      void deleteLivePrivateLineAvailGA() { this->livePrivateLineAvailGA_ = nullptr;};
      inline const vector<LivePrivateLineAvailGAs::LivePrivateLineAvailGA> & getLivePrivateLineAvailGA() const { DARABONBA_PTR_GET_CONST(livePrivateLineAvailGA_, vector<LivePrivateLineAvailGAs::LivePrivateLineAvailGA>) };
      inline vector<LivePrivateLineAvailGAs::LivePrivateLineAvailGA> getLivePrivateLineAvailGA() { DARABONBA_PTR_GET(livePrivateLineAvailGA_, vector<LivePrivateLineAvailGAs::LivePrivateLineAvailGA>) };
      inline LivePrivateLineAvailGAs& setLivePrivateLineAvailGA(const vector<LivePrivateLineAvailGAs::LivePrivateLineAvailGA> & livePrivateLineAvailGA) { DARABONBA_PTR_SET_VALUE(livePrivateLineAvailGA_, livePrivateLineAvailGA) };
      inline LivePrivateLineAvailGAs& setLivePrivateLineAvailGA(vector<LivePrivateLineAvailGAs::LivePrivateLineAvailGA> && livePrivateLineAvailGA) { DARABONBA_PTR_SET_RVALUE(livePrivateLineAvailGA_, livePrivateLineAvailGA) };


    protected:
      shared_ptr<vector<LivePrivateLineAvailGAs::LivePrivateLineAvailGA>> livePrivateLineAvailGA_ {};
    };

    virtual bool empty() const override { return this->livePrivateLineAvailGAs_ == nullptr
        && this->requestId_ == nullptr; };
    // livePrivateLineAvailGAs Field Functions 
    bool hasLivePrivateLineAvailGAs() const { return this->livePrivateLineAvailGAs_ != nullptr;};
    void deleteLivePrivateLineAvailGAs() { this->livePrivateLineAvailGAs_ = nullptr;};
    inline const DescribeLivePrivateLineAvailGAResponseBody::LivePrivateLineAvailGAs & getLivePrivateLineAvailGAs() const { DARABONBA_PTR_GET_CONST(livePrivateLineAvailGAs_, DescribeLivePrivateLineAvailGAResponseBody::LivePrivateLineAvailGAs) };
    inline DescribeLivePrivateLineAvailGAResponseBody::LivePrivateLineAvailGAs getLivePrivateLineAvailGAs() { DARABONBA_PTR_GET(livePrivateLineAvailGAs_, DescribeLivePrivateLineAvailGAResponseBody::LivePrivateLineAvailGAs) };
    inline DescribeLivePrivateLineAvailGAResponseBody& setLivePrivateLineAvailGAs(const DescribeLivePrivateLineAvailGAResponseBody::LivePrivateLineAvailGAs & livePrivateLineAvailGAs) { DARABONBA_PTR_SET_VALUE(livePrivateLineAvailGAs_, livePrivateLineAvailGAs) };
    inline DescribeLivePrivateLineAvailGAResponseBody& setLivePrivateLineAvailGAs(DescribeLivePrivateLineAvailGAResponseBody::LivePrivateLineAvailGAs && livePrivateLineAvailGAs) { DARABONBA_PTR_SET_RVALUE(livePrivateLineAvailGAs_, livePrivateLineAvailGAs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The GA instance configuration details.
    shared_ptr<DescribeLivePrivateLineAvailGAResponseBody::LivePrivateLineAvailGAs> livePrivateLineAvailGAs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
