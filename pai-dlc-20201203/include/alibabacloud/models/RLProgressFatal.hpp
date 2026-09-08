// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSFATAL_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSFATAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressFatal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressFatal& obj) { 
      DARABONBA_PTR_TO_JSON(CollectNs, collectNs_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RawMessage, rawMessage_);
      DARABONBA_PTR_TO_JSON(SubsecNs, subsecNs_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressFatal& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectNs, collectNs_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RawMessage, rawMessage_);
      DARABONBA_PTR_FROM_JSON(SubsecNs, subsecNs_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    RLProgressFatal() = default ;
    RLProgressFatal(const RLProgressFatal &) = default ;
    RLProgressFatal(RLProgressFatal &&) = default ;
    RLProgressFatal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressFatal() = default ;
    RLProgressFatal& operator=(const RLProgressFatal &) = default ;
    RLProgressFatal& operator=(RLProgressFatal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectNs_ == nullptr
        && this->message_ == nullptr && this->rawMessage_ == nullptr && this->subsecNs_ == nullptr && this->time_ == nullptr; };
    // collectNs Field Functions 
    bool hasCollectNs() const { return this->collectNs_ != nullptr;};
    void deleteCollectNs() { this->collectNs_ = nullptr;};
    inline string getCollectNs() const { DARABONBA_PTR_GET_DEFAULT(collectNs_, "") };
    inline RLProgressFatal& setCollectNs(string collectNs) { DARABONBA_PTR_SET_VALUE(collectNs_, collectNs) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RLProgressFatal& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // rawMessage Field Functions 
    bool hasRawMessage() const { return this->rawMessage_ != nullptr;};
    void deleteRawMessage() { this->rawMessage_ = nullptr;};
    inline string getRawMessage() const { DARABONBA_PTR_GET_DEFAULT(rawMessage_, "") };
    inline RLProgressFatal& setRawMessage(string rawMessage) { DARABONBA_PTR_SET_VALUE(rawMessage_, rawMessage) };


    // subsecNs Field Functions 
    bool hasSubsecNs() const { return this->subsecNs_ != nullptr;};
    void deleteSubsecNs() { this->subsecNs_ = nullptr;};
    inline int64_t getSubsecNs() const { DARABONBA_PTR_GET_DEFAULT(subsecNs_, 0L) };
    inline RLProgressFatal& setSubsecNs(int64_t subsecNs) { DARABONBA_PTR_SET_VALUE(subsecNs_, subsecNs) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline RLProgressFatal& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // 锚点行 agent_collect_time（纳秒字符串，超 JS 安全整数）
    shared_ptr<string> collectNs_ {};
    // 错误文案（截断至 500 字符）
    shared_ptr<string> message_ {};
    // 原始日志行（截断至 2000 字符）；调用 GetRLLogContext 时作为 AnchorMessage 传入
    shared_ptr<string> rawMessage_ {};
    // 同秒内的纳秒偏移，用于同秒日志排序
    shared_ptr<int64_t> subsecNs_ {};
    // 日志时间（unix 秒）
    shared_ptr<int64_t> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
