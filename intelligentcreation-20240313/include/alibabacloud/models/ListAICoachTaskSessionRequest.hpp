// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHTASKSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHTASKSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachTaskSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachTaskSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachTaskSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ListAICoachTaskSessionRequest() = default ;
    ListAICoachTaskSessionRequest(const ListAICoachTaskSessionRequest &) = default ;
    ListAICoachTaskSessionRequest(ListAICoachTaskSessionRequest &&) = default ;
    ListAICoachTaskSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachTaskSessionRequest() = default ;
    ListAICoachTaskSessionRequest& operator=(const ListAICoachTaskSessionRequest &) = default ;
    ListAICoachTaskSessionRequest& operator=(ListAICoachTaskSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAICoachTaskSessionRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAICoachTaskSessionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListAICoachTaskSessionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAICoachTaskSessionRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
