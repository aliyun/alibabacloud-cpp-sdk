// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHRECORDSRESPONSEBODYPUSHINFOSPUSHINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHRECORDSRESPONSEBODYPUSHINFOSPUSHINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushRecordsResponseBodyPushInfosPushInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushRecordsResponseBodyPushInfosPushInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushRecordsResponseBodyPushInfosPushInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    QueryPushRecordsResponseBodyPushInfosPushInfo() = default ;
    QueryPushRecordsResponseBodyPushInfosPushInfo(const QueryPushRecordsResponseBodyPushInfosPushInfo &) = default ;
    QueryPushRecordsResponseBodyPushInfosPushInfo(QueryPushRecordsResponseBodyPushInfosPushInfo &&) = default ;
    QueryPushRecordsResponseBodyPushInfosPushInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushRecordsResponseBodyPushInfosPushInfo() = default ;
    QueryPushRecordsResponseBodyPushInfosPushInfo& operator=(const QueryPushRecordsResponseBodyPushInfosPushInfo &) = default ;
    QueryPushRecordsResponseBodyPushInfosPushInfo& operator=(QueryPushRecordsResponseBodyPushInfosPushInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->body_ != nullptr && this->deviceType_ != nullptr && this->messageId_ != nullptr && this->pushTime_ != nullptr && this->pushType_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->target_ != nullptr && this->title_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline string pushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string pushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryPushRecordsResponseBodyPushInfosPushInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<string> pushTime_ = nullptr;
    std::shared_ptr<string> pushType_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
