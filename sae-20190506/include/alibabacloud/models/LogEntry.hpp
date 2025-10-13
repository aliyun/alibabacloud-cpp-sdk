// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGENTRY_HPP_
#define ALIBABACLOUD_MODELS_LOGENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class LogEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogEntry& obj) { 
      DARABONBA_PTR_TO_JSON(instanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(offset, offset_);
      DARABONBA_PTR_TO_JSON(packID, packID_);
      DARABONBA_PTR_TO_JSON(packMeta, packMeta_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(versionID, versionID_);
    };
    friend void from_json(const Darabonba::Json& j, LogEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(offset, offset_);
      DARABONBA_PTR_FROM_JSON(packID, packID_);
      DARABONBA_PTR_FROM_JSON(packMeta, packMeta_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(versionID, versionID_);
    };
    LogEntry() = default ;
    LogEntry(const LogEntry &) = default ;
    LogEntry(LogEntry &&) = default ;
    LogEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogEntry() = default ;
    LogEntry& operator=(const LogEntry &) = default ;
    LogEntry& operator=(LogEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceID_ == nullptr
        && return this->message_ == nullptr && return this->offset_ == nullptr && return this->packID_ == nullptr && return this->packMeta_ == nullptr && return this->qualifier_ == nullptr
        && return this->timestamp_ == nullptr && return this->versionID_ == nullptr; };
    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline LogEntry& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline LogEntry& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline LogEntry& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // packID Field Functions 
    bool hasPackID() const { return this->packID_ != nullptr;};
    void deletePackID() { this->packID_ = nullptr;};
    inline string packID() const { DARABONBA_PTR_GET_DEFAULT(packID_, "") };
    inline LogEntry& setPackID(string packID) { DARABONBA_PTR_SET_VALUE(packID_, packID) };


    // packMeta Field Functions 
    bool hasPackMeta() const { return this->packMeta_ != nullptr;};
    void deletePackMeta() { this->packMeta_ = nullptr;};
    inline string packMeta() const { DARABONBA_PTR_GET_DEFAULT(packMeta_, "") };
    inline LogEntry& setPackMeta(string packMeta) { DARABONBA_PTR_SET_VALUE(packMeta_, packMeta) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline LogEntry& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline LogEntry& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // versionID Field Functions 
    bool hasVersionID() const { return this->versionID_ != nullptr;};
    void deleteVersionID() { this->versionID_ = nullptr;};
    inline string versionID() const { DARABONBA_PTR_GET_DEFAULT(versionID_, "") };
    inline LogEntry& setVersionID(string versionID) { DARABONBA_PTR_SET_VALUE(versionID_, versionID) };


  protected:
    std::shared_ptr<string> instanceID_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int64_t> offset_ = nullptr;
    std::shared_ptr<string> packID_ = nullptr;
    std::shared_ptr<string> packMeta_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<int32_t> timestamp_ = nullptr;
    std::shared_ptr<string> versionID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
