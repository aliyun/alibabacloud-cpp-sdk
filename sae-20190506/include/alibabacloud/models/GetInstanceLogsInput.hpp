// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELOGSINPUT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELOGSINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetInstanceLogsInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLogsInput& obj) { 
      DARABONBA_PTR_TO_JSON(backwardLine, backwardLine_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(forwardLine, forwardLine_);
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
    friend void from_json(const Darabonba::Json& j, GetInstanceLogsInput& obj) { 
      DARABONBA_PTR_FROM_JSON(backwardLine, backwardLine_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(forwardLine, forwardLine_);
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
    GetInstanceLogsInput() = default ;
    GetInstanceLogsInput(const GetInstanceLogsInput &) = default ;
    GetInstanceLogsInput(GetInstanceLogsInput &&) = default ;
    GetInstanceLogsInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLogsInput() = default ;
    GetInstanceLogsInput& operator=(const GetInstanceLogsInput &) = default ;
    GetInstanceLogsInput& operator=(GetInstanceLogsInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backwardLine_ != nullptr
        && this->endTime_ != nullptr && this->forwardLine_ != nullptr && this->isTail_ != nullptr && this->match_ != nullptr && this->message_ != nullptr
        && this->offset_ != nullptr && this->packID_ != nullptr && this->packMeta_ != nullptr && this->startTime_ != nullptr && this->timestamp_ != nullptr
        && this->versionID_ != nullptr; };
    // backwardLine Field Functions 
    bool hasBackwardLine() const { return this->backwardLine_ != nullptr;};
    void deleteBackwardLine() { this->backwardLine_ = nullptr;};
    inline int64_t backwardLine() const { DARABONBA_PTR_GET_DEFAULT(backwardLine_, 0L) };
    inline GetInstanceLogsInput& setBackwardLine(int64_t backwardLine) { DARABONBA_PTR_SET_VALUE(backwardLine_, backwardLine) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetInstanceLogsInput& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // forwardLine Field Functions 
    bool hasForwardLine() const { return this->forwardLine_ != nullptr;};
    void deleteForwardLine() { this->forwardLine_ = nullptr;};
    inline int64_t forwardLine() const { DARABONBA_PTR_GET_DEFAULT(forwardLine_, 0L) };
    inline GetInstanceLogsInput& setForwardLine(int64_t forwardLine) { DARABONBA_PTR_SET_VALUE(forwardLine_, forwardLine) };


    // isTail Field Functions 
    bool hasIsTail() const { return this->isTail_ != nullptr;};
    void deleteIsTail() { this->isTail_ = nullptr;};
    inline bool isTail() const { DARABONBA_PTR_GET_DEFAULT(isTail_, false) };
    inline GetInstanceLogsInput& setIsTail(bool isTail) { DARABONBA_PTR_SET_VALUE(isTail_, isTail) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline string match() const { DARABONBA_PTR_GET_DEFAULT(match_, "") };
    inline GetInstanceLogsInput& setMatch(string match) { DARABONBA_PTR_SET_VALUE(match_, match) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceLogsInput& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline GetInstanceLogsInput& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // packID Field Functions 
    bool hasPackID() const { return this->packID_ != nullptr;};
    void deletePackID() { this->packID_ = nullptr;};
    inline string packID() const { DARABONBA_PTR_GET_DEFAULT(packID_, "") };
    inline GetInstanceLogsInput& setPackID(string packID) { DARABONBA_PTR_SET_VALUE(packID_, packID) };


    // packMeta Field Functions 
    bool hasPackMeta() const { return this->packMeta_ != nullptr;};
    void deletePackMeta() { this->packMeta_ = nullptr;};
    inline string packMeta() const { DARABONBA_PTR_GET_DEFAULT(packMeta_, "") };
    inline GetInstanceLogsInput& setPackMeta(string packMeta) { DARABONBA_PTR_SET_VALUE(packMeta_, packMeta) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetInstanceLogsInput& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetInstanceLogsInput& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // versionID Field Functions 
    bool hasVersionID() const { return this->versionID_ != nullptr;};
    void deleteVersionID() { this->versionID_ = nullptr;};
    inline string versionID() const { DARABONBA_PTR_GET_DEFAULT(versionID_, "") };
    inline GetInstanceLogsInput& setVersionID(string versionID) { DARABONBA_PTR_SET_VALUE(versionID_, versionID) };


  protected:
    std::shared_ptr<int64_t> backwardLine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> forwardLine_ = nullptr;
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
