// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONLOGSINPUT_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONLOGSINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetApplicationLogsInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationLogsInput& obj) { 
      DARABONBA_PTR_TO_JSON(backwardLine, backwardLine_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(forwardLine, forwardLine_);
      DARABONBA_PTR_TO_JSON(instanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(isTail, isTail_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(offset, offset_);
      DARABONBA_PTR_TO_JSON(packID, packID_);
      DARABONBA_PTR_TO_JSON(packMeta, packMeta_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(versionID, versionID_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationLogsInput& obj) { 
      DARABONBA_PTR_FROM_JSON(backwardLine, backwardLine_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(forwardLine, forwardLine_);
      DARABONBA_PTR_FROM_JSON(instanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(isTail, isTail_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(offset, offset_);
      DARABONBA_PTR_FROM_JSON(packID, packID_);
      DARABONBA_PTR_FROM_JSON(packMeta, packMeta_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(versionID, versionID_);
    };
    GetApplicationLogsInput() = default ;
    GetApplicationLogsInput(const GetApplicationLogsInput &) = default ;
    GetApplicationLogsInput(GetApplicationLogsInput &&) = default ;
    GetApplicationLogsInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationLogsInput() = default ;
    GetApplicationLogsInput& operator=(const GetApplicationLogsInput &) = default ;
    GetApplicationLogsInput& operator=(GetApplicationLogsInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backwardLine_ == nullptr
        && return this->endTime_ == nullptr && return this->forwardLine_ == nullptr && return this->instanceID_ == nullptr && return this->isTail_ == nullptr && return this->match_ == nullptr
        && return this->message_ == nullptr && return this->offset_ == nullptr && return this->packID_ == nullptr && return this->packMeta_ == nullptr && return this->startTime_ == nullptr
        && return this->timestamp_ == nullptr && return this->versionID_ == nullptr; };
    // backwardLine Field Functions 
    bool hasBackwardLine() const { return this->backwardLine_ != nullptr;};
    void deleteBackwardLine() { this->backwardLine_ = nullptr;};
    inline int64_t backwardLine() const { DARABONBA_PTR_GET_DEFAULT(backwardLine_, 0L) };
    inline GetApplicationLogsInput& setBackwardLine(int64_t backwardLine) { DARABONBA_PTR_SET_VALUE(backwardLine_, backwardLine) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetApplicationLogsInput& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // forwardLine Field Functions 
    bool hasForwardLine() const { return this->forwardLine_ != nullptr;};
    void deleteForwardLine() { this->forwardLine_ = nullptr;};
    inline int64_t forwardLine() const { DARABONBA_PTR_GET_DEFAULT(forwardLine_, 0L) };
    inline GetApplicationLogsInput& setForwardLine(int64_t forwardLine) { DARABONBA_PTR_SET_VALUE(forwardLine_, forwardLine) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline GetApplicationLogsInput& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // isTail Field Functions 
    bool hasIsTail() const { return this->isTail_ != nullptr;};
    void deleteIsTail() { this->isTail_ = nullptr;};
    inline bool isTail() const { DARABONBA_PTR_GET_DEFAULT(isTail_, false) };
    inline GetApplicationLogsInput& setIsTail(bool isTail) { DARABONBA_PTR_SET_VALUE(isTail_, isTail) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline string match() const { DARABONBA_PTR_GET_DEFAULT(match_, "") };
    inline GetApplicationLogsInput& setMatch(string match) { DARABONBA_PTR_SET_VALUE(match_, match) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApplicationLogsInput& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline GetApplicationLogsInput& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // packID Field Functions 
    bool hasPackID() const { return this->packID_ != nullptr;};
    void deletePackID() { this->packID_ = nullptr;};
    inline string packID() const { DARABONBA_PTR_GET_DEFAULT(packID_, "") };
    inline GetApplicationLogsInput& setPackID(string packID) { DARABONBA_PTR_SET_VALUE(packID_, packID) };


    // packMeta Field Functions 
    bool hasPackMeta() const { return this->packMeta_ != nullptr;};
    void deletePackMeta() { this->packMeta_ = nullptr;};
    inline string packMeta() const { DARABONBA_PTR_GET_DEFAULT(packMeta_, "") };
    inline GetApplicationLogsInput& setPackMeta(string packMeta) { DARABONBA_PTR_SET_VALUE(packMeta_, packMeta) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetApplicationLogsInput& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetApplicationLogsInput& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // versionID Field Functions 
    bool hasVersionID() const { return this->versionID_ != nullptr;};
    void deleteVersionID() { this->versionID_ = nullptr;};
    inline string versionID() const { DARABONBA_PTR_GET_DEFAULT(versionID_, "") };
    inline GetApplicationLogsInput& setVersionID(string versionID) { DARABONBA_PTR_SET_VALUE(versionID_, versionID) };


  protected:
    std::shared_ptr<int64_t> backwardLine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> forwardLine_ = nullptr;
    std::shared_ptr<string> instanceID_ = nullptr;
    std::shared_ptr<bool> isTail_ = nullptr;
    std::shared_ptr<string> match_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int64_t> offset_ = nullptr;
    std::shared_ptr<string> packID_ = nullptr;
    std::shared_ptr<string> packMeta_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
    std::shared_ptr<string> versionID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
