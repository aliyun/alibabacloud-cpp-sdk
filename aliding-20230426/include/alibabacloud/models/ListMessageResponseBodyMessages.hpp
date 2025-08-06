// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentDesc, contentDesc_);
      DARABONBA_PTR_TO_JSON(createAt, createAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentDesc, contentDesc_);
      DARABONBA_PTR_FROM_JSON(createAt, createAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
    };
    ListMessageResponseBodyMessages() = default ;
    ListMessageResponseBodyMessages(const ListMessageResponseBodyMessages &) = default ;
    ListMessageResponseBodyMessages(ListMessageResponseBodyMessages &&) = default ;
    ListMessageResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyMessages() = default ;
    ListMessageResponseBodyMessages& operator=(const ListMessageResponseBodyMessages &) = default ;
    ListMessageResponseBodyMessages& operator=(ListMessageResponseBodyMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentDesc_ != nullptr && this->createAt_ != nullptr && this->id_ != nullptr && this->role_ != nullptr && this->runId_ != nullptr
        && this->threadId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::ListMessageResponseBodyMessagesContent) };
    inline Models::ListMessageResponseBodyMessagesContent content() { DARABONBA_PTR_GET(content_, Models::ListMessageResponseBodyMessagesContent) };
    inline ListMessageResponseBodyMessages& setContent(const Models::ListMessageResponseBodyMessagesContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListMessageResponseBodyMessages& setContent(Models::ListMessageResponseBodyMessagesContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // contentDesc Field Functions 
    bool hasContentDesc() const { return this->contentDesc_ != nullptr;};
    void deleteContentDesc() { this->contentDesc_ = nullptr;};
    inline string contentDesc() const { DARABONBA_PTR_GET_DEFAULT(contentDesc_, "") };
    inline ListMessageResponseBodyMessages& setContentDesc(string contentDesc) { DARABONBA_PTR_SET_VALUE(contentDesc_, contentDesc) };


    // createAt Field Functions 
    bool hasCreateAt() const { return this->createAt_ != nullptr;};
    void deleteCreateAt() { this->createAt_ = nullptr;};
    inline int64_t createAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
    inline ListMessageResponseBodyMessages& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListMessageResponseBodyMessages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ListMessageResponseBodyMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string runId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline ListMessageResponseBodyMessages& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline ListMessageResponseBodyMessages& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContent> content_ = nullptr;
    std::shared_ptr<string> contentDesc_ = nullptr;
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
