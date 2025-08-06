// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContent.hpp>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStruct.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentDesc, contentDesc_);
      DARABONBA_PTR_TO_JSON(contentStruct, contentStruct_);
      DARABONBA_PTR_TO_JSON(createAt, createAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentDesc, contentDesc_);
      DARABONBA_PTR_FROM_JSON(contentStruct, contentStruct_);
      DARABONBA_PTR_FROM_JSON(createAt, createAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
    };
    CreateRunResponseBodyMessages() = default ;
    CreateRunResponseBodyMessages(const CreateRunResponseBodyMessages &) = default ;
    CreateRunResponseBodyMessages(CreateRunResponseBodyMessages &&) = default ;
    CreateRunResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessages() = default ;
    CreateRunResponseBodyMessages& operator=(const CreateRunResponseBodyMessages &) = default ;
    CreateRunResponseBodyMessages& operator=(CreateRunResponseBodyMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentDesc_ != nullptr && this->contentStruct_ != nullptr && this->createAt_ != nullptr && this->id_ != nullptr && this->role_ != nullptr
        && this->runId_ != nullptr && this->threadId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::CreateRunResponseBodyMessagesContent) };
    inline Models::CreateRunResponseBodyMessagesContent content() { DARABONBA_PTR_GET(content_, Models::CreateRunResponseBodyMessagesContent) };
    inline CreateRunResponseBodyMessages& setContent(const Models::CreateRunResponseBodyMessagesContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline CreateRunResponseBodyMessages& setContent(Models::CreateRunResponseBodyMessagesContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // contentDesc Field Functions 
    bool hasContentDesc() const { return this->contentDesc_ != nullptr;};
    void deleteContentDesc() { this->contentDesc_ = nullptr;};
    inline string contentDesc() const { DARABONBA_PTR_GET_DEFAULT(contentDesc_, "") };
    inline CreateRunResponseBodyMessages& setContentDesc(string contentDesc) { DARABONBA_PTR_SET_VALUE(contentDesc_, contentDesc) };


    // contentStruct Field Functions 
    bool hasContentStruct() const { return this->contentStruct_ != nullptr;};
    void deleteContentStruct() { this->contentStruct_ = nullptr;};
    inline const Models::CreateRunResponseBodyMessagesContentStruct & contentStruct() const { DARABONBA_PTR_GET_CONST(contentStruct_, Models::CreateRunResponseBodyMessagesContentStruct) };
    inline Models::CreateRunResponseBodyMessagesContentStruct contentStruct() { DARABONBA_PTR_GET(contentStruct_, Models::CreateRunResponseBodyMessagesContentStruct) };
    inline CreateRunResponseBodyMessages& setContentStruct(const Models::CreateRunResponseBodyMessagesContentStruct & contentStruct) { DARABONBA_PTR_SET_VALUE(contentStruct_, contentStruct) };
    inline CreateRunResponseBodyMessages& setContentStruct(Models::CreateRunResponseBodyMessagesContentStruct && contentStruct) { DARABONBA_PTR_SET_RVALUE(contentStruct_, contentStruct) };


    // createAt Field Functions 
    bool hasCreateAt() const { return this->createAt_ != nullptr;};
    void deleteCreateAt() { this->createAt_ = nullptr;};
    inline int64_t createAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
    inline CreateRunResponseBodyMessages& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateRunResponseBodyMessages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateRunResponseBodyMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string runId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline CreateRunResponseBodyMessages& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline CreateRunResponseBodyMessages& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContent> content_ = nullptr;
    std::shared_ptr<string> contentDesc_ = nullptr;
    std::shared_ptr<Models::CreateRunResponseBodyMessagesContentStruct> contentStruct_ = nullptr;
    std::shared_ptr<int64_t> createAt_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> runId_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
