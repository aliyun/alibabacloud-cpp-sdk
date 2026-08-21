// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGKNOWLEDGEBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGKNOWLEDGEBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreatePersonalAlidingKnowledgeBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalAlidingKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(kbUrl, kbUrl_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalAlidingKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(kbUrl, kbUrl_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    CreatePersonalAlidingKnowledgeBaseResponseBody() = default ;
    CreatePersonalAlidingKnowledgeBaseResponseBody(const CreatePersonalAlidingKnowledgeBaseResponseBody &) = default ;
    CreatePersonalAlidingKnowledgeBaseResponseBody(CreatePersonalAlidingKnowledgeBaseResponseBody &&) = default ;
    CreatePersonalAlidingKnowledgeBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalAlidingKnowledgeBaseResponseBody() = default ;
    CreatePersonalAlidingKnowledgeBaseResponseBody& operator=(const CreatePersonalAlidingKnowledgeBaseResponseBody &) = default ;
    CreatePersonalAlidingKnowledgeBaseResponseBody& operator=(CreatePersonalAlidingKnowledgeBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->directoryId_ == nullptr && this->gmtCreate_ == nullptr && this->kbUrl_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->operatingObjectName_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // kbUrl Field Functions 
    bool hasKbUrl() const { return this->kbUrl_ != nullptr;};
    void deleteKbUrl() { this->kbUrl_ = nullptr;};
    inline string getKbUrl() const { DARABONBA_PTR_GET_DEFAULT(kbUrl_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setKbUrl(string kbUrl) { DARABONBA_PTR_SET_VALUE(kbUrl_, kbUrl) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreatePersonalAlidingKnowledgeBaseResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The creation time in ISO 8601 format.
    shared_ptr<string> gmtCreate_ {};
    // The knowledge base URL (echoed from the request parameter for caller alignment).
    shared_ptr<string> kbUrl_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The name of the AI assistant.
    shared_ptr<string> name_ {};
    // The name of the digital employee (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status. Valid values:
    // 
    // - 200: Success.
    // - 500: Failure.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
