// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(extLoginUser, extLoginUser_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(originalAssistantId, originalAssistantId_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(sourceIdOfOriginalAssistantId, sourceIdOfOriginalAssistantId_);
      DARABONBA_PTR_TO_JSON(sourceTypeOfOriginalAssistantId, sourceTypeOfOriginalAssistantId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(extLoginUser, extLoginUser_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(originalAssistantId, originalAssistantId_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(sourceIdOfOriginalAssistantId, sourceIdOfOriginalAssistantId_);
      DARABONBA_PTR_FROM_JSON(sourceTypeOfOriginalAssistantId, sourceTypeOfOriginalAssistantId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
    };
    ListMessageRequest() = default ;
    ListMessageRequest(const ListMessageRequest &) = default ;
    ListMessageRequest(ListMessageRequest &&) = default ;
    ListMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageRequest() = default ;
    ListMessageRequest& operator=(const ListMessageRequest &) = default ;
    ListMessageRequest& operator=(ListMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExtLoginUser : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtLoginUser& obj) { 
        DARABONBA_PTR_TO_JSON(extLoginUserDomain, extLoginUserDomain_);
        DARABONBA_PTR_TO_JSON(extLoginUserId, extLoginUserId_);
        DARABONBA_PTR_TO_JSON(extLoginUserName, extLoginUserName_);
      };
      friend void from_json(const Darabonba::Json& j, ExtLoginUser& obj) { 
        DARABONBA_PTR_FROM_JSON(extLoginUserDomain, extLoginUserDomain_);
        DARABONBA_PTR_FROM_JSON(extLoginUserId, extLoginUserId_);
        DARABONBA_PTR_FROM_JSON(extLoginUserName, extLoginUserName_);
      };
      ExtLoginUser() = default ;
      ExtLoginUser(const ExtLoginUser &) = default ;
      ExtLoginUser(ExtLoginUser &&) = default ;
      ExtLoginUser(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtLoginUser() = default ;
      ExtLoginUser& operator=(const ExtLoginUser &) = default ;
      ExtLoginUser& operator=(ExtLoginUser &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extLoginUserDomain_ == nullptr
        && this->extLoginUserId_ == nullptr && this->extLoginUserName_ == nullptr; };
      // extLoginUserDomain Field Functions 
      bool hasExtLoginUserDomain() const { return this->extLoginUserDomain_ != nullptr;};
      void deleteExtLoginUserDomain() { this->extLoginUserDomain_ = nullptr;};
      inline string getExtLoginUserDomain() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserDomain_, "") };
      inline ExtLoginUser& setExtLoginUserDomain(string extLoginUserDomain) { DARABONBA_PTR_SET_VALUE(extLoginUserDomain_, extLoginUserDomain) };


      // extLoginUserId Field Functions 
      bool hasExtLoginUserId() const { return this->extLoginUserId_ != nullptr;};
      void deleteExtLoginUserId() { this->extLoginUserId_ = nullptr;};
      inline string getExtLoginUserId() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserId_, "") };
      inline ExtLoginUser& setExtLoginUserId(string extLoginUserId) { DARABONBA_PTR_SET_VALUE(extLoginUserId_, extLoginUserId) };


      // extLoginUserName Field Functions 
      bool hasExtLoginUserName() const { return this->extLoginUserName_ != nullptr;};
      void deleteExtLoginUserName() { this->extLoginUserName_ = nullptr;};
      inline string getExtLoginUserName() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserName_, "") };
      inline ExtLoginUser& setExtLoginUserName(string extLoginUserName) { DARABONBA_PTR_SET_VALUE(extLoginUserName_, extLoginUserName) };


    protected:
      shared_ptr<string> extLoginUserDomain_ {};
      shared_ptr<string> extLoginUserId_ {};
      shared_ptr<string> extLoginUserName_ {};
    };

    virtual bool empty() const override { return this->assistantId_ == nullptr
        && this->extLoginUser_ == nullptr && this->limit_ == nullptr && this->order_ == nullptr && this->originalAssistantId_ == nullptr && this->runId_ == nullptr
        && this->sourceIdOfOriginalAssistantId_ == nullptr && this->sourceTypeOfOriginalAssistantId_ == nullptr && this->threadId_ == nullptr; };
    // assistantId Field Functions 
    bool hasAssistantId() const { return this->assistantId_ != nullptr;};
    void deleteAssistantId() { this->assistantId_ = nullptr;};
    inline string getAssistantId() const { DARABONBA_PTR_GET_DEFAULT(assistantId_, "") };
    inline ListMessageRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // extLoginUser Field Functions 
    bool hasExtLoginUser() const { return this->extLoginUser_ != nullptr;};
    void deleteExtLoginUser() { this->extLoginUser_ = nullptr;};
    inline const ListMessageRequest::ExtLoginUser & getExtLoginUser() const { DARABONBA_PTR_GET_CONST(extLoginUser_, ListMessageRequest::ExtLoginUser) };
    inline ListMessageRequest::ExtLoginUser getExtLoginUser() { DARABONBA_PTR_GET(extLoginUser_, ListMessageRequest::ExtLoginUser) };
    inline ListMessageRequest& setExtLoginUser(const ListMessageRequest::ExtLoginUser & extLoginUser) { DARABONBA_PTR_SET_VALUE(extLoginUser_, extLoginUser) };
    inline ListMessageRequest& setExtLoginUser(ListMessageRequest::ExtLoginUser && extLoginUser) { DARABONBA_PTR_SET_RVALUE(extLoginUser_, extLoginUser) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListMessageRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListMessageRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // originalAssistantId Field Functions 
    bool hasOriginalAssistantId() const { return this->originalAssistantId_ != nullptr;};
    void deleteOriginalAssistantId() { this->originalAssistantId_ = nullptr;};
    inline string getOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(originalAssistantId_, "") };
    inline ListMessageRequest& setOriginalAssistantId(string originalAssistantId) { DARABONBA_PTR_SET_VALUE(originalAssistantId_, originalAssistantId) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline ListMessageRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // sourceIdOfOriginalAssistantId Field Functions 
    bool hasSourceIdOfOriginalAssistantId() const { return this->sourceIdOfOriginalAssistantId_ != nullptr;};
    void deleteSourceIdOfOriginalAssistantId() { this->sourceIdOfOriginalAssistantId_ = nullptr;};
    inline string getSourceIdOfOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfOriginalAssistantId_, "") };
    inline ListMessageRequest& setSourceIdOfOriginalAssistantId(string sourceIdOfOriginalAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfOriginalAssistantId_, sourceIdOfOriginalAssistantId) };


    // sourceTypeOfOriginalAssistantId Field Functions 
    bool hasSourceTypeOfOriginalAssistantId() const { return this->sourceTypeOfOriginalAssistantId_ != nullptr;};
    void deleteSourceTypeOfOriginalAssistantId() { this->sourceTypeOfOriginalAssistantId_ = nullptr;};
    inline string getSourceTypeOfOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceTypeOfOriginalAssistantId_, "") };
    inline ListMessageRequest& setSourceTypeOfOriginalAssistantId(string sourceTypeOfOriginalAssistantId) { DARABONBA_PTR_SET_VALUE(sourceTypeOfOriginalAssistantId_, sourceTypeOfOriginalAssistantId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline ListMessageRequest& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    // This parameter is required.
    shared_ptr<string> assistantId_ {};
    shared_ptr<ListMessageRequest::ExtLoginUser> extLoginUser_ {};
    shared_ptr<int32_t> limit_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> originalAssistantId_ {};
    shared_ptr<string> runId_ {};
    shared_ptr<string> sourceIdOfOriginalAssistantId_ {};
    shared_ptr<string> sourceTypeOfOriginalAssistantId_ {};
    // This parameter is required.
    shared_ptr<string> threadId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
