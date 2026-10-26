// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADAGENTCONVERSATIONLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADAGENTCONVERSATIONLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UploadAgentConversationLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadAgentConversationLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contentGzipB64, contentGzipB64_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(timeRangeEnd, timeRangeEnd_);
      DARABONBA_PTR_TO_JSON(timeRangeStart, timeRangeStart_);
    };
    friend void from_json(const Darabonba::Json& j, UploadAgentConversationLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contentGzipB64, contentGzipB64_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(timeRangeEnd, timeRangeEnd_);
      DARABONBA_PTR_FROM_JSON(timeRangeStart, timeRangeStart_);
    };
    UploadAgentConversationLogRequest() = default ;
    UploadAgentConversationLogRequest(const UploadAgentConversationLogRequest &) = default ;
    UploadAgentConversationLogRequest(UploadAgentConversationLogRequest &&) = default ;
    UploadAgentConversationLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadAgentConversationLogRequest() = default ;
    UploadAgentConversationLogRequest& operator=(const UploadAgentConversationLogRequest &) = default ;
    UploadAgentConversationLogRequest& operator=(UploadAgentConversationLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentGzipB64_ == nullptr
        && this->fileName_ == nullptr && this->timeRangeEnd_ == nullptr && this->timeRangeStart_ == nullptr; };
    // contentGzipB64 Field Functions 
    bool hasContentGzipB64() const { return this->contentGzipB64_ != nullptr;};
    void deleteContentGzipB64() { this->contentGzipB64_ = nullptr;};
    inline string getContentGzipB64() const { DARABONBA_PTR_GET_DEFAULT(contentGzipB64_, "") };
    inline UploadAgentConversationLogRequest& setContentGzipB64(string contentGzipB64) { DARABONBA_PTR_SET_VALUE(contentGzipB64_, contentGzipB64) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadAgentConversationLogRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // timeRangeEnd Field Functions 
    bool hasTimeRangeEnd() const { return this->timeRangeEnd_ != nullptr;};
    void deleteTimeRangeEnd() { this->timeRangeEnd_ = nullptr;};
    inline string getTimeRangeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeRangeEnd_, "") };
    inline UploadAgentConversationLogRequest& setTimeRangeEnd(string timeRangeEnd) { DARABONBA_PTR_SET_VALUE(timeRangeEnd_, timeRangeEnd) };


    // timeRangeStart Field Functions 
    bool hasTimeRangeStart() const { return this->timeRangeStart_ != nullptr;};
    void deleteTimeRangeStart() { this->timeRangeStart_ = nullptr;};
    inline string getTimeRangeStart() const { DARABONBA_PTR_GET_DEFAULT(timeRangeStart_, "") };
    inline UploadAgentConversationLogRequest& setTimeRangeStart(string timeRangeStart) { DARABONBA_PTR_SET_VALUE(timeRangeStart_, timeRangeStart) };


  protected:
    // This parameter is required.
    shared_ptr<string> contentGzipB64_ {};
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    shared_ptr<string> timeRangeEnd_ {};
    shared_ptr<string> timeRangeStart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
