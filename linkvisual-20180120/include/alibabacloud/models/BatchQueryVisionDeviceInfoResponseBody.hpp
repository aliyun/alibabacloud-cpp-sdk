// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYVISIONDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYVISIONDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class BatchQueryVisionDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryVisionDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryVisionDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchQueryVisionDeviceInfoResponseBody() = default ;
    BatchQueryVisionDeviceInfoResponseBody(const BatchQueryVisionDeviceInfoResponseBody &) = default ;
    BatchQueryVisionDeviceInfoResponseBody(BatchQueryVisionDeviceInfoResponseBody &&) = default ;
    BatchQueryVisionDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryVisionDeviceInfoResponseBody() = default ;
    BatchQueryVisionDeviceInfoResponseBody& operator=(const BatchQueryVisionDeviceInfoResponseBody &) = default ;
    BatchQueryVisionDeviceInfoResponseBody& operator=(BatchQueryVisionDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceInfoList, deviceInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceInfoList, deviceInfoList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeviceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_TO_JSON(GbDeviceInfo, gbDeviceInfo_);
          DARABONBA_PTR_TO_JSON(IotId, iotId_);
          DARABONBA_PTR_TO_JSON(RtmpDeviceInfo, rtmpDeviceInfo_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_FROM_JSON(GbDeviceInfo, gbDeviceInfo_);
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(RtmpDeviceInfo, rtmpDeviceInfo_);
        };
        DeviceInfoList() = default ;
        DeviceInfoList(const DeviceInfoList &) = default ;
        DeviceInfoList(DeviceInfoList &&) = default ;
        DeviceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceInfoList() = default ;
        DeviceInfoList& operator=(const DeviceInfoList &) = default ;
        DeviceInfoList& operator=(DeviceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RtmpDeviceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RtmpDeviceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(PullAuthKey, pullAuthKey_);
            DARABONBA_PTR_TO_JSON(PullKeyExpireTime, pullKeyExpireTime_);
            DARABONBA_PTR_TO_JSON(PushAuthKey, pushAuthKey_);
            DARABONBA_PTR_TO_JSON(PushKeyExpireTime, pushKeyExpireTime_);
            DARABONBA_PTR_TO_JSON(PushUrlSample, pushUrlSample_);
            DARABONBA_PTR_TO_JSON(StreamName, streamName_);
            DARABONBA_PTR_TO_JSON(StreamStatus, streamStatus_);
          };
          friend void from_json(const Darabonba::Json& j, RtmpDeviceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(PullAuthKey, pullAuthKey_);
            DARABONBA_PTR_FROM_JSON(PullKeyExpireTime, pullKeyExpireTime_);
            DARABONBA_PTR_FROM_JSON(PushAuthKey, pushAuthKey_);
            DARABONBA_PTR_FROM_JSON(PushKeyExpireTime, pushKeyExpireTime_);
            DARABONBA_PTR_FROM_JSON(PushUrlSample, pushUrlSample_);
            DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
            DARABONBA_PTR_FROM_JSON(StreamStatus, streamStatus_);
          };
          RtmpDeviceInfo() = default ;
          RtmpDeviceInfo(const RtmpDeviceInfo &) = default ;
          RtmpDeviceInfo(RtmpDeviceInfo &&) = default ;
          RtmpDeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RtmpDeviceInfo() = default ;
          RtmpDeviceInfo& operator=(const RtmpDeviceInfo &) = default ;
          RtmpDeviceInfo& operator=(RtmpDeviceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->pullAuthKey_ == nullptr
        && this->pullKeyExpireTime_ == nullptr && this->pushAuthKey_ == nullptr && this->pushKeyExpireTime_ == nullptr && this->pushUrlSample_ == nullptr && this->streamName_ == nullptr
        && this->streamStatus_ == nullptr; };
          // pullAuthKey Field Functions 
          bool hasPullAuthKey() const { return this->pullAuthKey_ != nullptr;};
          void deletePullAuthKey() { this->pullAuthKey_ = nullptr;};
          inline string getPullAuthKey() const { DARABONBA_PTR_GET_DEFAULT(pullAuthKey_, "") };
          inline RtmpDeviceInfo& setPullAuthKey(string pullAuthKey) { DARABONBA_PTR_SET_VALUE(pullAuthKey_, pullAuthKey) };


          // pullKeyExpireTime Field Functions 
          bool hasPullKeyExpireTime() const { return this->pullKeyExpireTime_ != nullptr;};
          void deletePullKeyExpireTime() { this->pullKeyExpireTime_ = nullptr;};
          inline int32_t getPullKeyExpireTime() const { DARABONBA_PTR_GET_DEFAULT(pullKeyExpireTime_, 0) };
          inline RtmpDeviceInfo& setPullKeyExpireTime(int32_t pullKeyExpireTime) { DARABONBA_PTR_SET_VALUE(pullKeyExpireTime_, pullKeyExpireTime) };


          // pushAuthKey Field Functions 
          bool hasPushAuthKey() const { return this->pushAuthKey_ != nullptr;};
          void deletePushAuthKey() { this->pushAuthKey_ = nullptr;};
          inline string getPushAuthKey() const { DARABONBA_PTR_GET_DEFAULT(pushAuthKey_, "") };
          inline RtmpDeviceInfo& setPushAuthKey(string pushAuthKey) { DARABONBA_PTR_SET_VALUE(pushAuthKey_, pushAuthKey) };


          // pushKeyExpireTime Field Functions 
          bool hasPushKeyExpireTime() const { return this->pushKeyExpireTime_ != nullptr;};
          void deletePushKeyExpireTime() { this->pushKeyExpireTime_ = nullptr;};
          inline int32_t getPushKeyExpireTime() const { DARABONBA_PTR_GET_DEFAULT(pushKeyExpireTime_, 0) };
          inline RtmpDeviceInfo& setPushKeyExpireTime(int32_t pushKeyExpireTime) { DARABONBA_PTR_SET_VALUE(pushKeyExpireTime_, pushKeyExpireTime) };


          // pushUrlSample Field Functions 
          bool hasPushUrlSample() const { return this->pushUrlSample_ != nullptr;};
          void deletePushUrlSample() { this->pushUrlSample_ = nullptr;};
          inline string getPushUrlSample() const { DARABONBA_PTR_GET_DEFAULT(pushUrlSample_, "") };
          inline RtmpDeviceInfo& setPushUrlSample(string pushUrlSample) { DARABONBA_PTR_SET_VALUE(pushUrlSample_, pushUrlSample) };


          // streamName Field Functions 
          bool hasStreamName() const { return this->streamName_ != nullptr;};
          void deleteStreamName() { this->streamName_ = nullptr;};
          inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
          inline RtmpDeviceInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


          // streamStatus Field Functions 
          bool hasStreamStatus() const { return this->streamStatus_ != nullptr;};
          void deleteStreamStatus() { this->streamStatus_ = nullptr;};
          inline int32_t getStreamStatus() const { DARABONBA_PTR_GET_DEFAULT(streamStatus_, 0) };
          inline RtmpDeviceInfo& setStreamStatus(int32_t streamStatus) { DARABONBA_PTR_SET_VALUE(streamStatus_, streamStatus) };


        protected:
          shared_ptr<string> pullAuthKey_ {};
          shared_ptr<int32_t> pullKeyExpireTime_ {};
          shared_ptr<string> pushAuthKey_ {};
          shared_ptr<int32_t> pushKeyExpireTime_ {};
          shared_ptr<string> pushUrlSample_ {};
          shared_ptr<string> streamName_ {};
          shared_ptr<int32_t> streamStatus_ {};
        };

        class GbDeviceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GbDeviceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(DeviceProtocol, deviceProtocol_);
            DARABONBA_PTR_TO_JSON(GbId, gbId_);
            DARABONBA_PTR_TO_JSON(NetProtocol, netProtocol_);
            DARABONBA_PTR_TO_JSON(NickName, nickName_);
            DARABONBA_PTR_TO_JSON(Password, password_);
            DARABONBA_PTR_TO_JSON(SubProductKey, subProductKey_);
          };
          friend void from_json(const Darabonba::Json& j, GbDeviceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(DeviceProtocol, deviceProtocol_);
            DARABONBA_PTR_FROM_JSON(GbId, gbId_);
            DARABONBA_PTR_FROM_JSON(NetProtocol, netProtocol_);
            DARABONBA_PTR_FROM_JSON(NickName, nickName_);
            DARABONBA_PTR_FROM_JSON(Password, password_);
            DARABONBA_PTR_FROM_JSON(SubProductKey, subProductKey_);
          };
          GbDeviceInfo() = default ;
          GbDeviceInfo(const GbDeviceInfo &) = default ;
          GbDeviceInfo(GbDeviceInfo &&) = default ;
          GbDeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GbDeviceInfo() = default ;
          GbDeviceInfo& operator=(const GbDeviceInfo &) = default ;
          GbDeviceInfo& operator=(GbDeviceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deviceProtocol_ == nullptr
        && this->gbId_ == nullptr && this->netProtocol_ == nullptr && this->nickName_ == nullptr && this->password_ == nullptr && this->subProductKey_ == nullptr; };
          // deviceProtocol Field Functions 
          bool hasDeviceProtocol() const { return this->deviceProtocol_ != nullptr;};
          void deleteDeviceProtocol() { this->deviceProtocol_ = nullptr;};
          inline int32_t getDeviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(deviceProtocol_, 0) };
          inline GbDeviceInfo& setDeviceProtocol(int32_t deviceProtocol) { DARABONBA_PTR_SET_VALUE(deviceProtocol_, deviceProtocol) };


          // gbId Field Functions 
          bool hasGbId() const { return this->gbId_ != nullptr;};
          void deleteGbId() { this->gbId_ = nullptr;};
          inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
          inline GbDeviceInfo& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


          // netProtocol Field Functions 
          bool hasNetProtocol() const { return this->netProtocol_ != nullptr;};
          void deleteNetProtocol() { this->netProtocol_ = nullptr;};
          inline int32_t getNetProtocol() const { DARABONBA_PTR_GET_DEFAULT(netProtocol_, 0) };
          inline GbDeviceInfo& setNetProtocol(int32_t netProtocol) { DARABONBA_PTR_SET_VALUE(netProtocol_, netProtocol) };


          // nickName Field Functions 
          bool hasNickName() const { return this->nickName_ != nullptr;};
          void deleteNickName() { this->nickName_ = nullptr;};
          inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
          inline GbDeviceInfo& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


          // password Field Functions 
          bool hasPassword() const { return this->password_ != nullptr;};
          void deletePassword() { this->password_ = nullptr;};
          inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
          inline GbDeviceInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


          // subProductKey Field Functions 
          bool hasSubProductKey() const { return this->subProductKey_ != nullptr;};
          void deleteSubProductKey() { this->subProductKey_ = nullptr;};
          inline string getSubProductKey() const { DARABONBA_PTR_GET_DEFAULT(subProductKey_, "") };
          inline GbDeviceInfo& setSubProductKey(string subProductKey) { DARABONBA_PTR_SET_VALUE(subProductKey_, subProductKey) };


        protected:
          shared_ptr<int32_t> deviceProtocol_ {};
          shared_ptr<string> gbId_ {};
          shared_ptr<int32_t> netProtocol_ {};
          shared_ptr<string> nickName_ {};
          shared_ptr<string> password_ {};
          shared_ptr<string> subProductKey_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->deviceType_ == nullptr && this->gbDeviceInfo_ == nullptr && this->iotId_ == nullptr && this->rtmpDeviceInfo_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DeviceInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // deviceType Field Functions 
        bool hasDeviceType() const { return this->deviceType_ != nullptr;};
        void deleteDeviceType() { this->deviceType_ = nullptr;};
        inline int32_t getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, 0) };
        inline DeviceInfoList& setDeviceType(int32_t deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


        // gbDeviceInfo Field Functions 
        bool hasGbDeviceInfo() const { return this->gbDeviceInfo_ != nullptr;};
        void deleteGbDeviceInfo() { this->gbDeviceInfo_ = nullptr;};
        inline const DeviceInfoList::GbDeviceInfo & getGbDeviceInfo() const { DARABONBA_PTR_GET_CONST(gbDeviceInfo_, DeviceInfoList::GbDeviceInfo) };
        inline DeviceInfoList::GbDeviceInfo getGbDeviceInfo() { DARABONBA_PTR_GET(gbDeviceInfo_, DeviceInfoList::GbDeviceInfo) };
        inline DeviceInfoList& setGbDeviceInfo(const DeviceInfoList::GbDeviceInfo & gbDeviceInfo) { DARABONBA_PTR_SET_VALUE(gbDeviceInfo_, gbDeviceInfo) };
        inline DeviceInfoList& setGbDeviceInfo(DeviceInfoList::GbDeviceInfo && gbDeviceInfo) { DARABONBA_PTR_SET_RVALUE(gbDeviceInfo_, gbDeviceInfo) };


        // iotId Field Functions 
        bool hasIotId() const { return this->iotId_ != nullptr;};
        void deleteIotId() { this->iotId_ = nullptr;};
        inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
        inline DeviceInfoList& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // rtmpDeviceInfo Field Functions 
        bool hasRtmpDeviceInfo() const { return this->rtmpDeviceInfo_ != nullptr;};
        void deleteRtmpDeviceInfo() { this->rtmpDeviceInfo_ = nullptr;};
        inline const DeviceInfoList::RtmpDeviceInfo & getRtmpDeviceInfo() const { DARABONBA_PTR_GET_CONST(rtmpDeviceInfo_, DeviceInfoList::RtmpDeviceInfo) };
        inline DeviceInfoList::RtmpDeviceInfo getRtmpDeviceInfo() { DARABONBA_PTR_GET(rtmpDeviceInfo_, DeviceInfoList::RtmpDeviceInfo) };
        inline DeviceInfoList& setRtmpDeviceInfo(const DeviceInfoList::RtmpDeviceInfo & rtmpDeviceInfo) { DARABONBA_PTR_SET_VALUE(rtmpDeviceInfo_, rtmpDeviceInfo) };
        inline DeviceInfoList& setRtmpDeviceInfo(DeviceInfoList::RtmpDeviceInfo && rtmpDeviceInfo) { DARABONBA_PTR_SET_RVALUE(rtmpDeviceInfo_, rtmpDeviceInfo) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> deviceType_ {};
        shared_ptr<DeviceInfoList::GbDeviceInfo> gbDeviceInfo_ {};
        shared_ptr<string> iotId_ {};
        shared_ptr<DeviceInfoList::RtmpDeviceInfo> rtmpDeviceInfo_ {};
      };

      virtual bool empty() const override { return this->deviceInfoList_ == nullptr; };
      // deviceInfoList Field Functions 
      bool hasDeviceInfoList() const { return this->deviceInfoList_ != nullptr;};
      void deleteDeviceInfoList() { this->deviceInfoList_ = nullptr;};
      inline const vector<Data::DeviceInfoList> & getDeviceInfoList() const { DARABONBA_PTR_GET_CONST(deviceInfoList_, vector<Data::DeviceInfoList>) };
      inline vector<Data::DeviceInfoList> getDeviceInfoList() { DARABONBA_PTR_GET(deviceInfoList_, vector<Data::DeviceInfoList>) };
      inline Data& setDeviceInfoList(const vector<Data::DeviceInfoList> & deviceInfoList) { DARABONBA_PTR_SET_VALUE(deviceInfoList_, deviceInfoList) };
      inline Data& setDeviceInfoList(vector<Data::DeviceInfoList> && deviceInfoList) { DARABONBA_PTR_SET_RVALUE(deviceInfoList_, deviceInfoList) };


    protected:
      shared_ptr<vector<Data::DeviceInfoList>> deviceInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchQueryVisionDeviceInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchQueryVisionDeviceInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchQueryVisionDeviceInfoResponseBody::Data) };
    inline BatchQueryVisionDeviceInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchQueryVisionDeviceInfoResponseBody::Data) };
    inline BatchQueryVisionDeviceInfoResponseBody& setData(const BatchQueryVisionDeviceInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchQueryVisionDeviceInfoResponseBody& setData(BatchQueryVisionDeviceInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BatchQueryVisionDeviceInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryVisionDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchQueryVisionDeviceInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<BatchQueryVisionDeviceInfoResponseBody::Data> data_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
