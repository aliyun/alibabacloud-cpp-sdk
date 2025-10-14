// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowStructViewContent, allowStructViewContent_);
      DARABONBA_PTR_TO_JSON(assistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(originalAssistantId, originalAssistantId_);
      DARABONBA_PTR_TO_JSON(sourceIdOfOriginalAssistantId, sourceIdOfOriginalAssistantId_);
      DARABONBA_PTR_TO_JSON(sourceTypeOfOriginalAssistantId, sourceTypeOfOriginalAssistantId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowStructViewContent, allowStructViewContent_);
      DARABONBA_PTR_FROM_JSON(assistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(originalAssistantId, originalAssistantId_);
      DARABONBA_PTR_FROM_JSON(sourceIdOfOriginalAssistantId, sourceIdOfOriginalAssistantId_);
      DARABONBA_PTR_FROM_JSON(sourceTypeOfOriginalAssistantId, sourceTypeOfOriginalAssistantId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
    };
    CreateRunRequest() = default ;
    CreateRunRequest(const CreateRunRequest &) = default ;
    CreateRunRequest(CreateRunRequest &&) = default ;
    CreateRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunRequest() = default ;
    CreateRunRequest& operator=(const CreateRunRequest &) = default ;
    CreateRunRequest& operator=(CreateRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowStructViewContent_ == nullptr
        && return this->assistantId_ == nullptr && return this->originalAssistantId_ == nullptr && return this->sourceIdOfOriginalAssistantId_ == nullptr && return this->sourceTypeOfOriginalAssistantId_ == nullptr && return this->stream_ == nullptr
        && return this->threadId_ == nullptr; };
    // allowStructViewContent Field Functions 
    bool hasAllowStructViewContent() const { return this->allowStructViewContent_ != nullptr;};
    void deleteAllowStructViewContent() { this->allowStructViewContent_ = nullptr;};
    inline bool allowStructViewContent() const { DARABONBA_PTR_GET_DEFAULT(allowStructViewContent_, false) };
    inline CreateRunRequest& setAllowStructViewContent(bool allowStructViewContent) { DARABONBA_PTR_SET_VALUE(allowStructViewContent_, allowStructViewContent) };


    // assistantId Field Functions 
    bool hasAssistantId() const { return this->assistantId_ != nullptr;};
    void deleteAssistantId() { this->assistantId_ = nullptr;};
    inline string assistantId() const { DARABONBA_PTR_GET_DEFAULT(assistantId_, "") };
    inline CreateRunRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // originalAssistantId Field Functions 
    bool hasOriginalAssistantId() const { return this->originalAssistantId_ != nullptr;};
    void deleteOriginalAssistantId() { this->originalAssistantId_ = nullptr;};
    inline string originalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(originalAssistantId_, "") };
    inline CreateRunRequest& setOriginalAssistantId(string originalAssistantId) { DARABONBA_PTR_SET_VALUE(originalAssistantId_, originalAssistantId) };


    // sourceIdOfOriginalAssistantId Field Functions 
    bool hasSourceIdOfOriginalAssistantId() const { return this->sourceIdOfOriginalAssistantId_ != nullptr;};
    void deleteSourceIdOfOriginalAssistantId() { this->sourceIdOfOriginalAssistantId_ = nullptr;};
    inline string sourceIdOfOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfOriginalAssistantId_, "") };
    inline CreateRunRequest& setSourceIdOfOriginalAssistantId(string sourceIdOfOriginalAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfOriginalAssistantId_, sourceIdOfOriginalAssistantId) };


    // sourceTypeOfOriginalAssistantId Field Functions 
    bool hasSourceTypeOfOriginalAssistantId() const { return this->sourceTypeOfOriginalAssistantId_ != nullptr;};
    void deleteSourceTypeOfOriginalAssistantId() { this->sourceTypeOfOriginalAssistantId_ = nullptr;};
    inline string sourceTypeOfOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceTypeOfOriginalAssistantId_, "") };
    inline CreateRunRequest& setSourceTypeOfOriginalAssistantId(string sourceTypeOfOriginalAssistantId) { DARABONBA_PTR_SET_VALUE(sourceTypeOfOriginalAssistantId_, sourceTypeOfOriginalAssistantId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline CreateRunRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline CreateRunRequest& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    std::shared_ptr<bool> allowStructViewContent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> assistantId_ = nullptr;
    std::shared_ptr<string> originalAssistantId_ = nullptr;
    std::shared_ptr<string> sourceIdOfOriginalAssistantId_ = nullptr;
    std::shared_ptr<string> sourceTypeOfOriginalAssistantId_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> threadId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
