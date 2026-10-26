// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADAGENTCONVERSATIONLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADAGENTCONVERSATIONLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UploadAgentConversationLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadAgentConversationLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(sandboxPath, sandboxPath_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, UploadAgentConversationLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(sandboxPath, sandboxPath_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    UploadAgentConversationLogResponseBody() = default ;
    UploadAgentConversationLogResponseBody(const UploadAgentConversationLogResponseBody &) = default ;
    UploadAgentConversationLogResponseBody(UploadAgentConversationLogResponseBody &&) = default ;
    UploadAgentConversationLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadAgentConversationLogResponseBody() = default ;
    UploadAgentConversationLogResponseBody& operator=(const UploadAgentConversationLogResponseBody &) = default ;
    UploadAgentConversationLogResponseBody& operator=(UploadAgentConversationLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->id_ == nullptr && this->sandboxPath_ == nullptr && this->size_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadAgentConversationLogResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UploadAgentConversationLogResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sandboxPath Field Functions 
    bool hasSandboxPath() const { return this->sandboxPath_ != nullptr;};
    void deleteSandboxPath() { this->sandboxPath_ = nullptr;};
    inline string getSandboxPath() const { DARABONBA_PTR_GET_DEFAULT(sandboxPath_, "") };
    inline UploadAgentConversationLogResponseBody& setSandboxPath(string sandboxPath) { DARABONBA_PTR_SET_VALUE(sandboxPath_, sandboxPath) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline UploadAgentConversationLogResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    shared_ptr<string> fileName_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> sandboxPath_ {};
    shared_ptr<int64_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
