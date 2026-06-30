// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawAgentFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawAgentFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawAgentFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
    };
    DescribePolarClawAgentFileResponseBody() = default ;
    DescribePolarClawAgentFileResponseBody(const DescribePolarClawAgentFileResponseBody &) = default ;
    DescribePolarClawAgentFileResponseBody(DescribePolarClawAgentFileResponseBody &&) = default ;
    DescribePolarClawAgentFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawAgentFileResponseBody() = default ;
    DescribePolarClawAgentFileResponseBody& operator=(const DescribePolarClawAgentFileResponseBody &) = default ;
    DescribePolarClawAgentFileResponseBody& operator=(DescribePolarClawAgentFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class File : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const File& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Missing, missing_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(UpdatedAtMs, updatedAtMs_);
      };
      friend void from_json(const Darabonba::Json& j, File& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Missing, missing_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(UpdatedAtMs, updatedAtMs_);
      };
      File() = default ;
      File(const File &) = default ;
      File(File &&) = default ;
      File(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~File() = default ;
      File& operator=(const File &) = default ;
      File& operator=(File &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->missing_ == nullptr && this->name_ == nullptr && this->path_ == nullptr && this->size_ == nullptr && this->updatedAtMs_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline File& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // missing Field Functions 
      bool hasMissing() const { return this->missing_ != nullptr;};
      void deleteMissing() { this->missing_ = nullptr;};
      inline bool getMissing() const { DARABONBA_PTR_GET_DEFAULT(missing_, false) };
      inline File& setMissing(bool missing) { DARABONBA_PTR_SET_VALUE(missing_, missing) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline File& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline File& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline File& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // updatedAtMs Field Functions 
      bool hasUpdatedAtMs() const { return this->updatedAtMs_ != nullptr;};
      void deleteUpdatedAtMs() { this->updatedAtMs_ = nullptr;};
      inline int64_t getUpdatedAtMs() const { DARABONBA_PTR_GET_DEFAULT(updatedAtMs_, 0L) };
      inline File& setUpdatedAtMs(int64_t updatedAtMs) { DARABONBA_PTR_SET_VALUE(updatedAtMs_, updatedAtMs) };


    protected:
      // The file content.
      shared_ptr<string> content_ {};
      // Indicates whether the file is missing.
      shared_ptr<bool> missing_ {};
      // The file name.
      shared_ptr<string> name_ {};
      // The file path.
      shared_ptr<string> path_ {};
      // The file size, in bytes.
      shared_ptr<int64_t> size_ {};
      // The last updated UNIX timestamp, in milliseconds.
      shared_ptr<int64_t> updatedAtMs_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->code_ == nullptr && this->file_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->workspace_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DescribePolarClawAgentFileResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawAgentFileResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribePolarClawAgentFileResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const DescribePolarClawAgentFileResponseBody::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, DescribePolarClawAgentFileResponseBody::File) };
    inline DescribePolarClawAgentFileResponseBody::File getFile() { DARABONBA_PTR_GET(file_, DescribePolarClawAgentFileResponseBody::File) };
    inline DescribePolarClawAgentFileResponseBody& setFile(const DescribePolarClawAgentFileResponseBody::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline DescribePolarClawAgentFileResponseBody& setFile(DescribePolarClawAgentFileResponseBody::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolarClawAgentFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawAgentFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline DescribePolarClawAgentFileResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Agent ID
    shared_ptr<string> agentId_ {};
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The file details.
    shared_ptr<DescribePolarClawAgentFileResponseBody::File> file_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The working directory path.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
