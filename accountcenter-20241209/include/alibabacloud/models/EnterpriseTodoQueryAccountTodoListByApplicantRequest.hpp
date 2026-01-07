// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISETODOQUERYACCOUNTTODOLISTBYAPPLICANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISETODOQUERYACCOUNTTODOLISTBYAPPLICANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseTodoQueryAccountTodoListByApplicantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseTodoQueryAccountTodoListByApplicantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OperatePk, operatePk_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ShowCompleteInfo, showCompleteInfo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TodoType, todoType_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseTodoQueryAccountTodoListByApplicantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OperatePk, operatePk_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ShowCompleteInfo, showCompleteInfo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TodoType, todoType_);
    };
    EnterpriseTodoQueryAccountTodoListByApplicantRequest() = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantRequest(const EnterpriseTodoQueryAccountTodoListByApplicantRequest &) = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantRequest(EnterpriseTodoQueryAccountTodoListByApplicantRequest &&) = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseTodoQueryAccountTodoListByApplicantRequest() = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantRequest& operator=(const EnterpriseTodoQueryAccountTodoListByApplicantRequest &) = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantRequest& operator=(EnterpriseTodoQueryAccountTodoListByApplicantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->operatePk_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr
        && this->orientedNbId_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->showCompleteInfo_ == nullptr && this->status_ == nullptr
        && this->todoType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // operatePk Field Functions 
    bool hasOperatePk() const { return this->operatePk_ != nullptr;};
    void deleteOperatePk() { this->operatePk_ = nullptr;};
    inline string getOperatePk() const { DARABONBA_PTR_GET_DEFAULT(operatePk_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setOperatePk(string operatePk) { DARABONBA_PTR_SET_VALUE(operatePk_, operatePk) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // showCompleteInfo Field Functions 
    bool hasShowCompleteInfo() const { return this->showCompleteInfo_ != nullptr;};
    void deleteShowCompleteInfo() { this->showCompleteInfo_ = nullptr;};
    inline bool getShowCompleteInfo() const { DARABONBA_PTR_GET_DEFAULT(showCompleteInfo_, false) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setShowCompleteInfo(bool showCompleteInfo) { DARABONBA_PTR_SET_VALUE(showCompleteInfo_, showCompleteInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // todoType Field Functions 
    bool hasTodoType() const { return this->todoType_ != nullptr;};
    void deleteTodoType() { this->todoType_ = nullptr;};
    inline string getTodoType() const { DARABONBA_PTR_GET_DEFAULT(todoType_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantRequest& setTodoType(string todoType) { DARABONBA_PTR_SET_VALUE(todoType_, todoType) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> operatePk_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> showCompleteInfo_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> todoType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
